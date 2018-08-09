
#pragma once
#include "program_options_default.hpp"
#include <string>

//Boost Libraries
#include "boost/program_options.hpp"

class Program_Options: public Program_Options_Default{

	public:

	//Constructor
	explicit Program_Options(int const& argc, char** const& argv);

	//These are functions for the client who uses the Program Options object.
	//They include all of the functions passed to the program_options_maker.
	//The options "help" and "version", do not need to be implemented by the user.
	//The "help" and "version" flags are always added automatically unless specified not to be.
	//+----------------------------------------------------------+
	//| USER FLAGS                                               |
	//+----------------------------------------------------------+
	/*  */ std::vector<std::string> Input_Files()const; //the name of the hcp file to compile;
        std::string Output_Directory() const;
	/* true */ bool Utility_Functions()const; //tells the hcp compiler not to add any supplementary functions to the generated class files;
bool No_Flags_Were_Passed() const;
	
	bool Print_Bazel_Deps() const;


	private:

	//functions used to parse, store, verify,  and immediately process SOME of the flags.
	//other verification of flag data is passed on as a responsibility of the Program_Options_Checker
	auto Get_Options_Description() -> boost::program_options::options_description;
	auto Build_Variable_Map(int const& argc, char** const& argv, boost::program_options::options_description const& desc, boost::program_options::positional_options_description const& pod) -> void;
	auto Process_Immediate_Options(boost::program_options::options_description const& desc) -> void;
	auto Check_For_Mandatory_Flags_Not_Passed() -> void;

	//Data Members
	//the variables map,  holds all of the flag data passed in through the constructor.
	boost::program_options::variables_map vm;
};

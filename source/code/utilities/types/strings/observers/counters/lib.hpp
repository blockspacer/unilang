#pragma once
#include <string>

unsigned int Starts_With_Char_How_Many_Times(std::string const& str, char c);
unsigned int Starts_With_How_Many_Spaces(std::string const& str);
unsigned int Count_Instances_Of_Character(std::string const& s, char const& c);
unsigned int Count_Instances_Of_Character(std::vector<std::string> const& vec, char const& c);


//specific
unsigned int Count_Instances_Of_Zeros(std::vector<std::string> const& vec);
unsigned int Count_Instances_Of_Ones(std::vector<std::string> const& vec);
unsigned int Count_Instances_Of_Twos(std::vector<std::string> const& vec);

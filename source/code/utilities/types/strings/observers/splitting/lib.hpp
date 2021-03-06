#pragma once
#include <string>
#include <vector>
#include <utility>

std::vector<std::vector<std::string>> Split_Into_Parts(std::string const& str, int part1, int part2);
std::vector<std::string> Split_Into_Parts_From_Delimiter(std::string const& str, char const& delimiter);
std::vector<std::string> Split_Into_Parts_From_Comma(std::string const& str);
std::vector<std::string> Split_Into_Parts_From_Dot(std::string const& str);
std::vector<std::string> Split_Into_Parts_From_Newline(std::string const& str);
std::vector<std::string> Split_Into_Parts_From_Dash(std::string const& str);
std::vector<std::string> Split_Into_Parts_From_Open_Paren(std::string const& str);
std::vector<std::string> Split_Into_Parts_From_Close_Paren(std::string const& str);
std::vector<std::string> Split_By_Spaces(std::string const& str);
std::vector<std::string> Get_Path_In_Parts(std::string const& str);
std::string Get_Path_Basename(std::string const& str);
std::string Get_Path_After_Desktop(std::string const& str);
std::pair<std::string,std::string> Split_On_First_Instance_Of_Char(std::string const& str, char const& c);
std::pair<std::string,std::string> Split_On_Second_Instance_Of_Char(std::string const& str, char const& c);
std::pair<std::string,std::string> Split_By_Char(std::string const& str, char const& c);
std::vector<std::string> Default_Boost_Tokenize(std::string const& str);
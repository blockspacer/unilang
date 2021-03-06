#include "code/utilities/filesystem/files/creating/lib.hpp"
#include "code/utilities/filesystem/paths/lib.hpp"
#include "code/utilities/types/strings/transformers/stripping/lib.hpp"
#include <fstream>

void Create_File_Even_If_The_Path_Doesnt_Exist(std::string const& path_to_file){
  auto path = Get_File_Path_Without_The_Filename(path_to_file);
  Create_Path_If_It_Doesnt_Already_Exist(path);
}
void Write_To_File(std::string path_to_file, std::string const& content)
{
	std::ofstream outfile(path_to_file);
	outfile << content;
    outfile.close();
}
void Write_To_File(std::string path_to_file, std::wstring const& content)
{
	std::wofstream outfile(path_to_file);
	outfile << content;
    outfile.close();
}
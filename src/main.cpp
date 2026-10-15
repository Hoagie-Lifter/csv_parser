#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::ifstream file{"bin/collection.csv"};
	
	if (!file)
	{
		std::cerr << "File could not be loaded.\n";
		return 1;
	}
	
	std::vector<std::string> fileLines;
	
	int line_count = 0;
	std::string line{};
	while (std::get(file, line))
	{
		fileLines.push_back(line);
	}
	
	std::cout << fileLines[0] << "\n";
	std::cout << fileLines[1] << "\n";
	std::cout << fileLines[2] << "\n";
	std::cout << fileLines[3] << "\n";
	std::cout << fileLines[4] << "\n";
	
	return 0;
}
#include <fstream>
#include <iostream>
#include <string>

int main()
{
	std::ifstream inputFile{"bin/collection.csv",};
	
	if (!inputFile)
	{
		std::cerr << "File could not be loaded.\n";
		return 1;
	}
	
	inputFile.seekg(0, std::ios::end);
	std::cout << inputFile.tellg() << "\n";
	
	std::string stringInput{};
	while (std::getline(inputFile, stringInput))
	
	return 0;
}
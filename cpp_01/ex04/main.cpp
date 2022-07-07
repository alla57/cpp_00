#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
	if (argc != 4)
		return (1);
	std::string inFileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string outFileName = std::string(argv[1]) + ".replace";

	std::ifstream inFile;
	std::ofstream outFile;

	inFile.open(inFileName.c_str());
	if (inFile.fail())
		return (1);
	outFile.open(outFileName.c_str());
	std::string line;
	int s1Pos = 0;
	int i = 0;
	while (!inFile.eof())
	{
		if (i != 0)
			outFile << std::endl;
		std::getline(inFile, line);
		s1Pos = 0;
		while ((s1Pos = line.find(s1, s1Pos)) != -1)
		{
			line.erase(s1Pos, s1.length());
			line.insert(s1Pos, s2);
			s1Pos += s2.length();
		}
		outFile << line;
		++i;
	}
	return (0);
}
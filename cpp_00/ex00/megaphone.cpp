#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(i = 1; i < argc; i++)
	{
		j = -1;
		while (argv[i][++j])
			argv[i][j] = toupper(argv[i][j]);
		std::cout << argv[i];
		if (i + 1 != argc)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
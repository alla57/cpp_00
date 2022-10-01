#include "Base.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <exception>
#include <cstdlib>

Base*	generate(void)
{
	std::srand(std::time(0));
	int r = rand() % 3;
	if (r == 0)
	{
		std::cout << "A object created !" << std::endl;
		return (new A);
	}
	else if (r == 1)
	{
		std::cout << "B object created !" << std::endl;
		return (new B);
	}
	std::cout << "C object created !" << std::endl;
	return (new C);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "i'm a A object pointer!" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "i'm a B object pointer!" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "i'm a C object pointer!" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A & a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "i'm a A object reference!" << std::endl;
	}
	catch (...)
	{
		try
		{
			B & b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "i'm a B object reference!" << std::endl;
		}
		catch (...)
		{
			try
			{
				C & c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "i'm a C object reference!" << std::endl;
			}
			catch (...)
			{
			}
		}
	}
	// if (dynamic_cast<A&>(p))
	// 	std::cout << "i'm a A object !" << std::endl;
	// else if (dynamic_cast<B&>(p))
	// 	std::cout << "i'm a A object !" << std::endl;
	// else if (dynamic_cast<C&>(p))
	// 	std::cout << "i'm a A object !" << std::endl;
}

int main()
{
	Base* bse = generate();
	identify(bse);
	identify(*bse);
	return (0);
}
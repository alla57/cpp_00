#include "Span.hpp"
#include <iostream>
#include <exception>
int main( void )
{
	{
		std::cout << "Test 1" << std::endl;
		Span a(10001);
		try{
			a.addNumber(1);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		try{
			std::cout << a.shortestSpan() << std::endl;
		}
		catch(std::exception & e){
			std::cout << e.what() << std::endl;
		}
		try{
			std::cout << a.longestSpan() << std::endl;
		}
		catch(std::exception & e){
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "Test 2" << std::endl;
		try{
			a.fillTheSpan(10000, 12);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		try{
			a.addNumber(24);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Test 3" << std::endl;
		Span *a = new Span(6);
		a->addNumber(0);
		a->addNumber(24);
		a->addNumber(1);
		a->addNumber(5);
		a->addNumber(2);
		a->addNumber(3);
		std::cout << a->shortestSpan() << std::endl;
		std::cout << a->longestSpan() << std::endl;
		std::cout << std::endl;

		std::cout << "Test 4" << std::endl;
		Span b(*a);
		delete a;
		std::cout << b.shortestSpan() << std::endl;
		std::cout << b.longestSpan() << std::endl;
	}
	return 0;
}
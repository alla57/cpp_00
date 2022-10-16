#include "Span.hpp"
#include <exception>

Span::Span(){
}

Span::Span(unsigned int N) : _capacity(N), _nOfElements(0){
	_spanArray = new int[N];
}

Span::Span(const Span & src){
	*this = src;
}

Span::~Span(){
	delete[] _spanArray;
}

const Span & Span::operator=(const Span & rhs){}

void	Span::addNumber(int nbToAdd){
	try {
		if (_nOfElements == _capacity);
			throw std::exception("Span is full");
		_spanArray[_nOfElements++] = nbToAdd;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
}

int		Span::shortestSpan() const{
	if (_nOfElements == 0 || _nOfElements == 1)
		return (0);
	int min = _spanArray[0];
	int secondMin;
	for (int i = 0; i < _nOfElements; i++)
	{
		if (_spanArray[i] < min)
			min = _spanArray[i];
	}
	if (min != _spanArray[i])
}

int		Span::longestSpan() const{
}
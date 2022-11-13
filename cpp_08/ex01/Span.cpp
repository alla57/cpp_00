#include "Span.hpp"
#include <exception>

Span::Span(){
}

Span::Span(unsigned int N) : _capacity(N), _nOfElements(0){
	_spanArray = new std::vector<int>(N);
}

Span::Span(const Span & src) : _spanArray(new std::vector<int>(src._capacity)){
	*this = src;
}

Span::~Span(){
	delete _spanArray;
}

const Span & Span::operator=(const Span & rhs){
	if (this == &rhs)
		return (*this);
	delete _spanArray;
	_capacity = rhs._capacity;
	_nOfElements = rhs._nOfElements;
	_spanArray = new std::vector<int>(_capacity);
	for (unsigned int i = 0; i < rhs._nOfElements; i++)
		_spanArray->at(i) = rhs._spanArray->at(i);
	_nOfElements = rhs._nOfElements;
	return (*this);
}

void	Span::addNumber(int nbToAdd){
	if (_nOfElements == _capacity)
		throw (std::runtime_error("Span is full"));
	_spanArray->at(_nOfElements++) = nbToAdd;
}

int		Span::shortestSpan() const{
	if (_nOfElements <= 1)
		throw (std::runtime_error("Span is empty or contain only one value"));
	std::sort(_spanArray->begin(), _spanArray->begin() + _nOfElements);
	int gap = (*_spanArray)[1] - (*_spanArray)[0];
	for (unsigned int i = 1; i < _nOfElements; i++)
		gap = abs(((*_spanArray)[i - 1] - (*_spanArray)[i])) < gap ? abs(((*_spanArray)[i - 1] - (*_spanArray)[i])) : gap;
	return (gap);
}

int		Span::longestSpan() const{
	if (_nOfElements <= 1)
		throw (std::runtime_error("Span is empty or contain only one value"));
	std::sort(_spanArray->begin(), _spanArray->begin() + _nOfElements);
	return ((*_spanArray)[_nOfElements - 1] - (*_spanArray)[0]);
}

void	Span::fillTheSpan(int nbOfElementsToSet, int nbToAdd){
	if (_nOfElements == _capacity)
		throw (std::runtime_error("Span is full"));
	if (_nOfElements + nbOfElementsToSet > _capacity)
		throw (std::runtime_error("Span is not wide enough"));
	std::fill(_spanArray->begin() + _nOfElements, _spanArray->begin() + _nOfElements + nbOfElementsToSet, nbToAdd);
	_nOfElements += nbOfElementsToSet;
}

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
public:
	Span(unsigned int N);
	Span(const Span & src);
	~Span();

	const Span & operator=(const Span & rhs);

	void	addNumber(int nbToAdd);
	int		shortestSpan() const;
	int		longestSpan() const;
	void	fillTheSpan(int nbOfElementsToSet, int nbToAdd);
private:
	Span();
	unsigned int		_capacity;
	unsigned int		_nOfElements;
	std::vector<int>	*_spanArray;
};

#endif
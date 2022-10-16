#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>

class Span
{
public:
	Span(unsigned int N);
	Span(const Span & src);
	~Span();

	const Span & operator=(const Span & rhs);

	void	addNumber();
	int		shortestSpan() const;
	int		longestSpan() const;
private:
	Span();
	unsigned int	_capacity;
	unsigned int	_nOfElements;
	int*			_spanArray;
}

#endif
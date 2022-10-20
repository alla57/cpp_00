#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template < class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack();
	MutantStack(const MutantStack & src);
	~MutantStack();

	const MutantStack & operator=(const MutantStack & rhs);

	iterator begin();
	iterator end();
private:
};

// 		CONSTRUCTORS AND DESTRUCTOR

template <class T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>(){
}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container> & src) : std::stack<T, Container>(src){
	*this = src;
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack(){
}

//		ASSIGNMENT OPERATOR OVERLOADING

template <class T, class Container>
const MutantStack<T, Container> &	MutantStack<T, Container>::operator=(const MutantStack<T, Container> & rhs){
	if (this == &rhs)
		return (*this);
}

//				METHODS

template <class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin(){
	return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end(){
	return (this->c.end());
}

#endif
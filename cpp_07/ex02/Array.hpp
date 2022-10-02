#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template<typename T>
class Array{
public:
	Array();
	Array(unsigned int n);
	Array(const Array & src);
	~Array();

	const Array<T> & operator=(const Array<T> & rhs);
	T & operator[](std::size_t idx) const;

	std::size_t size() const;
private:
	T*			_tab;
	std::size_t _tabSize;
};

template<typename T>
Array<T>::Array(){
	_tab = new T[0];
	_tabSize = 0;
}

template<typename T>
Array<T>::Array(unsigned int n){
	_tab = new T[n];
	_tabSize = n;
}

template<typename T>
Array<T>::Array(const Array & src){
	*this = src;
}

template<typename T>
Array<T>::~Array(){
	delete[] _tab;
}

template<typename T>
const Array<T> & Array<T>::operator=(const Array<T> & rhs){
	if (this == &rhs)
		return (*this);
	if (_tabSize > 0)
		delete[] _tab;
	_tab = new T[rhs.size()];
	for (size_t i = 0; i < rhs.size(); i++)
		_tab[i] = rhs._tab[i];
	_tabSize = rhs.size();
	return (*this);
}

template<typename T>
T &		Array<T>::operator[](std::size_t idx) const{
	if (idx > (_tabSize - 1))
		throw(std::exception());
	return (_tab[idx]);
}

template<typename T>
std::size_t		Array<T>::size() const{
	return (_tabSize);
}

#endif
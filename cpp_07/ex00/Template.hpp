#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template<typename T>
void	swap(T & x, T & y){
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T const & min(const T & x, const T & y){
	if (x < y)
		return (x);
	return (y);
}

template<typename T>
T const & max(const T & x, const T & y){
	if (x > y)
		return (x);
	return (y);
}

#endif
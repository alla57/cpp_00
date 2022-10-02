#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP
# include <cstring>

template<typename T, typename U, typename V>
void	iter(T* anAddress,const U & length, V (*func)(T)){
	if (!anAddress)
		return ;
	for (U i = 0; i < length; i++)
	{
		(*func)(*(anAddress + i));
	}
}

#endif
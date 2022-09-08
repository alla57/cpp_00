#ifndef LINKEDLIST_HPP
# define LINKEDLIST_HPP

# include "AMateria.hpp"

class Node
{
public :
	Node();
	Node(Node const & src);
	~Node();

	Node & operator=(Node & rhs);

	AMateria*	materia;
	Node*		next;
};

class LinkedList
{
public :
	LinkedList();
	LinkedList(LinkedList const & src);
	~LinkedList();

	const LinkedList & operator=(const LinkedList & rhs);

	void	addNode(AMateria * materia);

	Node*	head;
};

#endif
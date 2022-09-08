#ifndef NODE_HPP
# define NODE_HPP

# include "AMateria.hpp"

class Node
{
public :
	Node();
	Node(Node const & src);
	~Node();

	const Node & operator=(const Node & rhs);

	Node *	addNode(AMateria * materia);

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

	Node *	addNode(AMateria * materia);

	AMateria*	materia;
};

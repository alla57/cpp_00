#include "LinkedList.hpp"

Node::Node(){
	materia = NULL;
	next = NULL;
	return;
}

Node::Node(Node const & src){
	materia = src.materia;
	next = src.next;
	return;
}

Node::~Node(){
	while (next != NULL)
	{
		delete materia;
	}
	return;
}

Node *	addNode(Node * materia){
}
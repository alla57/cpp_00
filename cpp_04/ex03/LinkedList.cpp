#include "LinkedList.hpp"

Node::Node(){
	materia = NULL;
	next = NULL;
	return;
}

Node::Node(Node const & src){
	*this = src;
	return;
}

Node::~Node(){
}

Node & Node::operator=(Node & rhs){
	materia = src.materia;
	next = src.next;
	return (*this);
}

LinkedList::LinkedList(){
	head = new Node;
}

LinkedList::LinkedList(LinkedList const & src){
	*this = src;
}

LinkedList::~LinkedList(){
	Node* tmp;
	while (head->next != NULL)
	{
		tmp = head;
		head = head->next;
		delete tmp;
	}
	delete head;
}

LinkedList & LinkedList::operator=(LinkedList & rhs){
	return (*this);
}

void	LinkedList::addNode(AMateria* materiaToAdd){
	Node* node = new Node;
	node.materia = materiaToAdd;
	node.next = 
}
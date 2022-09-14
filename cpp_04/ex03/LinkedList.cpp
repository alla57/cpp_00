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
	delete materia;
}

const Node & Node::operator=(const Node & rhs){
	materia = rhs.materia;
	next = rhs.next;
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

const LinkedList & LinkedList::operator=(const LinkedList & rhs){
	(void)rhs;
	return (*this);
}

void	LinkedList::addNode(AMateria* materiaToAdd){
	Node* node = new Node;
	node->materia = materiaToAdd;
	node->next = head;
	head = node;
}
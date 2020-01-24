#ifndef TREE_H
#define TREE_H


#include <stdlib.h>
#include <iostream>
using namespace std;
#include "Node.h"
#include "Contact.h"

template <class Type>
class Tree
{
public:
	Tree();
	Tree(const Tree& source);
	~Tree();

private:
	Node<Tree>* root;

	void free(Node<Type>* cursor);


};
#include "tree.tem"

#endif
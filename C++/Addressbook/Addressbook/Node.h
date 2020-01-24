#ifndef NODE_H
#define NODE_H

#include <cstdlib>

template <class Type>
class Node
{
public:
	Node();
	Node(Type dataIn);

	Node* left;
	Node* right;
	Type data;
};
#include "Node.h"


#endif
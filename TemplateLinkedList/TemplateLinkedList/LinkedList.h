#pragma once
#include "Node.h"

template <class T>
class LinkedList
{
public:
	Node<T>* head;

	LinkedList();

	// functions
	void insert(T value);
};


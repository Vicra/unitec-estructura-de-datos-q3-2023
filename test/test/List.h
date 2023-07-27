#pragma once
#include "Node.h"

template <typename T>
class List
{
public:
	Node<T>* head = nullptr;

	List();
	void insert(T value);
};


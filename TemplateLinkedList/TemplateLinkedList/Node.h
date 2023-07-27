#ifndef NODE_H
#define NODE_H

template<typename T>
class Node
{
public:
	T value;
	Node* next;

	Node(T value);
};

template<typename T>
Node<T>::Node(T value) {
	this->value = value;
	this->next = nullptr;
}

#endif
#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
	this->head = nullptr;
}

template<class T>
void LinkedList<T>::insert(T value) {
	Node<T>* newNode = new Node<T>(value);

	if (this->head == nullptr) {
		this->head = newNode;
		return;
	}

	Node<T>* iterator = this->head;
	while (iterator->next != nullptr) {
		iterator = iterator->next;
	}
	iterator->next = newNode;
}
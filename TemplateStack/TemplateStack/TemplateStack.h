#pragma once
#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;

template <class T>
class TemplateStack
{
public: 

	Node <T>* head = nullptr;
	
	//Funciones
	bool push(T newValue);
	void print();
	T pop();
	bool search(T value);
};

template <typename T>
bool TemplateStack<T>::push(T newValue)
{
	Node<T> * newNode = new Node<T>();
	newNode->value = newValue;
	
	if (this->head == nullptr) {
		this->head = newNode;
	}
	else {
		Node <T>* it = this->head;
		if (it->value == newNode->value)
		{
			return false;
		}
		while (it->next != nullptr)
		{
			if (it->value == newNode->value || it->next->value == newNode->value)
			{
				return false;
			}
			it = it->next;
		}
		it->next = newNode;
	}
	return true;
}

template <typename T>
void TemplateStack<T>::print() {
	Node <T>* it = this->head;
	if (it == nullptr) {
		cout << "La lista esta vacia." << endl;
	}
	else {
		while (it != nullptr) {
			cout << it->value << " - ";
			it = it->next;
		}
		cout << endl;
	}
}

template <typename T>
T TemplateStack<T>::pop() {
	// caso 1: no contiene elementos
	if (this->head == nullptr) {
		return NULL;
	}

	// caso 2: contiene solo 1 elemento
	if (this->head->next == nullptr) {
		T tmp = this->head->value;
		delete this->head;
		this->head = nullptr;
		return tmp;
	}

	// TODO: caso3: n>1
	Node<T>* it = this->head;
	while (it->next->next != nullptr) {
		// iterar
		it = it->next;
	}
	Node<T>* last = it->next;
	T returnValue = last->value;
	delete last;
	it->next = nullptr;
	return returnValue;
}

template <typename T>
bool TemplateStack<T>::search(T value) {
	Node<T>* it = this->head;
	while (it != nullptr) {
		if (it->value == value)
			return true;
		it = it->next;
	}
	return false;
}
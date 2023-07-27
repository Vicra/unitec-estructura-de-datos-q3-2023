#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;

template <typename T>
class LinkedList {

public:
    Node<T>* head;
    LinkedList();
    void insertFront(T value);
    void insertBack(T value);
    void print();
};

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <typename T>
void LinkedList<T>::insertFront(T value) {
    Node<T>* newNode = new Node<T>(value);
    newNode->next = head;
    head = newNode;
}

template <typename T>
void LinkedList<T>::insertBack(T value) {
    Node<T>* newNode = new Node<T>(value);
    Node<T>* iterator = this->head;
    while (iterator->next != nullptr) {
        iterator = iterator->next;
    }
    iterator->next = newNode;
}

template<typename T>
void LinkedList<T>::print() {
    Node<T>* iterator = this->head;
    while (iterator != nullptr) {
        cout << iterator->value << " -> ";
        iterator = iterator->next ;
    }
    cout << " nullptr ";
}

#endif

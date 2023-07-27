#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> myList;

    myList.insertFront(10);
    myList.insertFront(20);
    myList.insertFront(30);

    myList.insertBack(40);
    myList.print();
    return 0;
}

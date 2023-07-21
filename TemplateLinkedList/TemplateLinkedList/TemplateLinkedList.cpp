#include <iostream>
#include "LinkedList.h"
#include "TemplateLinkedList.h"

int main()
{
    LinkedList<int>*list = new LinkedList<int>();
    list->insert(1);
    std::cout << "Hello World!\n";
}
#include <iostream>
using std::cout;
using std::endl;

class Node {
public:
    int value;
    Node* next = nullptr;
};

void printList(Node* head) {
    Node* iterator = head;
    while (iterator != nullptr) {
        // imprimir el valor
        cout << iterator->value << " -> ";

        // iterar
        iterator = iterator->next;
        /*if (iterator == head) {
            break;
        }*/
    }
    cout << "nullptr" << endl;
}

void printReverse(Node* nodo) {
    // caso base
    if (nodo == nullptr) {
        return;
    }
    printReverse(nodo->next);
    cout << nodo->value << " <- ";
    // caso recursivo
    //return;
}

int main()
{
    Node* n1 = new Node();
    n1->value = 1;

    
    Node* n2 = new Node();
    n2->value = 2;

    // enlaces
    n1->next = n2;

    Node* n3 = new Node();
    n3->value = 3;

    // enlaces
    n2->next = n3;

    // enlace circular
    //n3->next = n1;

    
    printList(n1);

    printReverse(n1);

    std::cout << "Hello World!\n";
}
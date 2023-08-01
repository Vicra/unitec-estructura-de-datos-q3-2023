#include <iostream>
#include "TemplateStack.h"

using std::cout;
using std::endl;
using std::boolalpha;

int main()
{
	TemplateStack <int> Ts; 
	Ts.push(1); 
	Ts.push(2);
	Ts.push(3);
	Ts.print();

	cout << "search 1: " << boolalpha << Ts.search(1) << endl;
	cout << "search 4: " << boolalpha << Ts.search(4) << endl;

	cout << "Popping: " << Ts.pop() <<endl;
	Ts.print();

	cout << "Popping: " << Ts.pop() << endl;
	Ts.print();

	cout << "Popping: " << Ts.pop() << endl<<endl;
	Ts.print();

	cout << "search 1: " << boolalpha << Ts.search(1) << endl;

}
#include <cstdlib>
#include <iostream>
#include "rectangle.h"
#include "list.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
	int action;
	TList list;
	TRectangle rectangle;
	cout << "Choose an operation:\n" << "1) Push\n" << "2) Pop\n"
	<< "3) Show List\n" << "0) Exit\n" << "--------------------------" << endl;
	while (cin >> action && action) {
		switch(action) {
			case 1:
			list.Push(TRectangle(cin));
			break;
			case 2:
			rectangle = list.Pop();
			break;
			case 3:
			cout << list << endl;
			break;
			default:
			cout << "Incorrect command\n";
			break;
		}
		cout << "Choose an operation:\n" << "1) Push\n" << "2) Pop\n"
		<< "3) Show List\n" << "0) Exit\n" << "--------------------------" << endl;
	}
	return 0;
}

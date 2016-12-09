#include <cstdlib> 
#include "Rectangle.h"
#include "Trapeze.h"
#include "Rhombus.h"
using namespace std;

int main() {
	int count;
	Rectangle *rptr = nullptr;
	Trapeze *tptr = nullptr;
	Rhombus *rhptr = nullptr;
	Rectangle *rcp = nullptr;
	Trapeze *tcp = nullptr;
	Rhombus *rhcp = nullptr;
		
do 
	{
		cout << endl;
		cout << "Choose an operation:" << endl;
		cout << "1) Create rectangle;" << endl;
		cout << "2) Create trapeze;" << endl;
		cout << "3) Create rhombus;" << endl;
		cout << "4) Copy of rectangle;" << endl;
		cout << "5) Copy of trapeze;" << endl;
		cout << "6) Copy of rhombus;" << endl;
		cout << "0) Exit;" << endl;
		cout << "--------------------------" << endl;
		cin >> count;
		switch (count)
			{
				case 1: //создание прямоугольника
					{
						delete rptr;
						cout << "Enter rectangle sides:" << endl;
						rptr = new Rectangle(cin);
						rptr->Print();
						cout << "Square of the rectangle = " << rptr->Square() << endl;
						break;
					}
				case 2: //создание трапеции
					{
						delete tptr;
						cout << "Enter trapeze sides:" << endl;
						tptr = new Trapeze(cin);
						tptr->Print();
						cout << "Square of the trapeze = " << tptr->Square() << endl;
						break;
					}			
				case 3: //создание ромба
					{
						delete rhptr;
						cout << "Enter rhombus diagonals:" << endl;
						rhptr = new Rhombus(cin);
						rhptr->Print();
						cout << "Square of the rhombus = " << rhptr->Square() << endl;
						break;
					}	
				case 4: //копия прямоугольника
					{
						if(rptr) 
							{
								delete rcp;
								rcp = new Rectangle(*rptr);
								cout << "Rectangle sides: " << endl;
								rcp->Print();
								cout << "Square of the rectangle = " << rcp->Square() << endl;
							}
						else 
							{
								cout << "Rectangle doesn't exist" << endl;
							}
						break;
					}
				case 5: //копия трапеции
					{
						if(tptr)
							{
								delete tcp;
								tcp = new Trapeze(*tptr);
								cout << "Trapeze sides: " << endl;
								tcp->Print();
								cout << "Square of the trapeze = " << tcp->Square() << endl;
							}
						else
							{
								cout << "Trapeze doesn't exist" << endl;
							}	
					}	
				case 6: //копия ромба
					{
						if(rhptr)
							{
								delete rhcp;
								rhcp = new Rhombus(*rhptr);
								cout << "Rhombus diagonals: " << endl;
								rhcp->Print();
								cout << "Square of the rhombus = " << rhcp->Square() << endl;
							}
						else
							{
								cout << "Rhombus doesn't exist" << endl;
							}	
					}	
			}
	}		
while (count != 0);
delete rptr;
delete tptr;
delete rhptr;
delete rcp;
delete tcp;
delete rhcp;
return 0;
}
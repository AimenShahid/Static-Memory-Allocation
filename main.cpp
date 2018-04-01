#include <iostream>
#include <string>
#include "student.h"

int main()
{
	student x;
	student y(x);
	x.addcourse("BSCS 403", 2);
	x.addcourse("BSCS 404", 3);
	x.addcourse("BSCS 405", 4);
	x.display();
  cout << x.getcourse(2) << endl;
	cout << x.getcourse(3) << endl;
  cout << x.getcourse(4) << endl;


	system("pause");
}


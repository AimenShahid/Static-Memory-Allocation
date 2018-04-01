#include <iostream>
#include <string>
using namespace std;
class student
{
public:
	student()
	{
		this->name = "AIMEN SHAHID";
		this->seatno = "B16101018";
		this->courselist[0] = "BSCS 401";
		this->courselist[1] = "BSCS 402";
	}
	student(student& clone)
	{
		this->name = "AIMEN SHAHID";
		this->seatno = "B16101018";
		for (int i = 0; i < 10; i++) {
			this->courselist[i] = clone.courselist[i];
		}

	}
	void addcourse(string coursename, int index)
	{
		this->courselist[index] = coursename;
	}
	string getcourse(int n)
	{
		return this->courselist[n];
	}
	void display()
	{
		cout << "***UBIT STUDENT***" << endl;
		cout << "NAME: " << this->name << endl;
		cout << "SEAT NUMBER: " << this->seatno << endl;
		cout << "COURSE LIST...: " << endl;
		cout << this->courselist[0] << endl;
		cout << this->courselist[1] << endl;
	}
	private:
	string name;
  string seatno;
	string courselist[10];
	int index;


};

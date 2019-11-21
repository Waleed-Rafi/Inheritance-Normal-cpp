#include<iostream>
#include<string>
using namespace std;
//over rided functions getter, setter.
class employee {
protected:
	int eno;
	string ename;
	string cnic;
public:
	employee(int n1,string n2,string n3): eno(n1),ename(n2),cnic(n3){}
	void setter();
	void getter() const;
};
void employee::setter() {
	cout << "ENTER ENO. OF EMPLOYEE" << endl;
	cin >> eno;
	cout << "ENTER THE NAME OF EMPLOYEE" << endl;
	cin.ignore();
	getline(cin,ename);
	cout << "ENTER THE CNIC OF EMPLOYEE" << endl;
	getline(cin, cnic);
}
void employee::getter() const {
	cout << "---------------- DETAIL ------------------" << endl;
	cout << "EMPLOYEE NUMBER IS: " << eno << endl;
	cout << "EMPLOYEE NAME IS: " << ename << endl;
	cout << "EMPLOYEE CNIC IS: " << cnic << endl;

}
class manager : public employee {
	string title;//designation e.g production ,sales
	float clubdues;
public:
	manager(int n1,string n2,string n3,string n4, float n5):employee(n1,n2,n3),title(n4),clubdues(n5){}
	void setter();
	void getter() const;
};
void manager::setter() {
	employee::setter();
	cout << "ENTER TITLE OF MANAGER" << endl;
	cin.ignore();
	getline(cin, title);
	cout << "ENTER THE CLUB DUES OF MANAGER" << endl;
	cin >> clubdues;
}
void manager::getter() const {
	employee::getter();
	cout << "TITLE IS: " << title << endl;
	cout << "CLUB DUES ARE: " << clubdues << endl;
	cout << "-------------------------------------" << endl;
}

class scientist: public employee {
private:
	string field;//chemistry ,computer 
	int noofpubl;//no. of books/publications
public:
	//some functions
	scientist(int n1,string n2,string n3,string n4,int n5): employee(n1,n2,n3),field(n4),noofpubl(n5){}
	void setter();
	void getter() const;
};
void scientist::setter() {
	employee::setter();
	cout << "ENTER FIELD OF SCIENTIST" << endl;
	cin.ignore();
	getline(cin, field);
	cout << "ENTER THE No. OF PUBLICATIONS OF SCIENTIST" << endl;
	cin >> noofpubl;
}
void scientist::getter() const {
	employee::getter();
	cout << "FIELD IS: " << field << endl;
	cout << "NO OF PUBLICATIONS ARE: " << noofpubl << endl;
	cout << "-------------------------------------" << endl;
}
class labor: employee {
	string shift;//evening morning
	float noofhrsworked;
public:
	labor(int n1,string n2,string n3,string n4,float n5):employee(n1,n2,n3),shift(n4),noofhrsworked(n5){}
	void setter();
	void getter() const;
};
void labor::setter() {
	employee::setter();
	cout << "ENTER SHIFT OF LABOR" << endl;
	cin.ignore();
	getline(cin, shift);
	cout << "ENTER no. OF HOURS WORKED BY LABOR" << endl;
	cin >> noofhrsworked;
}
void labor::getter() const {
	employee::getter();
	cout << "SHIFT IS: " << shift << endl;
	cout << "NO. OF HOURS WORKED ARE: " << noofhrsworked << endl;
	cout << "-------------------------------------" << endl;
}
int main() {
	manager m1(0,"\0","\0","\0",0);
	scientist s1(0,"\0","\0","\0",0);
	labor l1(0,"\0","\0","\0",0);
	m1.setter();
	m1.getter();
	s1.setter();
	s1.getter();
	l1.setter();
	l1.getter();
	
	system("pause");
	return 0;
}
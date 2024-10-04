/*
 * Structure.cpp
 * 
 * Using the struct type, initialization, console input.
 *
 */
#include <iostream>

using namespace std;

struct Student
{
	char firstname[20];
	char middlename[20];
	char lastname[20];
	int credits;
	float GPA; // Grade Point Average
};

int main()
{
	Student s1 = { "John", "Bill", "Smith", 150, 3.8 };
	
	cout << "First student\n-------------\n";
	cout << "Name: " << s1.firstname << " " << s1.middlename << " " << s1.lastname << endl;
	cout << "Credits: " << s1.credits << "\t" << "GPA: " << s1.GPA << endl << endl;
	cout << endl;
	Student s2;
	cout << "Second student\n--------------\n";
	cout << "First name: ";
	cin.getline(s2.firstname, 20);
	cout << "Middle name: ";
	cin.getline(s2.middlename, 20);
	cout << "Last name: ";
	cin.getline(s2.lastname, 20);
	cout << "Credits: ";
	cin >> s2.credits;
	cout << "GPA: ";
	cin >> s2.GPA;
	
	cout << "\nSecond student\n--------------\n";
	cout << "Name: " << s2.firstname << " " << s2.middlename << " " << s2.lastname << endl;
	cout << "Credits: " << s2.credits << "\t" << "GPA: " << s2.GPA << endl;
	return 0;
}


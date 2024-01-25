/*Create a program which have three variables, all type int, should be called day, month, and year.
Write a program that prompts the user to enter values in day, month, and year. The program then
stores the data in a variables, and finally prints it out.*/

#include <iostream>
using namespace std;
int main() {
	int day;
	int month;
	int year;
	cout << "ENTER DAY (1-31): " << endl;
	cin >> day;
	cout << "ENTER YEAR: " << endl;
	cin >> year;
	cout << "ENTER MONTH (1-12): " << endl;
	cin >> month;

	cout << "DISPLAYING THE INFORMATION ENTERED BY THE USER: " << endl;

	cout << "DAY: " << day << endl;
	cout << "MONTH: " <<month<< endl;
	cout << "YEAR: " << year << endl;

	cout << day << "-" << month << "-" << year;
	return 0;

}
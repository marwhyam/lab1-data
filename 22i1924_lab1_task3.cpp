/*Make a menu of the following operations using two dimensional array of size m x n. You
should use user-defined functions which accept 2-D array A, and its size m and n as
arguments. The options are:
? To input elements into matrix of size m x n
? To display elements of matrix of size m x n
? Sum of all elements of matrix of size m x n
? To display row-wise sum of matrix of size m x n
? To display column-wise sum of matrix of size m x n
? To create transpose of matrix of size n x m*/

#include <iostream>
using namespace std;

void inputarray(int arr[50][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
}
}

void displayarray(int arr[50][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout<< arr[i][j];
		}
		cout << endl;
	}
}

int sumarr(int arr[50][50], int m, int n) {
	int sum = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum+=arr[i][j];
		}
	}
	return sum;
}

void sumrow(int arr[50][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += arr[i][j];
		}
		cout << "ROW WISE SUM OF ARRAY: " << sum << endl;
	}
	
}

void sumcol(int arr[50][50], int m, int n) {
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum += arr[j][i];
		}
		cout << "COLUMN WISE SUM IS: " << sum << endl;
	}

}

void transpose(int arr[50][50], int m, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[j][i];
		}
		cout << endl;
	}
}

int main() {
	int m;
	int n;
	int arr[50][50];
	cout << "ENTER SIZE OF ARRAY (ROWS X COL): " << endl;
	cin >> m;
	cin >> n;
	int choice;
	cout << "CHOOSE OPTION! " << endl;
	cout << "INPUT ARRAY" << endl;
	cout << "DISPLAY ARRAY" << endl;
	cout << "SUM OF THE ARRAY" << endl;
	cout << "SUM OF ROWS" << endl;
	cout << "SUM OF COLUMNS" << endl;
	cout << "TRANSPOSE OF THE MATRIX" << endl;
	cout << "ENTER CHOICE: " << endl;
	cin >> choice;

	if (choice == 1) {
		inputarray(arr, m, n);
	}
	else if (choice == 2) {
		cout << "ENTER THE ELEMENTS OF ARRAYS:" <<endl;
		inputarray(arr, m, n);
		cout << "DISPLAYNG ARRAY" << endl;
		displayarray(arr, m, n);
	}
	else if (choice == 3)
	{
		cout << "ENTER THE ELEMENTS OF ARRAYS:" << endl;
		inputarray(arr, m, n);
		cout <<"SUM OF THE ARRAY IS: "<< sumarr(arr, m, n);
	}
	else if (choice == 4) {
		cout << "ENTER THE ELEMENTS OF ARRAYS:" << endl;
		inputarray(arr, m, n);
		sumrow(arr, m, n);
	}
	else if (choice == 5) {
		cout << "ENTER THE ELEMENTS OF ARRAYS:" << endl;
		inputarray(arr, m, n);
		sumcol(arr, m, n);
	}
	else if (choice == 6) {
		cout << "ENTER THE ELEMENTS OF ARRAYS:" << endl;
		inputarray(arr, m, n);
		cout << "TRANSPOSE OF A MATRIX IS" << endl;
		transpose(arr, m, n);
	}
	return 0;
}
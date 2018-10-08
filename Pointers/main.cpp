#include <iostream>

using namespace std;

void swap(int* a, int* b) {
	int* temp = a;
	*a = *b;
	*b = *temp;
}

void baleg(int* yarr, int size) {
	
	for (int i = 1; i < size; i += 2) {
		cout << *yarr + i << "\n";
	}
}

int main() {

	int a = 100;

	cout << "Value in memory location a is " << a << "\n";

	cout << "Address of (the reference to) memory location a is " << &a << "\n";

	int *b = &a;

	cout << "Value in memory location pointed to by b is " << *b << "\n";


	cout << "Value in memory location b is " << b << "\n";
	cout << b << " should be the same as the memory location for a: " << &a << "\n";
	cout << "b is actually at memory location " << &b << endl;

	int **c;

	c = &b;
	cout << "c is now pointing to what b points to: " << **c << endl;

	cout << "c points to: " << *c << endl;

	cout << "c actually holds the value: " << c << endl;
	cout << c << " is the same value as b's memory location: " << &b << endl;
	cout << "c is actually at memory location " << &c << endl;

	cout << "c is eventually retrieving what is in memory location " << **&c << endl;
	cout << "the value of a is in memory location " << &a << endl;

	int x = 10;
	int *w = &x;
	int y = 20;
	int *z = &y;

	cout << "Value of x: " << x << "\n";
	cout << "Value of y: " << y << "\n";

	swap(*w, *z);
	
	cout << "Value of x: " << x << "\n";
	cout << "Value of y: " << y << "\n";

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	baleg(arr, sizeof(arr)/sizeof(*arr));

	int xe;
	cout << "Type in a numebr to finish" << "\n";
	cin >> xe;
	
	return 0;
}

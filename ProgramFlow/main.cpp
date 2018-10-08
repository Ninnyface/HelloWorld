#include <iostream>

using namespace std;

int add(int x, int y) {
	return x + y;
}

int fac(int x, int facSum) {

	if (x > 1) {
		facSum = facSum * (x - 1);
		return fac(x - 1, facSum);
	}
	else {
		return facSum;
	}
}

bool overZero(int x) {
	if (x >= 0) {
		return true;
	}
	else {
		return false;
	}
}

void negativeNumber() {
	int x;
	cout << "Please enter a number." << "\n";
	cin >> x;

	while (overZero(x)) {
		cout << "Please enter another number." << "\n";
		cin >> x;
	}

}

int main() {

	int total = 0;
	int facSum = 0;
	int x;

	cout << "Please enter numbers, will finish if sum of factorals exceeds 2000" << "\n";

	while (total <= 2000) {
		cin >> x;
		facSum = x;
		total = add(fac(x, facSum), total);
	}

	cout << "The total is " << total << "\n";

	if (total > 3000)
		cout << "you overshot by a lot!" << "\n";
	else {
		cout << "You just went over" << "\n";
		cout << "Only over by " << total - 2000 << "\n";
	}
	negativeNumber();

	cout << "3 is greater than 0: " << (overZero(3)? "true":"false") << "\n";
	cout << "-3 is less than 0: " << (overZero(-3) ? "true" : "false") << "\n";

	cout << "enter a number to exit" << "\n";

	cin >> x;

	return 0;
}
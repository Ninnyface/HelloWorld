#include <iostream>
#include <functional>

using namespace std;

int processEvents(function<int(int, int)> someEvent, int x, int y) {
	return someEvent(x, y);
}

int main() {

	int a, b, exit;
	char m;

	function<int(int, int)> onAddEvent = [](int x, int y) {
		return x + y;
	};

	function<int(int, int)> onSubtractEvent = [](int x, int y) {
		return x - y;
	};

	function<int(int, int)> onProductEvent = [](int x, int y) {
		return x * y;
	};

	function<int(int, int)> onQuotientEvent = [](int x, int y) {
		return x / y;
	};

	cout << "Please type in a number" << "\n";
	cin >> a;

	cout << "Please type in another number" << "\n";
	cin >> b;

	cout << "Please enter which mathematical operator you would like" << "\n";
	cin >> m;


	switch(m){
	case '+': cout << a << '+' << b << '=' << processEvents(onAddEvent, a, b) << "\n";
			  break;
	case '-': cout << a << '-' << b << '=' << processEvents(onSubtractEvent, a, b) << "\n";
			  break;
	case '*': cout << a << '*' << b << '=' << processEvents(onProductEvent, a, b) << "\n";
		      break;
	case '/': cout << a << '/' << b << '=' << processEvents(onQuotientEvent, a, b) << "\n";
		      break;
	}

	cout << "enter another number to exit" << "\n";

	cin >> exit;

	return 0;
}

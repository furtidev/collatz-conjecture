#include <iostream>

using namespace std;

int main(void) {
	int number;
	int origin_number;
	int iter = 0;
	cout << "Enter a number: ";
	cin >> number;
	origin_number = number;
	while(number != 1) {
		if (number % 2 == 0) {
			number = number / 2;
		} else {
			number = (number*3) + 1;
		}
		iter++;
		cout << number << endl;
	}
	cout << "Number: " << origin_number << endl << "Iterations: " << iter;
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

//Operations
void addNum(int x, int y) {
	int c = x + y;
	cout << "The sum is " << c << endl;
}
void multiplyNum(int x, int y) {
	int c = x * y;
	cout << "The product is " << c << endl;
}
void divideNum(int x, int y) {
	if (x >= y) {
		float c = (float)x / (float)y;
		cout << "The quotient is " << c << endl;
	}
	else {
		cout << "First number should be greater";
	}
}
void subtractNum(int x, int y) {
	int c = x - y;
	cout << "The subraction is " << c << endl;
}

//******************************************//


void operatorFact(char op, int x, int y) { //Conditions
	if (op == '+') {
		addNum(x, y);
	}
	else if (op == '*') {
		multiplyNum(x, y);
	}
	else if (op == '/') {
		divideNum(x, y);
	}
	else if (op == '-') {
		subtractNum(x, y);
	}
	else {
		cout << "OOops, there's no code again your operator!! :( ";
	}
}
//Main Function
int main() {
	//system("Color B1");
	char choice;
	int a, b;
	char z;
	string str;
	bool done = false;

	cout << "Your Name!" << endl;
	getline(cin, str);
	cout << "Hey " + str + "! There are PHEWWW arithmetic operations \n i've implemented!" << endl << endl;
	do {
		cout << "Choose Operator (+ - * /)" << endl;
		cin >> z;
		cout << "Enter First Number: " << endl;
		cin >> a;
		cout << "Enter Second Number: " << endl;
		cin >> b;
		operatorFact(z, a, b);
		cout << "Do you want to continue? (Y/N)" << endl;
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	cout << "Thank you! see you soon!!" << endl;
	return 0;
}
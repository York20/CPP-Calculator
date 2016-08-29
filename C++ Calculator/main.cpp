#include <iostream>
#include "CalcObj.h"

int main() {
	using namespace std;

	CalcObj calc;

	cout << "C++ Calc By: Sam Fenton" << endl << " " << endl;


	for(;;) { 

		double firstNum;
		cout << "Please Enter First Number" << endl << " " << endl << " ";
		cin >> firstNum;

		double secondNum;
		cout << "Please Enter Second Number" << endl << " " << endl;
		cin >> secondNum;

		char op;
		cout << "Please Enter Operator" << endl << " " << endl;
		cout << "+ , -, *, / or q to quit" << endl << " " << endl;
		cin >> op;

		if (op == 43) {
			double answer = calc.add(firstNum, secondNum);
			cout << answer << endl;
			continue;
		}

		else if (op == 45){
			double answer = calc.subtract(firstNum, secondNum);
			cout << answer << endl;
			continue;
		}

		else if (op == 42){
			double answer = calc.multiply(firstNum, secondNum);
			cout << answer << endl;
			continue;
		}

		else if (op == 47){
			double answer = calc.divide(firstNum, secondNum);
			cout << answer << endl;
			continue;

		}

		else if (op == 113){
			exit(0);
			return 0;
		}

		else {
			cout << "Invalid Input" << endl;
			exit(-1);
		}
	}

	return 0;
}
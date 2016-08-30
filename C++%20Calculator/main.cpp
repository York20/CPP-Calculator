// C++ standard import

#include <iostream>

// Custom header file containing functions.

#include "CalcObj.h"

// C++ Calculator By: Sam Fenton
// Created on 30/08/16

// This program is overly complex for what it is but demonstrates OOP principles with the use of a header file.
// The header file contains the CalcObj clas,s which contains the four function members which calculate the user input.


//Main Function

int main() {

	// Tells the compiler to use the std namespace meaning std::cout can become cout.

	using namespace std;

	//Creates a variable of type CalcObj

	CalcObj calc;

	cout << "C++ Calc By: Sam Fenton" << endl << " " << endl;


	// Infinite loop

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

		// Event Handlers

		if (op == 43) {
			double answer = calc.add(firstNum, secondNum); // Calls member function from CalcObj class.
			cout << answer << endl;
			continue;
		}

		else if (op == 45){
			double answer = calc.subtract(firstNum, secondNum); // Calls member function from CalcObj class.
			cout << answer << endl;
			continue;
		}

		else if (op == 42){
			double answer = calc.multiply(firstNum, secondNum); // Calls member function from CalcObj class.
			cout << answer << endl;
			continue;
		}

		else if (op == 47){
			double answer = calc.divide(firstNum, secondNum); // Calls member function from CalcObj class.
			cout << answer << endl;
			continue;

		}

		else if (op == 113){
			exit(0);
			return 0;
		}

		// Exception Handler

		else { 
			cout << "Invalid Input" << endl;
			exit(-1);
		}
	}

	//Indicate Success

	return 0;
}
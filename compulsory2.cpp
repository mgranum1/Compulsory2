#include <iostream>
#include "compulsory2.h"


void doFactorial() {
	std::cout << "**************************************\n";
	std::cout << "Pick a number of your choice: ";
	
	int number;
	std::cin >> number;
	
	cin.clear();											//loop once
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	std::cout << "**************************************\n";
	std::cout << "The factorial of " << number << "!" << " = " << facto(number) << '\n';
	
}

void doPolynomial() {
	
	int poly1[POLY_DEGREE + 1];
	int poly2[POLY_DEGREE + 1];
	int result[POLY_DEGREE + 1];
	int choice;

	std::cout << "**************************************\n";
	std::cout << "Choose an operation:\n";
	std::cout << "1. Addition\n";
	std::cout << "2. Subtraction\n";
	std::cout << "3. Multiplication\n";
	std::cout << "Enter your choice: ";
	std::cin >> choice;

	std::cout << "**************************************\n";
	std::cout << "Enter the coefficients for the first polynomial (from x^0 to x^3):\n";
	for (int i = 0; i <= POLY_DEGREE; ++i) {
		std::cout << "Coefficient for x^" << i << ": ";
		std::cin >> poly1[i];
	}

	std::cout << "\nEnter the coefficients for the second polynomial (from x^0 to x^3):\n";
	for (int i = 0; i <= POLY_DEGREE; ++i) {
		std::cout << "Coefficient for x^" << i << ": ";
		std::cin >> poly2[i];
	}

	switch (choice) {

	case 1:
		addPoly(poly1, poly2, result);
		std::cout << "\nAddition result:\n";
		dplayPoly(result);
		break;

	case 2:
		subtractPoly(poly1, poly2, result);
		std::cout << "\nSubtraction result:\n";
		dplayPoly(result);
		break;

	case 3:
		multiplyPoly(poly1, poly2, result);
		std::cout << "\nMultiplication result:\n";
		dplayPoly(result);
		break;

	default:
		std::cout << "Unvalid input, please try again.\n";

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void doEquations() {
	int choice;
	float num1, num2;
	
	while (true) {

	std::cout << "**************************************\n";
	std::cout << "1 - Addition. \n";
	std::cout << "2 - Subtraction. \n";
	std::cout << "3 - Multiplication. \n";
	std::cout << "4 - Division. \n";

	std::cout << "Choose an operator: ";

	std::cin >> choice;

	std::cout << "**************************************\n";

	std::cout << "Enter two numbers separated by a space: ";

	std::cin >> num1 >> num2;

	switch (choice) {

	case 1: //Addition
		std::cout << "**************************************\n";
		std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
		break;

	case 2: //Substraction
		std::cout << "**************************************\n";
		std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
		break;

	case 3: //Multiplication
		std::cout << "**************************************\n";
		std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
		break;

	case 4: //Division
		std::cout << "**************************************\n";
		std::cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
		break;

	default:
		std::cout << "Unvalid input, please try again\n";

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		continue;
		}
	break;
	}
}


	int main() {
		int choice;

		while (true) {

			std::cout << "**************************************\n";
			std::cout << "1 - Factorial. \n";
			std::cout << "2 - Polynomial. \n";
			std::cout << "3 - Simple equations. \n";
			std::cout << "4 - Exit program. \n";

			std::cout << "What would you like to calculate: ";

			std::cin >> choice;

			switch (choice) {

			case 1:
				doFactorial();
				continue;
				

			case 2:
				doPolynomial();
				continue;
				

			case 3:
				doEquations();
				continue;
				

			case 4:
				//Exit program
				return 0;

			default:
				std::cout << "**************************************\n";
				std::cout << "Unvalid input, please try again.\n";
				std::cout << "Pick a number between 1 to 4\n";
				
				cin.clear();											//loop once
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}

			break;
		}

		return 0;
	}

		
	








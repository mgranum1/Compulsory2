#include <iostream>
#pragma once
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////

long long facto(int num) {	               // Factorial part of the calculator
	if (num > 1)
		return num * facto(num - 1); 
	else
		return 1;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Polynomial part of the calculator

const int POLY_DEGREE = 3;       // Chooses the max degree of the polynomials       


// Displays polynomials during calculating
void dplayPoly(int poly[]) {               
    for (int i = POLY_DEGREE; i >= 0; --i) {
        std::cout << poly[i] << "x^" << i;
        if (i > 0) {
            std::cout << " + ";
        }
    }
    std::cout << '\n';
}

// Addition                                          
void addPoly(int poly1[], int poly2[], int result[]) {
    for (int i = 0; i <= POLY_DEGREE; ++i) {
        result[i] = poly1[i] + poly2[i];
    }
}

// Subtraction                                          
void subtractPoly(int poly1[], int poly2[], int result[]) {
    for (int i = 0; i <= POLY_DEGREE; ++i) {
        result[i] = poly1[i] - poly2[i];
    }
}

// Multiplication                                            
void multiplyPoly(int poly1[], int poly2[], int result[]) {
    for (int i = 0; i <= POLY_DEGREE; ++i) {
        for (int j = 0; j <= POLY_DEGREE - i; ++j) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }
}   





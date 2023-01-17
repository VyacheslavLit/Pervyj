#include <iostream>
#include "Calculate.h"


long long factorial(int a) {
	if (a == 0)return 1;
	return (a * (factorial(a - 1)));
}

long long stepen(int a, int b) {
	if (b == 1)return(a);
	return(a * (stepen(a, b - 1)));
}
double operaciya(int a, int b, char oper) {
	switch (oper) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return (double) a / b;
	}
}
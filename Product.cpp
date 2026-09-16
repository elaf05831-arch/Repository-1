/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
	int firstNumber, secondNumber, product;
	cout<<"\n Please enter the first number: ";
	cin>>firstNumber;
	cout<<"\n Please enter the second number: ";
	cin>>secondNumber;
	
	product = firstNumber * secondNumber;
	cout<<"\n The Product of the two numbers = "<< product;
	return 0;
}


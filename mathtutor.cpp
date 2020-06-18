#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;


int main() {
	int number1, number2;
	srand(time(0));
	number1 = rand() % 200;
	number2 = rand() % 200;
	cout << setw(4) <<left<<" "<< number1<<endl;
	cout << setw(4) << left<< "+"<< number2<<endl;
	cout << "-----------";
	cin.get();
	cout << setw(7) <<right << number1 + number2;

}

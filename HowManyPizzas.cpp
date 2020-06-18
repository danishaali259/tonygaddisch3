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
	float const areaOfSlice=14.125, pi=3.14159;
	float diameter, area, radius,numberOfSlices,NoOfPeople,pizzas;
	srand(time(0));
	cout << "Enter the diameter of pizza in inches"<<endl;
	cin>>diameter;
	cout << "Enter the number of people at party"<<endl;
	cin>>NoOfPeople;
	radius = diameter / 2;
	area = pi * pow(radius, 2);
	numberOfSlices = area / areaOfSlice;
	cout << "Number of slices of pizza are: \t" <<fixed<<setprecision(1)<<numberOfSlices<< endl;

	pizzas = (NoOfPeople * 4) / numberOfSlices;
	cout << "Number of pizzas are: \t" <<fixed<<setprecision(1)<<pizzas<<" pizzas"<< endl;
}

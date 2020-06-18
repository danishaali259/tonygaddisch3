#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

// 
//int main()
//{
//	double value1, value2, value3;
//	cout << "Enter a number: ";
//	cin >> value1;
//	value2 =pow(value1, 2.0);
//	value3 = 3 + value2 / 2 - 1;
//	cout <<value2 <<"\t"<< value3 << endl;
//	return 0;
//}

// This program demonstrates integer overflow and underflow.
//int main()
// {
//	// testVar is initialized with the maximum value for a short.
//	short testVar = 32767;
//
//	 // Display testVar.
//	cout << testVar << endl;
//
//	// Add 1 to testVar to make it overflow.
//		testVar = testVar + 2221;
//	 cout << testVar << endl;
//
//	 // Subtract 1 from testVar to make it underflow.
//	testVar = testVar - 1;
//	cout << testVar << endl;
//	return 0;
//	}
//
//int main()
//{
//	int integer1, integer2;
//	double result;
//	integer1 = 19;
//	integer2 = 2;
//	result = integer1 / integer2;
//	cout << result << endl;
//	result = static_cast<double>(integer1) / integer2;
//	cout << result << endl;
//	result = static_cast<double>(integer1 / integer2);
//	cout << result << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	char letter;
//	cout << "Enter a letter: ";
//	cin >> letter;
//	cout << "The ASCII code of " << letter << " is " << static_cast<int>(letter);
//	// Finish this program
//	// as specified above.
//	return 0;
//}

//int main() {
//	int num1, num2;
//	cout << "this program swipe between two numbers\n";
//	cout << "enter a number";
//		cin >> num1;
//		cout << "enter second number";
//		cin >> num2;
//		num1 = num1 + num2;
//		num2 = num1 - num2;
//		num1 = num1 - num2;
//		cout << num1 << num2;
//}

//int main() {
//	int x;
//	cout << " multiple statement practice ";
//	cin >> x;
//	x += 6;
//	x - +4;
//	x *= 4;
//	x /= 2;
//	cout << "\n"<<x;
//}

//int main() {
//	int x;
//	cout << " precision practice ";
//	cout << "\n" << setw(9)<< setprecision(2)<< 34.789;
//	cout << "\n" << setw(6)<< setprecision(3)<< showpoint<< 7.0;
//	cout << "\n" << fixed << setprecision(3)<< 5.789e+12;
//	cout << "\n" << left << setprecision(7)	<< 67;
//}

//int main()
//{
//	string person = "Wolfgang Smith";
//	cout << setw(20);
//	cout << right;
//	cout << person << endl;
//	cout << left;
//	cout << person << endl;
//	return 0;
//}

// 
//int main()
//{
//char ch;
//
//cout << "This program has paused. Press Enter to continue.";
// cin.get(ch);
// cout << "It has paused a second time. Please press Enter again.";
// ch = cin.get();
// cout << "It has paused a third time. Please press Enter again.";
// cin.get();
// int number;
// cout << "Enter a number: ";
// cin >> number; // Read an integer
// cin.ignore();
// cout << "Enter a character: ";
// ch = cin.get(); // Read a character
// cout << "Thank You!\n"<<ch;
// return 0;
// }
 
//cmath library functions
//int main()
//{
//	//int x, y = -30;
//	double x, y=30.0;
// /*cout << "absolute value of -30 is ";
// x = abs(y);*/
//	//cout << "cosine of y=30 is ";
// //x = cos(y);
//	cout << "exponential of y=30 is ";
//	//x = exp(y);
//	//cout << "(for double) modulus of y=30 is ";
//	x = fmod(y, 4);
//
//	cout << "\n"<<x;
// return 0;
// }

// This program asks for the lengths of the two sides of a
// right triangle. The length of the hypotenuse is then
// calculated and displayed.
 
//int main()
// {
// double a, b, c;
//
// cout << "Enter the length of side a: ";
// cin >> a;
// cout << "Enter the length of side b: ";
// cin >> b;
// c = sqrt(pow(a, 2.0) + pow(b, 2.0));
// cout << "The length of the hypotenuse is ";
// cout << setprecision(2) << c << endl;
// return 0;
// }

//int main() {
//	double angle1 = 30, angle2 = 45, x = 625, y,z;
//	//x = sin(angle1) + cos(angle2);
//	z =0.2;
//	//cout << "a statement that adds the sine of angle1 to the cosine of angle2 " << x;
//	//y = pow(x, z);
//	//cout << "a statement that will find the fifth root of the variable x and store the result in the variable y \n " << y;
//	cout << "a statement that calculates the cosecant of the angle stored in the variable a, and stores it in the variable y \n";
//	double a, coscant, sina,p=-1;
//	cout << "Enter value of angle you want to find coscant of \n";
//	cin >> a;
//	double rad = (a / 180) * 3.14;
//	sina = sin(rad);
//	coscant = pow(sina,p);
//	cout << " coscant of " << a << " is " << coscant<<endl;
//	return 0;
//}


				//****		REVIEW QUESTIONS		****

// mystery to be solved
//int main() {
//	int age;
//	double pay;
//	char sectioaan;
//	cin >> age >> pay >> sectioaan;
//	cout << "age: " << age ;
//	cout << "\tpay: " << pay ; 
//	cout << "\tsection: "<< sectioaan << endl;
//}


//int main() {
//	int age;
//	double pay;
//	char sectioaan;
//	string description;
//	//cin >> description;
//	getline(cin, description);
//	cout << "desc: " << description;
//}

//
//
//int main() {
//	int qty=2233, salesReps=22;
//	const int rate=23;
//int	unitsEach = static_cast<char>(qty) / salesReps;
//salesReps %= 2;
////cout << salesReps;
////int east, west, north, south;
////east = west = north = south = 1;
////cout << "east " << east << " west " << west << " north " << north << " south " << south;
////cout << unitsEach;
//
//double divsales=230.00, totalAge=320282408240, population=202200202;
//
////cout << endl << setprecision(2) << fixed << setw(8) << divsales << endl;
////cout << endl << setprecision(4) << fixed << setw(12) << totalAge << endl;
//cout << setw(12) << fixed <<left << setprecision(8) << population;
//
//}


//int main()
//{
//	int number1, number2;
//	float quotient;
//	cout << "Enter two numbers and I will divide\n";
//	cin >> number1>> number2;
//	cout << "the first by the second for you.\n";
//	quotient = static_cast<float>(number1) / number2;
//	cout << quotient;
//		return 0;
//}


//int main()
//{
//double number, half=0;
//cout << "Enter a number and I will divide it\n";
//cout << "in half for you.\n";
//cin >> half;
//half /= 2;
//cout << fixed<< showpoint << half << endl;
//return 0;
//}


//int main() {
//	float cookies, sugar, butter, flour;
//	sugar = 48 / 1.5;
//	butter = 48;
//	flour = 48 / 2.75;
//	cout << "enter no. of cookies you want to make \n";
//	cin >> cookies;
//	sugar = 1.5/cookies ;
//	butter = 1/cookies;
//	flour = 2.75/cookies;
//	cout << "you need: " << endl;
//	cout << sugar << " cups of sugar" << endl;
//	cout << butter << " cups of butter" << endl;
//	cout << flour << " cups of flour" << endl;
//}

//int main()
//{
//    // Variables
//    const float COOKIES = 48,
//        SUGAR = 1.5,
//        BUTTER = 1,
//        FLOUR = 2.75;
//
//    float num_cookies,
//        total_butter,
//        total_sugar,
//        total_flour;
//
//    // Ask user how many cookies to make
//    cout << "\nHow many cookies do you want to make? ";
//    cin >> num_cookies;
//
//    // Calculate ingredients
//    total_sugar = (SUGAR * num_cookies) / COOKIES;
//    total_flour = (FLOUR * num_cookies) / COOKIES;
//    total_butter = (BUTTER * num_cookies) / COOKIES;
//
//    // Display amount of ingredients
//    cout << setprecision(2) << fixed;
//    cout << "\nTo make " << num_cookies << " cookies ";
//    cout << "you will need the following ingredients: \n";
//    cout << " - " << total_butter << " cups of butter\n";
//    cout << " - " << total_sugar << " cups of sugar\n";
//    cout << " - " << total_flour << " cups of flour\n";
//    cout << endl;
//
//    // Terminate Program
//    return 0;
//}

//int main() {
//	int const cookies = 30;
//	int servings = 10, caloriesperserving = 300, cookiesate, caloriesPerCookie;
//	caloriesPerCookie = caloriesperserving / 3;
//	cout << "how many cookies you ate? ";
//	cin >> cookiesate;
//	cookiesate *= caloriesPerCookie;
//	cout << "total calories served " << cookiesate;
//}

//int main()
//{
//	double cookies, cals = 300, total;
//
//	cout << "How many cookies did you eat? ";
//	cin >> cookies;
//
//	total = (cookies / 3) * cals; //'3' equals 3 cookies per serving -->  (30/3) = 10 servings
//
//	if (cookies <= 30 && cookies >= 0) /*Prevents negative numbers and over 30 numbers
//										 since the bag of cookie only holds 30 cookies*/
//	{
//		cout << "Total calories consumed: " << total << " calories.";
//	}
//	else
//	{
//		cout << "Number of cookies eaten is impossible! Try again!";
//	}
//
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}
//
//int main() {
//	int number1, number2;
//	srand(time(0));
//	number1 = rand() % 200;
//	number2 = rand() % 200;
//	cout << setw(4) <<left<<" "<< number1<<endl;
//	cout << setw(4) << left<< "+"<< number2<<endl;
//	cout << "-----------";
//	cin.get();
//	cout << setw(7) <<right << number1 + number2;
//}

//int main() {
//	float const areaOfSlice=14.125, pi=3.14159;
//	float diameter, area, radius,numberOfSlices;
//	srand(time(0));
//	cout << "Enter the diameter of pizza in inches"<<endl;
//	cin>>diameter;
//	radius = diameter / 2;
//	area = pi * pow(radius, 2);
//	numberOfSlices = area / areaOfSlice;
//	cout << "Number of slices of pizza are: \t" <<fixed<<setprecision(1)<<numberOfSlices<< endl;
//}

//
//int main() {
//	float const areaOfSlice=14.125, pi=3.14159;
//	float diameter, area, radius,numberOfSlices,NoOfPeople,pizzas;
//	srand(time(0));
//	cout << "Enter the diameter of pizza in inches"<<endl;
//	cin>>diameter;
//	cout << "Enter the number of people at party"<<endl;
//	cin>>NoOfPeople;
//	radius = diameter / 2;
//	area = pi * pow(radius, 2);
//	numberOfSlices = area / areaOfSlice;
//	cout << "Number of slices of pizza are: \t" <<fixed<<setprecision(1)<<numberOfSlices<< endl;
//
//	pizzas = (NoOfPeople * 4) / numberOfSlices;
//	cout << "Number of pizzas are: \t" <<fixed<<setprecision(1)<<pizzas<<" pizzas"<< endl;
//}

//int main() {
//	float angle;
//	cout << "Enter angle in radians" << endl;
//	cin >> angle;
//	double rad = (angle / 180) * 3.14;
//	cout << "Sin of angle is " << fixed << setprecision(4) << sin(rad)<<endl;
//	cout << "Cosine of angle is " << fixed << setprecision(4) << cos(rad)<<endl;
//	cout << "Tangent of angle is " << fixed << setprecision(4) << tan(rad)<<endl;
//}


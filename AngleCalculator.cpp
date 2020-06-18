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
	float angle;
	cout << "Enter angle in radians" << endl;
	cin >> angle;
	double rad = (angle / 180) * 3.14;
	cout << "Sin of angle is " << fixed << setprecision(4) << sin(rad)<<endl;
	cout << "Cosine of angle is " << fixed << setprecision(4) << cos(rad)<<endl;
	cout << "Tangent of angle is " << fixed << setprecision(4) << tan(rad)<<endl;
}

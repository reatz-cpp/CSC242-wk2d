#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	double radius;
	const double PI = 3.14159;
	double area;
	cout << "Enter radius\n";
	cin >> radius;
	area = PI * (radius * radius);
	cout << "The area of a circle with radius " << radius << " is " << area << endl;
	return 0;
}
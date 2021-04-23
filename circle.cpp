#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	double radius;
	double circumference;
	const double PI = 3.14159;
	double area;
	cout << "Enter radius\n";
	cin >> radius;
	area = PI * (radius * radius);
	circumference = 2 * PI * radius;
	cout << "The area and circumference of a circle with radius " << radius << " is " << area << " and " << circumference << endl;
	return 0;
}
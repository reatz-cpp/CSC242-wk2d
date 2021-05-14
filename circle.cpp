#include <iostream>
using namespace std;


class Circle
{
public:
	
	Circle(); 
	Circle(double r);  
	double area(); 
	double perimeter();
	void setRadius(double r); 
	double getRadius(); 
	
private:
	double radius;
};


Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double r)
{
	radius = r;
}

double Circle::area()
{
	return 3.14 * pow(radius, 2);
}

double Circle::perimeter()
{
	return 2 * 3.14 * radius;
}

void Circle::setRadius(double r)
{
	
	if (r >= 0)
		radius = r;

}

double Circle::getRadius()
{
	return radius;
}


int main()
{
	
	Circle c1;
	cout << "The area of the circle is: " << c1.area() ;
	return 0;

}
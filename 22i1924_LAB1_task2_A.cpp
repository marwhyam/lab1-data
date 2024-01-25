/*Implement a class named Point to represent a point with x and y coordinates. The class contains:
 Two attributes x and y that represent coordinates.
 Methods to get and set these attributes.
 A constructor that creates a point with specified coordinates.
A method named distance that returns the distance from the current point to another point whose x
and y coordinates are sent as arguments.*/

#include <iostream>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	point(int, int);
	void setx(int f);
	int getx();
	void sety(int s);
	int gety();
	float getdistance(point);
};

point::point(int x=0, int y=0): x(x), y(y){}
void point::setx(int f)
{
	x = f;
}

int point::getx()
{
	return x;
}

void point::sety(int s)
{
	y = s;
}

int point::gety()
{
	return y;
}

float point::getdistance(point other)
{
	float distance;
	int firstc = x - other.getx();
	int secondc = y - other.gety();
	distance = sqrt(firstc * firstc + secondc * secondc);
	return distance;
}

int main() {
	point p1(2, 4);
	point p2(6, 8);
	float dist = p1.getdistance(p2);
	cout << "DISTANCE BETWEEN THE POINTS IS: " << dist << endl;
	
}

#include <iostream>
using namespace std;


void MySum(float m, float n);
void MyDifference(float m, float n);
void MyProduct(float m, float n);
void MyQuotient(float m, float n);
void Square(float side);
void Rectangle(float length, float breadth);


int main()
{

	float x, y; //local scope means available only inside this main function
	cout << "\nEnter the value for x: ";
	cin >> x;
	cout << "\nEnter the value for y: ";
	cin >> y;

	MySum(x, y);//function call
	MyDifference(x, y);
	MyProduct(x, y);
	MyQuotient(x, y);
	Square(x);
	Rectangle(x, y);
}

//function with dummy parameters /arguments
void MySum(float m, float n) {
	//adding two numbers

	cout << "\nThe sum of two numbers is: " << (m + n) << endl;
}

void MyDifference(float m, float n) {
	//subtracting a numbers 

	cout << "\nThe difference of two numbers is: " << (m - n) << endl;
}

void MyProduct(float m, float n) {
	//multiplying two numbers

	cout << "\nThe product of two numbers is: " << (m * n) << endl;
}

void MyQuotient(float m, float n) {
	//dividing two numbers

	cout << "\nThe Quotient of two numbers is: " << (m / n) << endl;
}

void Square(float side) {
	cout << "\nThe area of square is: " << (side * side) << endl;
	cout << "\nThe perimeter of square is: " << (4 * side) << endl;
}

void Rectangle(float length, float breadth) {
	cout << "\nThe area of rectangle is: " << (length * breadth) << endl;
	cout << "\nThe perimeter of rectangle is: " << (2 * (length + breadth)) << endl;
}
// Chapter 4, Programming Challenge 23: Geometry Calculator
//
// Objective: Geometry Calculator
// Author: Edward White
// Date: 2/13/2018
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.1419;
	int choice;			// Choice for menu selection.
	double radius = 0;  // Radius of a circle  
	double area;
	double length;		// Length of a rectangle
	double width;		// width of a rectangle
	double height;		// Height of a triangle
	double base;		// Base of a triangle
	double num = 0.5;	// 0.5 to calculate area of a triangle

	cout << "\tGeometry Calculator\n\n"				// Calculator menu
		<< "1. Calculate the Area of a Circle\n"	//
		<< "2. Calculate the Area of a Rectangle\n" //
		<< "3. Calculate the Area of a Triangle\n"  //
		<< "4. Quit\n\n";							//
	cout << "Enter 1, 2, 3, or 4: ";
	cin >> choice;
	cout << fixed << showpoint << setprecision(2);	// Format numbers

	switch (choice)									// Respond to user's menu selection
	{

	case 1: cout << "Enter the radius of the circle: ";
			cin >> radius;

			if (radius < 0)												// Validate user input
			{															//
				cout << "Enter a positive number for the radius: ";		//
				cin >> radius;											//
			}															//
			else (radius > 0);											//
			area = PI * pow(radius, 2.0);					// Calculate area of a circle
			cout << "The area of the circle is: " << area;
			break;
			

	case 2: cout << "Enter the length of the rectangle: ";
			cin >> length;
			
		
			if (length < 0)												// Validate user input
			{															//
				cout << "Enter a positive number for length ";			//
				cin >> length;											//
			}															//
			else (length > 0);											//
				cout << "Enter the width of the rectangle: ";			//
				cin >> width;											//
			if (width < 0)												//
			{															//
				cout << "Enter a positive number for width: ";			//
				cin >> width;											//
			}															//
			if (width > 0)												//	
			{															//
				area = length * width;								// Calculate area of a rectangle
				cout << "The area of the rectangle is: " << area;
			}
			break;
			
	case 3: cout << "Enter the length of the base of the triangle: ";
			cin >> base;

			if (base < 0)															// Validate user input
			{																		//
				cout << "Enter a positive number for the length of the base: ";		//
				cin >> base;														//
			}																		//
			else (base > 0);														//
			cout << "Enter the height of the triangle: ";							//
			cin >> height;															//
			if (height < 0)															//
			{																		//
				cout << "Enter a positive number for the height: ";					//
				cin >> height;														//
			}																		//
			if (height > 0)															//
			{																		//
				area = base * height * 0.5;							// Calculate area of a triangle
				cout << "The area of the triangle is: " << area;
			}
			break;
			
	case 4: cout << "The program has ended.";										// Program ends if user enters "4"

	}
			
 return 0;
}
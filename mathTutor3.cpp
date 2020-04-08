// Chapter 4, Programming Challenge 11: Math Tutor
// Name: Edward White
// Date: 2/20/2018
#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime>   // For the time function
#include <iomanip>
using namespace std;

int main()
{
	// Constants
	const int MIN = 50;
	const int MAX = 450;
	const int ADDITION_CHOICE = 1,
			  SUBTRACTION_CHOICE = 2,
		      MULTIPLICATION_CHOICE = 3,
		      DIVISION_CHOICE = 4,
			  QUIT_CHOICE = 5;
	int choice;	 // To hold the menu choice
	int answer;  // To hold the answer
	unsigned seed = time(0);	// Time function
	srand(seed);				// Seed the random number generator
	int num1 = MIN + rand() % MAX;	// Generate two random numbers
	int num2 = MIN + rand() % MAX;  //
	

	do                                         
	{
		
		cout << "\n\t\tMath Tutor Menu\n\n"		// Display the menu
			<< "1. Addition Problem\n"			//
			<< "2. Subtraction Problem\n"		//
			<< "3. Multiplication Problem\n"	//
			<< "4. Division Problem\n"			//
			<< "5. Quit the Program\n";			//
		cout << "Enter your choice: ";			// User enters a choice
		cin >> choice;

		if (choice < ADDITION_CHOICE || choice > QUIT_CHOICE)	// input validation
		{
			cout << "Please enter a valid menu choice: ";
			cin >> choice;
		}




			switch (choice)
			{
				case ADDITION_CHOICE:
				answer = num1 + num2;
				cout << setw(5) << num1 << endl;			// Display addition problem
				cout << "+" << setw(4) << num2 << endl;
				cout << "-----\n\n";
				cout << "Enter the answer here: ";
				cin >> answer;
				if (answer != num1 + num2)					// input validation
				{
					cout << "The correct answer is: " << num1 + num2;
				}
				else cout << "That's correct! " << endl;
				break;

			case SUBTRACTION_CHOICE:
				answer = num1 - num2;
				cout << setw(5) << num1 << endl;			// Display subtraction problem
				cout << "-" << setw(4) << num2 << endl;
				cout << "-----\n\n";
				cout << "Enter the answer here: ";
				cin >> answer;
				if (answer != num1 - num2)					// input validation
				{
					cout << "The correct answer is: " << num1 - num2;
				}
				else cout << "That's correct! " << endl;
				break;

			case MULTIPLICATION_CHOICE:
				answer = num1 * num2;
				cout << setw(5) << num1 << endl;			// Display multiplication problem
				cout << "*" << setw(4) << num2 << endl;
				cout << "-----\n\n"; 
				cout << "Enter the answer here: ";
				cin >> answer;
				if (answer != num1 * num2)					// input validation
				{
					cout << "The correct answer is: " << num1 * num2;
				}
				else cout << "That's correct! " << endl;
				break;

			case DIVISION_CHOICE:
				cout << fixed << showpoint << setprecision(1);
				answer = num1 / num2;
				cout << num1 << " / " << num2 << endl;		// Display division problem
				cout << "Enter the answer here: ";
				cin >> answer;
				if (answer != num1 / num2)					// input validation
				{
					cout << "The correct answer is: " << num1 / num2;
				}
				else cout << "That's correct! " << endl;
				break;
			}
		} while (choice != 5);		// Menu displays after a menu choice until the user selects QUIT_CHOICE


	return 0;
}
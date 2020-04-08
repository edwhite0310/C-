// Convert the following for loop to a while loop:
// 
// for (int i = 1, i <= 10; i++)
// {
//      cout << i << " squared equals " << i * i << "\n";
// }
//
// Name: Edward White
// Date: 2/19/2018
//

#include <iostream>
using namespace std;

int main()
{
	int i = 1;	// i initialized to 1

	while (i <= 10)											// while loop iterates until "10 squared equals 100" is displayed
	{														//
		cout << i << " squared equals " << i * i << "\n";	//
		i++;												// Expression updated
	}
   
  return 0;
}

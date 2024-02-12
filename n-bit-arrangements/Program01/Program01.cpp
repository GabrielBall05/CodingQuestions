//====================
//Gabriel Ball
//02-10-24
//n-bit binary program
//====================

#include <iostream>
#include <iomanip>
using namespace std;

//string convert(int);
string convert(int);

int main()
{
	int n;
	//Long long for maximum capacity & unsigned for positive integers only
	unsigned long long int numOfPossibilities;

	cout << "Enter the number of bits (Must be > 0): ";
	cin >> n;
	//If 0 or not positive number:
	if (n <= 0)
	{
		cout << "There are no ways to arrange " << n << " bits" << endl;
		return 0; //End program
	}

	//Number of Possibilities is 2^n
	numOfPossibilities = pow(2, n);
	cout << "There are " << numOfPossibilities << " unique ways to arrange " << n << " bits" << endl << endl;
	cout << "Possibilities" << endl << "=============" << endl;

	for (int i = 0; i < numOfPossibilities; i++)
	{
		//Right align then setfill('0') because my conversion algorithm doesn't fill in 0's to the left
		//												 since it starts at i, not a set starting point
		//Also set width to # of bits with setw
		cout << setfill('0') << right << setw(n) << convert(i) << endl;
	}
}

string convert(int decimal)
{
	string binary;
	//Once the number reaches 0, leave loop and return binary
	while (decimal != 0)
	{
		if (decimal % 2 == 0)
		{
			//Add '0' to front of string
			binary = "0" + binary;
		}
		else
		{
			//Add '1' to front of string
			binary = "1" + binary;
		}

		decimal = decimal / 2;
	}

	return binary;
}
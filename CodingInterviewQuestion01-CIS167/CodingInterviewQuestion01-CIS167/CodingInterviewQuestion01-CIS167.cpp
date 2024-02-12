//==============================
//Gabriel Ball
//02-07-24
//Coding Interview Question - 01
//==============================

#include <iostream>
using namespace std;

void findNeedle(string, string);

int main()
{
	findNeedle("sad but sad", "sad");
	findNeedle("leetcode", "leeto");
	findNeedle("testingatester", "tester");
	findNeedle("asdf", "");
}

void findNeedle(string haystack, string needle)
{
	if (needle.length() == 0)
	{
		cout << -1 << endl;
		return;
	}

	bool found = false;
	for (int i = 0; i < haystack.length() && !found; i++)
	{
		if (haystack.substr(i, needle.length()) == needle)
		{
			cout << i << endl;
			found = true;
		}
	}

	if (!found)
	{
		cout << -1 << endl;
	}
}
#include<iostream>
using namespace std;

void Display(int iNo)
{
	static char iCnt = 1;
	static char ch = 'A';

	cout << ch << "\t";
	
	if(iCnt < iNo)
	{
		ch++;
		iCnt++;
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;

	cout << "Enter number: ";
	cin >> iValue;

	Display(iValue);

	cout << "\n";

	return 0;
}
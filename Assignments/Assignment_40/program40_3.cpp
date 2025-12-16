#include<iostream>
using namespace std;

void Display(int iNo)
{
	static int iCnt = iNo;

	cout << iCnt << "\t";
	
	if(iCnt > 1)
	{
		iCnt--;
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
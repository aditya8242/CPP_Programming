#include<iostream>
using namespace std;

int Sum(int iNo)
{
	static int iSum = 0;
	int iDigit = 0;

	iDigit = iNo % 10;
	iSum = iSum + iDigit;

	if(iNo != 0)
	{
		iNo = iNo / 10;
		Sum(iNo);
	}

	return iSum;
}

int main()
{
	int iValue = 0, iRet = 0;

	cout << "Enter number: ";
	cin >> iValue;

	iRet = Sum(iValue);

	cout << iRet << "\n";

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  123
//    Output:
//    6
//
//    Input2:  5
//    Output:
//    5
//
//    Input3:  1001
//    Output:
//    2
//
//    Input4:  9876
//    Output:
//    30
//
//    Input5:  10
//    Output:
//    1
//
/////////////////////////////////////////////////////////////////////////////////////////////////

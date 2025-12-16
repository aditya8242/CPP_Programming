#include<iostream>
using namespace std;

int Fact(int iNo)
{
	static int iFact = 1;

	//for(int iCnt = iNo; iCnt >= 1; iCnt--)
	//{
	//	iFact = iFact * iCnt;
	//}

	iFact = iFact * iNo;

	if(iNo > 1)
	{
		iNo--;
		Fact(iNo);
	}

	return iFact;
}

int main()
{
	int iRet = 0, iValue = 0;

	cout << "Enter number: ";
	cin >> iValue;

	iRet = Fact(iValue);

	cout << iRet << "\n";

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  5
//    Output:
//    120
//
//    Input2:  1
//    Output:
//    1
//
//    Input3:  3
//    Output:
//    6
//
//    Input4:  4
//    Output:
//    24
//
//    Input5:  6
//    Output:
//    720
//
/////////////////////////////////////////////////////////////////////////////////////////////////

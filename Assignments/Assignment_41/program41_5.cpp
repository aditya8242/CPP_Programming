#include<iostream>
using namespace std;

int Mult(int iNo)
{
	static int iMult = 1; 
	int iDigit = 0;

	//while(iNo != 0)
	//{
	//	iDigit = iNo % 10;
	//	iMult = iMult * iDigit;
	//	iNo = iNo / 10;
	//}

	iDigit = iNo % 10;
	iMult = iMult * iDigit;

	if(iNo > iDigit)
	{
		iNo = iNo / 10;
		Mult(iNo);
	}

	return iMult;
}

int main()
{
	int iValue = 0, iRet = 0;

	cout << "Enter number: ";
	cin >> iValue;

	iRet = Mult(iValue);

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
//    Input3:  111
//    Output:
//    1
//
//    Input4:  246
//    Output:
//    48
//
//    Input5:  102
//    Output:
//    0
//
/////////////////////////////////////////////////////////////////////////////////////////////////

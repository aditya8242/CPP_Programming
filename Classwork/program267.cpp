#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
{
	if(No1 > No2 && No1 > No3)
	{
		return No1;
	}
	else if(No2 > No1 && No2 > No3)
	{
		return No2;
	}
	else
	{
		return No3;
	}
}

int main()
{
	double dRet = 0.0, dValue1 = 10.0, dValue2 = 31.0, dValue3 = 8.0;

	dRet = Maximum(dValue1, dValue2, dValue3);

	cout << "Maximum is number is " << dRet << "\n";

	return 0;
}
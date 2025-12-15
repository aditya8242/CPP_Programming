#include<iostream>
using namespace std;

void Display()
{
	static int iCnt = 1;

	cout << iCnt << "\t";
	
	if(iCnt <= 4)
	{
		iCnt++;
		Display();
	}
}

int main()
{
	Display();
	cout << "\n";
	return 0;
}
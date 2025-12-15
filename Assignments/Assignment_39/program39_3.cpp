#include<iostream>
using namespace std;

void Display()
{
	static int iCnt = 5;

	cout << iCnt << "\t";
	
	if(iCnt > 1)
	{
		iCnt--;
		Display();
	}
}

int main()
{
	Display();
	cout << "\n";
	return 0;
}
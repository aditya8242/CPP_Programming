#include<iostream>
using namespace std;

void Display()
{
	static char ch = 'A';

	cout << ch << "\t";
	
	if(ch < 'F')
	{
		ch++;
		Display();
	}
}

int main()
{
	Display();
	cout << "\n";
	return 0;
}
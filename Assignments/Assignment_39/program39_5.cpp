#include<iostream>
using namespace std;

void Display()
{
	static char ch = 'a';

	cout << ch << "\t";
	
	if(ch < 'f')
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
#include<iostream>
using namespace std;

int Strlen(char *str)
{
	static int iCount = 0;

	if(*str != '\0')
	{
		iCount++;
		str++;		// he takaycha visarlo hoto
		Strlen(str);
	}

	return iCount;
}

int main()
{
	int iRet = 0;
	char arr[20] = {'\0'};

	cout << "Enter string: ";
	cin >> arr;

	iRet = Strlen(arr);

	cout << iRet << "\n";

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Testcases successfully handled by the application
//
//    Input1:  Hello
//    Output:
//    5
//
//    Input2:  a
//    Output:
//    1
//
//    Input3:  OpenAI
//    Output:
//    6
//
//    Input4:  CppProgramming
//    Output:
//    14
//
//    Input5:  Test123
//    Output:
//    7
//
/////////////////////////////////////////////////////////////////////////////////////////////////

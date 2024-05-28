#include <iostream>
#include <Windows.h>
#include <wincon.h>
using namespace std;

int main(void)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < 16; i ++)
	{
		SetConsoleTextAttribute(hConsole, i);
		cout << i << " HELLO WORLD" << endl;
	}
}

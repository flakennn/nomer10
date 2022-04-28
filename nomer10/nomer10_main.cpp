#include <iostream>
#include <string>
#include <windows.h>
#include "nomer10.h"
using namespace std;
int main()
{
	Student S("Dmitiy", "Rizhkov", "Andreevich", 18, 0);
	S.print();
	cout << endl;
	Boss B("Mikhail", "Terentev", "Pavlovich", 40, 10);
	B.print();
	S.~Student();
	B.~Boss();
}

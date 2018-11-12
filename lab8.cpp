#include "pch.h"
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	int n;

	int a[10];
	cout << "Massive: ";
	for (int i = 1; i <= 10; i++) {
		cin >> a[i];
	}
	cout << "";
	cout << "Numbers with even indexes: ";
	
	for (int i = 0; i <= 10; i++) {

		if (a[i] < 0) {
			n = i;
		}
	}
	cout << " " << endl;
	
	system("pause");
	return 0;

}

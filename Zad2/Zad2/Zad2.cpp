﻿#include <iostream>
using namespace std;
int main()
{
	for (int wiersz = 0; wiersz < 4; wiersz++)
	{
		for (int kolumna = 0; kolumna < 5; kolumna++) {
			if ((wiersz == 1 && kolumna == 2) or (wiersz == 2 && kolumna == 2)) {
				cout << " @ ";
			}
			else {
				cout << " * ";
			}
		}
		cout << "\n";
	}
	return 0;

}

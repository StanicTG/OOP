#include <iostream>
#include <stdio.h>

using namespace std;

void funkcija(int n, int* niz) {
	if (n <= 0) {
		return;
	}
	niz[0] = 1;
	if (n > 1) {
		niz[1] = 1;
	}

	for (int i = 2; i < n; i++) {
		niz[i] = niz[i - 1] + niz[i - 2];
	}
}


int main() {

	int n;

	cout << "Unesite velicinu niza: " << endl;
	cin >> n;

	if (n <= 0 || n >= 1000) {
		cout << "Unesena neispravna velicina" << endl;
		return 1;
	}

	int niz[1000];

	funkcija(n, niz);

	cout << "Fibonacci niz (" << n << " elemenata): ";
	for (int i = 0; i < n; i++) {
		cout << niz[i] << " " <<endl;
	}



	return 0;
}
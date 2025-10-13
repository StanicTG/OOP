#include <iostream>

using namespace std;

int& elementReferenca(int arr[], int i) {
	return arr[i];
}


int main() {
	int niz[5] = { 1, 2, 3, 4, 5 };
	int i = 2;
	elementReferenca(niz, i)++;

	for (int j = 0; j < 5; j++)
		cout << niz[j] << " ";
	

	cout << endl;
	return 0;
}
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);

	for (auto& c : s) {
		if (isalpha(static_cast<unsigned char>(c)))
			c = toupper(static_cast<unsigned char>(c));

		else if (isdigit(static_cast<unsigned char>(c)))
			c = '*';
		else if (c == ' ' || c == '\t')
			c = '_';

	}

	cout << s << endl;
	return 0;
}




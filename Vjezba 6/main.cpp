#include "data_box.h"
using namespace std;


int main() {
	DataBox a(2);
	a.append(5);
	a.append(10);
	a.append(15);
	a.debug("a");

	DataBox b = a;
	b.debug("b");

	DataBox c = move(a);
	c.debug("c");

	for (int i = 0; i < 5; i++)
		c.append(i + 100);
	c.debug("c nakon dodavanja");

	return 0;
}
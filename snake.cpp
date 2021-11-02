#include <iostream>
using namespace std;


int main() {
	int n,qt=0;

	cout << "enter a number and get a snake!!!! ";
	cin >> n;


	qt= n/2;

	for (int i = 0; i < qt; i++)

		cout << "*#";

	if (n%2 !=0)
	{
		cout << "*";
	}

	return 0;

}

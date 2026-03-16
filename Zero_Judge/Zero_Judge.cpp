#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input;
	while (cin >> input) {
		string hexcolor = input.substr(1);
		int r = stoi(hexcolor.substr(0, 2), nullptr, 16);
		int g = stoi(hexcolor.substr(2, 2), nullptr, 16);
		int b = stoi(hexcolor.substr(4, 2), nullptr, 16);
		cout << r << " " << g << " " << b << endl;
	}
}


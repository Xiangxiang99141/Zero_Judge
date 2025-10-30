#include <iostream>
using namespace std;
int main()
{
    string input = "";
	cin >> input;
	int str_size = input.length();
	for (int i = 0; i < str_size; i++) {
		for (int j = 1; j <= str_size-i; j++) { //原始長度-已輸出長度
			if (i == 0 &&i == j)  continue;
			cout << input.substr(i, j) << endl;
		}
	}
}


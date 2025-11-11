#include <iostream>
#include <cctype>
#include <string>
//#include <algorithm>
using namespace std;
//string a[] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
int main()
{
    string input="";
    while (cin >> input) {
        //string new_str = "";
        for (char c : input) {
			bool isUpper = isupper(c);
            char lower_c = tolower(c);
            if (isUpper) {
                if (int(c)-3 < 65) {
					cout << (char)(90-65-(c - 3));
				}
				else {
					cout << (char)(c - 3);
                }
			}
			else {
                if (int(c) - 3 < 97) {
                    cout << (char)(122-97-(c - 3));
                }
                else {
                    cout << (char)(c - 3);
                }
            }
        }
		cout << endl;
    }
}


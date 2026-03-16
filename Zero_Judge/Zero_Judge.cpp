#include <iostream>
using namespace std;

char splitChar[2] = { '?','&' };

void split(string, char[]);

int main()
{
    string input;
    while (cin >> input) {
        split(input, splitChar);
    }
}


void split(string s, char cs[]) {
    size_t p = s.find(cs[0]);
    if (p != string::npos) {
        string url = s.substr(0, p);
        cout << "URL=" << url << endl;
    }
    string property = s.substr(p+1); 
    string property_ford = "";
    do {
        p = property.find(cs[1]);
        property_ford = property.substr(0, p);
        property = property.substr(p + 1);
		cout << property_ford << endl;
    } while (p != string::npos);
}

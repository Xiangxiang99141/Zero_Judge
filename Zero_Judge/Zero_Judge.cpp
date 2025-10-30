#include <iostream>
#include <vector>
#include <string>
using namespace std;
string split(string s);
string split_input(string i) {
    vector <string> s;
    string result = "";
    s.push_back(split(i));
    for (int j = s.size(); j >= 0; j--) {
        if (j == 0) result += s[j];
		else result += s[j] + " ";
    }
    return result;
}

string split(string s) {
	auto a = s.find(" ");
	string test =  s.substr(0, a) ;
    //cout << test << endl;
	return test;
}

int main()
{
    vector<string> numbers;
    string input="";
    while (cin >> input) {
        if (input == "- 9999") break;
        numbers.push_back(split_input(input));
    }

}


#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
void split(string ,vector<string>&);

void split(string s,vector<string>&result) {
    //vector<string> result;
    stringstream ss(s);
	string word;
    while (ss >> word) {
		result.push_back(word);
    }
	//return result;
}

int main()
{
    vector<string> numbers;
    string input="";
    vector<string> result;
    while (getline(cin,input)) {
		result.clear();
        if (input == "-9999") break;
		split(input, result);
        for (int i = result.size() - 1; i >= 0; i--) {
			cout << result[i];
            if (i != 0) cout << " ";
            else cout << endl;
        }
    }
}


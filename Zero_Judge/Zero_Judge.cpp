#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
//void split(string s,vector<string>&result) {
//    //vector<string> result;
//    stringstream ss(s);
//	string word;
//    while (ss >> word) {
//		result.push_back(word);
//    }
//	//return result;
//}

int main()
{
    vector<int> numbers;
    int input=0;
    int max = 0;
    //vector<string> result;
    while (cin >> input) {
		numbers.push_back(input);
		if (input > max) {
			max = input;
		}
    }

    for (int num : numbers) {
		int de = max - num/2;
        for (int i = 0; i < de; i++) {
			cout << " ";
        }
        for (int j = 0; j < num; j++) {
			cout << "*";
        }
        for (int i = 0; i < de; i++) {
            cout << " ";
        }
		cout << endl;
    }
}


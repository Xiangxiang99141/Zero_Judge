#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <functional>
using namespace std;

void split_number_string(vector<int>& v)
{
	string t;
	getline(cin, t);
	stringstream ss(t);
	string word;
	while (ss >> word)
	{
		v.push_back(stoi(word));
	}
}

int main()
{
    string s = "";
    getline(cin,s);
    vector<int>pass_numbers;
	split_number_string(pass_numbers);
	sort(pass_numbers.begin(), pass_numbers.end(), less<int>());
	const int str_len = s.size();
	string new_str = "";
	for (int i = 0; i < str_len; i++) {
		//找當前位置是否在pass_numbers中
		vector<int>::iterator it = find(pass_numbers.begin(), pass_numbers.end(), i + 1);
		if (it == pass_numbers.end()) {
			new_str += s[i];
		}
	}
	cout << new_str << endl;
}


#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int n = 0;
    string input = "";
    cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
        vector<float> words;
		getline(cin, input);
        std::stringstream ss(input);
        string word;
        while (ss >> word) {
            words.push_back(stof(word));
        }

        if (words[0] == words[1]) {
            cout << "DRAW" << endl;
        }
        else {
            if (words[2] == 1) {
				if (words[0] > words[1]) cout << "A Win" << endl;
				else cout << "B Win" << endl;
            }
            else if(words[2] == -1) {
                if (words[0] < words[1]) cout << "A Win" << endl;
                else cout << "B Win" << endl;
            }
        }
	}
}


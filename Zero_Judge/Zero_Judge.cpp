#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
void split(const string&, const string&);
int main()
{
    string input = "";
	while (getline(cin,input)) {
		split(input," ");
		//cin.ignore();
	}

}

void split(const string& str, const string& delim = " ") {
	vector<int> parts;
	stringstream ss(str);
	string word;
	while (ss >> word) {
		parts.push_back(stoi(word));
	}
	/*計算bmi*/
	double height = parts[0] / 100.0;
	double bmi = parts[1] / pow(height , 2);
	/*娶到小數點後第二位*/
	bmi = round(bmi * 1000) / 1000.0;

	/*判斷*/
	if (bmi >= 35) {
		cout << setiosflags(ios::fixed) << setprecision(1) << bmi << " 異常範圍:重度肥胖" << endl;
	}
	else if (bmi < 35 && bmi >= 30) {
		cout << setiosflags(ios::fixed) << setprecision(1) << bmi << " 異常範圍:中度肥胖" << endl;
	}
	else if (bmi < 30 && bmi >= 27) {
		cout << setiosflags(ios::fixed) << setprecision(1) << bmi << " 異常範圍:輕度肥胖" << endl;
	}
	else if (bmi < 27 && bmi >= 24) {
		cout << setiosflags(ios::fixed) << setprecision(1) << bmi << " 異常範圍:過重" << endl;
	}
	else if (bmi < 24 && bmi >= 18.5) {
		cout << setiosflags(ios::fixed) << setprecision(1) << bmi << " 正常範圍" << endl;
	}
	else {
		cout << setiosflags(ios::fixed) << setprecision(1) << bmi << " 體重過輕" << endl;
	}
}
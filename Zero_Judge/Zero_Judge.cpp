#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
void split(const string&, const string&);
int main()
{
    string input = "";
	while (getline(cin,input)) {
		split(input," ");
	}

}

void split(const string& str, const string& delim = " ") {
	vector<float> parts;
	size_t start = 0;
	size_t end = str.find(delim);
	while (end != string::npos) {
		parts.push_back(stoi(str.substr(start, end-start)));
		start = end + delim.length();
		end = str.find(delim, start);
	}
	parts.push_back(stoi(str.substr(start, end)));
	
	/*計算bmi*/
	double bmi = parts[1] / pow((parts[0] / 100), 2);
	/*娶到小數點後第二位*/
	bmi = round(bmi * 100) / 100;

	/*判斷*/
	if (bmi >= 35) {
		cout << fixed << setprecision(1) << bmi << " 異常範圍:重度肥胖" << endl;
	}
	else if (bmi < 35 && bmi >= 30) {
		cout << fixed << setprecision(1) << bmi << " 異常範圍:中度肥胖" << endl;
	}
	else if (bmi < 30 && bmi >= 27) {
		cout << fixed << setprecision(1) << bmi << " 異常範圍:輕度肥胖" << endl;
	}
	else if (bmi < 27 && bmi >= 24) {
		cout << fixed << setprecision(1) << bmi << " 異常範圍:過重" << endl;
	}
	else if (bmi < 24 && bmi >= 18.5) {
		cout << fixed << setprecision(1) << bmi << " 正常範圍" << endl;
	}
	else {
		cout << fixed << setprecision(1) << bmi << " 體重過輕" << endl;
	}
}


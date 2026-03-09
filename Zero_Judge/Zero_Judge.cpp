#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void split(string, int[]);
int main()
{
    string num = "";
    int nums[3] = { 0 };
    while (cin >> num) {
        //cout << num;
        split(num, nums);
        nums[2] = abs(nums[0] + nums[1]);
        cout << nums[0] << "," << nums[1] << "," << nums[2];
        cout << endl;
    }
}

void split(string str, int ns[]) {
    auto pt = str.find(".");
    if (pt != std::string::npos) {
		ns[0] = stoi(str.substr(0, pt));
        string t = str.substr(pt + 1);
        size_t first = t.find_first_not_of('0');
        if(first != std::string::npos) {
            size_t last = t.find_last_not_of('0');
            ns[1] = stoi(t.substr(first, last - first + 1));//只擷取前後不是0的區塊
        }
        else ns[1] = 0;
    }
    else {
        ns[0] = stoi(str);
    }
}


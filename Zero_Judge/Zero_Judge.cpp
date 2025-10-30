#include <iostream>
#include <vector>
using namespace std;
vector<int> getMaxMin(vector<int> i);
int main()
{
    vector<int> numbers;
    int behine_zero = 0;
    int input=0;
	vector<int> max_min;
    while (cin >> input) {
        if (input == -9999) break;
        if (input < 0) behine_zero++;
        numbers.push_back(input);
    }
	max_min = getMaxMin(numbers);
	cout << max_min[0] << "," << max_min[1] << "," << numbers.size() - behine_zero << "," << behine_zero << endl;


    //std::cout << "Hello World!\n";
}

vector<int> getMaxMin(vector<int> i) {
    vector<int> t;
	int max = i[0];
	int min = i[0];
	for (int n : i) {
		if (n > max) max = n;
		if (n < min) min = n;
	}
	t.push_back(max);
	t.push_back(min);
    return t ;
}
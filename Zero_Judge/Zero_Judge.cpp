#include <iostream>
using namespace std;
bool isPrime(int number);
int main()
{
    int x = 0;
    while (cin >> x) {
        if (x == 1) {
			cout << x << "不是質數" << endl;
        }
		else cout << x << (isPrime(x) ? "是質數" : "不是質數") << endl;
    }
    
}
bool isPrime(int number)
{
    for (int i = 2; i < number - 1; i++) {
		if (number % i == 0)
			return false;
    }
    return true;
}


#include <iostream>
using namespace std;
bool isPrime(int);
int main()
{
    int x = 0;
    while(cin >> x){
        for (int a = x-1; a > 1; a--) {
            if (isPrime(a)) {
                cout << a << endl;
                break;
            }
        }
        
    }
}
bool isPrime(int number)
{
    if (number <= 1) return false;
    else if (number <= 3) return true;
    else if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    else {
        for (int i = 5; i * i <= number; i = i + 6) { // 從 5 開始，步長為 6
            if (number % i == 0 || number % (i + 2) == 0) {
                return false;
            }
        }
    }
    return true;
}


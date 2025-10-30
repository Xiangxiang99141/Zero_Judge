/*
讓使用者輸入一個正整數 n，接著依底下規則輸出一行字串。

- 從數字1到n，依序出現在字串中

- 每個數字的後面會連接三種符號（+，-，*）之一

- 連接的規則是根據該數字除以3的餘數去決定

- 當數字是3的倍數餘1，則連接一個 +

- 當數字是3的倍數餘2，則連接二個 –

- 當數字是3的倍數，則連接三個 *
*/

#include <iostream>
#include <string>
using namespace std;

void displayResult(int i);
int main()
{
    int a = 0;
    while (cin >> a) {
        displayResult(a);
    }
}

void displayResult(int a) {
    string result = "";

    for (int i = 1; i <= a; i++)
    {
        switch (i % 3)
        {
        case 0:
            result += to_string(i) + "***";
            break;
        case 1:
            result += to_string(i) + "+";
            break;
        case 2:
            result += to_string(i) + "--";
            break;
        default:
            break;
        }
    }
    std::cout << result << endl;
}




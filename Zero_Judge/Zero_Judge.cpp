/*
試撰寫一程式可輸入兩個 ，並判斷輸入的 的區間中完全平方數的個數。
(完全平方數為：1, 4, 9, 16, 25)
輸入說明
輸入有多筆測資，每一列為一筆測資，每筆測資有兩個正整數。
輸出說明
輸出該筆測資之對應訊息於一列並換行。
*/



#include <iostream>
#include <cmath>
using namespace std;
int num1 = 0, num2 = 0; //輸入變數
bool isPerfectSquare(int);
int main()
{
    int count = 0;        //計數變數
    while (cin >> num1 >> num2) {
        count = 0;
        for (int i = min(num1,num2); i <= max(num1,num2); i++) {
            if (isPerfectSquare(i)) {
                count++;
            }
		}
		cout << count << endl;
    }
}
bool isPerfectSquare(int n) {
    /*開根號 -> 取整 -> 值平方 == 輸入值 ，回傳true else false*/
    int square_num = (int)sqrt(n);
    if (square_num * square_num == n) return true; 
    else return false;
}

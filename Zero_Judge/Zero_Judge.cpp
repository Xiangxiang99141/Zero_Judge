#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int year = 0;
    std::string a[10] = { "甲","乙","丙","丁","戊","己","庚","辛","壬","癸" };
    std::string b[12] = { "子","丑","寅","卯","辰","巳","午","未","申","酉","戌","亥"};
    int basic_year = 1954;
    int basic_posistion[2] = { 0,6 };
    while (cin >> year) {
        //判斷與基本年差距
		int diff = year - basic_year;
        //計算循環幾次跟榆樹
        int ten_gan = ((diff % 10)+10)%10;
        int float_zhi = ((basic_posistion[1] + diff % 12) + 12)%12; //雙取榆樹讓數字變為正數
        cout << a[ten_gan] << b[float_zhi];
        cout << endl;
    }
}



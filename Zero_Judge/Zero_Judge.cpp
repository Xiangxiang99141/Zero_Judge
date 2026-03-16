#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int year = 0;
    std::string a[12] = { "鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗","豬" };
    int basic_year = 2025;
    int basic_posistion =  5 ;
    while (cin >> year) {
        //判斷與基本年差距
		int diff = year - basic_year;
        //計算循環幾次跟榆樹
        int float_zhi = ((basic_posistion + diff % 12) + 12)%12; //雙取榆樹讓數字變為正數
        cout << a[float_zhi] << endl;
    }
}



/*
小明在一間網通廠設計硬體，因規定硬體的密碼必須亂數產生。但小明想偷偷利用MAC來產生可反推之密碼
MAC的格式為 AA:BB:CC:DD:EE:FF，共48位元（6個位元組），以十六進位表示
他將第一、二為一組進行XOR運算，三、四為一組進行AND運算，五、六為一組進行OR運算
運算結果組合起來當成密碼
輸入說明
輸入有多筆測資，每一列為一筆測資，每筆測資為一個MAC Address。
輸出說明
輸出該筆測資之對應訊息於一列並換行。
*/


#include <iostream>
#include <iomanip> // 用於 hex, setw, setfill
using namespace std;
int main()
{
    // 儲存 6 個 byte 的 MAC 位址數值
    // 使用 int 即可，雖然是 byte 但 int 處理起來方便
    int mac[6];
    char separator; // 用來吃掉中間的冒號 ':'
    while(cin >> hex >> mac[0]){
        cin >> separator;
        // 輸入部分
        // 格式為 AA:BB:CC:DD:EE:FF
        // cin >> hex 會自動把讀到的 "AA" 轉成整數 170
        for (int i = 1; i < 6; i++) {
            cin >> hex >> mac[i];

            // 如果不是最後一個數字，後面會有冒號，要讀掉它
            if (i < 5) {
                cin >> separator;
            }
        }

        // 運算部分
        // 1. 第一、二組 XOR (互斥或)
        int part1 = mac[0] ^ mac[1];

        // 2. 第三、四組 AND (及)
        int part2 = mac[2] & mac[3];

        // 3. 第五、六組 OR (或)
        int part3 = mac[4] | mac[5];

        // 輸出部分
        // 設定輸出為十六進位 (hex)、大寫 (uppercase)
        // 設定寬度為 2 (setw(2))，不足補 0 (setfill('0'))
        cout << hex << uppercase << setfill('0');

        cout << setw(2) << part1
            << setw(2) << part2
            << setw(2) << part3 << endl;
    }
    return 0;
}


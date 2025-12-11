#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
vector<string> card = { "1","2","3","4","5","6","7","8","9","10","J","Q","K" };
int main()
{
    int n;
    string f[2] = {"0","0"};
	std::cin >> n;
    int sum[2] = { 0,0 };
    for (int i = 0; i < n; i++) {
		cin >> f[0] >> f[1];
        int  card1 = std::distance(card.begin(),find(card.begin(), card.end(), f[0]))+1; //小明
		auto card2 = std::distance(card.begin(), find(card.begin(), card.end(), f[1]))+1;
		card1 > card2 ? (sum[1] += card1 - card2) : (sum[0] += card2 - card1);
    }
    cout << sum[0] << " " << sum[1];
}


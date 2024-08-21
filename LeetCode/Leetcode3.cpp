//easy leetcode problem to solve
//array addition 
#include<iostream>
using namespace std;
int maxProfit(int prices[], int n) {
    int profit = 0;
    for(int i=1; i<n; i++) {
        if(prices[i] > prices[i-1]) {
            profit += prices[i] - prices[i-1];
        }
    }
    return profit;
}
int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(prices[0]); //6
    cout<<maxProfit(prices, n); //7
    return 0;
}
//hello
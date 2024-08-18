//A cpp program to identify best performing stocks in a given array of stock prices
//The program uses a greedy approach to identify the best performing stocks
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
}// Time Complexity: O(n) space Complexity: O(1) ....
//practice link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
//hero
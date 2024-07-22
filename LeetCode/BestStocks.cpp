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
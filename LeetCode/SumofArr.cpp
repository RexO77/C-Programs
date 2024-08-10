//To find the sum of arrays
#include <iostream>
using namespace std;
int sumOfArr(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]); //5
    cout<<sumOfArr(arr, n); //15
    return 0;
}// Time Complexity: O(n) space Complexity: O(1) 
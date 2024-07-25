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
//The above code snippet is a simple program to find the sum of elements in an array. The function sumOfArr takes an array and its size as input and returns the sum of all elements in the array. The main function initializes an array and calls the sumOfArr function to find the sum of the array elements. The time complexity of the sumOfArr function is O(n) as it iterates through all elements of the array, and the space complexity is O(1) as it uses a constant amount of memory. The program outputs the sum of the array elements, which is 15 in this case.
//test 
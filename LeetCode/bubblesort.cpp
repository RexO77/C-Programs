#include<iostream> //Bubble Sort
using namespace std;
void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]); //5
    bubbleSort(arr, n);     //1 2 3 4 5
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}// Time Complexity: O(n^2) space Complexity: O(1)
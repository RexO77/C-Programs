#include<iostream>
using namespace std;
void p1(int n){ //pattern 1
    for(int i=0 ;i<n;i++){
        for(int j =0; j<n;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void p2(int n){ //pattern 1 with numbers
    for(int i= 0 ;i<=n ;i++){
        for(int j=n-i+1 ; j<=n ; j++){
            cout<<"*";
        }cout<<endl;
    }
}
void p3(int n){ //pattern 2 with numbers
    for(int i= 0 ;i<=n ;i++){
        for(int j=n-i+1 ; j<=n ; j++){
            cout<<" "<<i;
        }cout<<endl;
    }
}
void p4(int n){ //triangle pattern
    for(int i= 0 ;i<=n ;i++){
        for(int j=i+1 ; j<=n ; j++){
            cout<<"*";
        }cout<<endl;
    }
}
void p5(int n){ //triangle pattern
    for(int i= 1 ;i<=n ;i++){
        for(int j=1 ; j<=i ; j++){
            cout<<"*";
        }cout<<endl;
    }
}
void p6(int n){ //pattern 3 with numbers
    for(int i=0 ;i<=n ;i++){
        for(int j= i+1 ; j<=n ; j++){
            cout<<" "<<j;
        }cout<<endl;
    }
}
void p7(int n){ //triangle
    for(int i = 0;i<n;i++){
        //space
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j< 2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j = 0;j<n-i-1;j++){
            cout<<"";
        }cout<<endl;
    }
}
void p8(int n){ //inverted triangle
    for(int i =0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void p9(int n){ //combination of 2 triangle patter ie p7 & p8
    for(int i =0;i<n;i++){
        //spaces
        for(int j =0 ;j<n-i;j++){
            cout<<" ";
        }
        //stars
        for(int j = 0;j<2*i-1;j++){
            cout<<"*";
        }
        //spaces
        for(int j =0 ;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i =0;i<n;i++){
        //spaces
        for(int j = 0;j <i; j++){
            cout<<" ";
        }
        //stars
        for(int j = 0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //spaces
        for(int j = 0;j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void p10(int n){// left Arrow by combining 2 triangle
    for(int i = 0;i<n;i++){
        for(int j =0 ;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
    for(int i =0;i<=n;i++){
        for(int j = i;j<=n;j++){
            cout<<"*";
        } cout<<endl;
    }
}
void p11(int n){//left Arrow without combining 2 triangle
    for(int i =0;i<2*n-1;i++){
        int star = i;
        if(i>=n){
            star = 2*n-i-2;
        }
        for( int j=0;j<star ;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void p12(int n){//0 1 pattern
    for(int i=0; i<n;i++){
        int start =1;
        if(i%2==0) start = 0;
        else start = 1;
        for(int j=0;j<=i;j++){
            cout<<start<<" "; //1
            start = 1-start; //0
        }
        cout<<endl;
    }
}
void p13(int n){ 
    int space = 2 * (n - 1); // Initialize space once before the loop

    for (int i = 1; i <= n; i++) {
        // Numbers increasing
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        // Numbers decreasing
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2; // Decrement space inside the loop
    }
}
void p14(int n){
    int num =1;
    for(int i=0; i<n; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<num<<" ";
            num +=1;
        }cout<<endl;
    }
}
void p15(int n){
    for(int i =0;i<n;i++){
        for(char ch = 'A';ch<= 'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void p16(int n){
    for(int i=1;i<=n;i++){
        for(char ch = 'A';ch<='A'+(n-i);ch++){
            cout<<ch<<" ";
        }cout<<endl;
    }
}
void p17(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j =0;j<=i;j++){
            cout<<ch<<" ";
        }cout<<endl;
    }
}
void p18(int n) {
    // Outer loop to handle the number of rows
    for (int i = 0; i < n; i++) {
        // Inner loop to handle the spaces before the characters
        for (int j = 0; j < n - i - 1; j++) cout << " "; // Print space
        // Initialize the starting character
        char ch = 'A';
        // Calculate the breakpoint where the character should start decrementing
        int bp = (2 * i + 1) / 2;
        // Inner loop to handle the characters in each row
        for (int j = 0; j <= 2 * i; j++) {
            cout << ch; // Print the character
            if (j < bp) ch++; // Increment the character until the breakpoint
            else ch--; // Decrement the character after the breakpoint
        }cout << endl;
    }
}
void p19(int n){
    //what is 
}
int main() {
    p18(5); 
    return 0;
}
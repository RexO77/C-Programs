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
void p12(int n){ //0 1 pattern
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
void p13(int n) {
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

int main(){
    p13(5);
    return 0;
}
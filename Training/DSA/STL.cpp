#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <char> st; // Standard template library
    string str = "Hello";
    cout<<"Original String "<<str<<endl;
    // Push all characters of the string onto the stack
    for (char ch : str) {
        st.push(ch);
    }
    
    // Pop all characters from the stack to reverse the string
    cout << "Reversed string: ";
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;

    return 0;
}
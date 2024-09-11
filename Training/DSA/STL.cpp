#include<iostream>
#include<stack>
#include <vector>
using namespace std;

int main(){
    stack <char> st; // Standard template library
    vector <int> v({1,2,3,4,5}); //initializing vector using initializer list
    v.push_back(6); //initializing using push back method
    cout<<"Size of the vector is: "<<v.size()<<endl;
    //all vector operations
    cout<<"Vector elements are: ";
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"Vector elements after pop_back are: ";
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Top element of the vector is: "<<v.back()<<endl;
    cout<<"Is the vector empty? "<<v.empty()<<endl;
    cout<<"Size of the vector is: "<<v.size()<<endl;
    cout<<"Capacity of the vector is: "<<v.capacity()<<endl;
    v.clear();
    cout<<"Is the vector empty? "<<v.empty()<<endl;
    cout<<"Size of the vector is: "<<v.size()<<endl;
    cout<<"Capacity of the vector is: "<<v.capacity()<<endl;
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
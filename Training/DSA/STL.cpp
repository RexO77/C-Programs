#include <iostream>
#include <stack>
#include <vector>
#include <set>

using namespace std;

// Function to demonstrate vector operations
void vectorOperations() {
    vector<int> v({1, 2, 3, 4, 5}); // Initializing vector using initializer list
    v.push_back(6); // Adding an element using push_back method

    cout << "Size of the vector is: " << v.size() << endl;

    // Display all vector elements
    cout << "Vector elements are: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Remove the last element
    v.pop_back();
    cout << "Vector elements after pop_back are: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Display the top element
    cout << "Top element of the vector is: " << v.back() << endl;

    // Check if the vector is empty
    cout << "Is the vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // Display the size and capacity of the vector
    cout << "Size of the vector is: " << v.size() << endl;
    cout << "Capacity of the vector is: " << v.capacity() << endl;

    // Clear the vector
    v.clear();
    cout << "Is the vector empty? " << (v.empty() ? "Yes" : "No") << endl;
    cout << "Size of the vector is: " << v.size() << endl;
    cout << "Capacity of the vector is: " << v.capacity() << endl;
}

// Function to reverse a string using a stack
void reverseStringUsingStack(const string& str) {
    stack<char> st;

    cout << "Original String: " << str << endl;

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
}

// Function to demonstrate set operations
void setOperations() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    // Display the maximum size of the set
    cout << "Max Size: " << s.max_size() << endl;

    // Display all set elements
    cout << "Set elements are: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    // Display the first element using the iterator
    if (!s.empty()) {
        cout << "First element: " << *s.begin() << endl;
    }
}

int main() {
    // Demonstrate vector operations
    vectorOperations();

    // Reverse a string using a stack
    string str = "Hello";
    reverseStringUsingStack(str);

    // Demonstrate set operations
    setOperations();

    return 0;
}
     
    //  In the above code, we have demonstrated the following STL operations: 
    //  Vector operations:  We have demonstrated various vector operations such as push_back, pop_back, back, empty, size, capacity, and clear. Reverse a string using a stack:  We have reversed a string using a stack. Set operations:  We have demonstrated set operations such as insert, max_size, empty, and begin. 
    //  Output 
    //  Size of the vector is: 6
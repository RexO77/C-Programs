#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <string>
using namespace std;

// Function to demonstrate vector operations
void vectorOperations() {
    cout << "=== Vector Operations ===" << endl;

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

    cout << "=========================" << endl << endl;
}

// Function to reverse a string using a stack
void reverseStringUsingStack(const string& str) {
    cout << "=== Reverse String Using Stack ===" << endl;

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

    cout << "==================================" << endl << endl;
}

// Function to demonstrate set operations
void setOperations() {
    cout << "=== Set Operations ===" << endl;

    set<int> s({1,2,3,4,5}); // Initializing set using initializer list
    s.insert(6); // Adding an element using insert method

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

    // Remove an element from the set
    s.erase(3);
    cout << "Set elements after erasing 3: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    // Check if an element is present in the set
    cout << "Is 4 present in the set? " << (s.find(4) != s.end() ? "Yes" : "No") << endl;

    // Clear the set
    s.clear();
    cout << "Is the set empty? " << (s.empty() ? "Yes" : "No") << endl;

    cout << "======================" << endl << endl;
}

// Function to demonstrate multiset operations
void multisetOperations() {
    cout << "=== Multiset Operations ===" << endl;

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);

    // Display the maximum size of the multiset
    cout << "Max Size: " << ms.max_size() << endl;

    // Display all multiset elements
    cout << "Multiset elements are: ";
    for (int i : ms) {
        cout << i << " ";
    }
    cout << endl;

    // Display the first element using the iterator
    if (!ms.empty()) {
        cout << "First element: " << *ms.begin() << endl;
    }

    // Remove an element from the multiset
    ms.erase(3);
    cout << "Multiset elements after erasing 3: ";
    for (int i : ms) {
        cout << i << " ";
    }
    cout << endl;

    // Check if an element is present in the multiset
    cout << "Is 4 present in the multiset? " << (ms.find(4) != ms.end() ? "Yes" : "No") << endl;

    // Clear the multiset
    ms.clear();
    cout << "Is the multiset empty? " << (ms.empty() ? "Yes" : "No") << endl;

    cout << "==========================" << endl << endl;
}

int main() {
    // Demonstrate vector operations
    vectorOperations();

    // Reverse a string using a stack
    string str = "Hello";
    reverseStringUsingStack(str);

    // Demonstrate set operations
    setOperations();

    // Demonstrate multiset operations
    multisetOperations();

    return 0;
}
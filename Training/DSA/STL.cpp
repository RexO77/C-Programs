#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <string>
#include <unordered_set>
#include <map>
using namespace std;

// Function to demonstrate vector operations
void vectorOperations() { //stores elements in contiguous memory locations
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
void reverseStringUsingStack(const string& str) { //stores elements in LIFO order
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
void setOperations() { //stores elements in sorted order
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
void multisetOperations() { //stores elements in sorted order and allows duplicates
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

    // Erase elements from the multiset using iterators
    ms.erase(ms.find(4), ms.end());

    cout << "==========================" << endl << endl;
}

void unorderedSetOperations() { //stores elements in unsorted order similar to hash table
    cout << "=== Unordered Set Operations ===" << endl;

    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);

    // Display the maximum size of the unordered set
    cout << "Max Size: " << us.max_size() << endl;

    // Display all unordered set elements
    cout << "Unordered Set elements are: ";
    for (int i : us) {
        cout << i << " ";
    }
    cout << endl;

    // Display the first element using the iterator
    if (!us.empty()) {
        cout << "First element: " << *us.begin() << endl;
    }

    // Remove an element from the unordered set
    us.erase(3);
    cout << "Unordered Set elements after erasing 3: ";
    for (int i : us) {
        cout << i << " ";
    }
    cout << endl;

    // Check if an element is present in the unordered set
    cout << "Is 4 present in the unordered set? " << (us.find(4) != us.end() ? "Yes" : "No") << endl;

    // Clear the unordered set
    us.clear();
    cout << "Is the unordered set empty? " << (us.empty() ? "Yes" : "No") << endl;

    cout << "==============================" << endl << endl;
}

void mapOperations() { //map stores key-value pairs in sorted order
    
    map<int, string> m;
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";

    // Display all map elements
    cout << "Map elements are: ";
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " -> " << it->second << ", ";
    }
    cout << endl;

    // Check if a key is present in the map
    cout << "Is key 2 present in the map? " << (m.find(2) != m.end() ? "Yes" : "No") << endl;

    // Remove an element from the map
    m.erase(2);

    // Check if a key is present in the map
    cout << "Is key 2 present in the map? " << (m.find(2) != m.end() ? "Yes" : "No") << endl;
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

    // Demonstrate unordered set operations
    unorderedSetOperations();

    return 0;
}
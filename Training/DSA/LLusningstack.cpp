#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int capacity;
    char* stackArray;

public:
    Stack(int size) {
        capacity = size;
        stackArray = new char[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] stackArray;
    }

    void push(char ch) {
        if (top < capacity - 1) {
            stackArray[++top] = ch;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    char pop() {
        if (top >= 0) {
            return stackArray[top--];
        } else {
            cout << "Stack underflow" << endl;
            return '\0';
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    string str = "Hello";
    cout << "Original String: " << str << endl;

    Stack st(str.length());

    // Push all characters of the string onto the stack
    for (char ch : str) {
        st.push(ch);
    }

    // Pop all characters from the stack to reverse the string
    cout << "Reversed string: ";
    while (!st.isEmpty()) {
        cout << st.pop();
    }
    cout << endl;

    return 0;
}
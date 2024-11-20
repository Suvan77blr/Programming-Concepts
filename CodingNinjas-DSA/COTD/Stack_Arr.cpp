
// 141124.
// Implementation of Stack Data Structure using Array in C++
 
#include<iostream>
using namespace std;

#define MAX_SIZE 1000  // Define the maximum size of the stack


class Stack {


private:

    int arr[MAX_SIZE];  // Array to store the elements of the stack
    int top;            // Index of the top element of the stack


public:

    Stack() {
        top = -1;       // Initialize the top to -1, indicating an empty stack
    }


    void push(int x) {

        if (top == MAX_SIZE - 1) {  // Check if the stack is full


            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;     // Increment the top index and add the element to the stack
    }


    int pop() {
        if (top == -1) {    // Check if the stack is empty
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top--];  // Decrement the top index and return the top element
    }


    int peek() {
        if (top == -1) {    // Check if the stack is empty
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];    // Return the top element
    }

    bool isEmpty() {
        return top == -1;   // Check if the stack is empty
    }
};


int main() {
    Stack s;
    s.push(10);             // Push 10 onto the stack
    s.push(20);             // Push 20 onto the stack
    s.push(30);             // Push 30 onto the stack

    cout << s.pop() << endl;    // Pop the top element (30) and print it
    cout << s.peek() << endl;   // Print the top element (20) without popping it
    cout << s.isEmpty() << endl;  // Check if the stack is empty (0 for false, 1 for true)
    return 0;
}
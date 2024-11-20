
// 141124.
// Implementation of Stack using Linked List in C++
 
#include<iostream>
using namespace std;

// Define the Node class for the linked list

class Node {

public:


    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};


// Define the Stack class using linked list


class Stack {


private:
    Node* head;     // Pointer to the head of the linked list


public:
    Stack() {
        head = NULL;    // Initialize the head to NULL, indicating an empty stack
    }


    void push(int x) {


        Node* temp = new Node(x);   // Create a new Node with the given data
        temp->next = head;          // Set the new Node's next pointer to the current head
        head = temp;                // Set the head to the new Node
    }


    int pop() {


        if (head == NULL) {     // Check if the stack is empty
            cout << "Stack Underflow" << endl;
            return -1;
        }


        int popped = head->data;    // Store the data of the head Node to return it later
        head = head->next;          // Set the head to the next Node
        return popped;
    }


    int peek() {


        if (head == NULL) {    
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->data;      
    }


    bool isEmpty() {
        return head == NULL;    
    }
};


int main() {


    Stack s;
    s.push(10);             // Push 10 onto the stack
    s.push(20);             // Push 20 onto the stack
    s.push(30);             // Push 30 onto the stack


    cout << s.pop() << endl;    


    cout << s.peek() << endl;  


    cout << s.isEmpty() << endl; 

    return 0;
}
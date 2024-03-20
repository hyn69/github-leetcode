#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
struct Stack {
    Node* top;
    void push(int value);
    int pop();
    int peek();
    bool isEmpty();
    void clear();
};
void Stack::push(int value) {
    Node* newNode = new Node;
    newNode -> data = value;
    newNode -> next = top;
    top = newNode;
}
int Stack::pop() {
    Node* tempNode = new Node;
    tempNode = top;
    top = top -> next;
    delete tempNode;
}
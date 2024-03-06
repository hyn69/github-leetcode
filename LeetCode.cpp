#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
}
int getLength(Node* pHead) {
    Node* pCur = pHead;
    int count = 0;
    while (pCur) {
        count++;
        pCur = pCur -> next;
    }
    return count;
}
Node* middleNode(Node* l1) {
    Node* t1 = l1;
    Node* t2 = l2;
    while (t1 != NULL && t1 -> next != NULL) {
        t2 = t2 -> next;
        t1 = t1 -> next -> next;
    }
    return t2;
}
int main() {
    
}

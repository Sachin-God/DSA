#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* remove_nth_node(Node* head, int n){
    int total = 0;
    Node* curr = head;
    while (curr){
        total++;
        curr = curr->next;
    }
    curr = head;
    int idx = total - n;
    if (idx == 0) {
        head = head->next;
        delete curr;
        return head;
    }
    while (idx > 1){
        idx--;
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return head;
}

int main() {

    return 0;
}
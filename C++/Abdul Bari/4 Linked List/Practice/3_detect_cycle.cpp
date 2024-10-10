#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

bool detect_cycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

int main() {

    return 0;
}
#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int value){
        this->data = value;
        this->next = nullptr;
    }
};

int Count_nodes(Node* head){
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }

    cout<<count<<endl;
    return count;
}

void display(Node* head){
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    Node* p = new Node(1);
    Node* q = new Node(2);
    Node* r = new Node(3);

    p->next = q;
    q->next = r;
    
    Node* head = p;
    Count_nodes(head);
    display(head);
    return 0;
}
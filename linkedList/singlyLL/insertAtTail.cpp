#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node() {
        this->data = data;
        this->next = nullptr;
    }
    
};

void insertAtTail(Node*& head, int d) {
    Node* newNode = new Node();
    newNode->data = d;
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}
int main() {
    Node* head = new Node();
    cout << "Node data: " << head->data << endl;
     return 0;
} 
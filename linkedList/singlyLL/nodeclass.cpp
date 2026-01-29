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
int main() {
    Node* head = new Node();
    cout << "Node data: " << head->data << endl;
     return 0;
} 
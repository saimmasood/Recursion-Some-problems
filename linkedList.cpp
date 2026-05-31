#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printListRecursive(Node* head) {
    if (head == NULL)
        return;

    cout << head->data << " ";
    printListRecursive(head->next);
}

void append(Node*& head, int value) {
    Node* newNode = new Node{ value, NULL };
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = NULL;

    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);

    cout << "Linked list: ";
    printListRecursive(head);
    cout << endl;

    return 0;
}
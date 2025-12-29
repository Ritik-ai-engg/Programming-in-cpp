#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

// 🔹 Traverse forward
void traverse() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    cout << "Doubly Circular Linked List: ";
    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)" << endl;
}

// 🔹 Insert at end (O(1))
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) { // empty list
        newNode->next = newNode->prev = newNode;
        head = tail = newNode;
        return;
    }

    newNode->prev = tail;
    newNode->next = head;
    tail->next = newNode;
    head->prev = newNode;
    tail = newNode;
}

// 🔹 Insert at beginning (O(1))
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) { // empty list
        newNode->next = newNode->prev = newNode;
        head = tail = newNode;
        return;
    }

    newNode->next = head;
    newNode->prev = tail;
    head->prev = newNode;
    tail->next = newNode;
    head = newNode;
}

// 🔹 Delete a node by value (O(n))
void deleteNode(int value) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    do {
        if (temp->data == value) {
            if (temp == head && temp == tail) { // only one node
                head = tail = NULL;
            } else if (temp == head) { // deleting head
                head = head->next;
                head->prev = tail;
                tail->next = head;
            } else if (temp == tail) { // deleting tail
                tail = tail->prev;
                tail->next = head;
                head->prev = tail;
            } else { // deleting middle node
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
            }
            delete temp;
            return;
        }
        temp = temp->next;
    } while (temp != head);

    cout << "Value " << value << " not found!" << endl;
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    traverse();

    insertAtBeginning(5);
    cout << "After inserting at beginning: ";
    traverse();

    deleteNode(20);
    cout << "After deleting 20: ";
    traverse();

    deleteNode(5);
    cout << "After deleting 5 (head): ";
    traverse();

    insertAtEnd(40);
    cout << "After inserting 40 at end: ";
    traverse();

    return 0;
}



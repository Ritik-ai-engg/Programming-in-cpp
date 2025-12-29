#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;
 
// Enqueue
void enqueue(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;

    if (front == NULL) {  // Queue empty
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Inserted: " << x << endl;
}

// Dequeue
void dequeue() {
    if (front == NULL) {
        cout << "Queue Underflow!" << endl;
        return;
    }

    Node* temp = front;
    cout << "Deleted: " << temp->data << endl;

    front = front->next;
    delete temp;

    if (front == NULL)  // Queue becomes empty
        rear = NULL;
}

// Display Queue
void display() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    Node* temp = front;
    cout << "Queue: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    return 0;
}

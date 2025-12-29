#include<iostream>
using namespace std;

#define SIZE 5
int cqueue[SIZE];
int front = -1, rear = -1;   //Here also, front and rear track the queue’s ends.

void enqueue(int value) {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))   //Overflow when front is just ahead of rear (means full circle).  
        cout << "Queue Overflow!\n";
    else {                                                         //If empty → set front = 0.
        if (front == -1)
            front = 0;                                            //Update rear using (rear + 1) % SIZE so it wraps.
        rear = (rear + 1) % SIZE;   // circular movement
        cqueue[rear] = value;
        cout << "Inserted: " << value << endl;
    }
}

void dequeue() {
    if (front == -1)
        cout << "Queue Underflow!\n";                       //If single element left → reset both to -1.
    else {
        cout << "Deleted: " << cqueue[front] << endl;        //Else move front circularly using modulo.
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1)
        cout << "Queue is empty!\n";            //If single element left → reset both to -1.
    else {
        cout << "Queue elements: ";              //
        int i = front;
        while (true) {
            cout << cqueue[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    enqueue(50);
    display();
    return 0;
}

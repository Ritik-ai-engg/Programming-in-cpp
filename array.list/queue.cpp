#include<iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];   //We create an array queue[SIZE] of size 5. front and rear are both set to -1 (means queue is empty).
int front = -1;
int rear = -1;
 void enqueue(int value){
    if(rear == SIZE-1){
        cout<<"Queue Overflow!\n";         //Check if rear reached SIZE-1. If yes → Overflow.If queue is empty (front == -1), set front = 0. increase rear by 1 and store value there.
    }
    else{
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] =value;
        cout<<"Inserted:"<<value<<endl;
        
    }
 }
 void dequeue() {
    if (front == -1 || front > rear)        //Check if queue is empty (front==-1 or front>rear). Print and remove element at front.   Increment front.
        cout << "Queue Underflow!\n";
    else {
        cout << "Deleted: " << queue[front] << endl;
        front++;
    }
}
void display() {
    if (front == -1 || front > rear)
        cout << "Queue is empty!\n";        //Loops from front to rear and prints elements.
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
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
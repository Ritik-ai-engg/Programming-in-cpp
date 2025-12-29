#include<iostream>
using namespace std;

int pq[SIZE];
int count = 0;

void enqueue(int value) {
    if (count == SIZE)
        cout << "Queue Overflow!\n";
    else {
        pq[count] = value;
        count++;
        cout << "Inserted: " << value << endl;
    }
}

void dequeue() {
    if (count == 0)
        cout << "Queue Underflow!\n";
    else {
        int min = pq[0];
        int pos = 0;

        for (int i = 1; i < count; i++) {
            if (pq[i] < min) {
                min = pq[i];
                pos = i;
            }
        }

        cout << "Deleted (highest priority): " << pq[pos] << endl;

        for (int i = pos; i < count - 1; i++)
            pq[i] = pq[i + 1];

        count--;
    }
}
void display() {
    if (count == 0)
        cout << "Queue is empty!\n";
    else {
        cout << "Queue elements: ";
        for (int i = 0; i < count; i++)
            cout << pq[i] << " ";
        cout << endl;
    }
}
int main(){
    enqueue(30);
    enqueue(10);
    enqueue(50);
    enqueue(20);
    display();
    dequeue();
    display();
    return 0;
}
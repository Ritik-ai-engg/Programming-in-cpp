#include<iostream>
using namespace std;

int stack[5];
int top= -1;

void push(int value){
    if(top == 4){
        cout<<"stack overflow!"<<endl;
        return;
    }
    top++;
    stack[top]=value;
    cout<<value <<" pushed"<<endl;
}
void pop(){
    if(top == -1){
        cout<<"stack underflow!"<<endl;
        return;
    }
    cout<<stack[top]<<" popped"<<endl;
    top--;
}
void peek(){
    if(top == -1){
        cout<<"stack is empty!"<<endl;
        return;
    }
    else{
        cout<<"Top element:"<<stack[top]<<endl;
    }
}
void display(){
    if(top == -1){
        cout<<"stack is empty!"<<endl;
    }
    else{
        cout<<"stack element: ";
        for(int i = top; i>=0; i--){
            cout<<stack[i]<<" ";
         
        }
           cout<<endl;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    peek();
    pop();
    display();
    return 0;
}
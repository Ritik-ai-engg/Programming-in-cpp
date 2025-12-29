#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
} ;

void traverse(Node*head){
    if(head== NULL){
        cout<<"list is empty!"<<endl;
        return;
    }
    Node*temp=head;
    cout<<"Circular linked list:";
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    } while (temp != head);
        cout<<"(back to head)"<<endl;
}
void insertAtBeginning(Node*&head, int value){
    Node*newNode=new Node();
    newNode->data=value;
    if(head==NULL){
        newNode->next=newNode;
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(Node*&head, int value){
    Node*newNode=new Node();
    newNode->data=value;
    if(head==NULL){
        newNode->next=newNode;
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
}
void insertAfter(Node*head, int key, int value){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    Node*temp= head;
    do{
        if(temp->data == key){
            Node*newNode= new Node();
            newNode->data=value;
            newNode->next=temp->next;
            temp->next=newNode;
            return;
        }
        temp=temp->next;
    }while(temp != head);
    cout<<"key not found"<<endl;
}
void deleteAtBeginning(Node*&head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    Node*temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    Node*delNode=head;
    temp->next=head->next;
    head=head->next;
    delete delNode;
}void deleteAtEnd(Node*&head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    Node*temp=head;
    while(temp->next->next != head){
        temp=temp->next;
    }
   Node*delNode=temp->next;
   temp->next=head;
   delete delNode;
}
void deleteByvalue(Node*&head, int key){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    if(head->data== key){
        deleteAtBeginning(head);
    }
    Node*temp=head;
    while(temp->next !=head && temp->next->data != key){
        temp= temp->next;
    }
    if(temp->next->data == key){
        Node*delNode= temp->next;
        temp->next= delNode->next;
        delete delNode;
    }else{
        cout<<"Key not found"<<endl;
    }
}
int main(){
    Node*head=NULL;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    traverse(head);

    insertAtBeginning(head,5);
    traverse(head);

    insertAfter(head,20,40);
    traverse(head);

    deleteAtBeginning(head);
    traverse(head);

    deleteAtEnd(head);
    traverse(head);

    deleteByvalue(head,30);
    traverse(head);

    return 0;

}
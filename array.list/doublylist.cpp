#include<iostream>
using namespace std;
 struct Node{
    int data;
    Node*prev;
    Node*next;
 };
 void traverseForward(Node*head){   //traversal forward direction
    cout<<"forward traversal:";
    Node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<"<->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
 }
 void traverseBackward(Node*tail){    //traversal backward direction
    cout<<"Backward traversal:";
    Node*temp=tail;
    while(temp != NULL){
        cout<<temp->data<<"<->";
        temp=temp->prev;
    }
    cout<<"NULL"<<endl;
 }
 void inserAtBeginning(Node*&head, Node*&tail, int value){    //insert element at beginnig
    Node*newNode=new Node{value,NULL,head};
    if(head != NULL){
        head->prev=newNode;
    }
    else{
      tail=newNode;
    }
    head=newNode;
 }
 void insertAtEnd(Node*&head, Node*&tail, int value){    //insert elemet at end
    Node*newNode=new Node{value,tail,NULL};
    if(tail != NULL){
        tail->next=newNode;
    }else{
       head=newNode;
    }
    tail=newNode;
 }
 void deleteFromBeginning(Node*&head, Node*&tail){
    if(head==NULL){
        cout<<"list is empty\n";
        return ;
    }
    Node*temp=head;
    head=head->next;
    if(head !=NULL){
        head->prev=NULL;
    }
    else{
        tail=NULL;
    }
        delete temp;
    
 }
 void deleteFromEnd(Node*&head, Node*&tail){
    if(tail==NULL){
        cout<<"list is empty\n";
        return ;
    }
    Node*temp=tail;
    tail=tail->prev;
    if(tail !=NULL){
        tail->next=NULL;
    }
    else{
        head=NULL;
    }
        delete temp;
}
int main(){
    Node*head=NULL;
    Node*tail=NULL;

    inserAtBeginning(head,tail,10);
    inserAtBeginning(head,tail,20);
    insertAtEnd(head,tail,30);
    insertAtEnd(head,tail,40);

    traverseForward(head);
    traverseBackward(tail);

    cout<<"\nDeleting node...\n";
    deleteFromBeginning(head,tail);
    deleteFromEnd(head,tail);
    
    traverseForward(head);
    traverseBackward(tail);
    return 0;

}
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};
void traverse(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtBeginning(Node*&head,int value){
Node*newNode=new Node();
newNode->data=value;
newNode->next=head;
head=newNode;
}
void insertAtEnd(Node*& head,int value){
    Node*newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL){
        head=newNode;
        return;
    }

    Node*temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
        temp->next=newNode;
} 
void insertAfterValue(Node* head, int afterValue, int newValue) {
    Node* temp = head;

   
    while (temp != NULL && temp->data != afterValue) {
        temp = temp->next;
    }

  
    if (temp == NULL) {
        cout << "Value " << afterValue << " not found in the list!" << endl;
        return;
    }

  
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = temp->next;
    temp->next = newNode;
}
void deleteNode(Node*&head,int Key){
    Node*temp=head;
    Node*prev=NULL;

    if(temp !=NULL && temp->data == Key){
        head=temp->next;
        delete temp;
        return;
    }
    while(temp!=NULL && temp->data != Key){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)return;

    prev->next=temp->next;
    delete temp;
}
int main(){
    Node*head=NULL;

    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    cout<<"initial list:";
    traverse(head);

    insertAtBeginning(head,5);
    cout<<"After inserting at beginning:";
    traverse(head);

    insertAfterValue(head,40,15);
    cout<<"After inserting after 10:";
    traverse(head);

    deleteNode(head,20);
    cout<<"After deleting 20:";
    traverse(head);

    return 0;
}
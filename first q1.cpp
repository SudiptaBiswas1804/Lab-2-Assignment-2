//Program to implement a Doubly Linked List and perform some basic operations.
#include <iostream>
using namespace std;

//The construction of the node
struct node{
int data;
node *prev;
node *next;
};

//The Linked List class
class linkedList{
//Private elements :
private:
node *head,*tail;
//Public elements :
public:
linkedList(){
head==NULL;
tail==NULL;
}

//Addition function - function for adding node at the end
void addnode ( int n){
node *cur;
node *temp=new node;
temp->data=n;
temp->prev=NULL;
temp->next=NULL;
//If the linked list is empty 
if (head==NULL){
temp->prev=NULL;
head=temp;
tail=temp;
}
//If the linked list is not empty
else if(head!=NULL){
temp->prev=tail;
tail->next=temp;
tail=temp;
}
}

//Counting function - function for counting the number of elements in the linked list
int countnode(){
node *temp;
temp=head;
int length=0;
if (head==NULL){
cout<<"The list is empty"<<"\n";
}
else if(head!=NULL){
while(temp!=NULL) {
length++;
temp=temp->next;
}
cout<<"The number of elements in the linkedlist are : "<<length<<"\n";
}
return length;
}

//Insertion function - function for adding the node at any position
void insertnode (int n2){

}


void displaynode(){
node *temp;
temp=head;
cout<<"The elements of the linked list are : "<<"\n";
while(temp!=NULL){
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL"<<"\n";
}
}; 

//Main function for the programme
int main() {
linkedList l;
l.addnode(1);
l.addnode(3);
l.addnode(5);
l.addnode(7);
l.addnode(9);
l.displaynode();
return 0;
}

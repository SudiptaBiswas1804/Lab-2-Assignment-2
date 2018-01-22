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
node *temp=new node;
temp->data=n;
//If the linked list is empty 
if (head==NULL){
head=temp;
tail=temp;
temp->prev=NULL;
temp->next=NULL;
}
else if(head!=NULL){
tail->next=temp;
temp->prev=tail;
temp->next=NULL;
tail=temp;
}
}

//Display function - function for displaying the elements
void displaynode() {
node *temp;
temp=head;
while(temp!=NULL){
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}
};

//Main function for the programme
int main() {
linkedList l;
l.addnode(1);
l.addnode(2);
l.displaynode();
return 0;
}

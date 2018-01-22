#include <iostream>
using namespace std;

struct node{
int data;
node *prev;
node *next;
};

class linkedList{
private:
node *head,*tail;
public:
linkedList(){
head = NULL;
tail = NULL;
}

void addnode(int n){
node *temp = new node;
temp->data = n;
if(head==NULL){
head = temp;
tail = temp;
temp->next = NULL;
temp->prev = NULL;
}
else {
tail->next = temp;
temp->prev = tail;
temp->next = NULL;
tail = temp;
}
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
}; 


//Main function for the programme
int main() {
linkedList l;
l.addnode(1);
l.addnode(2);
l.displaynode();
l.countnode();
return 0;
}

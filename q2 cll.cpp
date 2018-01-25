//Programme for implementing a circular singly linked list and perform some of its operations
#include <iostream>
using namespace std;

//Constructing the node structure
struct node{
int data;
node *next;
};

//Class of the linked list
class linkedList{
private:
node *head, *tail;
public:
linkedList(){
head=NULL;
tail=NULL;
}

//Addition function - function used for addition of an node from one node
void addnode (int n){
node *temp=new node;
temp->data=n;
temp->next=NULL;
if(head==NULL){
head=temp;
}
else {
tail->next=temp;
}
tail=temp;
tail->next=head;
}

//Displaying function - function used for displaying all the elements in the linked list
void displaynode(){
node *temp= new node;
temp=head;
cout<<"The elements of the linked list is: "<<endl;
do 
{
cout<<temp->data<<"->";
temp=temp->next;
}
while(temp!=head);
cout<<" head"<<endl;
}

//Count function - function used for counting the number of elements in the linked list
int countnode(){
int length=0;
node *temp;
temp=head;
if(head==NULL){
cout<<"The linked list is empty "<<endl;
}
else{
do
{
length++;
temp=temp->next;
}
while(temp!=head);
cout<<"The number of elements in the linked list is : "<<length<<endl;
return length;
}
}

//Insertion function - function used for inserting a node at a particular position
void insertnode(int pos1, int n1){
node *cur,*prev;
node *temp=new node;
temp->data=n1;
temp->next=NULL;
cur=head;
prev=cur;
for(int i=1; i<pos1; i++){
prev=cur;
cur=cur->next;
}
prev->next=temp;
temp->next=cur;
}

//Deleting function - function used for deleting a node from the end
void deletenode(){
node*cur=new node;
node*prev=new node;
cur=head;
while(cur->next!=head){
prev=cur;
cur=cur->next;
}
tail=prev;
prev->next=head;
delete cur;
}

//Deleting function - function used for deleting a node at a particular position
void deleteat(int pos2){
node *cur=new node;
node *prev=new node;
node *temp=new node;
cur=head;
for(int i=1; i<pos2; i++){
prev=cur;
cur=cur->next;
temp=cur->next;
}
prev->next=temp;
delete cur;
}
};	

int main(){
int n1,pos1,pos2;
linkedList l;
l.addnode(1);
l.addnode(2);
l.addnode(3);
l.addnode(4);
l.addnode(5);
l.displaynode();
l.countnode();
cin>>pos1>>n1;
l.insertnode(pos1,n1);
cout<<"The linked list after insertion of the value "<<n1<<" in the "<<pos1<<" position :"<<endl;
l.displaynode();
l.deletenode();
cout<<"The linked list after deletion of the node from one end "<<endl;
l.displaynode();
cin>>pos2;
l.deleteat(pos2);
cout<<"The linked list after deletion of the node at "<<pos2<<" is :"<<endl;
l.displaynode();
return 0;
}

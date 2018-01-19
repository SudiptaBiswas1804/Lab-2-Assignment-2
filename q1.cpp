//Program to implement a Doubly Linked List and perform some basic operations.
#include <iostream>
using namespace std;

//The construction of the node
strct node{
int data;
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
void addnode(int n){
node *temp=new node;
temp->data=n;
temp->next=NULL;
//If the list is empty
if(head==NULL){
head=temp;
tail=temp;
}
//If the list is not empty
else {

}


}
}

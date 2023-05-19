#include<stdio.h>
#include<stdlib.h>

#include <iostream>
using namespace std;

// Structure of Node.
struct Node
{
int data;

Node *link;
};

Node *front = NULL;
Node *rear = NULL;


bool isempty()
{
 if(front == NULL && rear == NULL)
 return true;
 else
 return false;
}

//function to enter elements in queue
void enqueue ( int value )
{
 Node *ptr = new Node();
 ptr->data= value;
 ptr->link = NULL;

 //If inserting the first element/node
 if( front == NULL )
 {
  front = ptr;
  rear = ptr;
 }
 else
 {
  rear ->link = ptr;
  rear = ptr;
 }
}

//function to delete/remove element from queue
void dequeue ( )
{
 if( isempty() )
 cout<<"Queue is empty\n";
 else
 //only one element/node in queue.
 if( front == rear)
 {
  free(front);
  front = rear = NULL;
 }
 else
 {
  Node *ptr = front;
  front = front->link;
  free(ptr);
 }
}

//function to show the element at front
void showfront( )
{
 if( isempty())
 cout<<"Queue is empty\n";
 else
 cout<<"\nelement at front is : "<<front->data;
}

//function to display queue
void displayQueue()
{
 if (isempty())
  cout<<"\nQueue is empty\n";
 else
 {
  Node *ptr = front;
  while( ptr !=NULL)
  {
   cout<<"\nTampil data antrian : "<<ptr->data<<" \n";
   ptr= ptr->link;
  }
 }
}

int main(){
	
	int ch,val,x,pilih;

	do{
		printf("\nANTRIAN MENGGUNAKAN LINKED LIST\n");
		printf("\n1.ENQUEUE");
		printf("\n2.DEQUEUE");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nmasukan pilihan : ");
		scanf("%d",&pilih);
		
		switch(pilih){
			case 1:
				printf("\n masukan nilai : ");
				scanf("%d",&val);
				enqueue(val);
				displayQueue();
				break;
				
			case 2:
				dequeue();	
				displayQueue();
				break;
				
			case 3:
				displayQueue();
				break;
			case 4:
				exit(1);
				printf("\nPILIHAN SALAH\n");
				break;
			}
			
	}while(pilih=4);
}





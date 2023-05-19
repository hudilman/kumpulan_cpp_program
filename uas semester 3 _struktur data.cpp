#include <iostream>
#include <windows.h>

using namespace std;
struct Node {
   int data;
   struct Node *next;
}; 
struct Node* head = NULL;
void insert(int newdata) {
   struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
   struct Node *ptr = head;
   newnode->data = newdata;
   newnode->next = head;
   if (head!= NULL) {
      while (ptr->next != head)
      ptr = ptr->next;
      ptr->next = newnode;
   } else
   newnode->next = newnode;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   do {
      cout<<ptr->data <<" ";
      ptr = ptr->next;
   } while(ptr != head);
}
int main() {
   insert(0);
   insert(9);
   insert(8);
   insert(7);
   insert(6);
   insert(5);
   insert(4);
   insert(3);
   insert(2);
   insert(1);

   cout<<"output susunan angka di keyboard : ";
   display();
   return 0;
} 	

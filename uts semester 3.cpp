//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//    int  Array[10][20];
//} t2DArray;
//
//t2DArray TwoDArray =
//{
//   { 
//   	{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
//   ,{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
//   ,{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
//   ,{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
//   ,{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
//   ,{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
//   ,{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
//   ,{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
//   ,{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
//   ,{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20} }
//};
//
//t2DArray *GetArray;
//
//int main()
//{
//    GetArray = &TwoDArray;
//    printf("%d \n",
//    GetArray->Array[1][1+5]);
//
//    getchar();
//    return 0;
//}

#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}

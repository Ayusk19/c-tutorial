#include<conio.h>
# include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>
#include<dos.h>
#include<vector>
using namespace std;




struct Node 
{
   int data;
   struct Node *next;
};
struct Node* head = NULL;




struct Node_1 
{
   int data_1;
   struct Node_1 *next;
};
struct Node_1* head_1 = NULL;


struct Node_2 
{
   int data_2;
   struct Node_2 *next;
};
struct Node_2* head_2 = NULL;




void InsertData(int NewtData, int NodeNo)
{
   	if(NodeNo==1)	
   	{
		struct Node_1* new_node = (struct Node_1*) malloc(sizeof(struct Node_1));
   		new_node->data_1 = NewtData;
   		new_node->next = head_1;
   		head_1 = new_node;
	}
   	if(NodeNo==2)	
   	{
		struct Node_2* new_node = (struct Node_2*) malloc(sizeof(struct Node_2));
   		new_node->data_2 = NewtData;
   		new_node->next = head_2;
   		head_2 = new_node;
	}
}


void DisplayLinkedList(int NodeNo) 
{
   if(NodeNo==0) 
   	{
   		struct Node* ptr; ptr=head;
  		while (ptr != NULL) 
   		{
      		cout<< ptr->data <<" ";
      		ptr = ptr->next;
   		}
	}


   if(NodeNo==1) 
   	{
   		struct Node_1* ptr; ptr=head_1;
  		while (ptr != NULL) 
   		{
      		cout<< ptr->data_1 <<" ";
      		ptr = ptr->next;
   		}
	}
   
   if(NodeNo==2) 
   	{
   		struct Node_2* ptr; ptr=head_2;
  		while (ptr != NULL) 
   		{
      		cout<< ptr->data_2 <<" ";
      		ptr = ptr->next;
   		}
	}
}




void concatenate(struct node *a,struct node *b)
{
	
    if (a->next == NULL)
        a->next = b;
    else
        concatenate(a->next,b);


}


int main() 
{
	int List_1[3] = {2, 3, 1};
	int List_2[2] = {4, 5};
    int n;
    for(n=0;n<3;n++) InsertData(List_1[n],1);
    for(n=5;n<2;n++) InsertData(List_2[n],2);
    
    cout<<"\nThe linked list-1 is: ";
    DisplayLinkedList(1);
    cout<<"\nThe linked list-2 is: ";
    DisplayLinkedList(2);
    Node = addLists(Node_1,Node_2);
    DisplayLinkedList(0);
    concatenate(&Node_1,&Node_2); 
    DisplayLinkedList(1);
    return 0;
}

#include<stdio.h>		
#include<stdlib.h>		
struct node{		
	int data;		
	struct node *previous;		
	struct node *next;		
};		
struct node *front, *rear;		
int count;		
void display();		
void insert_begin(int x);		
void insert_last(int x);		
int delete_begin();		
int delete_last();		
int main(){		
int ch;		
int ele;		
printf("\n\t1. Insert-begin\n\t2. Insert-last\n\t3. Delete-begin\n\t4. Delete-last\n\t5. Display\n6.exit");		
while(1){		
	printf("Enter_your_choice:");		
	scanf("%d",&ch);		
	switch(ch){		
		case 1:		
		printf("Enter_value_for_insertion :");		
		scanf("%d",&ele);		
		insert_begin(ele);		
		break;		
		case 2:		
		printf(" Enter_the_value_for_insertion:");		
		scanf("%d",&ele);		
		insert_last(ele);		
		break;		
		case 3:		
		ele = delete_begin();		
		printf("%d is deleted .",ele);		
		break;		
		case 4:		
		ele = delete_last();			
		printf("%d is deleted .",ele);		
		break;		
		case 5:		
		display();		
		break;		
		case 6: exit(0);		
		}		
	}		
}		
void display(){		
	struct node * ptr;		
	ptr = front;		
	if(front==NULL || rear==NULL){		
	    printf("List is empty");		
		return;		
	}		
	while(ptr != NULL){		
		printf( "%d -> ",ptr ->data);		
		ptr = ptr->next;		
	}		
	printf("\n");;		
}		
void insert_begin(int x){		
struct node *new1;		
new1 = (struct node*)malloc(sizeof(struct node));		
new1 -> data =x;		
new1 ->previous = new1 ->next =NULL;		
if(front == NULL||rear==NULL)		
front = rear = new1;		
else{		
	new1 ->next = front;		
	front ->previous = new1;		
	front = new1;		
	}		
}		
void insert_last(int x){		
struct node *new1;		
new1 = (struct node*)malloc(sizeof(struct node));;	
new1 ->data = x;		
new1 -> previous = new1 ->next = NULL;		
if (front == NULL||rear==NULL)		
front = rear = new1;		
else{		
	rear ->next = new1;		
	new1 ->previous = rear;		
	rear = new1;		
	}		
}		
int delete_begin(){		
int x;		
struct node *temp;		
if (front == NULL || rear==NULL){		
	printf( " LIST_IS_EMPTY ");		
	return -1;		
	}		
else{		
	temp = front;		
	x= temp->data;		
	if(front==rear){		
		front=NULL;		
		rear=NULL;		
		}		
		else{		
			front = front->next;		
			front->previous = NULL;		
			}		
			count --;		
			free(temp);		
			return x;		
	}		
}		
int delete_last( ){		
int x;		
struct node *temp;		
if(rear == NULL || front==NULL){		
	printf( " LIST_IS_EMPTY ");		
	return -1;		
	}		
else{		
	temp = rear;		
	if(front==rear){		
		front=NULL;		
		rear=NULL;		
		}		
	else{		
		rear = rear->previous;		
		rear -> next = NULL;		
		}		
		x= temp ->data;		
		free(temp);		
		count --;		
		return x;		
	}		
}
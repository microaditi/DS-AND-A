#include<stdio.h>
#include<stdlib.h>
//we will initialize the data and the pointer

struct Node{
	int data;
	struct Node *next;
}*first=NULL;   //first is the global pointer
void create(int A[],int n)
{
	int i ;
	struct Node *t,*last;
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
}
void display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
		
	}
}
int main()
{
	int A[]={3,4,5,6,7,8,9};
	create(A,7);
	display(first);
	return 0;
 } 


#include <stdio.h>
#include <stdlib.h>

struct Node
{

int data;
struct Node *next;
};
struct Node *head=NULL;
struct Node *current=NULL;
void Build(int n);
void Print();
void Search();

int main()
{
int choice,option;

do
{
printf("\n\t What is Your Choice?\t\n 1.Build\t2.Print out\t3.Search:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("List has been successfully built");
int node;
for (node=1;node<=100;node++){
int number=rand()%100;
Build(number);
}
break;
case 2:
Print();
break;
case 3:
Search();
break;
default:
printf("Please select correct Option...");
}
printf("\nDo you want to continue? Press 1 for Yes\t 2 for No: \t");
scanf("%d",&option);
}while(option==1);
}
void Build(int a)
{
struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));

new_node->data=a;
new_node->next=NULL;
if(head==NULL)
{
head=new_node;
current=new_node;
}
else
{
current->next=new_node;
current=new_node;
}
}
void Print()
{
struct Node *current=head;
int nodenum=1;
while(current!=NULL)
{
printf("Node #%d contains the value of %d \n",nodenum, current->data);
nodenum++;
current=current->next;
}
}
void Search()
{
struct Node *current=head;
int pos=0,flag=0;
int key;
printf("\nPlease enter the number to be sought in the list: ");
scanf("%d",&key);
while(current!=NULL)
{
pos++;
if(current->data==key)
{
flag++;
break;
}
current=current->next;
}
if(flag==0)
printf("\n%d The search has failed.",key);
else{
printf("\nThe number %d was found in node # %d",key,pos);

}
}


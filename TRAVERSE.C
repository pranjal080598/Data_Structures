#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void createnode();
void disnode();
int l;
struct ll
{
	int info;
	struct ll *link;
};
struct ll *h;
struct ll *n;
struct ll *t;
void main()
{
	int i,k,data;
	clrscr();
	printf("enter no. of nodes\n");
	scanf("%d",&l);
	h=(struct ll*)malloc(sizeof(struct ll));
	h->info=-1;
	h->link=0;
	for(i=0;i<l;i++)
	{
		createnode();
	}
	disnode();
	getch();
}
void createnode()
{
	int data;
	n=(struct ll*)malloc(sizeof(struct ll));
	t=h;
	while(t->link!=0)
	{
		t=t->link;
	}
	t->link=n;
	printf("enter data\n");
	scanf("%d",&data);
	n->info=data;
	n->link=0;
}
void disnode()
{
	int i;
	t=h->link;
	printf("the list is\n");
	while(t->link!=0)
	{
		printf("%d\n",t->info);
		t=t->link;
	}
	printf("%d\n",t->info);
}
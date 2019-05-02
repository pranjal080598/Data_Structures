#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void createnode();
void disnode();
void insertbeg();
void insertnode();
int l;
struct ll
{
	int info;
	struct ll *link;
};
struct ll *h;
struct ll *p;
struct ll *n;
struct ll *t;
void main()
{
	int i,k,data,ch;
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
	printf("enter choice \n 1. insert at begin\n 2. insert after given node\n 3.insert at end\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			insertbeg();
			disnode();
			break;
		}
		case 2:
		{
			insertnode();
			disnode();
			break;
		}
		case 3:
		{
			createnode();
			disnode();
			break;
		}
	}
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
void insertbeg()
{
	int data;
	n=(struct ll*)malloc(sizeof(struct ll));
	t=h->link;
	n->link=t;
	h->link=n;
	printf("enter data\n");
	scanf("%d",&data);
	n->info=data;
}
void insertnode()
{
	int item;
	printf("enter item\n");
	scanf("%d",&item);
	p=h;
	t=p->link;
	while(t->link!=0)
	{
		if(item<t->info)
		{
			break;
		}
		else
		{
			p=p->link;
			t=t->link;
		}
	}
	n=(struct ll*)malloc(sizeof(struct ll));
	p->link=n;
	n->link=t;
	n->info=item;
}



















































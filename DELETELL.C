#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void createnode();
void delendnode();
void delbeg();
void delnode();
void disnode();
int l;
struct ll
{
	int info;
	struct ll *link;
};
struct ll *p;
struct ll *h;
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
	printf("enter choice \n 1. delete from begin\n 2. delete after given node\n 3.delete at end\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			delbeg();
			disnode();
			break;
		}
		case 2:
		{
			delnode();
			disnode();
			break;
		}
		case 3:
		{
			delendnode();
			disnode();
			break;
		}
	}
	getch();
}
void delbeg()
{
	p=h;
	t=p->link;
	h->link=t->link;
}
void delnode()
{
	int item;
	p=h;
	t=p->link;
	printf("enter item\n");
	scanf("%d",&item);
	while(t->link!=0)
	{
		if(t->info==item)
		{
			p->link=t->link;
			break;
		}
		else
		{
			p=p->link;
			t=t->link;
		}
	}
	if(t->info==item)
	{
		p->link=t->link;
	}

}
void delendnode()
{
	p=h;
	t=p->link;
	while(t->link!=0)
	{
		t=t->link;
		p=p->link;
	}
	p->link=0;
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
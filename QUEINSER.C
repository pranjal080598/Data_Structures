void main()
{
	int f,r,i,n,a[15],item;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter item\n");
	scanf("%d",&item);
	f=0;
	r=n-1;
	if(f==0 && r>=9)
	{
		printf("overflow\n");
	}
	if(f==r+1)
	{
		printf("overflow\n");
	}
	if(f==-1)
	{
		f=0;
		r=0;
		a[r]=item;
		printf("new queue is \n");
		for(i=0;i<=r;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	if(r==9)
	{
		r=0;
		a[r]=item;
		printf("new queue is \n");
		for(i=0;i<=r;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else
	{
		r=r+1;
		a[r]=item;
		printf("new queue is \n");
		for(i=0;i<=r;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	getch();
}



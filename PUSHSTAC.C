void main()
{
	int a[10],top,loc,n,i,item;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	top=n-1;
	printf("enter array\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	if(top<=0)
	{
		printf("underflow\n");
	}
	else
	{
		top--;
		printf("new array is \n");
		for(i=0;i<=top;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	getch();
}

void main()
{
	int a[10],top,n,i,item;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	top=n-1;
	printf("enter array\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	if(top>=9)
	{
		printf("of\n");
	}
	if(top<9)
	{
		top=top+1;
		printf("enter item\n");
		scanf("%d",&item);
		a[top]=item;
	}
	printf("new array is \n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}

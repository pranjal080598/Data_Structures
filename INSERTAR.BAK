void main()
{
	int a[10],k,loc,n,i,item;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter array\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	k=n-1;
	printf("enter loc \n");
	scanf("%d",&loc);
	printf("enter item\n");
	scanf("%d",&item);
	while(k>=loc)
	{
		a[k+1]=a[k];
		k--;
	}
	a[loc]=item;
	printf("new array is \n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}


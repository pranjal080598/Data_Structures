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
	printf("enter loc \n");
	scanf("%d",&loc);
	k=loc;
	while(k!=n-1)
	{
		a[k]=a[k+1];
		k++;
	}
	n=n-1;
	printf("new array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}

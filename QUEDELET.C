void main()
{
	int f,r,i,n,a[10],item;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f=0;
	r=n-1;
	if(f==-1)
	{
		printf("underflow\n");
	}
	if(f==r)
	{
		f=-1;
		r=-1;
	}
	if(f==9)
	{
		f=1;
	}
	if(f<9)
	{
		f=f+1;
	}
	printf("the new que is\n");
	for(i=f;i<=r;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
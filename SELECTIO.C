//selection sort//
void add();
void main()
{
	int  a[10],k=1,min,n,loc,i,j,temp;
	clrscr();
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("the enterd array is\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(k=1;k<n;k++)
	{
		min=a[k];
		loc=k;
		for(j=k+1;j<=n;j++)
		{
			if(min>a[j])
			{
			min=a[j];
			loc=j;
			}
			temp=a[k];
			a[k]=a[loc];
			a[loc]=temp;
		}



	}
	printf("Sorted array is=\n");
	for(i=1;i<=n;i++)
	{
		printf("%d \n",a[i]);

	}
	getch();
}

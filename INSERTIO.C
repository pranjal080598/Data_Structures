//INSERTION SORT//
void main()
{
	 int a[10],n,i,j,temp,k,ptr;
	clrscr();
	printf("Enter limit \n");
	scanf("%d",&n);
	printf("Enter ele \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	a[0]=-1;
	for(k=2;k<=n;k++)
	{
		temp=a[k];
		ptr=k-1;
		while(temp<a[ptr])
		{
			a[ptr+1]=a[ptr];
			ptr--;
		}
		a[ptr+1]=temp;
	}
	printf("SORTED ARRAY IS=\n");
	for(i=1;i<=n;i++)
	{
		printf("%d \n",a[i]);
	}
	getch();
}


















































































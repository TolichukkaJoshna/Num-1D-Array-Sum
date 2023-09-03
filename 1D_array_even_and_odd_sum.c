#include<stdio.h>
main()
{
	int a[10],i,n,soe=0,sod=0;
	printf("enter no of elements..:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter element at a[%d]..:",i);
		scanf("%d",&a[i]);
	}
	printf("\ngiven array elements are..:");
	for(i=0;i<n;i++)
	{
		printf("\n%5d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			soe+=a[i];
		}
		else if(a[i]!=0)
		{
			sod+=a[i];
		}
	}
	printf("\nsum of even=%d",soe);
	printf("\nsum of odd=%d",sod);
}

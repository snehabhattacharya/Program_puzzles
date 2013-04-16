#include<stdio.h>
int main()
{
	int t=0,ans[1000],a[1000],i;
	//scanf("%d",&t);
	while(1)
	{
		scanf("%d",&a[t]);
		if(a[t]==0)
			break;
		t++;
		//ans=(n*(n+1)*((2*n)+1))/6;
		//printf("%d",ans);
	}
	for(i=0;i<t;i++)
	{
		ans[i]=(a[i]*(a[i]+1)*((2*a[i])+1))/6;
		printf("%d\n",ans[i]);
	}
    return 0;
}
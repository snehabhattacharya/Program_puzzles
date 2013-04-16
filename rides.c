#include<stdio.h>
//#include<conio.h>
void main()
{
    int i,R,k, s, a[10],m, j,l,p,N, sum =0;
    
   	 printf("enter no. of rides\n");
	 scanf("%d",&R);
	 printf("enter capacity\n");
	 scanf("%d",&k);
	 printf("enter no. of ppl\n");
	 scanf("%d",&N);
	printf("enterpeople\n");
	 for(i=0;i<N;i++)
	   {
		scanf("%d",&a[i]);
	 
	    }
	  
	
	for(i=0;i<R;i++)
	{ 
	 s=0;
	 j=0;
	while(s<k)
	{
	 
	 s=s+a[j];
	  j++;
	}
	sum=sum+s;
	if(s>6)
	 {
	 sum=sum-a[j-1];	
	  j--;
	}
	for(m=0;m<j;m++)
	{
	  p=a[m];
	 a[m]=a[j];
	for(l=j;l<N-1;l++)
	{
	a[l]=a[l+1];
	  
	}
	a[l]=p;
	}
	//for(x=0;x<N;x++)
	//printf("%d",a[x]);
	
	
}

printf("%d",sum);
//getch();
return(0);

}

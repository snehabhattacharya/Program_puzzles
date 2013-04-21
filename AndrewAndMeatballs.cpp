#include<iostream>
#include<algorithm>
using namespace std;
int main()
{	int t, p[70],j;
	cin>>t;
	int a[t][2];
	for(int i=0;i<t;i++)
	{
		cin>>a[i][0]>>a[i][1];
		for(int j=0;j<a[i][0];j++)
			cin>>p[j];
	
	
	}
	for(int i=0;i<t;i++)

	{	
		std::sort(p,p + sizeof p / sizeof p[0]);
		int c=0,f=0,g=1;
		for(j=0;j<a[i][0];j++)
		{	c+=p[j];
			if(c>=a[i][1])
				{ g=0;
				  break;
				}

				
		}
		
		if(g==0)
			cout<<j+1;
		else
			cout<<-1;
		
	}

}
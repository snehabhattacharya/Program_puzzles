#include<iostream>
using namespace std;
int main()
{
int t,c1,c2,c3,c4,i,j,k,tt;
char a[15][4][4];
cin>>t;
for(i=0;i<t;i++)
for(j=1;j<=4;j++)
for(k=1;k<=4;k++)
cin>>a[i][j][k];
 
for(i=0;i<t;i++)
{
for(j=1;j<=4;j++)
{
c1=c2=c3=c4=0;
for(k=1;k<4;k++)
{
if((a[i][j][k]==a[i][j][k+1]||a[i][j][k]=='T'||a[i][j][k+1]=='T')&&a[i][j][k]!='.')
c1++;
if((a[i][k][j]==a[i][k+1][j]||a[i][k][j]=='T'||a[i][k+1][j]=='T')&&a[i][k][j]!='.')
c2++;
if((a[i][k][k]==a[i][k+1][k+1]||a[i][k][k]=='T'||a[i][k+1][k+1]=='T')&&a[i][k][k]!='.')
c3++;
if((a[i][k][5-k]==a[i][k+1][5-k-1]||a[i][k][5-k]=='T'||a[i][k+1][5-k-1]=='T')&&a[i][k][5-k]!='.')
c4++;
}
 
if(c1==3)
{
if(a[i][j][1]=='T')
cout<<"Case #"<<i+1<<": "<<a[i][j][2]<<" won";
else
cout<<"Case #"<<i+1<<": "<<a[i][j][1]<<" won";
break;
}
else if(c2==3)
{
if(a[i][j][1]=='T')
cout<<"Case #"<<i+1<<": "<<a[i][2][j]<<" won";
else
cout<<"Case #"<<i+1<<": "<<a[i][1][j]<<" won";
break;
}
 if(c3==3)
{
if(a[i][1][1]=='T')
cout<<"Case #"<<i+1<<": "<<a[i][2][2]<<" won";
else
cout<<"Case #"<<i+1<<": "<<a[i][1][1]<<" won";
break;
}
else if(c4==3)
{
if(a[i][1][4]=='T')
cout<<"Case #"<<i+1<<": "<<a[i][2][3]<<" won";
else
cout<<"Case #"<<i+1<<": "<<a[i][1][4]<<" won";
break;
}
 
}
 
tt=0;
for(j=1;j<=4;j++)
{for(k=1;k<=4;k++)
{
if(a[i][j][k]=='.')
tt=1;
}}
 
if(c1!=3&&c2!=3&&c3!=3&&c4!=3)
{
if(tt==0)
cout<<"Case #"<<i+1<<": "<<"Draw";
else
cout<<"Case #"<<i+1<<": "<<"Game has not completed";
}
cout<<"\n";
}
return 0;
}

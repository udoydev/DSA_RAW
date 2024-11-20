#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	
int a[1]={0};
int b[5]={0};
copy(a,a+1,b);
b[1]=3;
b[2]=5;
int c[10]={0};
copy(b,b+3,c);
c[3]=10;
c[4]=15;
c[5]=16;

for(int i=0;i<=10;i++)
{
	cout<<c[i]<<" ";
}




	
}

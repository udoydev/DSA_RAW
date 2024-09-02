#include<bits/stdc++.h>
using namespace std;

void print_pair(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int x=a[i];
		for(int j=0;j<n ; j++)
		{
			int y=a[j];
			cout<<x<<","<<y<<endl;
		}
		cout<<endl;
	}

}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	int a[]={1,2,3,4,5,6};
	int size=sizeof(a)/sizeof(int);

	print_pair(a,size);




	
}
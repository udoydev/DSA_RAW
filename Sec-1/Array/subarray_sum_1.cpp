#include<bits/stdc++.h>
using namespace std;

void print_sub_array(int a[],int n)
{


//O(N^3)
for(int i=0;i<n;i++)
{
	for(int j=i;j<n;j++)
	{
		int sum=0;
		for(int k=i;k<=j;k++)
		{
			sum+=a[k];
			cout<<sum<<" ";
		}
		cout<<endl;
	}
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

	print_sub_array(a,size);




	
}
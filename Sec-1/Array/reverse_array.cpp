#include<bits/stdc++.h>
using namespace std;

void rev(int a[], int n)
{
	int s=0;
	int e=n-1;
	while(s<e)
	{
		swap(a[s],a[e]);
		s++;
		e--;
	}

	//printing the array
	for(int i=0;i<n ;i++)
	{
		cout<<a[i]<<" ";
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

	rev(a,size);






	
}
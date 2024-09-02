#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[], int n,int k)
{
	for(int i=0 ;i<n;i++)
	{
		if(a[i]==k)
		{
			return i;
			
			break;
		}

	}

	return -1;
}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined


int a[]={1,2,7,3,10,4};
int k=7;


if(linear_search(a,6,k)!=-1)
{
	cout<<"the key is founded at "<<linear_search(a,6,k)<<" no postion"<<endl;
}
else
{
	cout<<"the "<<k<<" is not founded??"<<endl;
}



	
}
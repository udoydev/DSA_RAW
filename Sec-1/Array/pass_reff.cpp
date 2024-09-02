#include<bits/stdc++.h>
using namespace std;


void print(int a[])
{
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n; i++)
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

int n=sizeof(a)/sizeof(int);

cout<<"inside the function\n"<<endl;
print(a);
cout<<endl;


cout<<"inside main\n"<<endl;

for(int i=0;i<n; i++)
{
	cout<<a[i]<<" ";
}







	
}
//it will not work as properly as we didnot pass n as reference and thats why its assuming the size of array and printing just 1; to solve this just add (int a[], int n ) and while calling (a,6-->size)

#include<bits/stdc++.h>
using namespace std;
void code()
{
	int a;
	int ar[50];
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>ar[i];
	}
	int k=ar[0];
	for(int i=0;i<a;i++)
	{
		if(ar[i]>k)
		{
			k=ar[i];
		}
	}
	int ak=ar[0];
	for(int i=0;i<a;i++)
	{
		if(ar[i]<ak)
		{
			ak=ar[i];
		}
	}
    cout<<k-ak<<endl;
}
int main()
{
	int a;
	cin>>a;
	while(a--)
		code();
}

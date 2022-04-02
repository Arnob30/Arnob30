#include<bits/stdc++.h>
using namespace std;
void code()
{
	int a,b,coin;
	cin>>a>>b;
	if(a>0)
	{
		coin=a+(b*2);
	}
	else
		coin=0;
    cout<<coin+1<<endl;
}
int main()
{
	int x;
	cin>>x;
	while(x--)
		code();
    return 0;
}

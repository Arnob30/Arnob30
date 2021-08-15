#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
      int x,y,z,b,c,d,e;
      cin>>x;
      y=x/4;
      z=x/2;
      if(y>=2)
	  {
	  	c=x/y;
	  	if(c==y)
		{
			b=y-1;
			e=x/b;
	  	    cout<<b<<endl<<e<<endl;
		}
		else
		{
			if(c<y)
			{
				cout<<c<<endl<<y<<endl;
			}
			else
				cout<<y<<endl<<c<<endl;

		}

	  }
	  else
	  {
	  	d=z*2;
	  	cout<<z<<endl<<d<<endl;
	  }

	}
	return 0;
}

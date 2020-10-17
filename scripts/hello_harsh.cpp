#include<bits/stdc++.h>
using namespace std;
int main()
{
	int g,x;
	cin>>g;
	while(g--)
	{
		int n;
		cin>>n;
		x=n%3;
		if(x==0)
		cout<<n/3<<" "<<"0"<<" "<<"0"<<"\n";
		else if(x==1)
		{
			if(n<7)
			cout<<"-1"<<"\n";
			if(n==7)
			cout<<"0"<<" "<<"0"<<" "<<"1"<<"\n";
			if(n>7)
			cout<<n/3-2<<" "<<"0"<<" "<<"1"<<"\n";
		}
			else if(x==2)
		{
			if(n<3)
			cout<<"-1"<<"\n";
			if(n>3)
			cout<<n/3-1<<" "<<"1"<<" "<<"0"<<"\n";
		}
	}
}

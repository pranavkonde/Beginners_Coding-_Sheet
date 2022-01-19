#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,hcf=0;
	cin>>a>>b;
	int c=max(a,b);
	for(int i=1;i<=c;i++)
	{
		if(a%i==0 && b%i==0)
		{
			hcf=i;
		}	
	}
	cout<<hcf;
	return 0;
}

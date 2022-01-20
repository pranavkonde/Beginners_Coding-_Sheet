#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if(i%j==0)
			{
				cout<<i<<",";
			}
		}
	}
	
	return 0;
}

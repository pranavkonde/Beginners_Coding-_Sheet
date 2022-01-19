#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,temp;
	int c,d;
	cin>>c;
	cout<<a<<","<<b<<",";
	for(int i=1;i<=c;i++)
	{
		if(d<=c)
		{
			cout<<d<<",";
			d=a+b;
			a=b;
			b=d;	
		}
	}
	return 0;
}

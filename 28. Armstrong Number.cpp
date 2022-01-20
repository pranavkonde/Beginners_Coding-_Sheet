#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,i=0;
	cin>>a;
	int flag=a;
	int temp,b,sum=0;
	while(a>0)
	{
		temp=a%10;
		b=pow(temp,3);
		sum=sum+b;
		a=a/10;
	}
	if(sum==flag)
	{
		cout<<"Armstrong";
	}
	else
	{
		cout<<"Not a Armstrong";
	}
	return 0;
}

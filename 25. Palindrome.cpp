#include<iostream>
using namespace std;
int main()
{
	int a,rev=0,temp;
	cin>>a;
	int flag=a;
	while(a>0)
	{
		temp=a%10;
		rev=rev*10+temp;
		a=a/10;
	}
	if(flag==rev)
	{
		cout<<"Palidrome";
	}
	else
	{
		cout<<"Not a Palidrome";
	}
	return 0;
}

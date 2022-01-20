#include<iostream>
using namespace std;
int main()
{
	int a,rev=0,temp;
	cin>>a;
	while(a>0)
	{
		temp=a%10;
		rev=rev*10+temp;
		a=a/10;
	}
	cout<<rev;
	return 0;
}

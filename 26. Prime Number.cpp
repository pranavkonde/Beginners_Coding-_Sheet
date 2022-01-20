#include<iostream>
using namespace std;
int main()
{
	int a,count=0;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"Prime Number";
	}
	else
	{
		cout<<"Not a Prime Number";
	}	
	return 0;
}

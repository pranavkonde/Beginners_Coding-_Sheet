#include<iostream>
using namespace std;
int main()
{
	int year;
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0 and year%400==0)
			{
				cout<<"Leap year"<<endl;
			}
		else
			{
				cout<<"Not a leap year"<<endl;
			}
	}
	return 0;
}

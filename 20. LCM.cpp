#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b;
	int l[100],m[100];
	cin>>a>>b;
	int p,q;
	int c=max(a,b);
	for(int i=1;i<=c;i++)
	{
		p=a*i;
		l[i]=p;
		
	}
	for(int i=1;i<=c;i++)
	{
		q=b*i;
		m[i]=q;
	}
	for(int i=1;i<=c;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(l[i]==m[j])
			{
				cout<<l[i];
			}
		}
	}
	return 0;
}
/* #include <iostream>
using namespace std;
int main()
{
int n1, n2, max;
cout << "Enter two numbers: ";
cin >> n1 >> n2;
// maximum value between n1 and n2 is stored in max
max = (n1 > n2) ? n1 : n2;
do
{
if (max % n1 == 0 && max % n2 == 0)
{
cout << "LCM = " << max;
break;
}
else
++max;
} while (true);
return 0;
}
*/

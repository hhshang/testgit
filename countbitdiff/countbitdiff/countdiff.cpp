#include <iostream>
using namespace std;
int getnum(int e)
{
	int count=0;
	if (e==0)
	{
		return 0;
	}
	while(e)
	{
		e&=e-1;
		count++;
	}
	return count;
}
int main()
{
	int a=1999;
	int b=2299;
	//int c=a&b;
	//int d=a|b;
	//int e=c^d;
	int e=a^b;
	cout<<getnum(e)<<endl;
}
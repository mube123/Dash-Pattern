#include<iostream>
using namespace std;
int dashedSeparator(int dashcount);

int main()
{
	cout<<"section A\n";
	dashedSeparator(40);
	cout<<"\nsection B\n";
	cout<<endl;
	dashedSeparator(50);
	cout<<endl;
	dashedSeparator(60);
	cout<<endl;
	dashedSeparator(70);
	cout<<endl;
	dashedSeparator(80);
	cout<<endl;
	
	
}
int dashedSeparator(int dashcount=25)
{
	for(int i=1;i<=dashcount;i++)
	{
		cout<<"-";
	}
}

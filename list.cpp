#include<iostream>
#include<list>

using namespace std;
list<int> Lis;
int main()
{
	int x;
	for(int i=0;i<10;i++)
	{
		Lis.push_back(i);
	}
	list<int>::iterator iter;
	for(iter=Lis.begin();iter!=Lis.end();iter++)
	{
		cout << *iter;
	}
	cout << endl;	
	while(cin >>x)
	{
		Lis.remove(x);
		for(iter=Lis.begin();iter!=Lis.end();iter++)
		{
			cout << *iter;
		}
		cout << endl;
	}
}

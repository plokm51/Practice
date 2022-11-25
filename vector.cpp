#include<iostream>
#include<vector>

using namespace std;
vector<int> vec;

int main()
{
	for(int i=1;i<=10;i++)
	{
		vec.push_back(i);
	}
	for(vector<int>::iterator iter=vec.begin();iter!=vec.end();iter++)
	{
		cout << *iter;
		cout << endl;
	}
}

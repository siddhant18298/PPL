#include<iostream>
using namespace std;

int main()
{
	cout << "Enter three digit number" << endl;
	int a, temp=0;
	cin >> a;
	
	while(a>0)
	{
		temp += a % 10;
		
		a = a/10;
	}
	
	cout << temp << endl;
	
return 0;
}

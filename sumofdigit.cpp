#include <iostream>
using namespace std;

int main() {
	long long int num,i,c,ne=0;
	cin>>num;
	while(num>0)
	{
		c=num%10;
		ne++;
		num=num/10;
	}
	cout<<ne;
	return 0;
}

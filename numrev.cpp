#include <iostream>
using namespace std;

int main() {
	int num,i,temp,c,ne=0;
	cin>>num;
	temp=num;
	while(temp>1)
	{
		c=temp%10;
		temp=temp/10;
		ne=ne*10;
		ne=ne+c;
	}
	cout<<ne;
	return 0;
}

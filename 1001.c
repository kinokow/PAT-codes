#include<iostream>
using namespace std;

int main()
{
	int n,count;
	cin >> n;
	
	count=0;
	while(n!=1){
		if(n%2)
		{
			n = (3*n+1)/2;
			}
		else
		{
			n/=2;
			}	
		
		count++;
	}
	
	cout << count << endl;
	return 0;
}

#include<iostream>
using namespace std;


int main()
{
	int i,n,fact=1;
	cout << "Please enter the number\n";
	cin >> n;
	for(i=1;i<=n;i++)
		fact*=i;

	cout << "Factorial of " << n << " = " << fact <<endl;;

    return 0;
}

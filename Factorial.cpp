#include<iostream>
using namespace std;
void fact()
{
	int fact, num;
	fact = 1;
	cout << "enter a number" << endl;
	cin >> num;
	while (num >= 1)
	{
		fact = fact * num;
	num = num - 1;
}
	cout << "factorial of the number is "<<fact << endl;
}
void main()
{
	fact();
}
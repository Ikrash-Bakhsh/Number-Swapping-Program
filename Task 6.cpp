#include<iostream>
using namespace std;

void swapping(int n1, int n2);

int main()
{
	int num1, num2;
	cout<<"Enter 1st number : ";
	cin>>num1;
	cout<<"Enter 2nd number : ";
	cin>>num2;
	cout<<endl;
	cout<<"Before Swapping"<<endl;
	cout<<"Value of 1st number = "<<num1<<endl;
	cout<<"Value of 2nd number = "<<num2<<endl;
	swapping(num1, num2);
	return 0;
}
void swapping(int n1, int n2)
{
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	cout<<"After Swapping"<<endl;
	cout<<"Value of 1st number after swapping = "<<n1<<endl;
	cout<<"Value of 2nd number after swapping = "<<n2<<endl;
}


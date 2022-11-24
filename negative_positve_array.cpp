#include<iostream>
using namespace std;
int main()
{
	int a[10]={11,10,9,8,7,6,5,4,3,2}; int i; int sum=0; cout<<"Array contains\n";
	for(i=0;i<10;i++){
		cout<<a[i]<<endl;
	}
	cout<<"Even numbers\n";
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<"\n";
		}
	}
	cout<<"oddddd numbers\n";
	for(i=0;i<=10;i++)
	{
		if(a[i]%2==1)
		{
			cout<<a[i]<<"\n";
		}
		cout<<"All positive numbers are\n";
		for(i=0;i<10;i++)
		{
			if(a[i]>=0)
			{
				cout<<a[i]<<"\n";
			}
		}
		cout<<"Here are all negative numbers\n";
		for(i=0;i<10;i++)
		{
			if(a[i]<0)
			{
				cout<<a[i]<<"\n";
			}
			
		}cout<<"There is no negative numbers in this array\n";
		
		for(i=0; i<10;i++)
		{
			sum=i+sum;
		}
		cout<<"The sum of Arrays is ="<<sum<<"\n";
		
		for(i=1;i<10;i++){
			sum=sum+i;
		}int avr=0;
		avr=sum/i;
		cout<<"The Average is = "<<avr;
			
	}
}

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char abc[100];
	cout<<"Enter a string in upper case"<<endl;
	cin.getline(abc, 100);
	cout<<"Entered string is = "<<abc<<endl;
	strlwr(abc);
	cout<<"String in lower case"<<abc<<endl;
	return 0;
}

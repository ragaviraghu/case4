#include<iostream>
using namespace std;
int main()
{
int n=10,x,large=0;
cout<<"Enter the value of 10 numbers : "<<endl;
for(int i=0;i<n;i++)
{
cin>>x;
if(x>large)
large=x;
}
cout<<"The largest number is "<<large<<endl;
return 0;
}

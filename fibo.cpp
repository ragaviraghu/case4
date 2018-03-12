#include<iostream>
using namespace std;
int main()
{
int n,f1=0,f2=1,f3;
cout<<"Enter the number : "<<endl;
cin>>n;
cout<<"The fibonacci series for "<<n<<" terms are : "<<endl;
for(int i=1;i<=n;++i)
{
cout<<f2<<endl;	
f3=f1+f2;
f1=f2;
f2=f3;
}
return 0;
}

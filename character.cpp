#include<iostream>
using namespace std;
int main()
{
string s;
int len,i,count=0,n;
cout<<"Enter the string : "<<endl;
getline(cin,s);
len=s.size();
for(i=0;i<len;i++)
{
if(s[i]==' ')
{
 count++;
}
}
n=len-count;
cout<<"Number of characters in the given string are : "<<n<<endl;
return 0;
}

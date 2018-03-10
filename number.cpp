#include<iostream>
using namespace std;
int main()
{
string s;
int len,i,count=0;
cout<<"Enter the string : "<<endl;
getline(cin,s);
len=s.size();
for(i=0;i<len;i++)
{
if(isdigit(s[i]))
{
 count++;
}
}
cout<<"Number of numeric characters in the given string are : "<<count<<endl;
return 0;
}

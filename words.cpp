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
if(s[i]==' '||s[i]=='.')
{
 count++;
}
}
cout<<"Number of words in the given string are : "<<count+1<<endl;
return 0;
}

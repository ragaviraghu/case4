#include<iostream>
using namespace std;
 int main()
{string s;
int countDigits,countAlphabet,countSpecialChar,countSpaces;
countDigits=countAlphabet=countSpecialChar=countSpaces=0;
cout<<"Enter a string: "<<endl;
getline(cin,s);
for(int i=0;s[i]!=NULL;i++)
{
if(s[i]>='0' && s[i]<='9')
countDigits++;
else if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
countAlphabet++;
else if(s[i]==' ')
countSpaces++;
else
countSpecialChar++;
}
cout<<"The number of special characaters in the given string is : "<<countSpecialChar<<endl; 
return 0;
}

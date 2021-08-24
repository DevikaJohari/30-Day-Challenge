#include <iostream>
#include <conio.h>
#include <stack> 
using namespace std;
bool backspaceCompare(string s, string t) 
{
    stack <char> str1;
    stack <char> str2;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='#')
            str1.push(s[i]);
        else if(!str1.empty())
            str1.pop();
            continue;
    }
    for(int i=0;i<t.length();i++)
    {
        if(t[i]!='#')
            str2.push(t[i]);
        else if(!str2.empty())
        {
            str2.pop();
            continue;
        }
    }
    if(str1.size() != str2.size())
        return false;
    while(!str1.empty())
    {
        if(str1.top() == str2.top())
        {
            str1.pop();
            str2.pop();
        }
        else
        {
            return false;
        }
    }
        return true;
}
int main()
{
    string s,t;
    cout<<"Enter string 1: ";
    getline(cin,s);
    cout<<"Enter string 2: ";
    getline(cin,t);
    bool val;
    val=backspaceCompare(s,t);
    if(val)
        cout<<"Output: True";
    else
        cout<<"Output: False";
    return 0;
}
        
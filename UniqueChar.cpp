#include <iostream>
#include <conio.h>
#include<vector>
using namespace std;
int firstUniqChar(string s) 
{
    vector<int>arr(26,0);
    for(int i=0;i<s.length();i++)
    {
         arr[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(arr[s[i]-'a']==1)
        return i;
    }
    return -1;
}
int main()
{
    string s;
    int n;
    getline(cin,s);
    n=firstUniqChar(s);
    cout<<n;
    return 0;
}
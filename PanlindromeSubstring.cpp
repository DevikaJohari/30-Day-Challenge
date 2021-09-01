#include <iostream>
#include <conio.h>
using namespace std;
string longestPalindrome(string s) {
    if(s.length()<=1)
        return s;
    int maxlen=1;
    int n=s.length();
    int start=0,end=0;
    //ODD length
    for(int i=0;i<n;i++)
    {
        int l=i,r=i;
        while(l>=0 && r<n)
        {
            if(s[l]==s[r])
            {
                l--;
                r++;
            }
            else
                break;
        }
        int len=r-l-1;
        if(len>maxlen)
        {
            maxlen=len;
            start=l+1;
            end=r-1;
        }
    }
    //EVEN length
    for(int i=0;i<n;i++)
    {
        int l=i,r=i+1;
        while(l>=0 && r<n)
        {
            if(s[l]==s[r])
            {
                l--;
                r++;
            }
            else
                break;
        }
        int len=r-l-1;
        if(len>maxlen)
        {
            maxlen=len;
            start=l+1;
            end=r-1;
        }
    }  
    return s.substr(start,maxlen);
    }
int main()
{
    string s,ans;
    cout<<"Input: ";
    getline(cin,s);
    ans=longestPalindrome(s);
    cout<<"Output: "<<ans;
    return 0;
}
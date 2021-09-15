#include <iostream>
#include <conio.h>
#include<vector>
#include<string>
using namespace std;
 string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
        {
            return "";
        }
        string prefix = strs[0];
        
        for(int i = 1; i < strs.size() ; i++)
        {
            while(strs[i].find(prefix) != 0)
            {
                prefix = prefix.substr(0, prefix.length() - 1);
            }
        }
        
        return prefix;
}
int main()
{
    vector<string> str;
    string s,ans;
    int num;
    cout<<"Enter the no of strings you want: ";
    cin>>num;
    cout<<"Enter string: ";
    for(int i=0;i<num;i++)
    {
        cin>>s;
        str.push_back(s);
    }
    ans=longestCommonPrefix(str);
    cout<<"Output: "<<ans;
    return 0;
}
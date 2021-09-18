#include <iostream>
#include <conio.h>
#include<string>
using namespace std;
int lengthOfLastWord(string s) 
 {
    /*int len = 0;
    bool found = false;
    for(int i=s.size()-1; ~i; --i)
    {
        if(s[i]!=' ')
            found = true;
        if(s[i]==' ' && found)
            break;
        if(found) 
            len ++;
    }
return len;*/
int len = s.length();
        int count = 0;
        bool isSpace = false;
        for(int i= len-1;i>=0;i--){
            if(s[i] == ' '){
                if(count>0) 
                    break;
                isSpace = true;
            }
                
            else
                count++;
                
        }
        return count;
    }
}
       
int main()
{
    string s;
    int l;
    cout<<"Enter the string: ";
    getline(cin,s);
    l=lengthOfLastWord(s);
    cout<<"Output: ";
    cout<<l;
    return 0;
}
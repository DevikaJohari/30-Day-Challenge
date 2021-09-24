#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
void reverse(int p1,int p2,vector<char>s)
    {
        char temp;
        if(p1>=p2){
            cout<<"Output: ";
            for (auto it =  s.begin(); it != s.end(); ++it)
                cout << *it <<" ";
            return;
        }
        swap(s[p1],s[p2]);
        reverse(p1+1,p2-1,s);
    }
void reverseString(vector<char> s) {
        reverse(0,s.size()-1,s);
         
    }
/*void reverseString(vector<char> s)
{
        for (auto it =  s.rbegin(); it != s.rend(); ++it)
            cout << *it <<" ";
}*/
int main()
{
    std::vector<char> s,ans;
    int num;
    char ch;
    cout<<"Enter the length of string: ";
    cin>>num;
    cout<<"Enter the character: ";
    for(int i=0;i<num;i++)
    {
        cin>>ch;
        s.push_back(ch);
    }
    reverseString(s);
    return 0;
}
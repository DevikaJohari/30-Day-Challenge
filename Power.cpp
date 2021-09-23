#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    if(n==1)
        return true;
    else if(n%2!=0 || n==0){
        return false;
    }
    return isPowerOfTwo(n/2);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(isPowerOfTwo(n))
        cout<<"\nOutput: True";
    else
        cout<<"\nOutput: False";
    return 0;
}
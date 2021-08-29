#include<iostream>
#include<conio.h>
#include<vector>
#include <algorithm>
using namespace std;
int MaxArea(vector<int>&height)
{
    int n=height.size(),area,ans=0,i=0,j;
    j=n-1;
    while(i<j)
    {
        area=(j-i)*min(height[i],height[j]);
        if(area>ans)
            ans=area;
        if(height[i]<height[j])
            i++;
        else
            j--;
    }
    return ans;
}
int main()
{
    vector <int> arr;
    int n;
    cout<<"Enter the elements in array or -1 stop:\n";
    while(1)
    {
        cin>>n;
        if(n==-1)
            break;
        else
        {
            arr.push_back(n);
        }
    }
    cout<<"Input: ";
    for(auto i= arr.begin();i!=arr.end();i++)
        cout<<*i<<" ";
    int output;
    output=MaxArea(arr);
    cout<<"\nOutput: "<<output;    
    return 0;
}

#include <iostream>
#include <conio.h>
#include<vector>
#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int> &nums,int val)
{
    int len=nums.size();
        for(int i=0;i<len;i++)
        {
            if(nums[i]==val)
            {
                int j=i+1;
                while(j<len && nums[j]==val)
                    j++;
                if(j==len)
                    return i;
                swap(nums[j],nums[i]);
            }
        }
        return len;
}
int main()
{
    vector<int>arr;
    int num,val,ans,n;
    cout<<"Enter the size of array: ";
    cin>>num;
    cout<<"Enter the Elements in array: ";
    for(int i=0;i<num;i++){
        cin>>n;
        arr.push_back(n);
    }
    cout<<"Enter the value to be removed: ";
    cin>>val;
    ans=removeElement(arr,val);
    for(int i=0;i<ans;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

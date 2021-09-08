#include <iostream>
#include <conio.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) 
{
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mini=INT_MAX,minsum;
        if(n<3)
            return 0;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1,r=n-1,sum=0;
            while(l<r)
            {
                sum=nums[i]+nums[l]+nums[r];
                if(sum<target)
                {
                    l++;
                }
                else if(sum>target)
                {
                    r--;
                }
                else
                {
                    return(sum);
                }
                if(abs(sum-target)<mini)
                {
                    mini=abs(sum-target);
                    minsum=sum;
                }
                
            }
        }
        return minsum;   
}
int main()
{
    vector<int> nums;
    int ans,n,l,target;
    cout<<"enter no. of element to be entered: ";
    cin>>n;
    cout<<"Enter th elements: ";
    for(int i=0;i<n;i++){
        cin>>l;
        nums.push_back(l);
    }
    cout<<"Enter the target: ";
    cin>>target;
    ans=threeSumClosest(nums,target);
    cout<<"Output: "<<ans;
    return 0;
}
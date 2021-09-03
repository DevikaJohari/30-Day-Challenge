#include <iostream>
#include <conio.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> final;
    int n=nums.size();
    if(n<3) 
        return {};
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++)
    {
        if(i==0|| nums[i]!=nums[i-1])
        {
        int j=i+1,k=n-1;
        while(j<k)
        {
            int sum =nums[i] + nums[j] + nums[k] ;
            if(sum == 0)
            {
                final.push_back({nums[i],nums[j],nums[k]});
                while(j<k && nums[j]==nums[j+1])j++;
                while(j<k && nums[k]==nums[k-1])k--;
                j++;
                k--;
            }
            else if(sum<0)
                j++;
            else
                k--;
        }
        }
    }
    return final;

}
int main()
{
    vector<vector<int>> ans;
    vector<int> nums;
    int n,l;
    cout<<"enter no. of element to be entered: ";
    cin>>n;
    cout<<"Enter th elements: ";
    for(int i=0;i<n;i++){
        cin>>l;
        nums.push_back(l);
    }
    ans=threeSum(nums);
    cout<<"Output: ";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }   
        cout << endl;
    }
    return 0;
}
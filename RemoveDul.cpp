#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        int i=0;
        if(k==0)
            return 0;
        for(int j=1;j<k;j++)
        {
            if(nums[i] != nums[j])
                i++;
            nums[i]=nums[j];
        }
        return i+1;
    }
int main() {
    int n,num;
    vector<int> arr;
    cout<<"Enter the length of array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    cout<<"Output: ";
    int k=removeDuplicates(arr);
    for(int j=0;j<k;j++){
        cout<<arr[j];
    }

    return 0;
}

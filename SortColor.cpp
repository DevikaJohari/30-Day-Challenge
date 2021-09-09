#include <iostream>
#include <conio.h>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
        int left=0,mid=0,right,len=nums.size();
        right=len-1;
        while(mid<=right)
        {
            if(nums[mid]==0)
            {
                swap(nums[left],nums[mid]);
                mid++;
                left++;
            }
            else if(nums[mid]==1)
                mid++;
            else{
                swap(nums[mid],nums[right]);
                    right--;
            }
                
        }
        cout<<"Output: ";
        for(auto it=nums.begin();it!=nums.end();it++)
            cout<<*it;
    }
int main()
{
    vector<int> arr;
    int n,num;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the colors in array: ";
    for(int i =0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    sortColors(arr);
    return 0;
}
#include <iostream>
#include <conio.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp ;
        for(int i=0 ; i<nums1.size() ; i++)
            temp.push_back(nums1[i]) ;
        for(int i=0 ; i<nums2.size() ; i++)
            temp.push_back(nums2[i]) ;
        sort(temp.begin(), temp.end()) ;
        int n=temp.size();
        if(n%2!=0){
            return (double)temp[n/2];
        }
        else{
            return ((double)(temp[(n-1)/2]+temp[n/2])/2.0);
        }
}
int main()
{
    vector<int> arr1,arr2;
    int n1,n2,num1,num2;
    double ans;
    cout<<"Enter the size of array 1: ";
    cin>>n1;
    cout<<"Enter the sorted elements: ";
    for(int i=0;i<n1;i++)
    {
        cin>>num1;
        arr1.push_back(num1);
    }
    cout<<"Enter the size of array 2: ";
    cin>>n2;
    cout<<"Enter the sorted elements: ";
    for(int i=0;i<n2;i++)
    {
        cin>>num2;
        arr2.push_back(num2);
    }
    ans=findMedianSortedArrays(arr1,arr2);
    cout<<"Output: "<<ans;
    return 0;
}
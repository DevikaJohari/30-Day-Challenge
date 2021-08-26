#include <iostream>
#include <conio.h>
#include <vector>
#include<map>
#include<stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
{
    vector <int> ans;
    stack <int> stack1;
    map<int,int>map;
    int i, j;
    /* #Through Array 
    int next;
    for (i = 0; i < nums2.size(); i++)
    {
        next = -1;
        for (j = i + 1; j < nums2.size(); j++)
        {
            if (nums2[i] < nums2[j])
            {
                next = nums2[j];
                break;
            }
        }
    map.insert(pair<int,int>(nums2[i],next));
    */
   // #Through Stack
    for (i = 0; i < nums2.size(); i++)
    {
        while(!stack1.empty())
        {
            if(stack1.top()<nums2[i])
            {
                map.insert(pair<int,int>(stack1.top(),nums2[i]));
                stack1.pop();
            }
            else
                break;
        }
        stack1.push(nums2[i]);
    }
    for(j=0;j<nums1.size();j++)
    {
    int val=map[nums1[j]];
    if(val==0)
        ans.push_back(-1);
    else
        ans.push_back(val);
    }
    return ans;
}
int main()
{
    vector <int> a1{1,3,5,2,4,7};
    vector <int> b1{6,5,4,3,2,1,7};
    vector <int> out;
    
    for(auto i=a1.begin();i!=a1.end();++i)
        {
            cout<<*i<<" ";   
        }
    cout<<"\n";
    for(auto i=b1.begin();i!=b1.end();++i)
        {
            cout<<*i<<" ";   
        }
    out=nextGreaterElement(a1,b1);
    cout<<"\n";
    for(auto i=out.begin();i!=out.end();++i)
        {
            cout<<*i<<" ";   
        }
    return 0;
}
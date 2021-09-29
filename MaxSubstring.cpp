#include<conio.h>
#include<iostream.h>
int maxSubArray(vector<int>& nums) 
{
  int sum = nums[0];
  int max_sum = nums[0];
  for(int i = 1 ; i < nums.size() ; i++)
  {
    sum = max(nums[i] , sum+nums[i] ) ;
    if(sum > max_sum)
    {
      max_sum = sum ;
    }
  }
   return max_sum;
}
int main()
{
  vector<int> arr;
  int ans,size,num;
  cout<<"Enter the size: ";
  cin>>size;
  cout<<"Enter the element: ";
  for(int i=0;i<size;i++)
  {
    cin>>num;
    arr.push_back(num);
  }
  ans=maxSubArray(arr);
  cout<<"Output: "<<ans;
  return 0;
}

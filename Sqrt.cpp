#include <iostream>
#include <conio.h>
using namespace std;    
int BinarySearch(int x)
{
        int left = 1, right = x /2;
        while (left <= right)
        {
            int mid = left + ((right - left) / 2);
            if (mid == x / mid)
                return mid;
            if (mid < x / mid)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return right;
}
int mySqrt(int x) {
        int ans = BinarySearch(x);
        if (x < 2) ans = x;
        return ans;
}
int main()
{
    double x;
    int n;
    cout<<"Enter x: ";
    cin>>x;
    n=mySqrt(x);
    cout<<"Output: "<<n;
    return 0;
}
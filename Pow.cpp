#include <iostream>
#include <conio.h>
using namespace std;
double pow(double x,int n)
{
    if(x==0)
        return 0;
    if(n==0)
        return 1;
    if(x==1)
        return 1;
    double res=pow(x,n/2);
    res*=res;
    return (n%2==0) ? res : res*x;
}
double myPow(double x, int n) {
        double res=pow(x,n);
        return (n>=0) ? res : 1/res;
}
int main()
{
    double x;
    int n;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter n: ";
    cin>>n;
    double ans=myPow(x,n);
    cout<<"Output: "<<ans;
    return 0;
}
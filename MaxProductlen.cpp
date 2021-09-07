#include <iostream>
#include <conio.h>
#include<string>
#include<vector>
using namespace std;
int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int> word_int(n,0);
        vector<int> word_len(n,0);
        for(int i=0;i<n;i++)
        {
            string w=words[i];
            int len=w.length();
            int wInt=0;
            for(int j=0;j<len;j++)
            {
                wInt |= 1<<(w[j]-'a');
            }
            word_int[i]=wInt;
            word_len[i]=len;
        }
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((word_int[i] & word_int[j])==0)
                    ans = max(ans,word_len[i]*word_len[j]);
            }
        }
        return ans;
    }
int main()
{
    vector<string> names{"abcw","baz","foo","bar","xtfn","abcdef"};
    int max=maxProduct(names);
    cout<<"Output: "<<max;
    return 0;
}
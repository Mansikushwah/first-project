#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
  public:
vector<int>dp;
    bool check(int n)
    {
        if(n==1) return true;
        if(n<=0) return false;
        if(dp[n]!=-1) return dp[n];
        bool flg = true;
        flg &= check(n/2);
        flg &= check(n/3);
        flg &= check(n/4);
        flg &= check(n/5);
        flg &= check(n-2);
        flg &= check(n-3);
        flg &= check(n-4);
        flg &= check(n-5);
        
        return dp[n] = (flg==false);
        
    }

    string divAndSub(int N) {
        dp = vector<int>(100100, -1);
        string ans ;
        if(N==1) return "Arya";
        if(check(N))
        {
            ans = "Jon";
        }
        else ans = "Arya";
        return ans;
    }};
int main(){
cout<<divAndSub(2);
return 0;
}

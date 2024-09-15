/*include <iostream>
using namespace std;
class Solution{
    public:
    bool isPowerofTwo(int n) {
        int ans  = 1;
        for(int i = 0; i<=30; i++) {
            if(ans == n)
            {
                return true;
            }
            if(ans< INT_MAX/2)
            ans = ans * 2;
        }
        return false;
    }
};*/
public int bitwiseComplement(int m) {
        int mask = 0;
        int n = m;
        if(n==0){
            return 1;
        }
        int i = 0;
        int ans = 0;
        while (n!=0){
            int bit = (n&1)^1;
            ans = (int) (Math.pow(2,i++)*bit)+ans;
            n=n>>1;
        }
        return ans;
    }
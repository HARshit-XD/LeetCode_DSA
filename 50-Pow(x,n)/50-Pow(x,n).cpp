// Last updated: 3/26/2025, 2:18:25 PM
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        bool isNegative = (n<0);
        long long pow = n;
        if(isNegative){
            x=1/x;
            pow=-pow;
        }

        while(pow){
            if(pow & 1){
                ans *= x;
            }
            x *= x;
            pow>>=1;
        }
        return ans;
        }
};
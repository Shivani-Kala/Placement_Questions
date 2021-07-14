class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        if(n<0)
            return false;
        while(n)
        {
            count++;
            n^=n&(-n);
        }
        return (count==1);
    }
};

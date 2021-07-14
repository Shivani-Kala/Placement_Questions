class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        if(n<0)
            return false;
        while(n)
        {
            count++;
            n^=n&(-n);
        }
        return count;
    }
};

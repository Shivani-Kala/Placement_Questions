class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        while(n)
        {
            count++;
            n^=n&(-n);
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i=0;i<=n;i++){
            result.push_back(hammingWeight(i));
        }
        return result;
    }
};

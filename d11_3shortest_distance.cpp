class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==c)
                v.push_back(i);
        }
        vector<int> result(n);
        vector<int> dist(v.size());
        for(int i=0;i<n;i++){
            if(s[i]==c)
                result[i]=0;
            else{
                for(int j=0;j<v.size();j++)
                    dist[j]=abs(v[j]-i);
                int min=dist[0];
                for(int j=1;j<dist.size();j++){
                    if(dist[j]<min)
                        min=dist[j];
                }
                result[i]=min;
            }
        }
        return result;
    }
};

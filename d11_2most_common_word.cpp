class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> mp;
        int i=0;
        string str;
        while(i<paragraph.size()){
            string str="";
            while(i<paragraph.size() && isalpha(paragraph[i])){
                str+=tolower(paragraph[i]);
                i++;
            }
            if(str!="")
                mp[str]++;
            i++;
        }
        for(int j=0;j<banned.size();j++){
            mp.erase(banned[j]);
        }
        int temp=0;
        for(auto i:mp){
            if(temp<i.second){
                str=i.first;
                temp=i.second;
            }
        }
        return str;
    }
};

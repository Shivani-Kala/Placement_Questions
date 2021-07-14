class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>result;
        string str1="qwertyuiop";
        string str2="asdfghjkl";
        string str3="zxcvbnm";
        int a[26]={0};
        for(int i=0;i<str1.length();i++)
            a[str1[i]-'a']=1;
        for(int i=0;i<str2.length();i++)
            a[str2[i]-'a']=2;
        for(int i=0;i<str3.length();i++)
            a[str3[i]-'a']=3;
        for(int i=0;i<words.size();i++){
            int temp=a[tolower(words[i][0])-97];
            int flag=0;
            for(int j=i;j<words[i].size();j++){
                if(temp!=a[tolower(words[i][j])-97]){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            result.push_back(words[i]);
        }
        return result;
    }
};

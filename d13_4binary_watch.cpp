class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> time;
        for(int i=0;i<12;i++){
            bitset<4> hours(i);
            for(int j=0;j<60;j++){
                bitset<6> minutes(j);
                if(hours.count()+minutes.count()==turnedOn){
                    string s=to_string(i);
                    string t=(j<10)?":0":":";
                    t=t+to_string(j);
                    time.push_back(s+t);
                }
            }
        }
        return time;
    }
};

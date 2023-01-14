class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>map(26,-1);
        vector<int> ans;

        for(int i=0;i<s.size();i++){
            map[s[i]-'a']=i;
        }

        int prev=-1;
        int maxi=0;

        for(int i=0;i<s.size();i++){
            maxi=max(maxi,map[s[i]-'a']);
            if(maxi==i){
                ans.push_back(maxi-prev);
                prev=maxi;
            }
        }
        return ans;
    }
};

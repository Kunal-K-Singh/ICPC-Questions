class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        vector<int> TI;
        int n=words.size();
        
        for(int i=0;i<words.size();i++) if(words[i]==target) TI.push_back(i);
        if(TI.size()==0) return -1;
        int ans=INT_MAX;

        for(int i=0;i<TI.size();i++){
            int d1=abs(TI[i]-startIndex);
            int d2=abs(n-d1);
            if(ans>min(d1,d2)) ans=min(d1,d2);
        }

        return ans;        
    }
};

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,vector<int>> VtoI;

        for(int i=0;i<arr.size();i++) VtoI[arr[i]].push_back(i);
        
        int rank=1;
        vector<int> ans(arr.size(),0);

        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++){
            if(i==0 || i>0 && arr[i]!=arr[i-1]){
                for(auto x:VtoI[arr[i]]) ans[x]=rank;
                rank++;
            }
        }
        return ans;    
    }
};

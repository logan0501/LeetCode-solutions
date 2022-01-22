class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if(m*n!=original.size())return ans;
        vector<vector<int>> res(m,vector<int>(n,0));
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]= original[idx++];
            }
        }
        return res;
    }
};
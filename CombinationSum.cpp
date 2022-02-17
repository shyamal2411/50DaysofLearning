#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    typedef vector<int> vi;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vi> ans;
        vi subset;
        help(0, candidates, target, subset, ans, 0);
        
        return ans;
    }
    
    void help(int curIndex, vi &candidates, int target, vi &subset, vector<vi> &ans, int sum){
        if(target == sum){
            ans.push_back(subset);
            return;
        }
        if(curIndex>=candidates.size() || sum > target){ return; }
        
        subset.push_back(candidates[curIndex]);
        help(curIndex, candidates, target,  subset, ans, sum + candidates[curIndex]);
        subset.pop_back(); //backtracking
        
        help(curIndex+1, candidates, target, subset, ans, sum);
    }
};

int main(){
    Solution ss;
    vector<int> candidates = {2,3,6,7,9};
    int target = 5;
    vector<vector<int>> ans = ss.combinationSum(candidates, target);
    for(auto i: ans){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>v;
        vector<vector<string>>ans;
        int n= strs.size();
        for(int i=0;i<n;i++)
        {
              string k= strs[i];
              string h =k;
              sort(h.begin(),h.end());
              v[h].push_back(k);
        }

        int l=v.size();
        for(auto i:v)
        {

               ans.push_back(i.second);

        }
        return ans;

    }
};

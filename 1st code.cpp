class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>>v;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back(make_pair(i,j));
                }
            }
        }
        int k=v.size();
        for(int i=0;i<k;i++)
        {
           //row
            int row=v[i].first;
            for(int j=0;j<n ;j++)
            {
                matrix[row][j]=0;
            }
           //coloumn
           int col=v[i].second;
           for(int j=0;j<m;j++)
           {
                 matrix[j][col]=0;
           }

        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[i][j];

            }

        }
    }
};

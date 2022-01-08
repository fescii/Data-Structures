#include<iostream>
#include<vector>

class Spiral
{
    public:
        vector<int> spiralOder(vector<vector<int>>& matrix)
        {
            vector<int> ans;

            int m = matrix.size();
            if(m == 0) return ans;

            int n = matrix[0].size();
            if(n == 0) return ans;

            int sr = 0, er = m-1, sc = 0; ec = n-1;
            int count = 0;

            while(sr <= er && sc <= ec)
            {
                //Start row
                for(int i = sc; i < = ec; i++)
                {
                    ans.push_back(matrix[sr][i])
                    cout++;
                }
                sr++;
                if(count = (m*n)) return ans;

                //End column
                for(int i = sr; i < = er; i++)
                {
                    ans.push_back(matrix[i][ec])
                    cout++;
                }
                ec--;
                if(count = (m*n)) return ans;


                //End row
                for(int i = ec; i >= sc; i--)
                {
                    ans.push_back(matrix[er][i])
                    cout++;
                }
                er--;
                if(count = (m*n)) return ans;

                //Start Column
                for(int i = er; i >= sr; i--)
                {
                    ans.push_back(matrix[i][sc])
                    cout++;
                }
                sc++;
                if(count = (m*n)) return ans;
            }

            return ans;
        }
};

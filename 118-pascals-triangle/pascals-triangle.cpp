class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> arr;

        for(int i=0;i<numRows;i++) {

            vector<int> rows;
            for(int j=0;j<i+1;j++) {



                if(j==0 || j==i) {
                        rows.push_back(1);

                }
                else rows.push_back(arr[i-1][j-1]+arr[i-1][j]);

            }

            arr.push_back(rows);

        }
        return arr;

        
        
    }
};
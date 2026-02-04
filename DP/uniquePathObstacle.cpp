#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        if (obstacleGrid[0][0] == 1)
            return 0;

        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();

        vector<vector<int>> paths(row, vector<int>(col, 0));

        bool flag = 0;
        for (int i = 0; i < col; i++)
        {
            if (obstacleGrid[0][i] == 1)
                flag = 1;
            if (flag)
                paths[0][i] = 0;
            else
                paths[0][i] = 1;
        }

        flag = 0;
        for (int i = 0; i < row; i++)
        {
            if (obstacleGrid[i][0] == 1)
                flag = 1;
            if (flag)
                paths[i][0] = 0;
            else
                paths[i][0] = 1;
        }

        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < col; j++)
            {
                if (obstacleGrid[i][j] != 1)
                    paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
            }
        }

        return paths[row - 1][col - 1];
    }
    int uniquePathsWithObstaclesOptimized(vector<vector<int>> &obstacleGrid)
    {
        if (obstacleGrid[0][0] == 1)
            return 0;

        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();

        vector<int> paths(col, 0);

        bool flag = 0;
        for (int i = 0; i < col; i++)
        {
            if (obstacleGrid[0][i] == 1)
                flag = 1;
            if (flag)
                paths[i] = 0;
            else
                paths[i] = 1;
        }

        for (int i = 1; i < row; i++)
        {
            // need to handle the 0th column as if it has 0s, the rest are 0
            if (obstacleGrid[i][0] == 1)
                paths[0] = 0;
            for (int j = 1; j < col; j++)
            {
                if (obstacleGrid[i][j] != 1)
                    paths[j] = paths[j] + paths[j - 1];
                else
                    paths[j] = 0;
            }
        }

        return paths[col - 1];
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
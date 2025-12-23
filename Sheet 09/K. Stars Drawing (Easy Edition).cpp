// K. Stars Drawing (Easy Edition)

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const int SZ = 1005;
char arr[SZ][SZ];
int visit[SZ][SZ];
vector<pair<pair<int, int>, int>> res;
int n, m;

void add(int row, int column, int moves)
{
    int colMove = column + moves;
    int col = column;
    while (col <= colMove)
    {
        visit[row][col] = 1;
        col++;
    }
    colMove = column - moves;
    col = column;
    while (col >= colMove)
    {
        visit[row][col] = 1;
        col--;
    }
    int rowMove = row + moves;
    int ro = row;
    while (ro <= rowMove)
    {
        visit[ro][column] = 1;
        ro++;
    }

    rowMove = row - moves;
    ro = row;
    while (ro >= rowMove)
    {
        visit[ro][column] = 1;
        ro--;
    }
}

int checkStarts(int row, int column)
{
    int right = 0, left = 0, upper = 0, lower = 0;
    int col = column;
    while (col <= m && arr[row][col] == '*')
    {
        right++;
        col++;
    }

    col = column;
    while (col >= 1 && arr[row][col] == '*')
    {
        left++;
        col--;
    }
    int ro = row;
    while (ro >= 1 && arr[ro][column] == '*')
    {
        upper++;
        ro--;
    }
    ro = row;
    while (ro <= n && arr[ro][column] == '*')
    {
        lower++;
        ro++;
    }
    return min(min(left - 1, right - 1), min(upper - 1, lower - 1));
}

void solve()
{
    cin >> n >> m;

    memset(visit, 0, sizeof(visit));
    res.clear();

    for (int i = 1; i <= n; i++)
    {
        for (int z = 1; z <= m; z++)
        {
            cin >> arr[i][z];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int z = 1; z <= m; z++)
        {
            if (arr[i][z] == '*')
            {
                int stars = checkStarts(i, z);
                if (stars > 0)
                {
                    res.push_back({{i, z}, stars});
                    add(i, z, stars);
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int z = 1; z <= m; z++)
        {
            if (arr[i][z] == '*' && visit[i][z] != 1)
            {
                cout << -1;
                return;
            }
        }
    }

    cout << res.size() << '\n';
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i].first.first << " " << res[i].first.second << " " << res[i].second << '\n';
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
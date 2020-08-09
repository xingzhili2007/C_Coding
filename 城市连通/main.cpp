//
//  main.cpp
//  城市连通
//
//  Created by 李行之 on 2020/8/7.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int mp[10][10], res[10] = {0, 1}, w, cnt = 1;
;
bool vis[10];
void print(int w)
{
    int i = 1;
    while (res[i + 1] != 0)
    {
        cout << res[i++] << "->";
    }
    cout << res[i];
    cout << setw((6 - i) * 3 + 10) << "cost=" << w << endl;
}
void dfs(int n)
{

    for (int i = 1; i <= 6; i++)
    {

        if ((mp[res[n - 1]][i] != 0) && (!vis[i]))
        {
            vis[i] = 1;
            res[n] = i;
            w += mp[res[n - 1]][i];
            if (i == 6)
                print(w);
            else
            {
                dfs(n + 1);
            }
            w -= mp[res[n - 1]][i];
            vis[i] = 0;
            res[n] = 0;
        }
    }
}
int main(int argc, const char *argv[])
{
    for (int i = 1; i <= 6; i++)
        for (int j = 1; j <= 6; j++)
        {
            cin >> mp[i][j];
        }
    vis[1] = 1;
    res[6] = 6;
    res[1] = 1;
    dfs(2);
}

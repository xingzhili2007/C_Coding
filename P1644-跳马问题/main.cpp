//
//  main.cpp
//  P1644-跳马问题
//
//  Created by 李行之 on 2020/8/7.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int mx[4] = {2, 1, -1, -2};
int my[4] = {1, 2, 2, 1};
int ans, n, m;
bool vis[20][20];
void dfs(int x, int y)
{
    if (x == n && y ==m) ans++;
    if(x>n || y>m ||x<0 || y<0) return;
    for (int i = 0; i < 4; i++)
    {
        int X = x + mx[i], Y = y + my[i];
        dfs(X, Y);
    
    }
}
int main(int argc, const char *argv[])
{

    cin >> n >> m;
    dfs(0, 0);
    cout << ans << endl;
}

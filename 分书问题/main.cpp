//
//  main.cpp
//  分书问题
//
//  Created by 李行之 on 2020/8/3.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
bool like[6][6], vis[6];
int book[6];
void print()
{
    for (int i = 1; i <= 5; i++)
        cout << book[i] << " ";
    cout << endl;
}
void dfs(int n)
{
    if (n > 5)
    {
        print();
        return;
    }

    for (int i = 1; i <= 5; i++)
    {
        if (like[n][i])
            if (!vis[i])
            {
                vis[i] = 1;
                book[n] = i;
                dfs(n + 1);
                vis[i] = 0;
                book[n] = 0;
            }
    }
}
//like[i][j] 表示第i个人喜欢第j本书的情况
int main(int argc, const char *argv[])
{

    //input
    for (int j = 1; j <= 5; j++)
        for (int i = 1; i <= 5; i++)
            cin >> like[j][i];
    dfs(1);
}

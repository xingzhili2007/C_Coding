//
//  main.cpp
//  马拦过河卒
//
//  Created by 李行之 on 2020/8/6.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
bool vis[101][101];
const int X = 0, Y = 1;
int horsex, horsey, targetx, targety, sum;
int mvh[2][10] = {-1, -2, -2, -1, 1, 2, 2, 1, -2, -1, 1, 2, 2, 1, -1, -2};
int mvz[2][2] = {1, 0, 1, 1};
void dfs(int x, int y)
{
    
    for (int i = 0; i < 2; i++)
    {
        int nowx = x + mvz[X][i];
        int nowy = y + mvz[Y][i];
        if (nowx>0 && nowy >0 && nowx<=targetx && nowy<=targety)
        {
            if(vis[nowx][nowy]) continue;
            vis[nowx][nowy] = true;
            if (nowx == targetx && nowy == targety)
                sum++;
            
            else
                dfs(nowx, nowy);
            vis[nowx][nowy] = false;
        }
    }
}
int main(int argc, const char *argv[])
{

    cin >> horsex >> horsey;
    cin >> targetx >> targety;
    vis[1][1] = true;
    vis[horsex][horsey] = true;
    for (int i = 0; i < 8; i++)
    {
        int nowx = horsex + mvh[X][i];
        int nowy = horsey + mvh[Y][i];
        if(nowx>0 && nowy >0 && nowx<=targetx && nowy<=targety)
            vis[nowx][nowy] = true;
    }
    dfs(1, 1);
    cout << sum << endl;
    return 0;
}

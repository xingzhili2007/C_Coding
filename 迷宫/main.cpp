//
//  main.cpp
//  迷宫
//
//  Created by 李行之 on 2020/7/22.
//  Copyright © 2020 李行之. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
int vis[105][105],mp[105][105],n;
struct point {int x,y;};
point start,fin;
int mvx[5]={0,-1,0,1,0},mvy[5]={0,0,1,0,-1};
bool arrive=false;
void dfs(point now)
{
    for(int mv=1;mv<=4;mv++)
    {
        point nxt;
        int nx=nxt.x=now.x+mvx[mv],ny=nxt.y=now.y+mvy[mv];
        if (nx==fin.x && ny==fin.y) {arrive=true;return;}
        if(nx<=0 || nx>n || ny<=0 || ny>n) continue;
        if(!vis[nx][ny] && mp[nx][ny])
        {
            vis[nx][ny]=1;
            dfs(nxt);
        }
        
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)//行
        for(int j=1;j<=n;j++)//列
        {
            char in;
            cin>>in;
            if (in=='#') mp[i][j]=0;
            else mp[i][j]=1;
            if (in=='@') {start.x=i;start.y=j;}
            else if (in=='E'){fin.x=i;fin.y=j;}
        }
    if(mp[start.x][start.y]||mp[fin.x][fin.y])
        dfs(start);
    if(arrive==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

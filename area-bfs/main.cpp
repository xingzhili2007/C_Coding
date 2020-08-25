//
//  main.cpp
//  area-bfs
//
//  Created by 李行之 on 2020/8/10.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

bool mp[105][105];
int ans;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
struct node{int x,y;};
inline node Pair(int x,int y)
{
    node __Pusher;
    __Pusher.x=x;
    __Pusher.y=y;
    return __Pusher;
}
void bfs(node st)
{
    queue<node> q;
    q.push(st);
    int x=st.x,y=st.y;
    mp[x][y]=true;
    while (!q.empty())
    {
        node frt=q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int newx=frt.x+dx[i],newy=frt.y+dy[i];
            
            if (newx > 0 && newx <= 10 && newy > 0 && newy <= 10 && (!mp[newx][newy]))
            {
                mp[newx][newy] = true;
                q.push(Pair(newx,newy));
            }
            
        }
    }
}
int main()
{

    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++)
            cin>>mp[i][j];
    for (int i = 1; i <= 10; i++)
    {
        if (!mp[i][1])
            bfs(Pair(i,1));
        if (!mp[i][10])
            bfs(Pair(i, 10));
        if (!mp[1][i])
            bfs(Pair(1, i));
        if (!mp[10][i])
            bfs(Pair(10, i));
    }
    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++)
            if (!mp[i][j])
                ans++;
    cout<<ans<<endl;
    return 0;
}

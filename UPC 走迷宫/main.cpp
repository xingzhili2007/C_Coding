//
//  main.cpp
//  UPC 走迷宫
//
//  Created by 李行之 on 2020/8/2.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int n,m,a[305][305],x,y,xe,ye,vis[305][305];
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
struct hhh{
    int xx,yy,dis;
}w[100005];
struct hh{
    int xa,xb,ya,yb;
}e[30];
int main(){
    freopen("maze.in","r",stdin);
    freopen("maze.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i){
        char qwe[305];
        scanf("%s",qwe+1);
        for(int j=1;j<=m;++j){
            if(qwe[j]=='#')
                a[i][j]=0;
            else
                a[i][j]=1;
            if(qwe[j]=='=')
                xe=i,ye=j;
            if(qwe[j]=='@')
                x=i,y=j;
            if(qwe[j]>='A'&&qwe[j]<='Z'){
                a[i][j]=qwe[j]-63;
                if(e[qwe[j]-63].xa)
                    e[qwe[j]-63].xb=i,e[qwe[j]-63].yb=j;
                else
                    e[qwe[j]-63].xa=i,e[qwe[j]-63].ya=j;
            }
        }
    }
    int hd=1,tl=1;
    w[1].xx=x;
    w[1].yy=y;
    w[1].dis=0;
    vis[x][y]=1;
    while(hd<=tl){
        for(int i=0;i<4;++i){
            int xd=w[hd].xx+dx[i],yd=w[hd].yy+dy[i];
            int dsd=w[hd].dis+1;

            if(a[xd][yd]>1){
                int xxd=xd,yyd=yd;
                if(xd==e[a[xd][yd]].xa&&yd==e[a[xd][yd]].ya){
                    xd=e[a[xxd][yyd]].xb;
                    yd=e[a[xxd][yyd]].yb;
                }
                else{
                    xd=e[a[xxd][yyd]].xa;
                    yd=e[a[xxd][yyd]].ya;
                }
            }

            if(a[xd][yd]==0||vis[xd][yd]) continue;
            vis[xd][yd]=1;
            tl++;
            w[tl].xx=xd;
            w[tl].yy=yd;
            w[tl].dis=dsd;
            if(xd==xe&&yd==ye){
                printf("%d",dsd);
                return 0;
            }
        }
        hd++;
    }
    printf("-1");
    return 0;
}

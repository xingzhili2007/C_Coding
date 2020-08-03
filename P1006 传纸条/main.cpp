//
//  main.cpp
//  P1006 传纸条
//
//  Created by 李行之 on 2020/8/1.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
const int MAXN=55;
using namespace std;
int f[MAXN][MAXN][MAXN][MAXN],a[MAXN][MAXN];
int n,m;
inline int max4(int a,int b,int c,int d)
    {return max(a,max(b,max(c,d)));}
int main(){
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
                cin >> a[i][j];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            for (int k=1;k<=n;k++)
                for (int l=j+1;l<=m;l++)
                    f[i][j][k][l]=max4(f[i][j-1][k-1][l],f[i-1][j][k][l-1],f[i][j-1][k][l-1],f[i-1][j][k-1][l])+a[i][j]+a[k][l];
    cout << f[n][m-1][n-1][m] << endl;
    return 0;
}

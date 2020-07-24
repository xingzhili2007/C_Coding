//
//  main.cpp
//  poj1733
//
//  Created by 李行之 on 2020/4/8.
//  Copyright © 2020 李行之. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
int n,m,fa[20005],a[20005],t;
struct Node{
    int x,y;
    char opt[5];
}sv[20005];
int find(int x){
    if(x == fa[x]) return x;
    return fa[x] = find(fa[x]);
}
int main(){

  scanf("%d%d",&n,&m);
  for(int i = 1; i <= m; i++){
    
    cin>>sv[i].x>>sv[i].y>>sv[i].opt;
    a[++t] = sv[i].x - 1;//
    a[++t] = sv[i].y;
  }
  sort(a+1,a+t+1);
  int k = unique(a+1,a+t+1) - (a+1);
  for(int i = 1; i <= k+k; i++) fa[i] = i;
  
  for(int i = 1; i <= m; i++){
      int x = lower_bound(a+1, a+k+1, sv[i].x - 1) - a;
      int y = lower_bound(a+1, a+k+1, sv[i].y) - a;
      int u = find(x), v = find(y);
      int nu = find(x + k), nv = find(y + k);
      if(sv[i].opt[0] == 'e'){
        if(u == nv || v == nu){
            cout<<i-1<<endl;
            return 0;
        }
        fa[v] = u, fa[nv] = nu ;
        }
        else{
          if(u == v || nu == nv){
          printf("%d\n",i - 1);return 0;
        }
        fa[v] = nu, fa[nv] = u;
        }
    }
  printf("%d\n",m);
  return 0;

}

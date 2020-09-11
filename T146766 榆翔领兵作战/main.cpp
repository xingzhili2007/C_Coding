//
//  main.cpp
//  T146766 榆翔领兵作战
//
//  Created by 李行之 on 2020/9/6.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int n,k,cnt=0;
char s[400005];
struct node
{
    char c;
    int no;
}line[400005];
inline node add(char c,int no)
{
    node a;
    a.c=c;
    a.no=no;
    return a;
}
bool cmp(node a,node b)
{return a.c<b.c?true:false;}
int main(int argc, const char * argv[]) {
    
    cin>>n>>k;
    scanf("%s",s+1);
    for(int i=1;i<=n;i++)
        line[i]=add(s[i],i);
    sort(line+1,line+n+1,cmp);
    for(int i=1;i<=k;i++)
        s[line[i].no]='!';
    for(int i=1;i<=n;i++)
    {
        if(s[i]!='!') cout<<s[i];
    }
    cout<<endl;
    
    return 0;
}

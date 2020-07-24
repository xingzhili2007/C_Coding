//
//  main.cpp
//  P3370 【模板】字符串哈希
//
//  Created by 李行之 on 2020/7/24.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
const int HASH=233,inf=0x3f3f3f3f,MAXN=10010;
#define sl(a) strlen(a)
typedef unsigned long long ull;
typedef unsigned long ul;
typedef int I;
typedef char C;
I n;
C InStr[MAXN];
ull HashVal[MAXN];

ull Dohash(char HashStr[])
{
    ul lenStr=sl(HashStr);
    ull ans=0;
    for(int i=0;i<lenStr;i++)
        ans=HASH*ans+(ull)HashStr[i];
    return ans;
}

int main(int argc, const char * argv[]) {
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>InStr;
        HashVal[i]=Dohash(InStr);
    }
    sort(HashVal+1,HashVal+n+1);
    I DifNim=1;
    for(I i=1;i<n;i++)
    if (HashVal[i]!=HashVal[i+1]) DifNim++;
    cout<<DifNim<<endl;
    return 0;
}

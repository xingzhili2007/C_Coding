//
//  main.cpp
//  Big_timeing
//
//  Created by 李行之 on 2020/5/2.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    char a1[20003],b1[20003];
    int a[20003],b[20003],c[40000009];
    
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    gets(a1);
    gets(b1);
    int lena=strlen(a1);
    int lenb=strlen(b1);
    for (int i=0;i<=lena;i++){
        a[lena-i-1]=b1[i]-'0';
    }
    for (int i=0;i<=lenb;i++){
        b[lenb-i-1]=b1[i]-'0';
    }
    
    for (int i=0;i<lenb;i++)
    {
        int x=0;
        for(int j=0;j<lena;j++)
        {
            int k=b[i]*a[j]+x+c[i+j];
            x=k/10;
            c[i+j]
            
        }
    }
    
    
    
    
    while(c[cl-1]==0&&(cl>1)){
        cl--;
    }
    for (int i=cl-1;i>=0;i--){
        cout<<c[i];
    }
    return 0;
}

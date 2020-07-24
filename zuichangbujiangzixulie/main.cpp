//
//  main.cpp
//  zuichangbujiangzixulie
//
//  Created by 李行之 on 2020/5/31.
//  Copyright © 2020 李行之. All rights reserved.
//

//... 7
//2 3 6 6 7 7 7 7 9 10
//寻找第一个比它大的数字
#include<bits/stdc++.h>
using namespace std;
int n,top,a[1005],d[1005],mx;
int main(){
    cin>>n;
    cin>>a[1];
    top=1;
    d[top]=a[1];
    for(int i=2;i<=n;i++){
        cin>>a[i];
        if(a[i]>=d[top]) {d[++top]=a[i];continue;}
        int l = 1, r = top;
        while(l<r){
            int mid = (l+r)/2;
            if(a[i] >= d[mid]) l = mid + 1;
            else  r = mid;
        }
        d[l] = a[i];
    }
    cout<<top<<endl;
   
}


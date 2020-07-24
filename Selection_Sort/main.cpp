//
//  main.cpp
//  Selection_Sort
//
//  Created by 李行之 on 2020/6/7.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int n;
int a[1010];
void print(int a[],int n)
{
    for(int i=1;i<=n;i++) cout<<a[i]<<' ';
    cout<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int min;
    for (int i = 1; i <= n ; i++) {
        min = i;
        for (int j = i + 1; j <= n ; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        if (min != i) {
            swap(a[i], a[min]);
        }
        print(a,n);
    }
    
//    for(int i=1;i<=n;i++) cout<<a[i]<<' ';
    return 0;
}

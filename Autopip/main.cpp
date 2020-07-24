//
//  main.cpp
//  Autopip
//
//  Created by 李行之 on 2020/7/22.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
char a[1000]="python -m pip install ";
char b[100];
char c[10010];
int main(int argc, const char * argv[]) {
    argv[1]="itchat";
    system(strcat(a,argv[1]));
    return 0;
}

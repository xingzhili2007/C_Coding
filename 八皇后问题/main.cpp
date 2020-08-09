//
//  main.cpp
//  八皇后问题
//
//  Created by 李行之 on 2020/8/7.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int A[100];
bool B[100], C[100], D[100];
int sum = 0;
void print()
{
    sum++;
    for (int i = 1; i <= 8; i++)
        cout << A[i] << " ";
    cout << endl;
    cout << sum << endl;
}
void dfs(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (B[j] && C[i + j] && D[i - j + 8])
        {
            A[i] = j;
            B[j] = false;
            C[i + j] = false;
            D[i - j + 8] = false;
            if (i == 8)
                print();
            else
                dfs(i + 1);
            A[i] = 0;
            B[j] = true;
            C[i + j] = true;
            D[i - j + 8] = true;
        }
    }
}
int main(int argc, const char *argv[])
{

    memset(B, 1, sizeof(B));
    memset(C, 1, sizeof(C));
    memset(D, 1, sizeof(D));
    dfs(1);
    return 0;
}

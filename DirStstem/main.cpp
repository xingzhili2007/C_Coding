//
//  main.cpp
//  DirStstem
//
//  Created by 李行之 on 2020/6/21.
//  Copyright © 2020 李行之. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
string a;
int DirDeepth;
int DataSet=1;
int Isin=0;
void work()
{
    string str[50];
    int l=0;
    while(cin>>a)
    {
        if(Isin==0&&a[0]!='#')
        {
            cout<<"DATA SET "<<DataSet<<":"<<endl;
            cout<<"ROOT"<<endl;
            Isin=1;
        }
        if(a[0]=='#')
        return;
        else if(a[0]=='*')
        {
            DirDeepth=0;
            sort(str+0,str+l);
            for(int i=0;i<l;i++)
            {
                cout<<str[i]<<endl;
            }
            cout<<endl;
            DataSet++;
            
            Isin=0;
            work();
        }
        else if(a[0]=='d')
        {
            DirDeepth++;
            for(int i=1;i<=DirDeepth;i++)
            {
                cout<<"|";
                for(int j=1;j<=5;j++)
                cout<<" ";
            }
            cout<<a<<endl;
            work();
        }
        else if(a[0]=='f')
        {

            str[l]=a;
            l++;
            continue;
        }
        else if(a[0]==']')
        {

            sort(str+0,str+l);
            for(int i=0;i<l;i++)
            {
                for(int k=1;k<=DirDeepth;k++)
                {
                    cout<<"|";
                    for(int j=1;j<=5;j++)
                    cout<<" ";
                }
                cout<<str[i]<<endl;
            }
            DirDeepth--;
            return;
        }
    }
}
int main()
{
    
    work();
    return 0;
}

#include <cstdio>

char ANS[][50] = {
    "g[1][i+1]",
    "n-1",
    "elist[k].weight > elist[m].weight",
    "j=w",
    "v=1"
};

int main(){
    int n;
    scanf("%d", &n);
    printf("%s", ANS[n]);
    return 0;
}

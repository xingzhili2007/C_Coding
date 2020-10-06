#include <cstdio>

char ANS[][50] = {
    "",
    "序号2答案",
    "序号3答案",
    "b[i] = x",
    "序号5答案"
};

int main(){
    int n;
    scanf("%d", &n);
    printf("%s", ANS[n]);
    return 0;
}

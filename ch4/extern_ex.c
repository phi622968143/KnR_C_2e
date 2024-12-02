#include <stdio.h>

// extern 聲明，告訴編譯器變數存在但稍後才定義
extern int sp;
extern double val[];

int main() {
    printf("sp = %d\n", sp);
    printf("val[0] = %.2f\n", val[0]);
}

// 變數的實際定義與初始化
int sp = 10;
double val[] = {2.71};


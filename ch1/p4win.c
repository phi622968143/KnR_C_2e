#include <stdio.h>
#include <termios.h>
#include <unistd.h>

void disable_echo() {
    struct termios settings;
    tcgetattr(STDIN_FILENO, &settings);  // 取得終端的設定
    settings.c_lflag &= ~ECHO;            // 禁用回顯
    settings.c_lflag &= ~ICANON;          // 禁用行緩衝模式，改為逐字符處理
    tcsetattr(STDIN_FILENO, TCSANOW, &settings);  // 設定終端設定
}

void enable_echo() {
    struct termios settings;
    tcgetattr(STDIN_FILENO, &settings);  // 取得終端的設定
    settings.c_lflag |= ECHO;             // 恢復回顯
    settings.c_lflag |= ICANON;           // 恢復行緩衝模式
    tcsetattr(STDIN_FILENO, TCSANOW, &settings);  // 設定終端設定
}

int main() {
    disable_echo();  // 禁用回顯和行緩衝

    char c;
    while ((c = getchar()) != EOF) {   // 讀取字符直到遇到 EOF
        if (c == '\n') {
            putchar('\n');  // 如果是換行符，顯示換行
        } else {
            putchar('*');   // 顯示 '*' 代替輸入字符
        }
        fflush(stdout);  // 確保字符立刻顯示
    }

    enable_echo();  // 恢復回顯
    return 0;
}


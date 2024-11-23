#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <string.h>
void disable_echo() {
    struct termios settings;
    tcgetattr(STDIN_FILENO, &settings);  // 取得終端的設定
    settings.c_lflag &= ~ECHO;            // 禁用回顯
    tcsetattr(STDIN_FILENO, TCSANOW, &settings);  // 設定終端設定
}

void enable_echo() {
    struct termios settings;
    tcgetattr(STDIN_FILENO, &settings);  // 取得終端的設定
    settings.c_lflag |= ECHO;             // 恢復回顯
    tcsetattr(STDIN_FILENO, TCSANOW, &settings);  // 設定終端設定
}

int main() {
    char pwd[1024]="622968";
    char input[1024];
    disable_echo();
    scanf("%s",input);
    	if(!strcmp(pwd,input)){
		printf("success!");
	}
    	else{
		printf("failed");
	}
    return 0;
}



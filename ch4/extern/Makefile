# Makefile

# 目标文件和可执行文件名称
TARGET = program.out
OBJ = greeting.o main.o

# 编译器和编译选项
CC = cc
CFLAGS = -c

# 默认目标
all: $(TARGET)
	./$(TARGET)  # 构建后执行程序
	make clean   # 执行完后清理 .o 文件

# 链接目标
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# 编译每个源文件
greeting.o: greeting.c
	$(CC) $(CFLAGS) greeting.c

main.o: main.c
	$(CC) $(CFLAGS) main.c

# 清理目标文件
clean:
	rm -f $(OBJ) $(TARGET)
	

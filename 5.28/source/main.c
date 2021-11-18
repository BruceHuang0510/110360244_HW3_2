#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char n;
	printf("輸入一個大寫英文字母:");
	scanf_s("%c", &n);
	//printf("ascii = %d\n", n);
	n = n + 32;
	printf("%c", n);
}
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char n;
	printf("��J�@�Ӥj�g�^��r��:");
	scanf_s("%c", &n);
	//printf("ascii = %d\n", n);
	n = n + 32;
	printf("%c", n);
}
#include <stdio.h>

int main() {
    char kt = 'c';
	printf("%-15s %-15s %-15s %-15s %-15s %-15s\n", "ten bien", "ki tu", "gtri thap phan", "gtri hex", "gtri octal", "kich thuoc" );
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("%-15s %-15c %-15d %-15x %-15o %-15d", "kt", kt, kt, kt, kt, sizeof(kt));
	return 0;
}
#include <stdio.h>
#include <locale.h>
#include "timing.h"


int main() {
	setlocale(LC_CTYPE, ".utf-8");
	int start_sec, end_sec;
	char code;

	puts("Чтобы выйти из программы введите \"!\"");
	scanf(" %c", &code);
	while (code != '!') {
		scanf("%d %d", &start_sec, &end_sec);
		printf("Спортсмен %c: ", code);
		process_stage(start_sec, end_sec);
		scanf(" %c", &code);
	}
	return 0;
}

#include <stdio.h>

int get_duration(int start_sec, int end_sec) {
	return end_sec - start_sec;
}

int check_status(int duration_sec) {

	if (duration_sec < 30) {
		return -1;
	}
	if (duration_sec < 45) {
		return 1;
	}
	else {
		return 0;
	}
}

int get_full_minutes(int total_sec) {
	return total_sec / 60;
}

void print_time_mm_ss(int minutes, int seconds) {
	printf("%02d:%02d", minutes, seconds);
}

void process_stage(int start_sec, int end_sec) {
	int duration_sec = get_duration(start_sec, end_sec);
	int status = check_status(duration_sec);
	int minutes = get_full_minutes(duration_sec);
	int seconds = duration_sec % 60;
	print_time_mm_ss(minutes, seconds);
	switch (status) {
	case -1: printf("[Дисквалификация]"); break;
	case 1: printf("[Рекорд!]"); break;
	case 0: printf("[Норма]"); break;
	}
	putchar('\n');
}
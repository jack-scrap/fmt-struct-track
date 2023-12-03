#include <stdio.h>

const char ws = ' ';

const char sep = '-';

void err(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		err("No arguments");

		return 1;
	}

	if (argc != 1 + 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	char* artist = argv[1];
	char* song = argv[2];

	printf("%s%c%c%c%s", artist, ws, sep, ws, song);

	return 0;
}

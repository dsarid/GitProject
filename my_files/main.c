#include <stdio.h>

int main(int argc, char argv**) {
	if (argc > 0) {
		printf("Hello %s\n", argv[1]);
	}
	else {
		return 1;
	}
	return 0;
}


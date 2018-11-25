/*
	*This is example file which generate the data.txt file.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN_RAND 1
#define MAX_RAND 2
#define TESTS 10000


int randomize() {
	return rand() % MAX_RAND + MIN_RAND;
}



int main(void) {
	srand(time(NULL));
	FILE *filestr = fopen("data.txt", "w");
	fprintf(filestr, "topology: 2 3 1");

	for (int i = 0; i < TESTS; ++i) {
		int a = randomize();
		if (a == 1)
			fprintf(filestr, "in: 1 1\nout: 1\n");
		else if (a == 2)
			fprintf(filestr, "in: 0 0\nout: 0\n");
	}

	fclose(filestr);
	return 0;
}

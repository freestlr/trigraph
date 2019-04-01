#include <stdio.h>

// https://stackoverflow.com/questions/7825055/what-does-the-c-operator-do

// https://en.wikipedia.org/wiki/Digraphs_and_trigraphs#C


int ErrorHasOccured(void) {
	return 1;
}

int HandleError(void) {
	printf("HandleError\n");
	return 0;
}


int main(int argc, char ** argv) {
	if(!ErrorHasOccured() ??!??! ??-HandleError()) {
		printf("in case\n");
	}
	printf("Hello World!\n");
	printf("%d", ~433);
	printf("\n");

	return 0;
}

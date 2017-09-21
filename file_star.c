
#include <stdio.h>

int main() {
	FILE* fp;
	char* newString;
	fp = fopen("./log.txt", "a+");
	printf(">> ");
	scanf("%s", newString);
	fprintf(fp, "%s", newString);
	fputs("\nEnd of session.\n", fp);
	fclose(fp);
}


#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	fork(); // makes 1 child process
	fork(); // makes 2 child processes
	fork(); // makes 4 child processes
	printf("hi\n"); // outputs 8 times
	return 0;
}


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void fork_order_test() {
	if (fork() == 0) {
		printf("Child process\n");
	}
	else {
		printf("Parent process\n");
	}
}

int main() {
	fork_order_test();
	return 0;
}
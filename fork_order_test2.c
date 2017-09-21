#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void fork_order_incrementer() {
	int x = 1;
	if (fork() == 0) {
		printf("Child process: x is %d\n", ++x);
	}
	else {
		printf("Parent process: x is %d\n", --x);
	}
}

void fork_addresses() {
	int a = 1;
	if (fork() == 0) {
		a += 5;
		printf("Child process: Value = %d Address = %d\n", a, &a);
	} else {
		a -= 5;
		printf("Parent process: Value = %d Address = %d\n", a, &a);
	}
	printf("Same address!\n");
}

void fork_with_boolean() {
	static int count = 0;
	fork();
	fork() && fork() || fork();
	fork();

	count += 1;
	printf("forked %d\n", count);
	
}

int main() {
	fork_order_incrementer();
	fork_addresses();
	fork_with_boolean();
	return 0;
}

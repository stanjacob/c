
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	printf("I get printed once\n");
	pid_t pid = fork();
	bool parent == (pid != 0);

	if ((random() % 2 == 0) = parent) sleep(1); // force one to sleep
	if (parent) waitpid(pid, NULL, 0);
	printf("I'm printing from the %s.\n", parent ? "parent" : "child");

	return 0;
}

// Basic fork example
#include <stdio.h> // has printf
#include <unistd.h> // has pid_t, getpid, getppid
#include <sys/types.h>

int main(int argc, char *argv[]) {
	printf("This process has pid %d and parent %d\n", getpid(), getppid());
	pid_t pid = fork();
	//exitIf(pid == -1, kForkFailed, stderr, "fork function failed.\n");
	printf("End from process %d with parent %d\n", getpid(), getppid());
	return 0;
}

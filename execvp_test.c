
exitIf() {
	
}

int mysystem(const char* command) {
	pid_t pid = fork();
	if (pid == 0) {
		char *argv[] = {(char*) command, NULL};
		execvp(argv[0], argv);
		exitIf(true, kExecFailed, stderr, "execvp failed for command");
	}
	return
}

int main(int argc, char* argv[]) {
	char buffer[1024];
	while(true) {
		printf("> ");
		fgets(buffer, 1024, stdin);
		if (feof(stdin)) break;
		printf("retcode = %d\n", mysystem(buffer));
	}
	printf("\n");
	return 0;
}
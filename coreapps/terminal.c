#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int help(){
  printf("Available Commands:\n");
  printf("help: shows available commands\n");
  printf("version: shows OS version\n");
  printf("date: shows the date\n");
  printf("shutdown: Shut down the system\n");
  printf("clear: Clears the terminal screen\n");
  printf("ls: Lists the files in the current directory\n");
  printf("cd: Changes the current directory\n");
  printf("mkdir: Creates a new directory\n");
  printf("rmdir: Removes a directory\n");
  printf("touch: Creates a new file\n");
  printf("rm: removes a file\n");
  printf("echo: outputs text to the terminal");
  printf("edit: edit file.");
  return 0;
}

bool StartsWith(const char *a, const char *b){ // useful for later things
   if(strncmp(a, b, strlen(b)) == 0) return 1;
   return 0;
}
int versioncheck(){
  printf("EngynOS v0.0.0");
  printf("Terminal version 0.1.0");
  return 0;
}
int clear(){
  printf("");
}
int main() {
  while(1){
    char command[256];
    printf(">>> ");
    if (fgets(command, sizeof command, stdin) != NULL) {
        // Remove the newline character if it exists
        command[strcspn(command, "\n")] = '\0';
    } else {
        // Handle error or exit
    }
    if (strcmp(command, "help")==0) {
      help();
    }
    else if(strcmp(command, "version")==0) {
      versioncheck();
    }
    else if(strcmp(command, "clear")==0) {
      clear();
    }
  }
  return 0;
}

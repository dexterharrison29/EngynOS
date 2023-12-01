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
  return 0;
}

bool StartsWith(const char *a, const char *b){ // useful for later things
   if(strncmp(a, b, strlen(b)) == 0) return 1;
   return 0;
}
int versioncheck(){
  printf("0.0.0");
  return 0;
}
int main(){
  char line[256];
  printf(">>> ");
  if(fgets(line, sizeof line, stdin) != NULL) // This should do input
  {
    printf("%s\n", line);
  }
}

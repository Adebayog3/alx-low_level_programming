#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

char *generate_password() {
  char *password = malloc(PASSWORD_LENGTH + 1);
  int i;

  for (i = 0; i < PASSWORD_LENGTH; i++) {
    int character = rand() % 94;
    password[i] = (character < 26) ? 'a' + character : (character < 52) ? 'A' + (character - 26) : (character < 62) ? '0' + (character - 52) : '_';
  }

  password[PASSWORD_LENGTH] = '\0';

  return password;
}

int main() {
  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    char *password = generate_password();
    printf("%s\n", password);
    free(password);
  }

  return 0;
}


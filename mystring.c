#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* safestrcat(char *a, char *b) {
char *result = malloc(strlen(a)+strlen(b)+1);
strcpy(result, a);
strcat(result, b);
return result;
}

int substring(char *source, int from, int n, char *target) {
int i;
for (i=from; i<from+n; i++) {
strcpy(target, &source[i]);
return 0;
}
return -1;
}

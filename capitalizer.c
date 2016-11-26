#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cap(char filename[]) {

FILE *fp = fopen(filename,"w");
char line[255];
int i;
while (fgets(line, sizeof(line), fp)) {
line[0] = toupper(line[0]);
int x = strlen(line);
int count = 0;
for (i=1; i<x; i++) {
if (isalpha(line[i]) && line[i-1]==' ') {
count++;
if (count%2==0) {
line[i] = toupper(line[i]);
}
}
}
}
fclose(fp);
}

int main(int argc, char *argv[]) {
if (argc==2) {
cap(argv[1]);
} else if (argc>2) {
printf("Too many arguments.\n");
} else {
printf("only one argument is epected.\n");
}
}

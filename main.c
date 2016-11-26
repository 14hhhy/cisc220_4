#include "mystring.h"

int main() {
char stra[] = "hello";
char strb[] = "world";
safestrcat(stra, strb);
int from = 3;
int n = 2;
substring(stra, from, n, strb);
}

#include <stdio.h>

int all_files;
static int this_file;
extern void sub();

int main(void)
{
	sub();
	printf("%d\n", all_files);
	return 0;
}

extern int all_files;

void sub(void)
{
	all_files = 10;
}
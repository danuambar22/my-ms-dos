#include "command.h"
#include <errno.h>

int main(int argc, char *argv[]){
	int8 c;

	init();

	c = store((int8)0);
	printf("c = 0x%.02hhx\n", $i c);
	printf("error: 0x%.02hhx\n", $i errnumber);

	return 0;
}

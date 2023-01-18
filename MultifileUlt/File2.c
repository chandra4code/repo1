// This is production file2

#include <stdio.h>
#include "FileHeader.h"

int Func21()
{
	printf("\tEntry: production Func21.\n");
	Func31();
	printf("\tExit: production Func21.\n");
	return 0;
}


int Func22()
{
	printf("\tEntry: production Func22.\n");
	Func32();
	printf("\tExit: production Func22.\n");
	return 0;
}

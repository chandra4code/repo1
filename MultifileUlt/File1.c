// This is production file1

#include <stdio.h>
#include "FileHeader.h"

int Func11()
{
	printf("Entry: production Func11.\n");
	Func21();
	printf("Exit: production Func11.\n");
	printf("------------------------\n");
	return 0;
}


int Func12()
{
	printf("Entry: production Func12.\n");
	Func22();
	printf("Exit: production Func12.\n");
	printf("------------------------\n");
	return 0;
}

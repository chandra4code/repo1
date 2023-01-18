// This is mock file1

#ifdef MOCK_FILE1

#include <stdio.h>

int Func11()
{
	printf("Entry: MockFunc11.\n");
	printf("Exit: MockFunc11.\n");
	return 0;
}


int Func12()
{
	printf("Entry: production Func12.\n");
	printf("Exit: production Func12.\n");
	return 0;
}

#endif // MOCK_FILE1

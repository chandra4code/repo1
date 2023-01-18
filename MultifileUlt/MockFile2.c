// This is mock file2

#ifdef MOCK_FILE2

#include <stdio.h>

int Func21()
{
	printf("\tEntry: MockFunc21.\n");
	printf("\t\tMock work done.\n");
	printf("\tExit: MockFunc21.\n");
	return 0;
}


int Func22()
{
	printf("\tEntry: production Func22.\n");
	printf("\t\tMock work done.\n");
	printf("\tExit: production Func22.\n");
	return 0;
}

#endif // MOCK_FILE2

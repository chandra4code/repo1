#include <stdio.h>
#include <string.h>

typedef unsigned char bool;
typedef unsigned char UCHAR;
typedef unsigned char uchar;

#define TRUE  1
#define FALSE 0

bool KmIsMemZero(UCHAR *pData, size_t Size)
{
    if (pData == NULL || Size == 0)
    {
        return FALSE;
    }

    if (Size == 1)
    {
        return !pData[0];
    }

    /* Compare pData[0..Size-2] and pData[1..Size-1] */
    if (!pData[0] && !memcmp(pData, pData + 1, Size - 1))
    {
        return TRUE;
    }

    return FALSE;
}


int main(int argc, char **argv)
{
	int i;
	uchar Data[100] = { 0 };
	
	for (i=0; i<strlen(argv[1]); i++)
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
			Data[i] = argv[1][i] - '0';
		else
			Data[i] = argv[1][i] - 87;
				
		printf("%x", Data[i]);
	}
	printf("\n");
	
	if (KmIsMemZero(Data, strlen(argv[1])))
	{
		printf("%s has all 0s.\n", argv[1]);
	}
	else
	{
		printf("%s has not all 0s.\n", argv[1]);
	}
	printf("%s\n", argv[1]+1);
	
	return 0;
}
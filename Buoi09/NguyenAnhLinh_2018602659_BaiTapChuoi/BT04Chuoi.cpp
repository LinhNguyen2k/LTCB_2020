#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[255];
	printf("\nNhap doan van ban: "); gets(str);
	printf("\nDoan van ban vua nhap: "); puts(str);
	int i, count = 0;
	for (i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            count++;
        }
    }
    if(str[0] != ' '){
    	count++;
		printf("\nVan ban co %d tu.", count);
	}
    else printf("\nVan ban co %d tu.", count);

	return 0;
}

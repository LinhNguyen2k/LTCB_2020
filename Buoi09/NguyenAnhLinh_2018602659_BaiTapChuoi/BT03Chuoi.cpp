#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[255];
	printf("\nNhap doan van ban: "); gets(str);
	printf("\nDoan van ban vua nhap: "); puts(str);
	int i, n = strlen(str), count = 0;
	for(i=0;i<n-4;i++)
	{
		if(str[i]=='c'&&str[i+1]=='h'&&str[i+2]=='i'&&str[i+3]=='l'&&str[i+4]=='d')
		{
			n=n+4;
			int j;
			for(j=n-1;j>i+4;j--)
			{
				str[j] = str[j-1];
			}

			str[i+5] = 'r';
			str[i+6] = 'e';
			str[i+7] = 'n';
			str[i+8] = '\0';
			count++;
		}
	}
	if(count == 0) printf("\nVan ban khong co chuoi 'child'.");
	else {
		printf("\nVan ban sau khi sua: "); puts(str);
	}

	return 0;
}

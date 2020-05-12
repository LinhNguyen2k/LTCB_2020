#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    printf("\nNhap chuoi : ");
    gets(str);
    printf("\nChuoi vua nhap: ");
    puts(str);
    int i, h = 0, t = 0, s = 0;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>=48 && str[i]<=57)
            s++;
        else if(str[i]>=65 && str[i]<=90)
            h++;
        else if(str[i]>=97 && str[i]<=122)
            t++;
    }

    printf("\nChuoi co:\n\t %d chu cai in hoa. \n\t %d chu cai thuong. \n\t%d chu so.", h, t, s);
    char str1[100];
    strcpy(str1, strrev(str));
    printf("\nChuoi nguoc str la: ");
    puts(str1);
    strrev(str);
    if(s==0)
        printf("\nMang khong co chu so.");
    else
    {

        char chu[99][99]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
        int n = strlen(str);
        for(int i = 0; i < n; i++)
        {
            if(str[i]>=48 && str[i]<=57)
            {
                char s[1];
                s[0]= str[i];
                int m = atoi(s);
                printf(" %s ",chu[m]);
                for(int j = i ; j<n-1; j++)
                {
                    str[j]=str[j+1];
                }
                n--;
                str[n] = '\0';
            }
            else
            {
                printf(" %c ",str[i]);
                for(int j = i ; j<n-1; j++)
                {
                    str[j]=str[j+1];
                }
                n--;
                str[n] = '\0';
            }
            i--;
        }

    }
    return 0;
}

#include<stdio.h>
#include<conio.h>

// hàm nhập mảng
void Nhap_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("\n a[%d] =", i);
		scanf("%d", &a[i]);

	}
}
// hàm xuất mảng
void Xuat_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf(" %d", a[i]);
	}
}


void Xu_Li(int a[], int b[], int c[], int n, int m, int &k)
{
	int i = 0;
	int j = 0;
	while((i < n) && (j < m))
	{
		if(a[i] < b[j])
		{
			c[k] = a[i];
			i++;
			k++;
		}
		else
		{
			c[k] = b[j];
			j++;
			k++;
		}
	}

	for(; i < n; i++)
	{
		c[k] = a[i];
		k++;
	}

	for(; j < m; j++)
	{
		c[k] = b[j];
		k++;
	}
}



int main()
{

	int a[100];
	int b[100];
	int c[200];
	int n, m;
	int k = 0;
	printf("\nNhap so luong phan tu mang a: ");
	scanf("%d", &n);
	printf("\n\n\t\t NHAP MANG A\n");
	Nhap_Mang(a, n);

	printf("\nNhap so luong phan tu mang b: ");
	scanf("%d", &m);
	printf("\n\n\t\t NHAP MANG B\n");
	Nhap_Mang(b, m);

	printf("\n\n\t\t MANG A\n");
	Xuat_Mang(a, n);
	printf("\n\n\t\t MANG B\n");
	Xuat_Mang(b, m);

	printf("\n\n\t\t MANG SAU KHI TRON VAN DAM BAO TANG DAN\n");
	Xu_Li(a, b, c, n, m, k);
	Xuat_Mang(c, k);

	getch();
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
/*쳲��������������������*/
int fib(int a, int b,int n)
{
	int m;
	int count=3;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		while (count <= n)
		{
			m = a + b;
			a = b;
			b = m;
			count++;
		}
		return n;
	}
}
int main()
{
	int n = 5;
	int a = 1;
	int b = 1;
	int ret = fib(a,b,n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
/*�ݹ鷽��*/
/*
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return (fib(n - 1) + fib(n - 2));
	}
}

int main()
{
	int n = 8;
	int ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
*/
/*
strlen����
*/
/*
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char* p = "abcdef";
	int len = my_strlen(p);
	printf("%d\n", len);
	system("pause");
	return 0;
}
*/
/*��������ʱ����:�ݹ�д��*/
/*
int my_strlen(char* str)
{
	if (*str != 0)
	{
		return 1 + my_strlen(str+1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char* p = "abcdef";
	int len = my_strlen(p);
	printf("%d\n", len);
	system("pause");
	return 0;
}
*/

/*���ֲ��Һ���*/
/*
int chazhao(int arr[], int key,int left,int right)//��������arr[]��ָ�룻
{
	int mid = 0;
	//int left = 0;
	//�����ڲ���Ҫ��sizeof�����鳤��
	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid]>key)
		{
			right=mid-1;
		}
		else if (arr[mid]<key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//û�ҵ�
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k=7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	if (chazhao(arr,k,left,right) == -1)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", chazhao(arr, k,left, right));
	}
	system("pause");
	return 0;
}
*/

/*�ж���������*/
/*
int is_prime(int n)
{
	int j;
	for (j = 2; j <= n; j)
	{
		if (n % j != 0)
		{
			j++;
		}
		else
		{
			break;
		}
	}
	if (j == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i = 0;
	for (i = 100; i < 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d\n", i);

		}
	}
	system("pause");
	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };//FIRST POINT NEW ENTER
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//���Ͼ���
//���ݣ���һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//�ж��������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С�ڵ���O(N)

//1 2 3
//2 3 4
//4 5 6

//int main()
//{//ʱ�临�Ӷ�=O(N*N)
//	int arr[3][3] = { {1,2,3},{2,3,4},{4,5,6} };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d", &k);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (k == arr[i][j])
//			{
//				printf("��\n");
//			}
//		}
//	}
//	return 0;
//}

//int find_num(int arr[3][3], int k,int l,int r)
//{
//	int left = 0;
//	int right = r - 1;
//	while (right >= 0 && left <= 2)
//	{
//		if (arr[left][right] > k)
//		{
//			right--;
//		}
//		else if (arr[left][right] < k)
//		{
//			left++;
//		}
//		else
//		{
//			printf("�ҵ����±�Ϊ��%d %d\n", left, right);
//			return 1;
//		}
//	}
//	return 0;
//}
//
////����ͨ��ָ�봫�±��ȥ
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{3,4,5},{4,5,6} };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	int n = find_num(arr, k, left, right);
//	if (n == 1)
//	{
//		printf("��\n");
//	}
//	else
//	{
//		printf("û��\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//
//        if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//        int a = getchar();
//    }
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	printf("��������������λ��:>");
//	int x = 0;
//	scanf("%d", &x);
//	x = pow(10, x);
//	int i = 0;
//	for (i = 0; i <= x; i++)
//	{
//		int n = 0;
//		int tmp1 = i;
//		while (tmp1)//ȷ��λ��n
//		{
//			tmp1 /= 10;
//			n++;
//		}
//		int tmp2 = i;
//		int sum = 0;
//		while (tmp2)//����
//		{
//			sum += pow(tmp2 % 10, n);
//			tmp2 /= 10;
//		}
//		if (sum == i)//�ж�
//		{
//			printf("������=%d\n", i);
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		int tmp1 = i;
//		int sum = 0;
//		while (tmp1)//����
//		{
//			sum += pow(tmp1 % 10, 3);
//			tmp1 /= 10;
//		}
//		if (sum == i)//�ж�
//		{
//			printf("ˮ�ɻ���=%d\n", i);
//		}
//	}
//	return 0;
//}
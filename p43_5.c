//#include <stdio.h>
//
//int main()
//{
//	int L_Count = 0;
//	int N_Count = 0;
//	int S_Count = 0;
//	int O_Count = 0;
//	char c;
//	printf("请输入任意字符，以‘$’结束：\n");
//	while ((c = getchar()) != '$')
//	{
//		if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
//		{
//			L_Count++;
//		}
//		else if (c > '0' && c < '9')
//		{
//			N_Count++;
//		}
//		else if (c == ' ')
//		{
//			S_Count++;
//		}
//		else
//		{
//			O_Count++;
//		}
//	}
//	printf("共有%d个字母，%d个数字，%d个空格，%d个其他字符\n", L_Count, N_Count, S_Count, O_Count);
//
//	return 0;
//}
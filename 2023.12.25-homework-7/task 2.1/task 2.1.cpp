#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include <iostream>
#include<cstring>
#include<string>
#include<fstream>



//-----------------------------------
char* strcat_new(char* s1, char* s2)
{

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	char* result = (char*)malloc(len1 + len2 + 1);

	if (!result) {
		fprintf(stderr, "malloc() failed: insufficient memory!\n");
		return NULL;
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);
	return result;
}

char* strmult_new(char* s, int k)
{
	size_t len = strlen(s);
	char* result = (char*)malloc((len * k) + 1);
	for (int i = 0; i < k; i++)
	{
		memcpy(result + len * i, s, len + 1);

	}
	return result;
}

char* strstr_new(char* s, char* sub)
{
	int len = strlen(s);
	int len_sub = strlen(sub);
	char* point = NULL;
	if (len < len_sub) {
		printf("Error:substr>str\n");
	}
	else
	{
		for (int i = 0; i < (len - len_sub); i++)
		{
			if (s[i] == sub[0])
			{
				point = &s[i];
				for (int j = 1; j < len_sub; j++)
				{
					if ((i + j) < len)
					{
						if ((s[i + j] != sub[j]))
						{
							point = NULL;

						}
					}
				}
			}
		}
	}
	return point;
}

char* substr_new(char* s, int pos, int count)
{
	char* result = (char*)malloc((count)+1);
	for (int i = 0; i < count; i++)
	{
		result[i] = s[pos + i];
	}
	result[count] = 0;
	return result;
}

int strcmp_new(char* s1, char* s2)
{

	while (*s1 != NULL && *s2 != NULL)
	{
		if (*s1 < *s2)
		{
			return -1;
		}
		else if (*s1 > *s2)
		{
			return 1;
		}
		s1++;
		s2++;
	}
	return 0;
}
//----------------
int StrLen(char* str)
{
	int res = 0;
	while (str[res++] != '\0');
	return res;
}



int main(int argc, char** argv)
{
	char s1[256];
	char s2[256];
	int option = 9;
	while (option != 0)
	{
		printf("What do you want to do?\n");
		printf("1--> strcat\n");
		printf("2--> strstr\n");
		printf("3--> substr\n");
		printf("4--> strcmp\n");
		printf("5--> strmult\n");
		printf("0--> Exit\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
		{
			printf("Please, enter 2 strings:\n");
			scanf("%s", &s1);
			scanf("%s", &s2);
			printf("%s\n", strcat_new(s1, s2));
			break;
		}
		case 2:
		{
			printf("Please, enter 2 strings:\n");
			scanf("%s", &s1);
			scanf("%s", &s2);
			printf("%s\n", strstr_new(s1, s2));
			break;
		}
		case 3:
		{
			printf("Please, enter 1 string:\n");
			scanf("%s", &s1);
			printf("Pos and count:\n");
			int pos = 0;
			int count = 0;
			scanf("%d", &pos);
			scanf("%d", &count);
			printf("%s\n", substr_new(s1, pos, count));
			break;
		}
		case 4:
		{
			printf("If s1=s2: return 0. If s1<s2: return -1. If s1>s2: return 1\n");
			printf("Please, enter 2 strings:\n");
			scanf("%s", &s1);
			scanf("%s", &s2);
			printf("%d\n", strcmp_new(s1, s2));
			break;
		}
		case 5:
		{
			int n = 0;
			printf("Please, enter 1 string:\n");
			scanf("%s", &s1);
			printf("Please, enter multiplier :\n");
			scanf("%d", &n);
			printf("%s\n", strmult_new(s1, n));
			break;
		}
		case 0:
			return 0;
		default:
			printf("You are wrong");
		}
	}

	return 0;
}
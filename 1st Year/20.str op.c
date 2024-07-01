#include<stdio.h>
#include<string.h>
	void strLen(char s1[100], char s2[100]);
	void strCmp(char s1[100], char s2[100]);
	void strConcat(char s1[100], char s2[100]);
	int main()
		{
			char a[100],b[100];
			printf("Enter the first string\n");
			scanf("%s",a);
			printf("Enter the second string\n");
			scanf("%s",b);

			strLen(a,b);
			strCmp(a,b);
			strConcat(a,b);
			return 0;
		}
			void strLen(char s1[100], char s2[100])
				{
					int len1,len2;
					len1=strlen(s1);
					len2=strlen(s2);
					printf("Length of first string is %d\n",len1);
					printf("Length of second string is %d\n",len2);
				}
			void strCmp(char s1[100], char s2[100])
				{

					if(strcmp(s1,s2)==0)
							{
								printf("Strings are equal\n");
							}	
					else
							{
								 printf("Strings are not equal\n");
							}
				}			
			void strConcat(char s1[100], char s2[100])
				{
					printf("Concatenation of strings %s\n",strcat(s1,s2));
				}

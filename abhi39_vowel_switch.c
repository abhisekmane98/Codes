//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	while(1)
	{   
		char a;
		printf("Enter a character \nEnter x to terminate program");
		scanf("%c",&a);
		switch(a)
		{
			case 'a':
				printf("Enterd Vowel");break;
			case 'e':
				printf("Enterd Vowel");break;
			case 'i':
				printf("Enterd Vowel");break;
			case 'o':
				printf("Enterd Vowel");break;
			case 'u':
				printf("Enterd Vowel");break;
			case 'A':
				printf("Enterd Vowel");break;
			case 'E':
				printf("Enterd Vowel");break;
			case 'I':
				printf("Enterd Vowel");break;
			case 'O':
				printf("Enterd Vowel");break;
			case 'U':
				printf("Enterd Vowel");break;
			case 'x':exit(0);
			default:
				printf("Enterd consonant");
		}
		system("pause");
		system("CLS");
    }
    return 0;
}

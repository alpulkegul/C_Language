//Project Name: Strings

#include<stdio.h>
#include<string.h>

int main (){
	/*
	char character = 'c';
	printf("%c\n", character);
	
	char welc_Message[] = "Hello World!";
	printf("%s", welc_Message);
	
	return 0;
	*/
	
	/*
	char welc_Message1[] = "Welcome!";
	char welc_Message2[] = {'W','E','L','C','O','M','E','!','\0'};
	printf("%lu\n", sizeof(welc_Message1));
	printf("%lu\n", sizeof(welc_Message2));
	*/
	
	/*
	char englishAlphabet [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d\n", strlen(englishAlphabet));
	printf("%d\n", sizeof(englishAlphabet));
	
	char turkishAlphabet [] = "ABCÇDEFGHIÝJKLMNOÖPRSÞTUÜVYZ";
	printf("%d\n", strlen(englishAlphabet));
	printf("%d\n", sizeof(englishAlphabet));
	
	char essay[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d\n",strlen(essay));
	printf("%d",sizeof(essay));
	*/
	/*
	char text1[20] = "Hello ";
	char text2[]	= "World!";
	char text3[20];
	
	strcat(text1, text2);
	
	printf("%s\n", text1);
	
	strcpy(text3, text1);
	
	printf("%s\n", text3);
	
	printf("%d\n", strcmp(text1,text3));
	printf("%d\n", strcmp(text1,text2));
	printf("%d\n", strcmp(text2,text1));
	
	return 0;
	
	*/
	
	char metin1[] = "Hello\nWorld\n";
	printf("%s", metin1);
	
	char metin2[] = "Hello\tWorld\n";
	printf("%s", metin2);
	
	char metin3[] = {'H','E','L','L','O',' ','W','O','R','L','D','\0\n'};
	printf("%s", metin3);
	
	char metin4[] = "C++ is an \'object-oriented\' language while C is not.\n";
	printf("%s", metin4);
	
	char metin5[] = "Linus Torvalds Linux\'s founder.\n";
	printf("%s", metin5);
	
	char metin6[] = "The // character is called backslash.";
	printf("%s", metin6);
	
}




















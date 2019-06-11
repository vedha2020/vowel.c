#include <stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	int vowel1,vowel2;
	scanf("%c",&c);
	vowel1=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	vowel2=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(vowel1||vowel2)
	printf("Vowel");
	else
	printf("Consonant");
	return 0;
}

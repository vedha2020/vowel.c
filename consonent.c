#include <stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	int vowel1,vowel2,vowel3;
	scanf("%c",&c);
	vowel1=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	vowel2=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	vowel3=(c=='!'||c=='@'||c=='#'||c=='$'||c=='%');
	if(vowel1||vowel2)
	printf("Vowel");
	else if(vowel3=vowel3)
	printf("invalid");
	else
	printf("Consonant");
	return 0;
}

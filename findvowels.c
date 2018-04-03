#include <stdio.h>
 #include<string.h>
int main()
{
    char ch[20];
 int i;
    printf("Please Enter an alphabet: \n");
    scanf(" %s", &ch);
    for(i=0;i<strlen(ch);i++){
    if(ch[i] == 'a' ||ch[i] == 'e' ||ch[i] == 'i' || ch[i] == 'o' ||ch[i]== 'u' ||
		ch[i]== 'A' || ch[i]== 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')  {
		printf("\n %c is a VOWEL.", ch[i]);
	}
    else {
    	printf("\n %c is a CONSONANT.", ch[i]);
	}
    return 0;
    }
}

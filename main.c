#include <stdlib.h>
#include <stdio.h>
#include "project.c"
#define SIZE 100
#define NUMPRO 64
main()
{
   int a=isbasepair(neu1,neu2);
   if(a==true)
   {
   		printf("True");
   }
   else
   		printf("False");
   	printf("---------------------End---------------------\n");
	bool a=isItaDnaSequence(strand1,strand2);
	if(a==true)
	{
		printf("true");
	}
	else
		printf("false");
	printf("---------------------End---------------------\n");
	int a=isItaDnaSequence(strand1,strand2);
	if(a==true)
	{
		printf("true");
	}
	else
		printf("false");
	printf("---------------------End---------------------\n");  
    ComplementIt(str);
	printf("---------------------End---------------------\n");
    int a=isItPalindrome(str1);
    if(a==0)
    {
    	printf("%s is a palindrome ", str1);
	}
	else
		printf("%s is not a palindrome ", str1);
	printf("---------------------End---------------------\n");
    int a=isStrandDnaPalindrome(str1);
    if(a==0)
    {
    	printf("%s is a palindrome After complement ", str1);
	}
	else
		printf("%s is not a palindrome After complement", str1);
	printf("---------------------End---------------------\n");
    int a=howMany(strand,chr);
    printf("Total number of character persent in the base is %d",a);
    printf("---------------------End---------------------\n");
    dnaToMrna(strand,mRNA);
    printf("---------------------End---------------------\n");
    
    translateDnaToMrnaProteins(eSeq);
    printf("---------------------End---------------------\n");
}

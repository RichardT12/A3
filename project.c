#define SIZE 100
#define NUMPRO 64
bool isbasepair(char neu1, char neu2)
{
	if(neu1=='A' && neu2=='T')
		return true;
	else if(neu1=='C' && neu2=='G')
		return true;
	else
		return false;
}
//function2
bool isItaDnaSequence(char strand1[SIZE],char strand2[SIZE])
{
	if(strand1=="CT" && strand2=="GA" || strand1=="TC" && strand2=="AG")
		return true;
	else
		return false;
}
//function3
void reverse(char strand1[SIZE])
{
	printf (" \n After the reverse of a string: %s ", strrev(strand1));  
}
//function4
void ComplementIt(char strand1[SIZE])
{
	int i;
	for(i=0;i<strlen(strand1);i++)  
	{
		if(strand1[i]=='A')
			strand1[i]='T';
		else if(strand1[i]=='T')
			strand1[i]='A';
		else if(strand1[i]=='C')
			strand1[i]='G';
		else if(strand1[i]=='G')
			strand1[i]='C';
	}
	printf("The complement of strnd is %s", strand1);
}
//function5
bool isItPalindrome(char strand1[SIZE])
{
	int i, length;
    int flag = 0;
	length = strlen(strand1);
    for(i=0;i < length ;i++)
	{
        if(strand1[i] != strand1[length-i-1])
		{
            flag = 1;
            break;
        }
    }
    if (flag) 
        return true;
    else 
        return false;
}
//function6
bool isStrandDnaPalindrome(char strand1[SIZE])
{
	int i, length;
    int flag = 0;
    char strand2[SIZE];
    for(i=0;i<=strlen(strand2);i++)  
	{
    	strand2[i]=strand1[i];
    }
    printf("%s\n",strand2);
    for(i=0;i<=strlen(strand2);i++)  
	{
		if(strand2[i]=='A')
			strand2[i]='T';
		else if(strand2[i]=='T')
			strand2[i]='A';
		else if(strand2[i]=='C')
			strand2[i]='G';
		else if(strand2[i]=='G')
			strand2[i]='C';
	}
	printf("%s\n\n\n",strand2);
	length = strlen(strand2);
    for(int i=0;i < length ;i++)
	{
        if(strand1[i] != strand2[length-i-1])
		{
            flag = 1;
            break;
        }
    }
    if (flag) 
        return true;
    else 
        return false;
}
//function7
int howMany(char strand1[SIZE],char neu)
{
	int count=0;
	for(int i=0;i<strlen(strand1);i++)
	{
		if(neu==strand1[i])
		{
			count++;
		}
	}
	return count;
}
//function8
void dnaToMrna(char eSeq[SIZE],char mRNA[SIZE])
{
	for(int i=0;i<strlen(eSeq);i++)  
	{
		if(eSeq[i]=='A')
			mRNA[i]='U';
		else if(eSeq[i]=='T')
			mRNA[i]='A';
		else if(eSeq[i]=='C')
			mRNA[i]='G';
		else if(eSeq[i]=='G')
			mRNA[i]='C';
	}
	printf("%s",mRNA);
}
//function9
void translateDnaToMrnaProteins(char eSeq[SIZE])
{
	char mRna[SIZE];
	char allProteins [NUMPRO][SIZE] = {"GCA", "GCC", "GCG", "GCU", "AGA","AGG", "CGA", "CGC","CGG",
	"CGU","GAC", "GAU","AAC","AAU","UGC","UGU","GAA","GAG","CAA","CAG", "GGA", "GGC","GGG","GGU","CAC",
	 "CAU","AUA","AUC","AUU", "UUA", "UUG","CUA","CUC", "CUG", "CUU", "AAA", "AAG","AUG", "UUC","UUU", 
	"CCA", "CCC", "CCG", "CCU", "AGC","AGU","UCA","UCC","UCG", "UCU","ACA","ACC","ACG", "ACU", "UGG",
	"UAC","UAU", "GUA","GUC","GUG", "GUU"
	};
	char allCodes [NUMPRO] = 
	{
		'A','A','A','A','R','R','R','R','R','R','D','D','N','N',
		'C','C','E','E','Q','Q', 'G','G','G','G','H','H',
		'I','I','I', 'L','L','L','L','L','L','K','K','M','F','F','P','P','P','P','S','S',
		'S','S','S','S','T','T','T','T', 'W','Y','Y','V','V','V','V'
	};
	for(int i=0;i<strlen(eSeq);i++)  
	{
		if(eSeq[i]=='A')
			mRna[i]='U';
		else if(eSeq[i]=='T')
			mRna[i]='A';
		else if(eSeq[i]=='C')
			mRna[i]='G';
		else if(eSeq[i]=='G')
			mRna[i]='C';
	}
	printf("%s\n",mRna);
	for (int j = 0; j <(NUMPRO/strlen(eSeq))/2; j++)
	 {
        if  (strncmp (mRna,allProteins[j], 3) == 0) 
		{
            printf("%c\t",allCodes[j]);
        }
    	else
    		printf("Z\t");
    }
    
}

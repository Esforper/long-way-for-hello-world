#include <stdio.h>
int main()
{	
	printf("bir metin girin :");	
	char metin[100];
	gets(metin);
	int i,k,l;
	int uzun;
	uzun=sizeof(metin)/sizeof(char);
	char x='a';
	
	for(i=0;i<uzun;i++)
	{
		x='a';
		
		for(x=x;x<=metin[i];x++)
		{
			
			for(k=0;k<uzun;k++)
			{
				if(i>k)printf("%c",metin[k]);	
			}
						
			printf("%c",x);
			printf("\n");
		}
	if(metin[i]=='\0')	break;
	}


	
	return 0;
}

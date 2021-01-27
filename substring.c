#include <stdio.h>

int main(void) {
	char str1[10]="asdfg";
	char str2[10]=" ";
	int i,k=0;
	for(i=0;str1[i]!='\0';i++)
	{
	    if(str1[i]==str2[k])
	    {
	        if(str1[i++]==str2[k++])
	        {
	            printf("%s is a substring of %s",str2,str1);
	        }
	        else
	        {
	            printf("%s is not a substring of %s",str2,str1);
	        }
	    }
	}
	return 0;
}

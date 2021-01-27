#include<stdio.h>
#include<string.h>
int main(void) {
	char s[100]="abc",temp[100];
	int length=strlen(s);
	int end=length-1,i;
	for(i=0;i<=length/2;i++)
	{
	    temp[i]=s[i];
	    s[i]=s[end];
	    s[end]=temp[i];
	    end--;
	}
	puts(s);
	return 0;
}

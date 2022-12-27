#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
int main()
{
	FILE *fp1;
	char ch = " ";
	int no_space = 0,no_tabs=0,no_char = 0,no_line=0;
	 fp1 = fopen("read.txt","r");

	 if(fp1==NULL)
	 {
	 	printf("no file found ");
	 	return 0;
	 }
	 while(1)
	 {
	 	ch = getc(fp1);
	 	no_char++;

	 	if(ch == EOF)
	 		break;

	 	if(ch=='\n')
	 		no_line ++;

	 	if(ch == '\t')
	 		no_tabs++;

	 	if(ch ==' ')
	 		no_space++;

	 	
	 }
printf("no of charatcter = %d\n no of lines = %d\n no of tabs = %d \n no of spaces = %d",no_char,no_line,no_tabs,no_space);

fclose(fp1);





}
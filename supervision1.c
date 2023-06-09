#include<stdio.h>

main()
{
	FILE *p;
	char data[1000]="Esha";
	
	p = fopen("file.txt","w");
	
	if(p == NULL)
	{
		printf("could not file open.");
	}
	else
	{
		printf("enter data =");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add successful...");
	}
	fclose(p);
}

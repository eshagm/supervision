#include<stdio.h>

main()
{
	FILE *p;
	char data[1000]="Esha";
	
	p = fopen("file.txt","a");
	
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
	
	printf("\n====================\n");
	  p = fopen("file.txt","r");
	  
	if(p == NULL)
	{
		printf("could not file open.");	
	}
	else
	{
		while(fgets(data,25,p) != NULL)
		{
			printf("%s",data);
		}
	  }  
	  fclose(p);
}

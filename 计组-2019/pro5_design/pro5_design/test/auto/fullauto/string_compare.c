#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE*in1;
	FILE*in2;
	in1 = fopen("myresult.txt", "rb");
	in2 = fopen("standardresult.txt", "rb");


	char Line1[120],Line2[120];
	int num=0;
	while ((fgets(Line1, 120, in1) != NULL) & (fgets(Line2,120,in2) != NULL)){
		num++;
		if(strcmp(Line1,Line2)){
			printf("line%d:\n%s\n%s\n",num,Line1,Line2);
		}
	}

	printf("Done!\n");

	fclose(in1);
	fclose(in2);

	return 0;

}
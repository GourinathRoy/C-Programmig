#include<stdio.h>
#include<conio.h>
int main()
{
	if(rename("bist.txt")==0)
	{
		printf("file delete successful");
	}
	else
	{
		printf("error while deleting the file");
	}
	getch();
	return 0;
}

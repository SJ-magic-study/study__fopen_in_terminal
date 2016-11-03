/************************************************************
************************************************************/
#include <stdio.h>

/************************************************************
************************************************************/
int main()
{
	FILE* fp = NULL;
	// fp = fopen("../data/StoryBoard.txt", "r");
	fp = fopen("data/StoryBoard.txt", "r");
	
	if(fp == NULL){
		printf("Open Error\n");
	}else{
		printf("Open OK\n");
		fclose(fp);
	}
	
	return 0;
}



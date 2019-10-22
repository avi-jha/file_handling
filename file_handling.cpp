#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	// declare variables
	char name[50];
	int n=3;
	int age;
	int roll;
	int i;
	// declare file pointer
	FILE *fp;
	//writing in document
	fp=fopen("class.txt","w+");
	
	// take data to be written in text file
	printf("\nName: ");
	scanf("%s",&name);
	fprintf(fp,"%s",name);
	
	printf("\n age ");
	scanf("%d",&age);
	fprintf(fp,"\t%d\n",age);
	
	printf("\n enter roll ");
	scanf("%d",&roll);
	fprintf(fp,"\t%d\n",roll);
	
	//close the file
	fclose(fp);
	printf("Data was written successfully.");
	printf("File is now closed.");
}

//Longest common prefix 
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	//size of string 
	printf("ENTER NUMBER OF STRINGS:");
	scanf("%d",&n);
	//input the string 
	char a[n][100];
	printf("ENTER THE STRINGS:\n");
	//loop for enter the string 
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	//string for prefix 
	char pre[100];
	strcpy(pre,a[0]);
	//compare the string 
	for(int i=1;i<n;i++){
		int j=0;
		while(pre[j]!='\0'&&a[i][j]!='\0'&&pre[j]==a[i][j]){
			j++;
		}
		pre[j]='\0';
	}
	printf("LONGEST COMMON PREFIX =%s\n",pre);
	return 0;
}
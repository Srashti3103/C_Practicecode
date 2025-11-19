//Print all permutation of string
#include<stdio.h>
#include<string.h>
int main(){
	//intialize the size of string
	int n;
	printf("Enter size of string:\n");
	scanf("%d",&n);
	//Initialize the string
	char str[n];
	//Input the characters of string
	printf("Enter a string:\n");
	scanf("%s",str);
	printf("Permutations are:\n");
    //loop for check all the permutation
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==i){
				continue;
			}
			for(int k=0;k<n;k++){
				if(k==i||k==j){
					continue;
				}
				//print all the permutation of string 
				printf("%c%c%c\n",str[i],str[j],str[k]);
			}
		}
	}
}
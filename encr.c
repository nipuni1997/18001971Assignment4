#include<stdio.h>
int main(){
	char array[50];
	char ch;
	int i=0 ,key;
	printf("Enter a code:");
	scanf("%s",&array[i]);
	printf("Enter key: ");
	scanf("%d",&key);
	while(array[i]!= '\0'){
		ch=array[i];
		if(ch >='a' && ch <= 'z'){
			ch=ch+key;
			array[i]= ch;
		}else if(ch >='A' && ch <= 'Z'){
			ch=ch+key;
			array[i]=ch;
		}
		i++;
	} 
	printf("Encrypted Code: %s", array);
	return 0;
}

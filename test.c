#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char test[] = "12345678";
	int length = strlen (test);
	for (int i = 0; i < length; i++){
		if (!isdigit(test[i])){
			printf("no!!\n");
		}
	printf("yeah!!\n");
	}
}
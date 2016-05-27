#include <stdio.h>
#include <string.h>

char sort(char* str2){
  int i ,j,len = strlen(str2);
  char a;
  
  for(i = 0; i < len;i++){
    for(j = i+1;j < len;j++){

      if(str2[i]>str2[j]){
	a = str2[i];
	str2[i]= str2[j];
	str2[j]= a;
      }
    }
  }

    printf("%s\n",str2);
}

int main(){

  char str[20];
  
  printf("Please enter the 16 characters.\n");
  scanf("%s",str);

  sort(str);

  /*  int i ,j,len = strlen(str);
  char a;
  
  for(i = 0; i < len;i++){
    for(j = i+1;j < len;j++){
      if(str[i]>str[j]){
	a = str[i];
	str[i]= str[j];
	str[j]= a;
      }
    }

    }*/
  
  //  printf("%s\n",str3);

  return 0;
}

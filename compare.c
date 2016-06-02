#include <stdio.h>
#include <string.h>
#include "sort.h"
#define NUM 20

void compare(char* str3){

    char dic[NUM];
    int lens =strlen(str3);
    FILE* fp = fopen("/usr/share/dict/words","r");
    //FILE* fp = fopen("dictionary.txt","r");
    
    if(fp == NULL){
     printf("Fail to open file.");
   }
    
    int max = 0;
    char mstr[NUM];
    
    while(fgets(dic,NUM,fp)!= NULL){
      char dic2[NUM];
      int l;
      //  int l2;
      strcpy(dic2,dic); //DICをDIC2へコピー
      //int lend1 =strlen(dic);

      
      /*for(l2=0;l2<strlen(dic2);l2++){
	if(isalpha(dic2[l2])==0){
	  int a;
	  a = l2;
	  while(dic2[a]!=0x0a){
	  dic2[a]=dic2[a+1];
	  a++;
	  }
	}
	}*/
      //printf("change to 0x0a:%s\n",dic2);
      
      for(l=0;l < strlen(dic2);l++){
	if(dic2[l]==0x0a){
	  dic2[l]=0x00;
	    break;
	}
      }


 
      //printf("change to 0x00:%s\n",dic2);     

      sort(dic2);
      int lend2 = strlen(dic2);
      //  printf("DIC:%s,DIC2:%s,LEND:%d,LENS:%d\n",dic,dic2,lend,lens);
      int i,j=0,k=0,n=0;
      // printf("FIRST K:%d\n",k);
      
      for(i=0;i < lend2; i++){
	for(j = n; j< lens;j++){
	  if(str3[j]== dic2[i]){//文字が一致すればKを増やす
	    k++;
	    //    printf("%d,%s\n",k,dic2);
	   
	  n = j+1;
	  break;
	  }	  
	}
      }

      // printf("COMPARE MAX K:%d %d\n",max,k);
      if(k > max){//Kが一番大きかったとき
	//printf("K :%d,LEND:%d\n",k,lend);
	if(k == lend2){//KがDIC2の長さと一致したら
	  max = k;//MAXをKに更新
	  int m;
	  for(m=0; m< lend2;m++){
	  mstr[m] = dic[m];//一番長い文字列を格納
	  }
	  //printf("更新しました。mstr:%s\n",mstr);
	  
	}
      }
    }
      
    if(max == 0){//辞書の中に無かったら
      printf("Not found./n");
    }else{
      
      printf("Match:%s\n",mstr);
    }
    fclose(fp);     
    }

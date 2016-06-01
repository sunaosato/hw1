#include <stdio.h>
#include <string.h>
#include "sort.h"
#define NUM 20

void compare(char* str3){

    char dic[NUM];
    int lens =strlen(str3);
    FILE* fp = fopen("/usr/share/dict/words","r");
    
    if(fp == NULL){
     printf("Fail to open file.");
   }
    
    int max = 0;
    char mstr[NUM];
    
    while(fgets(dic,NUM,fp)!= NULL){
      char dic2[NUM];
      int l;
      for(l=0;l < strlen(dic);l++){
	if(dic[l]==0x0a){
	  dic[l]=0x00;
	  break;
	}
      }
      
      strcpy(dic2,dic); //DICをDIC2へコピー
      sort(dic2);
      int lend = strlen(dic2);
      //  printf("DIC:%s,DIC2:%s,LEND:%d,LENS:%d\n",dic,dic2,lend,lens);
      int i,j=0,k=0,n=0;
      // printf("FIRST K:%d\n",k);
      
      for(i=0;i < lend; i++){
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
	if(k == lend){//KがDIC2の長さと一致したら
	  max = k;//MAXをKに更新
	  int m;
	  for(m=0; m< lend;m++){
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

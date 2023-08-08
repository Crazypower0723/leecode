//
// Created by Dell on 2023/8/8.
//
#include "stdio.h"
#include "malloc.h"

char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0) return NULL;
    int i,j;
    char *Comchar=malloc((strlen(*strs)+1)*sizeof(char));
    strcpy(Comchar,*strs);
    for(i=1;i<strsSize;i++)
    {
        j=0;
        for(;Comchar[j]&&strs[i][j]&&Comchar[j]==strs[i][j];j++);
        Comchar[j]='\0';
    }

    return Comchar;
}


//char * longestCommonPrefix(char ** strs, int strsSize){
//    if(strsSize == 0) return NULL;
//    char *str = (char *)malloc(201);
//    strcpy(str,*strs);
//    for(int i = 0;i < 200;++i){
//        for(int j = 0;j < strsSize;++j){
//            if(!strs[j]){
//                str[0] = strs[0][i];
//                if(strs[j][i] != strs[0][i]){
//                    break;
//                }
//            }else{
//                break;
//            }
//        }
//    }
//    return str;
//}



int main(){
    char strs[][200] = {"flower","flow","flight"};
    char * p = longestCommonPrefix(strs,3);
    printf("%s",p);
    delete p;
    return 0;
}
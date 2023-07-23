//
// Created by Dell on 2023/7/23.
//

#include <stdio.h>
#include <string.h>

char repeatedCharacter(char * s){
    char p[122] = {0};
    for (int i = 0; i < strlen(s); ++i) {
        if(++p[s[i]] > 1){
            return s[i];
        }
    }
}

int main(){
    char *s ="abccbaacz";
    char p = repeatedCharacter(s);
    printf("%c",p);
}

#include <stdio.h>
#include "prog1.h"
#include <string.h>


int rfind_char(const string s, char c){
    int hossz=strlen(s);
    for(int i = hossz-1; i>=0; i--){
        if(s[i]==c){
            return i;
        }
    }
    return -1;
}

int contains_char(const string s, char c){
    if(rfind_char(s, c)>=0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {

    string s = "valamijsdfgn";
    char c='n';
    int bennevan=contains_char(s, c);
    printf("%s\n",bennevan ?  "igen" : "nem");

    return 0;
}
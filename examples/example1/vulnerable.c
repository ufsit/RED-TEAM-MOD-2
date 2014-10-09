#include <stdio.h>

int main(int argc, char * argv[]){
    char buffer[666];
    
    puts("Taking \x1b[31m SCARY \x1b[0m input:");
    scanf("%s", buffer);
}

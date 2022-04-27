
#include<string.h>
void trimSpaces(char input[]) {

    int count = 0;
    for(int i = 0; input[i]; i++){
        if(input[i] != ' '){
            input[count]=input[i];
            count++;
        }
    }
    input[count] = '\0';
}

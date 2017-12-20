#include <stdio.h>
#include <string.h>

void del_substr(char*,char*);

int main(int argc, char** argv)
{
    if(argc != 3) {
        printf("Incorrect input.Enter string and substring!\n");
    }
    char str[100];
    strcpy(str, argv[1]);    
    del_substr(str, argv[2]);
    printf("%s\n",str);

    return 0;
}


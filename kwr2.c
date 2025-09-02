#include<stdio.h>
#include<string.h>

int recognizer(char *inp){
    char *str[]={"nkw", "keyword", "extraction", "text", "analysis"};
    int size = sizeof(str) / sizeof(str[0]);
    for(int i=0; i<size; i++){
        if(strcmp(str[i], inp) == 0){
            return 1;
        }
    }
    return 0;
}

int main(){
    char inp[100];
    printf("Enter a string: ");
    scanf("%s", inp);
    if(recognizer(inp)){
        printf("%s is in array.", inp);
    } else {
        printf("%s is not in array.", inp);
    }
    return 0;
}
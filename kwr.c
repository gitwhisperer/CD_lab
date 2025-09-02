#include<stdio.h>
int recognizer(int num){
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<size; i++){
        if(num == arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(recognizer(num)){
        printf("%d is in array.", num);
    } else {
        printf("%d is not in array.", num);
    }
    return 0;
}
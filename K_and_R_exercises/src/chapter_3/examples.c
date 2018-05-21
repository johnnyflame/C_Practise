#include <stdio.h>
#include <stdlib.h>



/* Binary search */

int binsearch(int x, long long v[], int n){
    int low, high, mid;

    low = 0;
    high = n-1;

    while (low <= high){
        mid = (low + high) / 2;
        if (x < v[mid]){
            high = mid - 1;
        }else if (x > v[mid]){
            low = mid + 1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(int argc, char *argv[]){

    if (argc == 2){
        printf("Argument supplied is %s\n", argv[1]);
    }

    char *p;

    long long length = strtol(argv[1],&p,10);
    long long target = 300;
    long long* array = malloc(length * sizeof(array));

    for (long long i = 0; i < length;i++){
        array[i] = i;
    }


    printf("target:%d \n",binsearch(target,array,length));

    free(array);
}

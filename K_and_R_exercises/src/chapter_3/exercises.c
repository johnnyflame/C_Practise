#include <stdio.h>




/* binary search */

int binary_search(int target,int v[], int length){
    int low,mid,high;

    low = 0;
    high = length-1;

    while(low <= high){
        mid = (low + high)/2;
        if (target > v[mid]){
            high = mid -1;
        }else{
            high = mid + 1;
        }
    }
    if (mid == target){
        return mid;
    }
    return -1;
}


int main(){

    int length = 500;

    int target = 300;
    int array[length];

    for (int i = 0; i < 500;i++){
        array[i] = i;
    }

    
    binary_search(target,array,length);
}

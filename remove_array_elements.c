#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val);

/*int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    int result[numsSize];
    //replace val with -1
    for (int i = 0; i < numsSize; i++){
        if (*(nums + i) == val){
            *(nums + i) = -1;
            k = k + 1;
        }
    }
    for (int i = 0; i < numsSize; i++){
        printf("%d; ", *(nums + i));
    }
    printf("\n");
    //add the non-val elements to a new list**********************LOGIC ERR
    int i = 0;
    while(i < numsSize){
        for (int j = 0; j < numsSize; j++){
            if (*(nums + j) != -1 && *(nums + j) != -2) {
            *(result + i) = *(nums + j);
            *(nums + j) = -2;
            break;
            }
        }
        i++;
    }
    //DEBUG: print
    for (int i = 0; i < numsSize; i++){
        printf("%d; ", *(result + i));
    }
    
    //pass the result elements back to nums elements
    for (int i = 0; i < numsSize; i++){
        *(nums + i ) = *(result + i);
    }
    k = numsSize - k;
    printf("k = %d", k);
    return k;
}*/
//****MEMORY EFFICIENT (6.49 MB, beats 96.85% users with C)
int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    for (int j = 0; j < numsSize; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

/*int main(){
    int test[] = {1, 9, 20, 2, 20, 48};
    removeElement(test, 6, 20);
    for (int i = 0; i < 6; i++){
        printf("%d; ", test[i]);
    }
}*/
int main(){
    int test[] = {20, 20};
    int newSize = removeElement(test, 2, 20);
    for (int i = 0; i < newSize; i++){
        printf("%d; ", test[i]);
    }
}


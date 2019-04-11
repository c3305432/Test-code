#include <stdio.h>

int main(){
    
    char array[1024] = {"GIWEV XLI TPIEWIV!!!\n"};
    char array2[1024];
    int key = 4;
    int index;
    int k;
    

    for (index = 0; index < 1024; index++){
        if (array[index] < 65 || array[index] > 90){
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
            } else if (array[index] - key < 65){
               k = index;
               array2[k] = array[index] + (26 - key);
               printf("%c", array2[k]); 
            } else {
            k = index;
            array2[k] = array[index] - key;
            printf("%c", array2[k]);
        }
         
    }

return 0;
}

#include <stdio.h>

int main(){
    
    char array[1024] = {"Ryan Mistelbauer\n"};
    char array2[1024];
    int choice = 0;
    int key = 1;
    int index;
    int k;
    
for (index = 0; index < 1024; index++){
    while(choice != 1){
        if (array[index] < 65 || array[index] > 122){
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
            } else if (array[index] > 90 && array[index] < 97) {
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
            } else if (array[index] >= 97 && array[index] <= 122) {
            array[index] = array[index] - 32;
                if (array[index] - key < 65){
               k = index;
               array2[k] = array[index] + (26 - key);
               printf("%c", array2[k]); 
            } else {
            k = index;
            array2[k] = array[index] - key;
            printf("%c", array2[k]);
        }
            } else if (array[index] - key < 65){
               k = index;
               array2[k] = array[index] + (26 - key);
               printf("%c", array2[k]); 
            } else {
            k = index;
            array2[k] = array[index] - key;
            printf("%c", array2[k]);
        }
    
    printf("Is this the correct encryption?  Press 1 for yes and 0 for no  >");
    scanf("%d", &choice);
         if(choice == 0){
             key++;
         }
    }
}
return 0;
}

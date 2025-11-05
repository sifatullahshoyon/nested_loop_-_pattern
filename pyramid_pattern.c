#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int star = 1;
    int space = n-1;
    // for printing new lines
    for(int i = 1; i<=n; i++){
        // printf("kaj korbo");
        // TODO Printing Space
        for(int k = 1; k <= space ;k++){
            printf(" ");
        }
        // Printing Star
        for(int j = 1; j <= star; j++){
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    
        FILE *file = fopen("text.txt", "r");
        int count[26] = {0};
        char letters[52];
        char buff[100];
        char c;
        int n;
        if(file == NULL){
            printf("Exiting for file null");
            exit(EXIT_FAILURE);
        }
        
        while ((c = getc(file)) != EOF){
            n = (int)c;
            if(n >= 97){
                n = n - 32;
            }
            if(n >= 65){
                n = n - 65;
            }
            if(n <= 25){
                count[n]++;
            }
        }
        int a = 65, b = 97;
        fclose(file);
        for(int i = 0; i < 26; i++ ){
            printf("Letter %c or %c appears %d times\n", (char)b, (char)a, count[i]);
            a++;
            b++;
        }

        return 0;
}

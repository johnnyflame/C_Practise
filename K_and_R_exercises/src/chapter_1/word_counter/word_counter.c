#include <stdio.h>
#include <ctype.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_WORD_LENGTH 45


/**
 * Section 1.5.4 K&R 
 * count lines, words, and characters in input
 */
void counter(){
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar())!=EOF){
        nc++;
        if (c == '\n'){
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }else if (state == OUT){
            state = IN;
            nw++;
        }
    }
    printf("lines : %d \nwords: %d \ncharacters: %d\n", nl, nw, nc);
}



/**
 * Ex 1.12 
 * Prints the input one word per line.
 */
void one_word_per_line(){
    char buffer[MAX_WORD_LENGTH];
    char c;
    int count;

    count = 0;

    while((c = getchar()) != EOF){

        if (!isalnum(c)){
            for (int i = 0; i < count;i++){
                putchar(buffer[i]);
            }
            putchar('\n');
            count = 0;
        }else{
            buffer[count] = c;
            count++;
        }
    }
}


void print_histogram_vertical(int* data,int length,int count){
    for (int i = 0; i <= length; i++){
        if(data[i] > 0){
            printf("there are %d words with %d length in the input\n",data[i],i);
            //    printf("%d",data[i]);
        }
    }

    
    for (int i = 0; i <=length;i++){
        printf("%d\t",i);
    }
    printf("\n");

 
    for (int i = 0; i <=length && count > 0;i++){
        if (data[i] > 0){
            printf("||\t");
            count--;
        }else{
            printf("\t");
        }
        
        if (i == length){
            printf("\n");
            i = 0;
        }

        
    }
    printf("\n");
}

/**
 * Section 1.6
 *
 * C array concepts
 */

void histogram(){
    char c;
    int wlength = 0;
    int result[MAX_WORD_LENGTH];
    int last_element = 0;
    int count = 0;
    
    for (int i = 0; i < MAX_WORD_LENGTH;i++){
        result[i] = 0;
    }
    
    while((c = getchar())!= EOF){
        if (isalnum(c)){
            wlength++;
        }else{
            //   printf("current word length: %d\n",wlength);
            if (wlength > last_element){
                last_element = wlength;
            } 
            result[wlength]++; // increment the corrosponding element of the array
            count++;
            wlength = 0;
        }
    }
    print_histogram_vertical(result, last_element,count);
}







int main(){
    // one_word_per_line();
    histogram();
}


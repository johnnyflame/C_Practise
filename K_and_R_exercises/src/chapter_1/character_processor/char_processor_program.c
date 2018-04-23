#include <stdio.h>





/**
 * File copier:
 *
 * Simply echo the input char by char, example from K&R Section 1.5
 *
 */

void file_copier(){
    int c;

    while ((c = getchar()) != EOF){
        putchar(c);
        c = getchar();
    }

    putchar(EOF);
}


/**
 * Counts input by character, including newline \n
 */
void character_counter(){

    double count;

    for (count = 0; getchar()!= EOF;count++)
        ;

    printf("word count(including newline): %.0f\n", count);
    
}



/**
 * Ex1.8: collects and prints info about the input
 *
 * counts: lines, words, space and tabs.
 */

void line_counter(){
    int c, nl,tc,sc,count;;

    while((c=getchar()) != EOF){
        if (c=='\n'){
            nl++;
        }else if(c==' '){
            sc++;
        }else if(c == '\t'){
            tc++;
        }else{
            count++;
        }
    }

    printf("line count: %d\n",nl);
    printf("tabs count: %d\n",tc);
    printf("blank space count: %d\n",sc);
    printf("visible character count: %d\n",count);
    
}


/**
 * Ex1.9: Copying input to output, if the input string has more than one blank, strip it,
 * replace it with one blank
 *
 */

void blank_space_replacer(){
    int c,space_count;

    while ((c=getchar()) != EOF){
        if (c == ' '){
            space_count++;
            if (space_count == 1){
                putchar(c);
            }
        }else{
            space_count = 0;
            putchar(c);
        }   
    }   
}



int main(){
    //   line_counter();

    blank_space_replacer();
    return 0;
}

#include <stdio.h>
#include <math.h>



/**
 * Ex 2.1
 *
 * Write a program to determine the range of char, short, int and long. Both
 * signed and unsigned, by printing the appropriate values from standard headers
 * and direct computation.
 *
 * Optional: compute range of various floating point types
 */

void print_size_limit(){

    char a;
    short b;
    int c;
    long d;

    unsigned char e;
    unsigned short f;
    unsigned int g;
    unsigned long h;

    int a_size = sizeof(a);
    int b_size = sizeof(b);
    int c_size = sizeof(c);
    int d_size = sizeof(d);
    int e_size = sizeof(e);
    int f_size = sizeof(f);
    int g_size = sizeof(g);
    
    printf("a is a char of size %d bytes, which is %d bits, the"
           " max limit of a is %.f\n",a_size,a_size *8,pow(2,a_size*8));
    
    printf("b is a short of size %d bytes\n",sizeof(b));
    printf("c is a int of size %d bytes\n",sizeof(c));
    printf("d is a long of size %d bytes\n",sizeof(d));
    printf("e is a unsigned char of size %d bytes\n",sizeof(e));
    printf("f is a unsigned short of size %d bytes\n",sizeof(f));
    printf("g is a unsigned int of size %d bytes\n",sizeof(g));
    printf("h is a unsigned long of size %d bytes\n",sizeof(h));

}



int main(){
    print_size_limit();
    return 0;
}

#include <stdio.h>

int main(){
    int a=2.5; //implicit conversion from double to int (results in only "2")
    int b='?'; //makes sense as b is an integer and '?' can be represented as an integer value
    char z=500; //implicit conversion from int to char changes value to "-12"
    int big = 40000; // 40000 outside of standard int range (-32,768 to 32,767)
    double fläche = 1.23E+5; //makes sense as fläche is a double and can represent very large numbers
    long count = 0; //makes sense as count is a long integer
    char c = '\''; //
    unsigned char ch='\201'; //makes sense as ch is an unsigned char and '\201' is an octal value that can be represented as an unsigned char
    unsigned int size = 40000; //makes sense as size is an unsigned int and can represent values up to 65,535
    float value = 12345.06789; //makes sense as value is a float and can represent decimal numbers with up to 7 significant digits
}

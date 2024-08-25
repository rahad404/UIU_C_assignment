#include<stdio.h>

int main(){
    long int long_int;
    long long int long2_int;
    long double long_double;
    short int short_int;

    long_int = 2147483647;
    long2_int = 9223372036854775807;
    long_double = 1.1E+4932L;
    short_int = 32767;

    printf("The long int value: %ld\n",long_int);
    printf("The long long int value: %lld\n",long2_int);
    printf("The long double value: %Lg\n",long_double);
    printf("The long int value: %hd\n",short_int);

}

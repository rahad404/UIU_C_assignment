#include<stdio.h>

int main(){
    unsigned int un_int1,un_int2;
    unsigned long int un_l_int1,un_l_int2;
    unsigned long long int un_2l_int1,un_2l_int2;
    unsigned short int un_s_int1,un_s_int2;

    un_int1 = 4294967295;
    un_l_int1 = 4294967295;
    un_2l_int1 = 18446744073709551615;
    un_s_int1 = 65535;

    un_int2 = 0;
    un_l_int2 = 0;
    un_2l_int2 = 0;
    un_s_int2 = 0;

    printf("The unsigned int value: %u\n", un_int1);
    printf("The unsigned long int value: %lu\n", un_l_int1);
    printf("The unsigned long long int value: %llu\n", un_2l_int1);
    printf("The unsigned short int value: %d\n\n", un_s_int1);

    printf("The unsigned int value: %u\n", un_int2);
    printf("The unsigned long int value: %lu\n", un_l_int2);
    printf("The unsigned long long int value: %llu\n", un_2l_int2);
    printf("The unsigned short int value: %d\n", un_s_int2);

}

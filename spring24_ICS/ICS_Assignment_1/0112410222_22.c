#include <stdio.h>

int main(){
    int int_val;
    float float_val;

    printf("enter int value: ");
    scanf("%d",&int_val);
    printf("enter float value: ");
    scanf("%f",&float_val);

    int assigned_int = float_val;
    float assigned_float = int_val;

    printf("assignment: %f assigned to an int produces %d\n",float_val,assigned_int);
    printf("assignment: %d assigned to a float produces %f\n",int_val,assigned_float);

    int cast_int = (int)float_val;
    float cast_float = (float)int_val;

    printf("typecast(float): %d produces %f\n",int_val,assigned_float);
    printf("typecast(int): %f produces %d\n",float_val,assigned_int);


}

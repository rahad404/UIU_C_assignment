#include<stdio.h>
int main() {
    int num;
    int sum = 0, i = 1, j = 3;
    scanf("%d", &num);
    if(num==1 || num==2){
        if(num==1)
        {
            sum += (i + j);
            i++;
            sum += j-2;
            j++;
        }
        else
        {
            sum += j-2;
          j++;
        }
    }
    else if(num==3 || num==4){
        if(num==3)
        {
            sum = (i+j)*i;
            i++;
            j--;
            sum -= (i+j);
            j--;
        }
        else{
            sum -= (i+j);
            j--;
        }
    }
    printf("%d %d %d\n", i, j, sum);
    return 0;
}

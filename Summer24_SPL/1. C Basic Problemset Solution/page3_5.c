int main()
{
    float a,b,c,d,r;
    scanf("%f%f%f%f",&a,&b,&c,&d);

    r = (a+b-c)*d-a/d;

    printf("(%f+%f-%f)*%f-%f/%f = %f",a,b,c,d,a,d,r);

}
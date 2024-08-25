int main()
{
    int n, nf=1, r, rf=1, ncr, nrf=1;
    scanf("%d%d",&n,&r);

    for(int i=1;i<=n;i++){
        nf *= i ;
    }
    for(int i=1;i<=r;i++){
        rf *= i ;
    }
    for(int i=1;i<=(n-r);i++){
        nrf *= i ;
    }

    ncr = nf/(rf*nrf);

    printf("%d",ncr);
    
}
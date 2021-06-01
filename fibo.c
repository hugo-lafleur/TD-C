int main(int n){
    int fibo(int n){
        int a = 1;
        int b = 1;
        for(int i=0;i<n;i++){
            b = a;
            a = a + b;
        }
        return(a);
    }
    printf("%d\n",fibo(5))
}

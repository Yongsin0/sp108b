int power(int a,int b){
    int ans = 1;
    int i;
    for(i = b; i > 0;i--){
        ans*=a;
    }
    return ans;
}


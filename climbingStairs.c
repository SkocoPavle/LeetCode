int climbStairs(int n) {
    int f1 = 1;
    int f2 = 2;
    int k = 3;
    int f;

    while(k <= n)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        k++;
    }
    
    if (n == 1) return 1;
    if (n == 2) return 2;

    return f; 
}

for(i = 1; i < n; i++){
    int x = v[i] - v[i-1];
    dist += (n - i)*x*i;
}
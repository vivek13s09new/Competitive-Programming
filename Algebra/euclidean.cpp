int gcd(int n1, int n2){
  while(n1 % n2){
    int rem = n1 % n2;
    n1 = n2;
    n2 = rem;
  }
  return n2;
}

int gcd(int n1, int n2) {
    while (n1 % n2) {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;;
    }
    return n2;
}


int gcd2(int n1, int n2) {
    if (n2 == 0)
        return n1;
    else
        return gcd (n2, n1 % n2);
}

int gcd3(int n1, int n2) {
    return n2 ? gcd (n2, n1 % n2) : n1;
}

int gcd4(int n1, int n2) {
    while (n2) {
        n1 %= n2;
        swap(n1, n2);
    }
    return n1;
}


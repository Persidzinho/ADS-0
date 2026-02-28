// Copyright 2021 NNTU-CS
int gcd(int a, int b) {
    int x = a;
    int y = b;

    if (x == 0) return y;
    if (y == 0) return x;

    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }

    while (x % y != 0) {
        int ostatok = x % y;
        x = y;
        y = ostatok;
    }

    return y;
}

int sum (int x, int y) {
    y = y + 2;
    return x+y;
}

int main() {
    int a = 2; // s0
    int b = 5; // s1
    int x;  // s2
    x = sum(a,b);   // x = 9
    a = b - x;      // a = -4
}
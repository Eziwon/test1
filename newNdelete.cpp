#include <iostream>

int main() {
    int N = 10;
    int *p = new int[N];
    for (int i=0; i<N; i++) p[i] = i;
    delete[] p;
}
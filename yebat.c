typedef struct vec {
    long a;
    long b;
} vec_t;

#define N 100000
vec_t v[N];

void calcOptim3x3(vec_t *v, int vecLen, long *resultSum) {
    long res0 = 0;
    long res1 = 0;
    long res2 = 0;
    int i;

    for (i = 0; i < vecLen - 2; i+=3) {
        res0 += v[i].a * v[i].a + v[i].b * v[i].b;
        res1 += v[i + 1].a * v[i + 1].a + v[i + 1].b * v[i + 1].b;
        res2 += v[i + 2].a * v[i + 2].a + v[i + 2].b * v[i + 2].b;
    }

    for (; i < vecLen; i++) {
        res0 += v[i].a * v[i].a + v[i].b * v[i].b;
    }

    *resultSum = res0 + res1 + res2;
}

int main() {
    long total;
    calc(v,N,&total);
}
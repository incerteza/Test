#include <cstdlib>
#include <cstdio>

void test() {
   int *p = (int*)malloc(10);
   *p = 0;                        // Leak the pointer.
}

int main(){
   test();
   return 0;
}


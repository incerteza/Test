typedef struct _FILE {

} FILE;

void test() {
    FILE* f = 0;
    int *p = (int*)malloc(10);
    *p = 0;                        // Leak the pointer.

    f = fopen("file.txt", "w");    // Leak the file.
}

int main(){
        test();
        return 0;
}


#include <cstddef>

int main() {
    // Memory leak
    int* q = new int;
    // Null pointer dereference
    int* v = NULL;
    return *v;
}

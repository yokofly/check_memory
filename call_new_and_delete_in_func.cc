#include "call_new_and_delete_in_func.h"

void B::call_alloc() {
    int* A = new int(2);
    std::cout <<" alloc \n";
    delete A;
}
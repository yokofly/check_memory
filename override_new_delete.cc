#include <cstdlib>
#include "override_new_delete.h"
#include <iostream>

void* operator new(size_t size)
{
    void* ptr = std::malloc(size);
    if (ptr == nullptr) {
        throw std::bad_alloc();
    }
    std::cout <<" call with A::new\n";
    return ptr;
}

void operator delete(void* ptr) noexcept
{
    std::free(ptr);
    std::cout <<" call with A::free\n";

}

#include <iostream>

int main()
{
    // Null value = a specical value that means something has no value.
    //              when a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer pointer literal

    //nullptrs are helpful when determining if an address
    //was successfully assigned to a pointer

    //when using pointers, be careful that your code isnt
    // dereferencing nullptr or pointing to free memeory
    //this will cause undefined behavior

    int *pointer = nullptr;
    int x = 123;

   pointer = &x;

    if(pointer == nullptr) {
        std::cout << "address was not assigned!\n";
    }
    else{
        std::cout << "address was assigned!\n";
    }    

    return 0;
}
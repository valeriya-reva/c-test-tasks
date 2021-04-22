#include <iostream>
#include <checksum.h>

int main()
{
    char counted_chat = 't';
    std::cout << "Counted bit length " << count_bit(counted_chat);
    return 0;
}

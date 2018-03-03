#include <type_traits>
#include <stdint.h>

#include "MemoryPool.h"
#include <list>

using namespace std;

int main() {
    list<int, MemoryPool<int>> lst;
    lst.push_front(1);
    lst.pop_front();
    return 0;
}

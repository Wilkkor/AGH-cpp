//
// Created by kornel on 28.03.17.
//

#ifndef JIMP_EXERCISES_MEMORYCHUNK_H
#define JIMP_EXERCISES_MEMORYCHUNK_H
#include <cstdint>
#include <algorithm>
#include <iostream>

using namespace std;

namespace memorychunk
{

    class MemoryChunk {
    private:
        int8_t *a;
        size_t b;
    public:
        //Rule of Five
        MemoryChunk(size_t sz);
        int8_t *MemoryAt(size_t offset) const;
        size_t ChunkSize() const;
//        MemoryChunk &operator=(MemoryChunk const& other);
//        MemoryChunk &operator=(MemoryChunk&& that) noexcept;

        ~MemoryChunk();
    };
}

using namespace memorychunk;

#endif //JIMP_EXERCISES_MEMORYCHUNK_H

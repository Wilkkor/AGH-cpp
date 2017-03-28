//
// Created by kornel on 28.03.17.
//

#include "MemoryChunk.h"

MemoryChunk::MemoryChunk(size_t sz): a(new int8_t[sz]) ,b(sz){}
int8_t* MemoryChunk::MemoryAt(size_t offset) const
{
    return a+offset;
}
size_t MemoryChunk::ChunkSize() const
{
    return b;
}
//MemoryChunk& MemoryChunk::operator=(MemoryChunk const &other)
//{// Use copy and swap idiom to implement assignment
//    MemoryChunk copy(other);
//    swap(*this,copy);//  assume swap() exchanges contents of *this and copy
//    return *this;
//}
//MemoryChunk& MemoryChunk::operator=(MemoryChunk&& that) noexcept
//{
//    swap(*this, that);
//    return *this;
//}
MemoryChunk::~MemoryChunk() {delete a;}
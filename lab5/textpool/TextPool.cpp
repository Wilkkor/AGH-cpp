//
// Created by kornel on 02.04.17.
//

#include "TextPool.h"


TextPool::TextPool(const std::initializer_list<experimental::string_view> &elements) : s{elements}
{}
TextPool::TextPool() : s()
{}


TextPool::TextPool(TextPool && that) noexcept: s()
{
    swap(*this,that);
}

TextPool & TextPool::operator=(TextPool && that) noexcept
{
    if(this==&that)
        return that;
    this->s.clear();
    swap(*this, that);
    return *this;
}


size_t TextPool::StoredStringCount() const
{
    return s.size();
}
std::experimental::string_view TextPool::Intern(const std::string &str)
{
    if (s.find(str) != s.end()) {
        return *s.find(str);
    } else{
        experimental::string_view tmp=str;
        s.insert(tmp);
        return *s.find(str);
    }
}

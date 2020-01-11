#include <iterator>
#include <memory>
#include "list.hpp"


template<class T>
tree<T>::forward_iterator::forward_iterator(list_node *ptr): ptr_{ptr} {}


template<class T>
T& tree<T>::forward_iterator::&operator*() {
    return ptr_->value;
}


template<class T>
typename tree<T>::forward_iterator forward_iterator::&operator++() {
    *this = ptr_->next();
    return *this;
}


template<class T>
typename tree<T>::forward_iterator forward_iterator::operator++(int) {
    forward_iterator old = *this;
    ++*this;
    return old;
}


template<class T>
bool tree<T>::forward_iterator::operator==(const forward_iterator &o) const {
    return ptr_ == o.ptr_;
}


template<class T>
bool tree<T>::forward_iterator::operator!=(const forward_iterator &o) const {
    return ptr_ != o.ptr_;
}

//-------------------------------------------------------------------






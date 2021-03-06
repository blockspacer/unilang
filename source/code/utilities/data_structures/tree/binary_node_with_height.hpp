#pragma once
#include "code/utilities/data_structures/tree/binary_node.hpp"

template <typename T>
struct BinaryNodeWithHeight {
    
    BinaryNode<T> node;
    size_t height;
};
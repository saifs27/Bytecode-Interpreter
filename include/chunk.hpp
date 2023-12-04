#pragma once
#include <vector>
#include <string>
#include "common.hpp"
#include "value.hpp"

typedef enum {
    OP_CONSTANT,
    OP_RETURN,
} OpCode;


class Chunk {
    public:
    int count;
    std::vector<int> code;
    ValueArray constants;

    void write(uint8_t byte);
    int addConstant(Value value);
};

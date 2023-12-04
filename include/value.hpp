#pragma once
#include <vector>

typedef double Value;

class ValueArray{
    public:
    int capacity;
    int count;
    std::vector<Value> values;

    ValueArray();
    void write(Value value);
};
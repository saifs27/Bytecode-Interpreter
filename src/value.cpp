#include "../include/value.hpp"
#include "../include/memory.hpp"


ValueArray::ValueArray() {
    capacity = 0;
    count = 0;
    values.clear();
}


void ValueArray::write(Value value){
    values.push_back(value);
    count++;
}

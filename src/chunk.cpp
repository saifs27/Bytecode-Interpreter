

#include "../include/chunk.hpp"


void Chunk::write(uint8_t byte) {
    code.push_back(byte);
    count++;
}

int Chunk::addConstant(Value value){
    constants.write(value);
    return constants.count - 1;
}
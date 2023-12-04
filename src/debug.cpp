#include <iostream>
#include "../include/debug.hpp"

void disassembleChunk(Chunk chunk, const std::string name){
    std::cout << "== " << name << " ==\n" << name;

    for (int offset = 0; offset < chunk.count;) {
        offset = disassembleInstruction(chunk, offset);
    }
}

static int simpleInstruction(const std::string name, int offset) {
    std::cout << name << '\n';
    return offset + 1;
}

int disassembleInstruction(Chunk chunk, int offset){
    std::cout << offset << '\n';

    uint8_t instruction = chunk.code[offset];
    switch (instruction) {
        case OP_RETURN:
            return simpleInstruction("OP_RETURN", offset);
        default:
            std::cout << "Unknown opcode" << instruction << '\n';
            return offset + 1;
    }

}
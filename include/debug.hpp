#pragma once

#include "chunk.hpp"

void disassembleChunk(Chunk chunk, const std::string name);
int disassembleInstruction(Chunk chunk, int offset);
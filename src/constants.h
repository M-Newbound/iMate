#pragma once
#include <cstdint>

namespace iMate {

    /**
     * @brief The maximum number of possible moves in a given chess board state.
     * 
     * This represents the maximum number of possible moves that can be generated in a single turn.
     * This engine assumes regular chess rules.
     * 
     * @see https://www.chessprogramming.org/Chess_Position
     */
    constexpr uint8_t MAX_MOVES_IN_TURN = 218;
}
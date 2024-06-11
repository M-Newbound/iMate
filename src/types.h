#pragma once

#include <cstdint>

/**
 * @file types.h
 * 
 * @brief Defines general types used in the iMate chess engine.
 */

namespace iMate {

    /**
     * @brief Alias for the bitboard type.
     *
     * A bitboard is a 64-bit unsigned integer used to represent the state of a chess board.
     * Each bit of the bitboard represents a square on the chess board, with a bit of 1 indicating 
     * an occupied square and a bit of 0 indicating an empty square.
     */
    using bitboard = uint64_t;


    /**
     * @brief Alias for the bitboard_mask type.
     *
     * A bitboard_mask is a 64-bit unsigned integer used to represent a mask for a bitboard.
     * Each bit of the bitboard_mask corresponds to a bit in the bitboard, and is used to perform
     * bitwise operations on the bitboard.
     */
    using bitboard_mask = uint64_t;


    /**
     * @brief Alias for the magic_number type.
     *
     * A magic_number is a 64-bit unsigned integer used to represent a magic number for a magic bitboard
     * hasing. 
     */
    using magic_number = uint64_t;

}

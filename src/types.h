/*
.--------------------------------------------------------------------------.
|                                                                          |
|  iMate 		             chess engine                                  |
|  Copyright (C) 2024        Martin Newbound                               |
|                                                                          |
|  for enquires, contact     martin.nz.dev@gmail.com                       |
|                                                                          |
|  This program is free software: you can redistribute it and/or modify    |
|  it under the terms of the GNU General Public License as published by    |
|  the Free Software Foundation, either version 3 of the License, or       |
|  (at your option) any later version.                                     |
|                                                                          |
|  This program is distributed in the hope that it will be useful,         |
|  but WITHOUT ANY WARRANTY; without even the implied warranty of          |
|  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           |
|  GNU General Public License for more details.                            |
|                                                                          |
|  You should have received a copy of the GNU General Public License       |
|  along with this program. If not, see https://www.gnu.org/licenses/      |
|                                                                          |
'--------------------------------------------------------------------------'
*/

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

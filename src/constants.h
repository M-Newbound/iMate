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

namespace iMate {

    namespace Legal {
    
    /**
     * @brief Copyright notice for the iMate program.
     * 
     * This constant stores a basic copyright notice for the iMate program.
     * This should be displayed to the user when the program boots.
     */
	constexpr char COPYRIGHT_NOTICE[] = "\t\tiMate,  Copyright  (C)  2024   Martin Newbound\n"
                                        "\t\tThis program comes with ABSOLUTELY NO WARRANTY\n"
                                        "\t\tfor enquires, contact martin.nz.mail@gmail.com\n";   

    }

    namespace Assumptions {

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
}
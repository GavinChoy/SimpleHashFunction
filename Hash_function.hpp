/**
* Simple Hash Function
* Copyright (C) 2021  Gavin Choy
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <iomanip>
using namespace std;

string hash_function(string input, string salt){
    /**
    * Returns a 64-bit (8-byte) message digest (hash) of input data with salt.
    * @param input String of the message (input data) to be hashed.
    * @param salt String of the salt.
    * @return The 64-bit (8-byte) message digest (hash) as a string.
    */

    // Padding the message + salt to get an integer multiple
    // of the block size (64 bits).
    // Padding is inside placed between the message and the salt
    // to prevent messages of similar length from haivng the same
    // ending.
    while (((input.length() + salt.length()) % 8) != 0){
        input += "_";
    }
    input += salt;

    // Initial state of the hash: FFFFFFFFFFFFFFFF
    unsigned long long state = 18446744073709551615;

    // Feed in each block of the message + salt
    for(int i = 0; i<input.length(); i += 8) {

        // Take the binary (ASCII) representation of the 8
        // characters in the block.
        unsigned long long update = int(input[i]);
        for(int j = 1; j < 8; j++){
            update = update << 8;
            update += int(input[i+j]);
        }
        // XOR the current state and the 8 characters
        state = state ^ update;
    }

    // Produce a hexadecimal message digest
    stringstream stream;
    stream << std::hex << state;
    string result( stream.str() );

    // Ensure the message digest is 64-bit (8-byte)
    while (result.length() != 16){
        result = "0" + result;
    }

    return result;
}


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

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    // Licence info on program start
    cout << endl;
    cout << "Simple Hash Function  Copyright (C) 2021  Gavin Choy\n";
    cout << "This program comes with ABSOLUTELY NO WARRANTY.\n";
    cout << "This is free software, and you are welcome to redistribute it\n";
    cout << "under certain conditions.\n\n";

    string input = "AabcdezsKNALNVAUEWPHFJ04J9jdsjihfd";

    while ((input.length() % 8) != 0){
        input += "1";
    }

    cout << input << endl << endl;

    unsigned long long state = 18446744073709551615;
    cout << hex << state << endl << endl;

    for(int i = 0; i<input.length(); i += 8) {
        cout << input[i] << endl;

        unsigned long long update = int(input[i]);
        for(int j = 1; j < 8; j++){
            update = update << 8;
            update += int(input[i+j]);
        }
        state = state ^ update;
        cout << hex << state << endl << endl;
    }

    return 0;
}


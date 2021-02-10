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
#include "Hash_function.hpp"
using namespace std;

int main(){

    // Licence info on program start
    cout << endl;
    cout << "Simple Hash Function  Copyright (C) 2021  Gavin Choy\n";
    cout << "This program comes with ABSOLUTELY NO WARRANTY.\n";
    cout << "This is free software, and you are welcome to redistribute it\n";
    cout << "under certain conditions.\n\n";

    string input = "";
    string salt = "";

    while (true) {
        cout << "----------------------------------------\n";
        cout << "Please enter the message and the salt.\nPlease leave both blank to terminate the program.\n";
        cout << "\nPlease enter the message here:\n";
        getline(cin, input);
        cout << "\nPlease enter the salt here:\n";
        getline(cin, salt);

        if ((input != "") || (salt != "")){
            cout << "\nThe message digest (hash) is:\n";
            cout << hash_function(input, salt) << endl << endl;
        } else {
            break;
        }
    };

    return 0;
}


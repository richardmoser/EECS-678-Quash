//
// Created by rj on 10/17/2023.
//

#include <iostream>
#include <string>
#include "lib.h"
#include <thread>
#include <future>

using namespace std;
using namespace std::literals;

int main() {
    // Clear the screen and then display your ASCII art in the desired position
    printf("\033[2J");  // Clear the screen
    printf("\033[1;1H"); // Move cursor to (1,1)

    int loops = 2;
    int animationFrames = 4;
    for (int i = 1; i <= loops; i++) {
        for (int j = 1; j <= animationFrames; j++) {
            wide_printout(j, 0, 0); // Adjust row and column positions as needed
        }
    }

    // Your shell logic starts here
    // ...

    return 0;
}

//int main()
//{
//    printf("\033[2J");  // Clear the screen
//    printf("\033[1;1H"); // Move cursor to (1,1)
//    int i = 1;
//    string input;
//    // use two threads to simultaneously wait for input and call thin_printout(i)
//    // TODO: read this link and figure out the multithreading https://stackoverflow.com/questions/26127073/user-input-without-pausing-code-c-console-application
//    // input thread
//    auto input_thread = std::async(std::launch::async, [] {
//        auto s = ""s;
//        if (std::cin >> s) return s;
//    });
//
//    while(input_thread.wait_for(.5s) != std::future_status::ready) {
//
//            if (i > 4) {i = 1;}
////            system("clear");
////            printf("i is %d\n", i);
////            thin_printout(i);
//            wide_printout(i);
//            i ++;
//
//        }
//
//// until return is pressed, loop
//    while (true)
//    {
//        getline(cin, input);
//        if (input == "q")
//        {
//            printf("Done\n");
//            break;
//        }
//    }
//
//    printf("\nExiting Loop...\n");
//
//
//    return 0;
//}

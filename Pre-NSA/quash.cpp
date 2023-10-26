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

int main()
{
    int i = 1;
    string input;

    // use two threads to simultaneously wait for input and call thin_printout(i)
    // TODO: read this link and figure out the multithreading https://stackoverflow.com/questions/26127073/user-input-without-pausing-code-c-console-application
    // input thread
    auto input_thread = std::async(std::launch::async, [] {
//        while (true)
//        {
//            getline(cin, input);
//            if (input == "quit")
//            {
//                printf("Done\n");
//                break;
//            }
        auto s = ""s;
        if (std::cin >> s) return s;
//        }
    });

    while(input_thread.wait_for(.5s) != std::future_status::ready) {
//     printout thread
//    auto printout_thread = std::thread([&i](){
//        while (true)
//        {
            if (i > 4) {i = 1;}
            system("clear");
//            printf("i is %d\n", i);
//            thin_printout(i);
            wide_printout(i);
            i ++;

        }
//    });

// until return is pressed, loop
    while (true)
    {
//        if (i > 4) {i = 0;}
//        i ++;
//        thin_printout(i);
//        wide_printout(0);


        getline(cin, input);
        if (input == "q")
        {
            printf("Done\n");
            break;
        }
    }

    printf("\nExiting Loop...\n");


    return 0;
}

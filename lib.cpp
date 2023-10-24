//
// Created by rj on 10/18/2023.
//

#include "lib.h"
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;


void print_splash(){
    printf("Welcome to Quash!\n");
}

void thin_printout(int i) {
    printf("\033[33m\n");
    printf(" -------------------------------------------------------------  \n"
                        /* prints the ascii art:
                        _______           _______  _______
                        (  ___  )|\     /|(  ___  )(  ____ \|\     /|
                        | (   ) || )   ( || (   ) || (    \/| )   ( |
                        | |   | || |   | || (___) || (_____ | (___) |
                        | |   | || |   | ||  ___  |(_____  )|  ___  |
                        | | /\| || |   | || (   ) |      ) || (   ) |
                        | (_\ \ || (___) || )   ( |/\____) || )   ( |
                        (____\/_)(_______)|/     \|\_______)|/     \| */
    "\033[33m|\033[31m         _______           _______  \033[32m_______                  \033[33m|\n"
    "\033[33m|\033[31m        (  ___  )\033[32m|\\     /|\033[31m(  ___  )\033[32m(  ____ \\\033[31m|\\     /|   \033[33m     |\n"
    "\033[33m|\033[31m        | (   ) |\033[32m| )   ( |\033[31m| (   ) |\033[32m| (    \\\033[31m/| )   ( |   \033[33m     |\n"
    "\033[33m|\033[31m        | |   | |\033[32m| |   | |\033[31m| (___) |\033[32m| (_____ \033[31m| (___) |   \033[33m     |\n"
    "\033[33m|\033[31m        | |   | |\033[32m| |   | |\033[31m|  ___  |\033[32m(_____  )\033[31m|  ___  |   \033[33m     |\n"
    "\033[33m|\033[31m        | | /\\| |\033[32m| |   | |\033[31m| (   ) |      \033[32m) |\033[31m| (   ) |        \033[33m|\n"
    "\033[33m|\033[31m        | (_\\ \\ |\033[32m| (___) |\033[31m| )   ( |\033[32m/\\____) |\033[31m| )   ( |        \033[33m|\n"
    "\033[33m|\033[31m        (____\\/_)\033[32m(_______)\033[31m|/     \\|\033[32m\\_______)\033[31m|/     \\|        \033[33m|\n"
    "\033[33m|\033[94m        _____________________________________________        \033[33m|\n"
    "\033[33m|\033[94m          _________________________________________          \033[33m|\n");


    if (i == 1)
    {
        // TODO: add stars -> start by twinkling with white to dark grey or something

        printf("\033[33m|\033[94m                                                             \033[33m|\n"
        "\033[33m|\033[94m                                                    ___      \033[33m|\033[94m   \n"
        "\033[33m|\033[97m      *                                       \033[94m  ,o88888      \033[33m|\n"
        "\033[33m|\033[94m                                            ,o8888888'       \033[33m|\n"
        "\033[33m|\033[35m                      ,:o:o:o\033[95mooo.        \033[94m,8O88Pd8888\"        \033[33m|\n"
        "\033[33m|\033[35m                  ,.::.::o:\033[95mooooOoO\033[33moO. \033[94m,oO8O8Pd888'\"          \033[33m|\n"
        "\033[33m|\033[35m                ,.:.::o:\033[95mooOoOoOO\033[33m8O8OOo\033[93m.\033[94m8OOPd8O8O\"            \033[33m|\n"
        "\033[33m|\033[35m               , ..:\033[95m.::o:ooOoO\033[33mOOO8OOO\033[93mOo.\033[94mFdO8O8\"              \033[33m|\n"
        "\033[33m|\033[35m              , ..\033[95m:.::o:ooO\033[33moOO8O888\033[93mO8O\033[94m,COCOO\"                \033[33m|\n"
        "\033[33m|\033[35m             ,\033[95m . ..:.::o:\033[33mooOoOOO\033[93mO8OOO\033[94mOCOCO\"                  \033[33m|\n"
        "\033[33m|\033[95m              . ..:.::\033[33mo:ooOoOo\033[93mOO8O8\033[94mOCCCC\"\033[93mo                   \033[33m|\n"
        "\033[33m|\033[95m                 .\033[33m ..:.::o:\033[93mooooO\033[94moCoCCC\"\033[93mo:o                   \033[33m|\n"
        "\033[33m|\033[33m                 . ..:.:\033[93m:o:o:\033[94m,cooooCo\"\033[93moo:o:                  \033[33m|\n"
        "\033[33m|\033[33m              `   .\033[93m . ..:.:\033[94mcocoooo\"'\033[93mo:o:::'                  \033[33m|\n"
        "\033[33m|\033[33m              .`\033[93m   . ..::\033[94mccccoc\"'\033[93mo:o:o:::'                   \033[33m|\n"
        "\033[33m|\033[94m             :.:.\033[93m    \033[94m,c:cccc\"'\033[93m:.:.:.:.:.'                    \033[33m|\n"
        "\033[33m|\033[94m           ..:.:\"'\033[93m`\033[94m::::c:\"'\033[93m..:.:.:.:.:.'                     \033[33m|\n"
        "\033[33m|\033[94m         ...:.'.:.::::\"'\033[93m    . . . . .'                       \033[33m|\n"
        "\033[33m|\033[94m        .. . ....:.\"'\033[93m `   .  . . ''                          \033[33m|\n"
        "\033[33m|\033[94m      . . . ....\"'                                           \033[33m|\n"
        "\033[33m|\033[94m      .. . .\"'                                               \033[33m|\n"
        "\033[33m|\033[94m     .                                                       \033[33m|\n"
        "\033[33m|\033[94m                                                             \033[33m|\n"
        //    "|\033[31m                                           Welcome to Quash                             \033[33m|\n"
        "\033[33m|\033[94m              By Seth Daniels and Richard Moser              \033[33m|\n");
    }
        printf("\033[33m|\033[94m                                                             \033[33m|\n"
//"\033[33m|_____________________________________________________________|\n"
    " -------------------------------------------------------------  \n\n\r");
//    usleep(10000);
// call the "clear" command
//    system("clear");
};

void wide_printout(int i) {
    printf("\033[33m\n");
//    printf(" -------------------------------------------------------------  \n"

    /*
    prints the ascii art:
    _______           _______  _______
   (  ___  )|\     /|(  ___  )(  ____ \|\     /|
   | (   ) || )   ( || (   ) || (    \/| )   ( |
   | |   | || |   | || (___) || (_____ | (___) |
   | |   | || |   | ||  ___  |(_____  )|  ___  |
   | | /\| || |   | || (   ) |      ) || (   ) |
   | (_\ \ || (___) || )   ( |/\____) || )   ( |
   (____\/_)(_______)|/     \|\_______)|/     \|
     */
//    "\033[33m|\033[31m         _______           _______  _______                  \033[33m|\n"
//    "\033[33m|\033[31m        (  ___  )|\033[32m\\     /\033[31m|(  ___  )(  ____ \\\033[32m|\\     /|   \033[33m     |\n"
//    "\033[33m|\033[31m        | (   ) ||\033[32m )   ( \033[31m|| (   ) || (    \\\033[32m/| )   ( |   \033[33m     |\n"
//    "\033[33m|\033[31m        | |   | ||\033[32m |   | \033[31m|| (___) || (_____ \033[32m| (___) |   \033[33m     |\n"
//    "\033[33m|\033[31m        | |   | ||\033[32m |   | \033[31m||  ___  |(_____  )\033[32m|  ___  |   \033[33m     |\n"
//    "\033[33m|\033[31m        | | /\\| ||\033[32m |   | \033[31m|| (   ) |      ) || (   ) |        \033[33m|\n"
//    "\033[33m|\033[31m        | (_\\ \\ ||\033[32m (___) \033[31m|| )   ( |/\\\033[32m____) || )   ( |        \033[33m|\n"
//    "\033[33m|\033[31m        (____\\/_)(\033[32m_______\033[31m)|/     \\\033[32m|\\_______)|/     \\|        \033[33m|\n"



//"________/\\\________/\\\________/\\\_____/\\\\\\\\\________/\\\\\\\\\\\____/\\\________/\\\_"
//" _____/\\\\/\\\\____\/\\\_______\/\\\___/\\\\\\\\\\\\\____/\\\/////////\\\_\/\\\_______\/\\\_       "
//"  ___/\\\//\////\\\__\/\\\_______\/\\\__/\\\/////////\\\__\//\\\______\///__\/\\\_______\/\\\_      "
//"   __/\\\______\//\\\_\/\\\_______\/\\\_\/\\\_______\/\\\___\////\\\_________\/\\\\\\\\\\\\\\\_     "
//"    _\//\\\______/\\\__\/\\\_______\/\\\_\/\\\\\\\\\\\\\\\______\////\\\______\/\\\/////////\\\_    "
//"     __\///\\\\/\\\\/___\/\\\_______\/\\\_\/\\\/////////\\\_________\////\\\___\/\\\_______\/\\\_   "
//"      ____\////\\\//_____\//\\\______/\\\__\/\\\_______\/\\\__/\\\______\//\\\__\/\\\_______\/\\\_  "
//"       _______\///\\\\\\___\///\\\\\\\\\/___\/\\\_______\/\\\_\///\\\\\\\\\\\/___\/\\\_______\/\\\_ "
//"        _________\//////______\/////////_____\///________\///____\///////////_____\///________\///__"

    /*
    ________/\\\________/\\\________/\\\_____/\\\\\\\\\________/\\\\\\\\\\\____/\\\________/\\\_
     _____/\\\\/\\\\____\/\\\_______\/\\\___/\\\\\\\\\\\\\____/\\\/////////\\\_\/\\\_______\/\\\_
      ___/\\\//\////\\\__\/\\\_______\/\\\__/\\\/////////\\\__\//\\\______\///__\/\\\_______\/\\\_
       __/\\\______\//\\\_\/\\\_______\/\\\_\/\\\_______\/\\\___\////\\\_________\/\\\\\\\\\\\\\\\_
        _\//\\\______/\\\__\/\\\_______\/\\\_\/\\\\\\\\\\\\\\\______\////\\\______\/\\\/////////\\\_
         __\///\\\\/\\\\/___\/\\\_______\/\\\_\/\\\/////////\\\_________\////\\\___\/\\\_______\/\\\_
          ____\////\\\//_____\//\\\______/\\\__\/\\\_______\/\\\__/\\\______\//\\\__\/\\\_______\/\\\_
           _______\///\\\\\\___\///\\\\\\\\\/___\/\\\_______\/\\\_\///\\\\\\\\\\\/___\/\\\_______\/\\\_
            _________\//////______\/////////_____\///________\///____\///////////_____\///________\///__*/

    printf(" --------------------------------------------------------------------------------------------------------  \n"
           "\033[33m|\033[94m                                                                                                        \033[33m|\n"

           "\033[33m|   \033[31m________\033[94m/\\\\\\\033[31m________\033[94m/\\\\\\\033[31m________\033[94m/\\\\\\\033[31m_____\033[94m/\\\\\\\\\\\\\\\\\\\033[31m________\033[94m/\\\\\\\\\\\\\\\\\\\\\\\033[31m____\033[94m/\\\\\\\033[31m________\033[94m/\\\\\\\033[31m_         \033[33m|\033[94m   \n"
           "\033[33m|\033[31m    _____\033[94m/\\\\\\\\/\\\\\\\\\033[31m____\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m___\033[94m/\\\\\\\\\\\\\\\\\\\\\\\\\\\033[31m____\033[94m/\\\\\\/////////\\\\\\\033[31m_\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m_        \033[33m|\033[94m   \n"
           "\033[33m|\033[31m     ___\033[94m/\\\\\\//\\////\\\\\\\033[31m__\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m__\033[94m/\\\\\\/////////\\\\\\\033[31m__\033[94m\\//\\\\\\\033[31m______\033[94m\\///\033[31m__\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m_       \033[33m|\033[94m   \n"
           "\033[33m|\033[31m      __\033[94m/\\\\\\\033[31m______\033[94m\\//\\\\\\\033[31m_\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m_\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m___\033[94m\\////\\\\\\\033[31m_________\033[94m\\/\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\033[31m_      \033[33m|\033[94m   \n"
           "\033[33m|\033[31m       _\033[94m\\//\\\\\\\033[31m______\033[94m/\\\\\\\033[31m__\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m_\033[94m\\/\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\033[31m______\033[94m\\////\\\\\\\033[31m______\033[94m\\/\\\\\\/////////\\\\\\\033[31m_     \033[33m|\033[94m   \n"
           "\033[33m|\033[31m        __\033[94m\\///\\\\\\\\/\\\\\\\\/\033[31m___\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m_\033[94m\\/\\\\\\/////////\\\\\\\033[31m_________\033[94m\\////\\\\\\\033[31m___\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m_    \033[33m|\033[94m   \n"
           "\033[33m|\033[31m         ____\033[94m\\////\\\\\\//\033[31m_____\033[94m\\//\\\\\\\033[31m______\033[94m/\\\\\\\033[31m__\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m__\033[94m/\\\\\\\033[31m______\033[94m\\//\\\\\\\033[31m__\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m_   \033[33m|\033[94m   \n"
           "\033[33m|\033[31m          _______\033[94m\\///\\\\\\\\\\\\\033[31m___\033[94m\\///\\\\\\\\\\\\\\\\\\/\033[31m___\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\\033[31m_\033[94m\\///\\\\\\\\\\\\\\\\\\\\\\/\033[31m___\033[94m\\/\\\\\\\033[31m_______\033[94m\\/\\\\\\   \033[33m|\033[94m   \n"
           "\033[33m|\033[31m           _________\033[94m\\//////\033[31m______\033[94m\\/////////\033[31m_____\033[94m\\///\033[31m________\033[94m\\///\033[31m____\033[94m\\///////////\033[31m_____\033[94m\\///\033[31m________\033[94m\\///\033[31m__ \033[33m|\033[94m    \n");
    if (i == 1) {
        printf("\033[33m|\033[94m                         \033[90m*                                            \033[90m.                                 \033[33m|\n"
               "\033[33m|    \033[37m.                                                                                        *          \033[33m|\n"
               "\033[33m|                                 \033[37m.                                          \033[94m___                       \033[37m. \033[33m|\033[94m   \n"
               "\033[33m|                                                         \033[37m*              \033[94m,o88888                         \033[33m|\n"
               "\033[33m|\033[94m                                                                    ,o8888888'                          \033[33m|\n"
               "\033[33m|               \033[90m*                              \033[35m,:o:o:o\033[95mooo.        \033[94m,8O88Pd8888\"                           \033[33m|\n"
               "\033[33m|\033[35m                                       \033[37m.  \033[35m,.::.::o:\033[95mooooOoO\033[33moO. \033[94m,oO8O8Pd888'\"            \033[37m*                \033[33m|\n"
               "\033[33m|\033[35m                                        \033[35m,.:.::o:\033[95mooOoOoOO\033[33m8O8OOo\033[93m.\033[94m8OOPd8O8O\"                               \033[33m|\n"
               "\033[33m|\033[35m                                       \033[35m, ..:\033[95m.::o:ooOoO\033[33mOOO8OOO\033[93mOo.\033[94mFdO8O8\"                                 \033[33m|\n"
               "\033[33m|\033[35m   \033[37m.                                  \033[35m, ..\033[95m:.::o:ooO\033[33moOO8O888\033[93mO8O\033[94m,COCOO\"                                   \033[33m|\n"
               "\033[33m|\033[35m                                     ,\033[95m . ..:.::o:\033[33mooOoOOO\033[93mO8OOO\033[94mOCOCO\"                            \033[90m*        \033[33m|\n"
               "\033[33m|\033[95m                         \033[37m.            \033[95m. ..:.::\033[33mo:ooOoOo\033[93mOO8O8\033[94mOCCCC\"\033[93mo           \033[90m.                          \033[33m|\n"
               "\033[33m|\033[95m                                         \033[95m.\033[33m ..:.::o:\033[93mooooO\033[94moCoCCC\"\033[93mo:o                                      \033[33m|\n"
               "\033[33m|\033[33m                                         \033[33m. ..:.:\033[93m:o:o:\033[94m,cooooCo\"\033[93moo:o:                                 \033[37m.   \033[33m|\n"
               "\033[33m|\033[33m                   \033[37m.                  \033[33m`   .\033[93m . ..:.:\033[94mcocoooo\"'\033[93mo:o:::'                                     \033[33m|\n"
               "\033[33m|\033[33m                                      \033[33m.`\033[93m   . ..::\033[94mccccoc\"'\033[93mo:o:o:::'                                      \033[33m|\n"
               "\033[33m|\033[94m    \033[37m*                          \033[37m*     \033[94m:.:.\033[93m    \033[94m,c:cccc\"'\033[93m:.:.:.:.:.'       \033[37m*                               \033[33m|\n"
               "\033[33m|\033[94m                                   \033[94m..:.:\"'\033[93m`\033[94m::::c:\"'\033[93m..:.:.:.:.:.'                 \033[37m.              \033[37m.       \033[33m|\n"
               "\033[33m|\033[94m             \033[90m.                   \033[94m...:.'.:.::::\"'\033[93m    . . . . .'                                          \033[33m|\n"
               "\033[33m|\033[94m                                \033[94m.. . ....:.\"'\033[93m `   .  . . ''                                             \033[33m|\n"
               "\033[33m|\033[94m                              \033[94m. . . ....\"'                                                              \033[33m|\n"
               "\033[33m|\033[94m                              \033[94m.. . .\"'                                                 \033[90m                 \033[33m|\n"
               "\033[33m|                 \033[37m*           \033[94m.                                   \033[37m*                                      \033[33m|\n"
               "\033[33m|\033[94m                                                                                                    \033[90m*   \033[33m|\n"
               //    "|\033[31m                                           Welcome to Quash                                             \033[33m|\n"
               "\033[33m|     \033[37m.                             \033[94mBy Seth Daniels and Richard Moser          \033[37m*                         \033[33m|\n"

               "\033[33m|\033[94m                                                                                                        \033[33m|\n"
               //"\033[33m|_____________________________________________________________|\n"
               " --------------------------------------------------------------------------------------------------------  \n\n");
        }
    else if (i == 2) {
        printf("\033[33m|\033[94m                         \033[90m*                                            \033[90m.                                 \033[33m|\n"
               "\033[33m|    \033[37m.                                                                                        *          \033[33m|\n"
               "\033[33m|                                 \033[37m.                                          \033[94m___                       \033[37m. \033[33m|\033[94m   \n"
               "\033[33m|                                                         \033[37m*              \033[94m,o88888                         \033[33m|\n"
               "\033[33m|\033[94m                                                                    ,o8888888'                          \033[33m|\n"
               "\033[33m|               \033[37m*                              \033[35m,:o:o:o\033[95mooo.        \033[94m,8O88Pd8888\"                           \033[33m|\n"
               "\033[33m|\033[35m                                       \033[37m.  \033[35m,.::.::o:\033[95mooooOoO\033[33moO. \033[94m,oO8O8Pd888'\"            \033[37m*                \033[33m|\n"
               "\033[33m|\033[35m                                        \033[35m,.:.::o:\033[95mooOoOoOO\033[33m8O8OOo\033[93m.\033[94m8OOPd8O8O\"                               \033[33m|\n"
               "\033[33m|\033[35m                                       \033[35m, ..:\033[95m.::o:ooOoO\033[33mOOO8OOO\033[93mOo.\033[94mFdO8O8\"                                 \033[33m|\n"
               "\033[33m|\033[35m   \033[90m.                                  \033[35m, ..\033[95m:.::o:ooO\033[33moOO8O888\033[93mO8O\033[94m,COCOO\"                                   \033[33m|\n"
               "\033[33m|\033[35m                                     ,\033[95m . ..:.::o:\033[33mooOoOOO\033[93mO8OOO\033[94mOCOCO\"                            \033[37m*        \033[33m|\n"
               "\033[33m|\033[95m                         \033[37m.            \033[95m. ..:.::\033[33mo:ooOoOo\033[93mOO8O8\033[94mOCCCC\"\033[93mo           \033[90m.                          \033[33m|\n"
               "\033[33m|\033[95m                                         \033[95m.\033[33m ..:.::o:\033[93mooooO\033[94moCoCCC\"\033[93mo:o                                      \033[33m|\n"
               "\033[33m|\033[33m                                         \033[33m. ..:.:\033[93m:o:o:\033[94m,cooooCo\"\033[93moo:o:                                 \033[37m.   \033[33m|\n"
               "\033[33m|\033[33m                   \033[37m.                  \033[33m`   .\033[93m . ..:.:\033[94mcocoooo\"'\033[93mo:o:::'                                     \033[33m|\n"
               "\033[33m|\033[33m                                      \033[33m.`\033[93m   . ..::\033[94mccccoc\"'\033[93mo:o:o:::'                                      \033[33m|\n"
               "\033[33m|\033[94m    \033[90m*                          \033[37m*     \033[94m:.:.\033[93m    \033[94m,c:cccc\"'\033[93m:.:.:.:.:.'       \033[37m*                               \033[33m|\n"
               "\033[33m|\033[94m                                   \033[94m..:.:\"'\033[93m`\033[94m::::c:\"'\033[93m..:.:.:.:.:.'                 \033[37m.              \033[37m.       \033[33m|\n"
               "\033[33m|\033[94m             \033[90m                    \033[94m...:.'.:.::::\"'\033[93m    . . . . .'                                          \033[33m|\n"
               "\033[33m|\033[94m                                \033[94m.. . ....:.\"'\033[93m `   .  . . ''                                             \033[33m|\n"
               "\033[33m|\033[94m                              \033[94m. . . ....\"'                                                              \033[33m|\n"
               "\033[33m|\033[94m                              \033[94m.. . .\"'                                                 \033[90m.                \033[33m|\n"
               "\033[33m|                 \033[37m*           \033[94m.                                   \033[37m*                                      \033[33m|\n"
               "\033[33m|\033[94m                                                                                                    \033[37m*   \033[33m|\n"
               //    "|\033[31m                                           Welcome to Quash                                             \033[33m|\n"
               "\033[33m|     \033[37m.                             \033[94mBy Seth Daniels and Richard Moser          \033[37m*                         \033[33m|\n"

               "\033[33m|\033[94m                                                                                                        \033[33m|\n"
               //"\033[33m|_____________________________________________________________|\n"
               " --------------------------------------------------------------------------------------------------------  \n\n");
        }

    else if (i == 3) {
        printf("\033[33m|\033[94m                         \033[37m*                                            \033[37m                                  \033[33m|\n"
               "\033[33m|    \033[90m.                                                                                        *          \033[33m|\n"
               "\033[33m|                                 \033[37m.                                          \033[94m___                       \033[37m. \033[33m|\033[94m   \n"
               "\033[33m|                                                         \033[37m*              \033[94m,o88888                         \033[33m|\n"
               "\033[33m|\033[94m                                                                    ,o8888888'                          \033[33m|\n"
               "\033[33m|               \033[37m*                              \033[35m,:o:o:o\033[95mooo.        \033[94m,8O88Pd8888\"                           \033[33m|\n"
               "\033[33m|\033[35m                                       \033[37m.  \033[35m,.::.::o:\033[95mooooOoO\033[33moO. \033[94m,oO8O8Pd888'\"            \033[37m*                \033[33m|\n"
               "\033[33m|\033[35m                                        \033[35m,.:.::o:\033[95mooOoOoOO\033[33m8O8OOo\033[93m.\033[94m8OOPd8O8O\"                               \033[33m|\n"
               "\033[33m|\033[35m                                       \033[35m, ..:\033[95m.::o:ooOoO\033[33mOOO8OOO\033[93mOo.\033[94mFdO8O8\"                                 \033[33m|\n"
               "\033[33m|\033[35m   \033[90m.                                  \033[35m, ..\033[95m:.::o:ooO\033[33moOO8O888\033[93mO8O\033[94m,COCOO\"                                   \033[33m|\n"
               "\033[33m|\033[35m                                     ,\033[95m . ..:.::o:\033[33mooOoOOO\033[93mO8OOO\033[94mOCOCO\"                            \033[37m*        \033[33m|\n"
               "\033[33m|\033[95m                         \033[37m.            \033[95m. ..:.::\033[33mo:ooOoOo\033[93mOO8O8\033[94mOCCCC\"\033[93mo           \033[90m.                          \033[33m|\n"
               "\033[33m|\033[95m                                         \033[95m.\033[33m ..:.::o:\033[93mooooO\033[94moCoCCC\"\033[93mo:o                                      \033[33m|\n"
               "\033[33m|\033[33m                                         \033[33m. ..:.:\033[93m:o:o:\033[94m,cooooCo\"\033[93moo:o:                                 \033[37m.   \033[33m|\n"
               "\033[33m|\033[33m                   \033[90m.                  \033[33m`   .\033[93m . ..:.:\033[94mcocoooo\"'\033[93mo:o:::'                                     \033[33m|\n"
               "\033[33m|\033[33m                                      \033[33m.`\033[93m   . ..::\033[94mccccoc\"'\033[93mo:o:o:::'                                      \033[33m|\n"
               "\033[33m|\033[94m    \033[90m*                          \033[37m*     \033[94m:.:.\033[93m    \033[94m,c:cccc\"'\033[93m:.:.:.:.:.'       \033[37m*                               \033[33m|\n"
               "\033[33m|\033[94m                                   \033[94m..:.:\"'\033[93m`\033[94m::::c:\"'\033[93m..:.:.:.:.:.'                 \033[37m.              \033[37m.       \033[33m|\n"
               "\033[33m|\033[94m             \033[90m                    \033[94m...:.'.:.::::\"'\033[93m    . . . . .'                                          \033[33m|\n"
               "\033[33m|\033[94m                                \033[94m.. . ....:.\"'\033[93m `   .  . . ''                                             \033[33m|\n"
               "\033[33m|\033[94m                              \033[94m. . . ....\"'                                                              \033[33m|\n"
               "\033[33m|\033[94m                              \033[94m.. . .\"'                                                 \033[90m.                \033[33m|\n"
               "\033[33m|                 \033[90m*           \033[94m.                                   \033[90m*                                      \033[33m|\n"
               "\033[33m|\033[94m                                                                                                    \033[37m*   \033[33m|\n"
               //    "|\033[31m                                           Welcome to Quash                                             \033[33m|\n"
               "\033[33m|     \033[37m.                             \033[94mBy Seth Daniels and Richard Moser          \033[37m*                         \033[33m|\n"

               "\033[33m|\033[94m                                                                                                        \033[33m|\n"
               //"\033[33m|_____________________________________________________________|\n"
               " --------------------------------------------------------------------------------------------------------  \n\n");
        }
    else if (i == 4) {
        printf("\033[33m|\033[94m                         \033[97m*                                            \033[37m                                  \033[33m|\n"
               "\033[33m|    \033[90m.                                                                                        *          \033[33m|\n"
               "\033[33m|                                 \033[37m.                                          \033[94m___                       \033[37m. \033[33m|\033[94m   \n"
               "\033[33m|                                                         \033[37m*              \033[94m,o88888                         \033[33m|\n"
               "\033[33m|\033[94m                                                                    ,o8888888'                          \033[33m|\n"
               "\033[33m|               \033[90m*                              \033[35m,:o:o:o\033[95mooo.        \033[94m,8O88Pd8888\"                           \033[33m|\n"
               "\033[33m|\033[35m                                       \033[37m.  \033[35m,.::.::o:\033[95mooooOoO\033[33moO. \033[94m,oO8O8Pd888'\"            \033[37m*                \033[33m|\n"
               "\033[33m|\033[35m                                        \033[35m,.:.::o:\033[95mooOoOoOO\033[33m8O8OOo\033[93m.\033[94m8OOPd8O8O\"                               \033[33m|\n"
               "\033[33m|\033[35m                                       \033[35m, ..:\033[95m.::o:ooOoO\033[33mOOO8OOO\033[93mOo.\033[94mFdO8O8\"                                 \033[33m|\n"
               "\033[33m|\033[35m   \033[37m.                                  \033[35m, ..\033[95m:.::o:ooO\033[33moOO8O888\033[93mO8O\033[94m,COCOO\"                                   \033[33m|\n"
               "\033[33m|\033[35m                                     ,\033[95m . ..:.::o:\033[33mooOoOOO\033[93mO8OOO\033[94mOCOCO\"                            \033[37m*        \033[33m|\n"
               "\033[33m|\033[95m                         \033[37m.            \033[95m. ..:.::\033[33mo:ooOoOo\033[93mOO8O8\033[94mOCCCC\"\033[93mo           \033[90m.                          \033[33m|\n"
               "\033[33m|\033[95m                                         \033[95m.\033[33m ..:.::o:\033[93mooooO\033[94moCoCCC\"\033[93mo:o                                      \033[33m|\n"
               "\033[33m|\033[33m                                         \033[33m. ..:.:\033[93m:o:o:\033[94m,cooooCo\"\033[93moo:o:                                 \033[37m.   \033[33m|\n"
               "\033[33m|\033[33m                   \033[90m.                  \033[33m`   .\033[93m . ..:.:\033[94mcocoooo\"'\033[93mo:o:::'                                     \033[33m|\n"
               "\033[33m|\033[33m                                      \033[33m.`\033[93m   . ..::\033[94mccccoc\"'\033[93mo:o:o:::'                                      \033[33m|\n"
               "\033[33m|\033[94m    \033[37m*                          \033[37m*     \033[94m:.:.\033[93m    \033[94m,c:cccc\"'\033[93m:.:.:.:.:.'       \033[37m*                               \033[33m|\n"
               "\033[33m|\033[94m                                   \033[94m..:.:\"'\033[93m`\033[94m::::c:\"'\033[93m..:.:.:.:.:.'                 \033[37m.              \033[37m.       \033[33m|\n"
               "\033[33m|\033[94m             \033[90m.                   \033[94m...:.'.:.::::\"'\033[93m    . . . . .'                                          \033[33m|\n"
               "\033[33m|\033[94m                                \033[94m.. . ....:.\"'\033[93m `   .  . . ''                                             \033[33m|\n"
               "\033[33m|\033[94m                              \033[94m. . . ....\"'                                                              \033[33m|\n"
               "\033[33m|\033[94m                              \033[94m.. . .\"'                                                 \033[90m                 \033[33m|\n"
               "\033[33m|                 \033[90m*           \033[94m.                                   \033[90m*                                      \033[33m|\n"
               "\033[33m|\033[94m                                                                                                    \033[90m*   \033[33m|\n"
               //    "|\033[31m                                           Welcome to Quash                                             \033[33m|\n"
               "\033[33m|     \033[37m.                             \033[94mBy Seth Daniels and Richard Moser          \033[37m*                         \033[33m|\n"

               "\033[33m|\033[94m                                                                                                        \033[33m|\n"
               //"\033[33m|_____________________________________________________________|\n"
               " --------------------------------------------------------------------------------------------------------  \n\n");
        }
};
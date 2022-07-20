/*#include <iostream>

using namespace std;

int main(){
    cout << "hello world" << endl;
    return 0;
}*/
// https://github.com/ToshioCP/Gtk4-tutorial/blob/main/gfm/sec2.md
// $ sudo apt-get install libgtk-4-bin libgtk-4-common libgtk-4-dev libgtk-4-doc
// $ sudo apt-get install libdrm-dev
// $ sudo apt-get install gcc-multilib
// $ sudo apt-get install gcc-multilib g++-multilib
/*
The graphene-config.h header is system dependent, which means it cannot go in the global include directory. The appropriate place for this kind of headers is a directory under libdir.

    It is so painful to include it into any larger build system :(

It's really not, if you are using pkg-config --cflags graphene-1.0 to gather the compiler flags to be used when building code that depends on Graphene—which is how Graphene should be integrated in any build system.

Most definitely you should never move files installed by your distro around.
*/
/**
 * @file main.cpp
 * @author dev-delphin (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * @note gtk-3.0
 * @copyright Copyright (c) 2022
 * 
 */
//#include "headers/window.h" 
#include "headers/window.h"

int main(int argc, char *argv[])
{
    _gtK_window(argc, argv);
    return 0;
}


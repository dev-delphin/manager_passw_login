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
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <gtk/gtk.h>
    
static void destroy(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}
    
int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);
    
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Window");
    g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);
    
    gtk_widget_show_all(window);
    
    gtk_main();
    
    return 0;
}


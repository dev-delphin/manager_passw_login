/*#include <iostream>

using namespace std;

int main(){
    cout << "hello world" << endl;
    return 0;
}*/
// https://github.com/ToshioCP/Gtk4-tutorial/blob/main/gfm/sec2.md
// $ sudo apt-get install libgtk-4-bin libgtk-4-common libgtk-4-dev libgtk-4-doc
// $ sudo apt-get install libdrm-dev

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


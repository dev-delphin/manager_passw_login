#include <gtk/gtk.h>
//#include "../headers/window.h"

static void destroy(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}


void _gtK_window(int argc, char *argv[]){
    gtk_init(&argc, &argv);
    
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Window");
    g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);

    gtk_window_set_default_size (GTK_WINDOW (window), 500, 500);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);


    gtk_widget_show_all(window);
    
    gtk_main();
}
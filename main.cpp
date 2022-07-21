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
/** 
 * @brief GTK window
 * @image https://www.flaticon.com/ru/free-icons/ -- Autor "Flowicon"
 * @param app 
 * @param user_data 
 * @return ** void
 **/

#include <gtk/gtk.h>
#include <filesystem>
#include <iostream>
#include "headers/window.h"

// exit from app
static void _destroy_window(GtkWidget *button, GtkWidget *window){
    g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);
}

static void _init_window (GtkApplication* app, gpointer user_data){
  GtkWidget *window, *button_box, *button;
  GdkPixbuf *pixbuf;
//window
    window = gtk_application_window_new (app);
    gtk_window_set_title (GTK_WINDOW (window), "PLM");
    gtk_window_set_default_size (GTK_WINDOW (window), 500, 500);
    gtk_window_set_position (GTK_WINDOW (window), GTK_WIN_POS_CENTER);
    pixbuf = gdk_pixbuf_new_from_file("data/img/64x64.png", NULL);
    gtk_window_set_icon (GTK_WINDOW (window), pixbuf);
   /* if (std::filesystem::exists("data/img/32x32.png")) {
        std::cout << "exist" << std::endl;
    } else std::cout << "not exist" << std::endl;*/
    //gtk_window_set_icon_name (GTK_WINDOW (window), "data/img/24x24.png");
//end window
    button_box = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
    gtk_container_add (GTK_CONTAINER (window), button_box);
    std::string str = "Hello world!";
_errorlog(str);
    button = gtk_button_new_with_label ("Hello World");
    g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
    _destroy_window(button, window);
    gtk_container_add (GTK_CONTAINER (button_box), button);

    gtk_widget_show_all (window);
}

int main(int argc, char **argv) {
    GtkApplication *app;
    int status;

    app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
    g_signal_connect (app, "activate", G_CALLBACK (_init_window), NULL);
    status = g_application_run (G_APPLICATION (app), argc, argv);
    g_object_unref (app);

    return status;
}


#include <gtk/gtk.h>
#include <filesystem>
#include <iostream>
//#include "headers/window.h"

static void print_hello (GtkWidget *widget, gpointer   data){
  g_print ("Hello World\n");
}
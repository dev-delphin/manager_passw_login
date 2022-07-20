/**
 * @brief GTK window
 * @image https://www.flaticon.com/ru/free-icons/ -- Autor "Flowicon"
 * @param app 
 * @param user_data 
 * @return ** void 
 */
// #include <gtk/gtk.h>
// #include <filesystem>


// static void activate (GtkApplication* app, gpointer user_data){
//     GtkWidget *window;
//     GdkPixbuf *pixbuf;
//     //_errorlog();
//     window = gtk_application_window_new (app);
//     gtk_window_set_title (GTK_WINDOW (window), "PLM");
//     gtk_window_set_default_size (GTK_WINDOW (window), 500, 500);
//     gtk_window_set_position (GTK_WINDOW (window), GTK_WIN_POS_CENTER);
//     // pixbuf = gdk_pixbuf_new_from_file("../data/img/32x32.png", NULL);
//     // gtk_window_set_icon (GTK_WINDOW (window), pixbuf);
//     if (std::filesystem::exists("files.cpp")) {
//         std::cout << "exist" << std::endl;
//     } else std::cout << "not exist" << std::endl;
//     gtk_window_set_icon_name (GTK_WINDOW (window), "../data/img/24x24.png");
//     gtk_widget_show (window);
// }

// int _gtkwindow(int argc, char **argv){
//     GtkApplication *app;
//     int status;

//     app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
//     g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
//     status = g_application_run (G_APPLICATION (app), argc, argv);
//     g_object_unref (app);

//     return status;
// }
/*
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

    gtk_entry_buffer_get_text(GTK_ENTRY_BUFFER (window), NULL, NULL);
    buffer = gtk_entry_get_text(&entry1);

    gtk_widget_show_all(window);
    
    gtk_main();
}*/
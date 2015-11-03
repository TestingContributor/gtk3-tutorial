#include <gtk/gtk.h>

static void destroy(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Overlay");
    g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);

    GtkWidget *overlay = gtk_overlay_new();
    gtk_container_add(GTK_CONTAINER(window), overlay);

    GtkWidget *textview = gtk_text_view_new();
    gtk_widget_set_sensitive(GTK_WIDGET(textview), FALSE);
    gtk_container_add(GTK_CONTAINER(overlay), textview);

    GtkWidget *label = gtk_label_new("This is a Label displayed\nin an Overlay container.");
    gtk_overlay_add_overlay(GTK_OVERLAY(overlay), label);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

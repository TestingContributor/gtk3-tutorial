#include <gtk/gtk.h>

static void destroy(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}

static gboolean window_key_press_event_cb (GtkWidget *window, GdkEvent *event, GtkSearchBar *searchbar)
{
    gtk_search_bar_set_search_mode(GTK_SEARCH_BAR(searchbar), TRUE);

    return gtk_search_bar_handle_event(GTK_SEARCH_BAR(searchbar), event);
}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "SearchBar");
    g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);

    GtkWidget *searchbar = gtk_search_bar_new();
    gtk_search_bar_set_show_close_button(GTK_SEARCH_BAR(searchbar), TRUE);
    gtk_container_add(GTK_CONTAINER(window), searchbar);

    GtkWidget *searchentry = gtk_search_entry_new();
    gtk_search_bar_connect_entry(GTK_SEARCH_BAR(searchbar), GTK_ENTRY(searchentry));
    gtk_container_add(GTK_CONTAINER(searchbar), searchentry);
    g_signal_connect(window, "key-press-event", G_CALLBACK(window_key_press_event_cb), searchbar);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

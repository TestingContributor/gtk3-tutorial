#include <gtk/gtk.h>


GtkWidget *stack;

static void destroy(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}

static void on_page_changed(GtkWidget *button, gchar *name)
{
    //gchar *name = g_strdup_printf("page%i", page);
    gtk_stack_set_visible_child_name(GTK_STACK(stack), name);
}

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *button;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Stack");
    gtk_window_set_default_size(GTK_WINDOW(window), -1, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);

    GtkWidget *grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    stack = gtk_stack_new();
    gtk_widget_set_vexpand(GTK_WIDGET(stack), TRUE);
    gtk_widget_set_hexpand(GTK_WIDGET(stack), TRUE);
    gtk_grid_attach(GTK_GRID(grid), stack, 0, 0, 1, 1);

    GtkWidget *buttonbox = gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_grid_attach(GTK_GRID(grid), buttonbox, 0, 1, 1, 1);

    for (int i=0; i<5; i++)
    {
        gchar *name = g_strdup_printf("page%i", i);
        gchar *page = g_strdup_printf("Page %i", i);

        GtkWidget *label = gtk_label_new(page);
        gtk_stack_add_named(GTK_STACK(stack), label, name);

        GtkWidget *button = gtk_button_new_with_label(page);
        g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(on_page_changed), name);
        gtk_container_add(GTK_CONTAINER(buttonbox), button);
    }

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

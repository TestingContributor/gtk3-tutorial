#include <gtk/gtk.h>

static void destroy(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}

static void radio_button_toggled(GtkWidget *radiobutton, gpointer data)
{
    if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(radiobutton)))
    {
        g_print("%s active\n", gtk_button_get_label(GTK_BUTTON(radiobutton)));
    }

}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);

    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), box);

    GtkWidget *radiobutton;

    radiobutton = gtk_radio_button_new_with_label(NULL, "Radio Button 1");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radiobutton), TRUE);
    g_signal_connect(radiobutton, "toggled", G_CALLBACK(radio_button_toggled), NULL);
    gtk_box_pack_start(GTK_BOX(box), GTK_WIDGET(radiobutton), FALSE, FALSE, 0);

    radiobutton = gtk_radio_button_new_with_label(gtk_radio_button_get_group(GTK_RADIO_BUTTON(radiobutton)), "Radio Button 2");
    g_signal_connect(radiobutton, "toggled", G_CALLBACK(radio_button_toggled), NULL);
    gtk_box_pack_start(GTK_BOX(box), GTK_WIDGET(radiobutton), FALSE, FALSE, 0);

    radiobutton = gtk_radio_button_new_with_label(gtk_radio_button_get_group(GTK_RADIO_BUTTON(radiobutton)), "Radio Button 3");
    g_signal_connect(radiobutton, "toggled", G_CALLBACK(radio_button_toggled), NULL);
    gtk_box_pack_start(GTK_BOX(box), GTK_WIDGET(radiobutton), FALSE, FALSE, 0);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

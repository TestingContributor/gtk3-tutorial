#include <gtk/gtk.h>

static void destroy(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "ToolPalette");
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);

    GtkWidget *toolpalette = gtk_tool_palette_new();
    gtk_container_add(GTK_CONTAINER(window), toolpalette);

    GtkWidget *toolitemgroup;
    GtkToolItem *toolitem;

    toolitemgroup = gtk_tool_item_group_new("Group 1");
    gtk_container_add(GTK_CONTAINER(toolpalette), toolitemgroup);

    toolitem = gtk_tool_button_new(NULL, "Home");
    gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON(toolitem), "gtk-home");
    gtk_tool_item_group_insert(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem, -1);
    toolitem = gtk_tool_button_new(NULL, "About");
    gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON(toolitem), "gtk-about");
    gtk_tool_item_group_insert(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem, -1);
    toolitem = gtk_tool_button_new(NULL, "Help");
    gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON(toolitem), "gtk-help");
    gtk_tool_item_group_insert(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem, -1);

    toolitemgroup = gtk_tool_item_group_new("Group 2");
    gtk_container_add(GTK_CONTAINER(toolpalette), toolitemgroup);

    toolitem = gtk_tool_button_new(NULL, "Add");
    gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON(toolitem), "gtk-add");
    gtk_tool_item_group_insert(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem, -1);
    toolitem = gtk_tool_button_new(NULL, "Edit");
    gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON(toolitem), "gtk-edit");
    gtk_tool_item_group_insert(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem, -1);
    toolitem = gtk_tool_button_new(NULL, "Delete");
    gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON(toolitem), "gtk-delete");
    gtk_tool_item_group_insert(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem, -1);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

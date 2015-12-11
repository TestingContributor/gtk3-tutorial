MenuBar
=======
The MenuBar is commonly seen in applications with the regularly used File, Edit, Tools, and Help menus. It provides access to submenus from which the program can be used and configured.

===========
Constructor
===========
The constructor for the MenuBar is::

  GtkWidget *menubar = gtk_menu_bar_new();

=======
Methods
=======
Items are added to the MenuBar using the method::

  gtk_menu_bar_add(GTK_MENU_BAR(menubar), widget);

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

Customisation of the packing order of added :doc:`menuitem` widgets can be made using::

  gtk_menu_bar_set_packing_order(GTK_MENU_BAR(menubar), direction);

The *direction* value should be set to one of the following:

* ``GTK_PACK_DIRECTION_LTR`` - widgets are packed left-to-right (default).
* ``GTK_PACK_DIRECTION_RTL`` - widgets are packed right-to-left.
* ``GTK_PACK_DIRECTION_TTB`` - widgets are packed top-to-bottom.
* ``GTK_PACK_DIRECTION_BTT`` - widgets are packed bottom-to-top.

The pack direction can also be retrieved from the MenuBar via::

  gtk_menu_bar_get_packing_order(GTK_MENU_BAR(menubar));

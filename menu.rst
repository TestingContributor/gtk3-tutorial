Menu
====
The Menu widget can be used in two ways; either standalone as a contextmenu typically appearing when the user right-clicks on the interface, or it can be used in conjunction with a :doc:`menubar` or :doc:`menubutton` widget.

===========
Constructor
===========
The constructor for the Menu widget is::

  GtkWidget *menu = gtk_menu_new();

=======
Methods
=======
Items are added to the Menu with the method::

  gtk_menu_add(GTK_MENU(menu), widget);

The *widget* in most cases will be a :doc:`menuitem` or equivalent.

When the attached widget is activated, the Menu will be popped up via::

  gtk_menu_popup(GTK_MENU(menu), shell, item, function, data, button, time);

A menu can be programatically removed from screen if required using::

  gtk_menu_popdown(GTK_MENU(menu));

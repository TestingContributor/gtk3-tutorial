CheckMenuItem
==============
The CheckMenuItem provides a widget similar to a :doc:`togglebutton` but tailored for display in a :doc:`menu`. It displays a tick next to the label when the item is active, and shows no tick when the item is inactive.

===========
Constructor
===========
Construction of the empty CheckMenuItem widget is made with::

  GtkWidget *checkmenuitem = gtk_check_menu_item_new();

A label can also be defined at construction by defining::

  GtkWidget *checkmenuitem = gtk_check_menu_item_new_with_label(label);

A mnemonic shortcut can also be specified and used::

  GtkWidget *checkmenuitem = gtk_check_menu_item_new_with_mnemonic(label);

=======
Methods
=======
The CheckMenuItem state can be obtained with::

  gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(checkmenuitem), active);

The active state can also be retrieved by calling::

  gtk_check_menu_item_get_active(GTK_CHECK_MENU_ITEM(checkmenuitem));

An inconsistent state can be set by calling::

  gtk_check_menu_item_set_inconsistent(GTK_CHECK_MENU_ITEM(checkmenuitem), inconsistent);

When set to ``TRUE``, the *inconsitent* parameter allows the CheckMenuItem to display a mid-state which is neither checked or unchecked.

The inconsistent state can also be retrieved if set with::

  gtk_check_menu_item_get_inconsistent(GTK_CHECK_MENU_ITEM(checkmenuitem));

=======
Example
=======
For an example of the CheckMenuItem see the :doc:`menu` page.

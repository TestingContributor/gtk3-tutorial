MenuItem
========
The MenuItem widget provides an item for display in :doc:`menu` widgets. It can contain a label identifying its purpose, and optionally a keyboard shortcut display which allows the user to access via the keyboard as well as clicking.

===========
Constructor
===========
The empty MenuItem is constructed using the call::

  GtkWidget *menuitem = gtk_menu_item_new();

A MenuItem with a textual label can be defined at construction via::

  GtkWidget *menuitem = gtk_menu_item_new_with_label(label);

If the textual label contains a mnemonic accelerator, this can be declared by::

  GtkWidget *menuitem = gtk_menu_item_new_with_mnemonic(label);

=======
Methods
=======
The textual label can be specified post-construction by::

  gtk_menu_item_set_label(GTK_MENU(menu), label);

Another menu can be defined as a submenu by using::

  gtk_menu_item_set_submenu(GTK_MENU(menu), menu);

If the MenuItem text contains a mnemonic character, this can be activated with::

  gtk_menu_item_set_use_underline(GTK_MENU(menu), underline);

When *underline* is set to ``TRUE``, the letter displayed after the underscore character will be converted into the mnemonic accelerator.

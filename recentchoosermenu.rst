RecentChooserMenu
=================
The RecentChooserMenu allows for recently used documents to be opened from a menu, typically displayed on a 'File' menu.

===========
Constructor
===========
The RecentChooserMenu is constructed with the call::

  GtkWidget *recentchoosermenu = gtk_recent_chooser_menu_new();

If a :doc:`recentmanager` is defined, it can be specified at construction using::

  GtkWidget *recentchoosermenu = gtk_recent_chooser_menu_new_for_manager(manager);

=======
Methods
=======
By default, items in the RecentChooserMenu are numbered with the most recently opened file being listed first. The numbers can be enabled or disabled with::

  gtk_recent_chooser_menu_set_show_numbers(GTK_RECENT_CHOOSER_MENU(recentchoosermenu), show);

When *show* is set to ``FALSE``, the numbers will be hidden.

.. note::

  Further methods for use with the RecentChooser family of widgets are defined on the :doc:`recentchooser` page.

=======
Example
=======
Below is an example of an RecentChooserMenu:

.. literalinclude:: _examples/recentchoosermenu.c

Download: :download:`RecentChooserMenu <_examples/recentchoosermenu.c>`

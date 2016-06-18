WindowGroup
===========
A WindowGroup object allows :doc:`window` items added to the group to behave like separate applications. A Window can be added to more than one group if necessary.

===========
Constructor
===========
Construction of the WindowGroup is made using::

  GtkWidget *windowgroup = gtk_window_group_new();

=======
Methods
=======
A Window is added to the WindowGroup using the method::

  gtk_window_group_add_window(GTK_WINDOW_GROUP(windowgroup), window);

Removal of a Window is made using::

  gtk_window_group_remove_window(GTK_WINDOW_GROUP(windowgroup), window);

A list of Window object added to the WindowGroup can be obtained via::

  gtk_window_group_list_windows(GTK_WINDOW_GROUP(windowgroup));

SearchBar
=========
The SearchBar provides a toolbar-like item which is designed to integrate a :doc:`searchentry`. Typically, the bar will popup when the user begins typing or using a shortcut key.

===========
Constructor
===========
The constructor for the SearchBar is::

  GtkWidget *searchbar = gtk_search_bar_new();

=======
Methods
=======
The SearchEntry to be displayed in the SearchBar must be connected via::

  gtk_search_bar_connect_entry(GTK_SEARCH_BAR(searchbar), entry);

The SearchBar display is made visible or not via the mode with::

  gtk_search_bar_set_search_mode(GTK_SEARCH_BAR(searchbar), mode);

When the *mode* parameter is set to ``TRUE``, the SearchBar is made visible. Setting to ``FALSE`` hides it again.

The visibility of the SearchBar can also be found using::

  gtk_search_bar_get_search_mode(GTK_SEARCH_BAR(searchbar));

A close button can be added to the SearchBar by calling::

  gtk_search_bar_set_show_close_button(GTK_SEARCH_BAR(searchbar), show_button);

=======
Example
=======
Below is an example of an SearchBar:

.. literalinclude:: _examples/searchbar.c

Download: :download:`SearchBar <_examples/searchbar.c>`

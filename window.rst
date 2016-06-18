Window
======
The Window is the basis of most applications created using GTK+. It is the widget which provides the framework on which other widgets ca be added. Therefore it is known as a container widget.

By itself, a Window can only pack a single widget within its container.

===========
Constructor
===========
The Window can be constructed using::

  GtkWidget *window = gtk_window_new(type);

The *type* parameter call be left empty if unneeded, but commonly it would be set to ``GTK_WINDOW_TOPLEVEL`` for main windows of an application.

=======
Methods
=======
The title of the Window can be set using the following method::

  gtk_window_set_title(GTK_WINDOW(window), "Window");

By default, the Window is not shown by GTK+. This needs to be called explicitly with::

  gtk_widget_show(window);

Using the ``show()`` call will only display the window, with other widgets subsequently needing their own ``show()`` calls to be displayed. An alternative is to use::

  gtk_widget_show_all(window);

.. note::

  It is recommended to use the ``gtk_widget_show_all(window)`` method once all the widgets have been added to the interface. This ensures that on very slow machines, the window displays all widgets at once rather than a blank window, and all other widgets added as they are processed.

Window widgets can also be hidden again with::

  gtk_widget_hide(window);

A Window can be closed programatically with::

  gtk_window_close(GTK_WINDOW(window));

The default size of a Window can be set::

  gtk_window_set_default_size(GTK_WINDOW(window), width, height);

The state of a Window can be set using multiple methods depending on requirements::

  gtk_window_maximize(GTK_WINDOW(window));
  gtk_window_unmaximize(GTK_WINDOW(window));
  gtk_window_fullscreen(GTK_WINDOW(window));
  gtk_window_unfullscreen(GTK_WINDOW(window));

A check can be made to see if the Window is maximized or full screen with::

  gtk_window_is_maximized(GTK_WINDOW(window));

A Window can be made a child of another Window object through the use of::

  gtk_window_set_transient_for(GTK_WINDOW(window), parent);

The icon for a particular Window is set using the function::

  gtk_window_set_icon(GTK_WINDOW(window), icon);
  gtk_window_set_icon_from_file(GTK_WINDOW(window), filename);

If the Window is the primary window of an application, the method to use to ensure an icon is set for all child windows plus the main is::

  gtk_window_set_default_icon(GTK_WINDOW(window), icon);
  gtk_window_set_default_icon_from_file(GTK_WINDOW(window), filename);

=======
Example
=======
Below is an example of a Window:

.. literalinclude:: _examples/window.c

Download: :download:`Window <_examples/window.c>`

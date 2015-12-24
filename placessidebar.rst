PlacesSidebar
=============
The PlacesSidebar displays frequently used locations from the file system in a vertical list. It is commonly used in file selection widgets which will frequently be accessing common open and save locations.

===========
Constructor
===========
Construction of the PlacesSidebar is made using::

  GtkWidget *placessidebar = gtk_places_sidebar_new();

=======
Methods
=======
Shortcuts can be added and removed from the PlacesSidebar with::

  gtk_places_sidebar_add_shortcut(GTK_PLACES_SIDEBAR(placessidebar), location);
  gtk_places_sidebar_remove_shortcut(GTK_PLACES_SIDEBAR(placessidebar), location);

The *location* parameter specifies a GFile object which represents the location path to be added or removed.

A list of shortcuts is also obtainable by calling::

  gtk_places_sidebar_list_shortcuts(GTK_PLACES_SIDEBAR(placessidebar));

Common shortcut visibility can also be shown or hidden by using::

  gtk_places_sidebar_set_show_recent(GTK_PLACES_SIDEBAR(placessidebar), show_recent);
  gtk_places_sidebar_set_show_desktop(GTK_PLACES_SIDEBAR(placessidebar), show_desktop);
  gtk_places_sidebar_set_show_trash(GTK_PLACES_SIDEBAR(placessidebar), show_trash);

If the application is to handle remote shares, these can also be displayed with::

  gtk_places_sidebar_set_local_only(GTK_PLACES_SIDEBAR(placessidebar), local_only);

In some cases, the application may require the user to be able to enter location manually. This can be toggled via::

  gtk_places_sidebar_set_show_enter_location(GTK_PLACES_SIDEBAR(placessidebar), show_enter);

A feature is also available to allow the user to connect to a server via the PlacesSidebar::

  gtk_places_sidebar_set_show_connect_to_server(GTK_PLACES_SIDEBAR(placessidebar), show_connect);

Other locations such as hard disks can be displayed if required by calling::

  gtk_places_sidebar_set_show_other_locations(GTK_PLACES_SIDEBAR(placessidebar), show_other);

Customisation of the open functionality can be defined with the method::

  gtk_places_sidebar_set_open_flags(GTK_PLACES_SIDEBAR(placessidebar), flags);

The *flags* parameter should be set to one of::

* ``GTK_PLACES_OPEN_NORMAL`` - default setting that the PlacesSidebar should open links in the normal way.
* ``GTK_PLACES_OPEN_NEW_TAB`` - indicates the application should open links in a new tab.
* ``GTK_PLACES_OPEN_NEW_WINDOW`` - indicates the application should open links in a new window.

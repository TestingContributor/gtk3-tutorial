RecentFilter
============
The RecentFilter object is similar to the :doc:`filefilter` in that it allows the :doc:`recentchooserdialog`, :doc:`recentchooserwidget`, and :doc:`recentchoosermenu` widgets to filter the visible recent documents to match those suitable for display in an application. For example, it may be used to ensure that only text files are visible in the recent documents listing for a text editor.

===========
Constructor
===========
The construction of the RecentFilter is made using::

  GtkWidget *recentfilter = gtk_recent_filter_new();

=======
Methods
=======
The filter can be assigned a name which makes it identifiable via::

  gtk_recent_filter_set_name(GTK_RECENT_FILTER(recentfilter), name);

If required, the name can also be fetched by calling::

  gtk_recent_filter_get_name(GTK_RECENT_FILTER(recentfilter));

The appropriate data type can be added to the RecentFilter with the methods::

  gtk_recent_filter_add_mime_type(GTK_RECENT_FILTER(recentfilter), mime_type);
  gtk_recent_filter_add_pattern(GTK_RECENT_FILTER(recentfilter), pattern);
  gtk_recent_filter_add_application(GTK_RECENT_FILTER(recentfilter), application);
  gtk_recent_filter_add_age(GTK_RECENT_FILTER(recentfilter), age);

The *mime_type* parameter of the ``add_mime_type()`` method allows a string such as ``"text/plain"`` to list only text files. Alternatively, a *pattern* can be used with the ``add_pattern()`` function such as ``"*.mp3"`` or ``"*.ogg"`` to list all MP3 or OGG files. The ``"add_application()"`` method takes an *application* parameter adn allows an application name to be defined. Finally, the ``add_age()`` method provides for filtering by age of the recent document in days.

The image formats supported by the GTK+ PixBuf can be added simply by calling::

  gtk_recent_filter_add_pixbuf_formats(GTK_RECENT_FILTER(recentfilter));

Typical use cases for the above method will include an application which will be handling images.

=======
Example
=======
For an example of the RecentFilter, see the RecentChooserDialog, RecentChooserWidget or RecentChooserMenu examples.

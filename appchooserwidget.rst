AppChooserWidget
================
The AppChooserWidget provides a widget for selecting applications which can be embedded in a :doc:`window` or :doc:`dialog` for the user to interact with directly.

===========
Constructor
===========
Construction of the AppChooserWidget is made via::

  GtkWidget *appchooserwidget = gtk_app_chooser_widget_new(content_type);

The *content_type* specifies the applications which should be listed. Typically, the type is a mimetype such as ``"image/jpg"``, ``"video/webm"``, or ``"audio/flac"``. The applications which the system knows can open the mimetype are shown by default.

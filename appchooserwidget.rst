AppChooserWidget
================
The AppChooserWidget provides a widget for selecting applications which can be embedded in a :doc:`window` or :doc:`dialog` for the user to interact with directly.

The AppChooserWidget implements the :doc:`appchooser` object for managing application listings. See the AppChooser page for further methods which apply.

===========
Constructor
===========
Construction of the AppChooserWidget is made via::

  GtkWidget *appchooserwidget = gtk_app_chooser_widget_new(content_type);

The *content_type* specifies the applications which should be listed. Typically, the type is a mimetype such as ``"image/jpg"``, ``"video/webm"``, or ``"audio/flac"``. The applications which the system knows can open the mimetype are shown by default.

=======
Methods
=======
Custom text can be displayed if the computer does not contain any applications which can open the passed content type::

  gtk_app_chooser_widget_set_default_text(GTK_APP_CHOOSER_WIDGET(appchooserwidget), text);

All available applications can be listed by calling::

  gtk_app_chooser_widget_set_show_all(GTK_APP_CHOOSER_WIDGET(appchooserwidget));

A number of other views can be defined by calling::

  gtk_app_chooser_widget_set_show_default(GTK_APP_CHOOSER_WIDGET(appchooserwidget), show);
  gtk_app_chooser_widget_set_show_recommended(GTK_APP_CHOOSER_WIDGET(appchooserwidget), show);
  gtk_app_chooser_widget_set_show_fallback(GTK_APP_CHOOSER_WIDGET(appchooserwidget), show);
  gtk_app_chooser_widget_set_show_other(GTK_APP_CHOOSER_WIDGET(appchooserwidget), show);

The ``set_show_default()`` method determines whether the AppChooserWidget will show the default application for the provided handler. Calling the ``set_show_recommended()`` method will show recommended applications for the given content type. If ``set_show_fallback()`` is set, applications which can be used will be displayed to the user. Finally, ``set_show_other()`` allows applications to be displayed which have no relation to the provided content type. When *show* is set to ``TRUE``, each of the sections will be displayed.

=======
Example
=======
Below is an example of a AppChooserWidget:

.. literalinclude:: _examples/appchooserwidget.c

Download: :download:`AppChooserWidget <_examples/appchooserwidget.c>`

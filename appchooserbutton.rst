AppChooserButton
================
The AppChooserButton provides a method of selecting applications from a dropdown list. It is typically used when the program needs to know application to open for a specified content type.

The AppChooserButton implements the :doc:`appchooser` object for managing application listings. See the AppChooser page for further methods which apply.

===========
Constructor
===========
The constructor for the AppChooserButton is::

  GtkWidget *appchooserbutton = gtk_app_chooser_button_new(content_type);

A *content_type* parameter is required. Its use is to limit the type of applications should to those which are able to open the specified content type. This takes the form of a mimetype such as ``"image/png"``, ``"text/plain"``, or ``"application/pdf"``.

=======
Methods
=======
The AppChooserButton heading string can be defined by the method::

  gtk_app_chooser_button_set_heading(GTK_APP_CHOOSER_BUTTON(appchooserbutton), heading);

Custom items can be appended to the AppChooserButton using::

  gtk_app_chooser_button_append_custom_item(GTK_APP_CHOOSER_BUTTON(appchooserbutton), name, label, icon);

The *name* must be unique for each AppChooserButton it is defined in. The *label* specifies the string to be shown to the user. An *icon* can also be provided to be shown next to the label.

A separator is also permitted to be added via the method::

  gtk_app_chooser_button_append_separator(GTK_APP_CHOOSER_BUTTON(appchooserbutton));

By default, the AppChooserButton provides a simple listing of applications. An entry can be added to launch an AppChooserDialog if required via::

  gtk_app_chooser_button_set_show_dialog_item(GTK_APP_CHOOSER_BUTTON(appchooserbutton), dialog);

When *dialog* is set to ``TRUE``, the user will be able to open an AppChooserDialog for further options.

The default content type can be displayed at the top of the dropdown by specifying::

  gtk_app_chooser_button_set_show_default_item(GTK_APP_CHOOSER_BUTTON(appchooserbutton), default);

An added custom item can previously added an be selected by the method::

  gtk_app_chooser_button_set_activate_custom_item(GTK_APP_CHOOSER_BUTTON(appchooserbutton), name);

The *name* parameter takes a string identifying the custom item to be selected.

=======
Example
=======
Below is an example of a AppChooserButton:

.. literalinclude:: _examples/appchooserbutton.c

Download: :download:`AppChooserButton <_examples/appchooserbutton.c>`

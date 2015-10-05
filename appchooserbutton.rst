AppChooserButton
================
The AppChooserButton provides a method of selecting applications from a dropdown list. It is typically used when the program needs to know application to open for a specified content type.

===========
Constructor
===========
The constructor for the AppChooserButton is::

  GtkWidget *appchooserbutton = gtk_app_chooser_button_new(content_type);

A *content_type* parameter is required. Its use is to limit the type of applications should to those which are able to open the specified content type. This takes the form of a mimetype such as ``"image/png"``, ``"text/plain"``, or ``"application/pdf"``.

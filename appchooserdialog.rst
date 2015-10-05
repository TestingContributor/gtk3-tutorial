AppChooserDialog
================
An AppChooserDialog provides a dialog for selecting applications. It is also used by the AppChooserButton to select an application which doesn't appear in the default list.

===========
Constructor
===========
The constructor for the AppChooserDialog is::

  GtkWidget *appchooserdialog = gtk_app_chooser_dialog_new(file);

A *file* parameter allows the user to specify a GFile object detailing a file held on the operating system. Using this GFile object, the AppChooserDialog will list the applications which can be used to open the file.

An alternative constructor allows a content type to be selected::

  GtkWidget *appchooserdialog = gtk_app_chooser_dialog_new_for_content_type(content_type);

The *content_type* should be a mimetype such as ``"application/vnd.oasis.opendocument.text"``, ``"video/mp4"``, or ``"audio/mp3"``.

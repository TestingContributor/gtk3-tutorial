AppChooserDialog
================
An AppChooserDialog provides a dialog for selecting applications. It is also used by the AppChooserButton to select an application which doesn't appear in the default list.

The AppChooserDialog implements the :doc:`appchooser` object for managing application listings. See the AppChooser page for further methods which apply.

===========
Constructor
===========
The constructor for the AppChooserDialog is::

  GtkWidget *appchooserdialog = gtk_app_chooser_dialog_new(file);

A *file* parameter allows the user to specify a GFile object detailing a file held on the operating system. Using this GFile object, the AppChooserDialog will list the applications which can be used to open the file.

An alternative constructor allows a content type to be selected::

  GtkWidget *appchooserdialog = gtk_app_chooser_dialog_new_for_content_type(content_type);

The *content_type* should be a mimetype for the required application type. For example, ``"application/vnd.oasis.opendocument.text"``, ``"video/mp4"``, or ``"audio/mp3"``.

=======
Methods
=======
The AppChooserDialog can be set a title using the method::

  gtk_app_chooser_dialog_set_title(GTK_DIALOG(appchooserdialog), title);

Heading text can be defined for display at the top of the AppChooserDialog via::

  gtk_ap_chooser_dialog_set_heading(GTK_APP_CHOOSER_DIALOG(appchooserdialog), heading);

As the AppChooserDialog embeds an :doc:`appchooserwidget`, this can be retrieved using the call::

  gtk_app_chooser_dialog_get_widget(GTK_APP_CHOOSER_DIALOG(appchooserdialog));

=======
Example
=======
Below is an example of a AppChooserDialog:

.. literalinclude:: _examples/appchooserdialog.c

Download: :download:`AppChooserDialog <_examples/appchooserdialog.c>`

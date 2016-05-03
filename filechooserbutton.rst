FileChooserButton
=================
A FileChooserButton provides a Button-style widget which when clicked launches a :doc`filechooserdialog`.

.. note::

  Internally, the FileChooserButton uses the :doc:`filechooser` object to perform actions such as retrieving the selected files. See the FileChooser page for further methods.

===========
Constructor
===========
The FileChooserButton is constructed using::

  GtkWidget *filechooserbutton = gtk_file_chooser_button_new();

If a FileChooserDialog has previously been created, this can be used and attached via::

  GtkWidget *filechooserbutton = gtk_file_chooser_button_new_with_dialog(filechooserdialog);

=======
Methods
=======
The title displayed on the dialog can be set with::

  gtk_file_chooser_button_set_title(GTK_FILE_CHOOSER_BUTTON(filechooserbutton), title);

Customisation of the FileChooserButton width can be made via::

  gtk_file_chooser_button_set_width_chars(GTK_FILE_CHOOSER_BUTTON(filechooserbutton), width);

The *width* should be a value set in pixels.

=======
Example
=======
Below is an example of a FileChooserButton:

.. literalinclude:: _examples/filechooserbutton.c

Download: :download:`FileChooserButton <_examples/filechooserbutton.c>`

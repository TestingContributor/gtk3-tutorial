FontChooserDialog
=================
The FontChooserDialog provides a dialog from which fonts and the associated properties can be selected.

.. note::

  Internally, the FontChooserDialog uses the :doc:`fontchooser` object to perform actions such as retrieving the selected colour. See the FontChooser page for further methods.

===========
Constructor
===========
The constructor for the FontChooserDialog is::

  GtkWidget *fontchooserdialog = gtk_font_chooser_dialog_new(title, parent);

The *title* parameter should be set to a string which is displayed on the top of the FontChooserDialog. The *parent* should be set to another :doc:`window` or :doc:`dialog` which is the parent of the FontChooserDialog.

=======
Methods
=======
The title on the FontChooserDialog can be set with::

  gtk_font_chooser_dialog_set_title(GTK_DIALOG(fontchooserdialog), title);

=======
Example
=======
Below is an example of an FontChooserDialog:

.. literalinclude:: _examples/fontchooserdialog.c

Download: :download:`FontChooserDialog <_examples/fontchooserdialog.c>`

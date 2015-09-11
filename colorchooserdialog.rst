ColorChooserDialog
==================
The ColorChooserDialog allows the user to select a colour from a displayed dialog. The dialog is typically called from a :doc:`colorbutton` but can be launched from other widgets if required.

.. note::

  Internally, the ColorChooserDialog uses the :doc:`colorchooser` object to perform actions such as retrieving the selected colour. See the ColorChooser page for further methods.

===========
Constructor
===========
Construction of the ColorChooserDialog is made via::

  GtkWidget *colorchooserdialog = gtk_color_chooser_dialog_new(title, parent);

The *title* parameter specifies the title text to be shown on the dialog. The *parent* indicates the owner of the dialog.

=======
Methods
=======
The title displayed on the dialog can also be set post-construction via::

  gtk_color_chooser_dialog_set_title(GTK_DIALOG(colorchooserdialog), title);

A parent can also be defined after construction with::

  gtk_color_chooser_dialog_set_transient_for(GTK_DIALOG(colorchooserdialog), parent);

=======
Example
=======
Below is an example of a ColorChooserDialog:

.. literalinclude:: _examples/colorchooserdialog.c

Download: :download:`ColorChooserDialog <_examples/colorchooserdialog.c>`

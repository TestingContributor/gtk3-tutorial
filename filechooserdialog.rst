FileChooserDialog
=================
The FileChooserDialog is commonly used for open and save dialogs, and provides the ability for the user to select files and folders. It uses the :doc:`filechooserwidget` contained within a dialog, and accesses the methods of the :doc:`filechooser`.

===========
Constructor
===========
The FileChooserDialog is constructed using the call::

  GtkWidget *filechooserdialog = gtk_file_chooser_dialog_new();

=======
Example
=======
Below is an example of a FileChooserDialog:

.. literalinclude:: _examples/filechooserdialog.c

Download: :download:`FileChooserDialog <_examples/filechooserdialog.c>`

FileChooserDialog
=================
The FileChooserDialog is commonly used for open and save dialogs, and provides the ability for the user to select files and folders. It uses the :doc:`filechooserwidget` contained within a dialog, and accesses the methods of the :doc:`filechooser`.

.. note::

  Internally, the FileChooserDialog uses the :doc:`filechooser` object to perform actions such as retrieving the selected files. See the FileChooser page for further methods.

===========
Constructor
===========
The FileChooserDialog is constructed using the call::

  GtkWidget *filechooserdialog = gtk_file_chooser_dialog_new(title, parent, action, buttons...);

A *title* can be defined for display on the FileChooserDialog. A *parent* should also be specified, which owns the FileChooserDialog and ensures it is placed correctly when displayed. The *action* argument defines the behaviour of the FileChooserDialog and should be set to one of the constants:

* ``GTK_FILE_CHOOSER_ACTION_OPEN`` - set the FileChooser into open mode, allowing the user to pick a single existing file.
* ``GTK_FILE_CHOOSER_ACTION_SAVE`` - set the FileChooser into save mode, allowing the user to select an existing file to overwrite or enter a new filename.
* ``GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER`` - set the FileChooser into folder select mode, allowing the user to select an existing folder.
* ``GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER`` - set the FileChooser into folder create mode, allowing the user to create a new folder or overwrite an existing one.

Finally, the *buttons* parameter allows multiple button text label and responses to be specified which will be shown at the bottom of the dialog.

=======
Methods
=======
The title on the FileChooserDialog can be set with::

  gtk_file_chooser_dialog_set_title(GTK_DIALOG(filechooserdialog), title);

=======
Example
=======
Below is an example of a FileChooserDialog:

.. literalinclude:: _examples/filechooserdialog.c

Download: :download:`FileChooserDialog <_examples/filechooserdialog.c>`

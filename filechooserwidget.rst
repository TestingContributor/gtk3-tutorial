FileChooserWidget
=================
The FileChooserWidget is used by the :doc:`filechooserdialog` and :doc:`filechooserbutton` widgets, and can also be used on its own. It provides a method of selecting both files and folders for opening or saving.

.. note::

  Internally, the FileChooserWidget uses the :doc:`filechooser` object to perform actions such as retrieving the selected files. See the FileChooser page for further methods.

===========
Constructor
===========
Construction of the FileChooserWidget is made using::

  GtkWidget *filechooserwidget = gtk_file_chooser_widget_new();

=======
Example
=======
Below is an example of a FileChooserWidget:

.. literalinclude:: _examples/filechooserwidget.c

Download: :download:`FileChooserWidget <_examples/filechooserwidget.c>`

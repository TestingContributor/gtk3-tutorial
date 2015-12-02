FileChooserWidget
=================
The FileChooserWidget is used by the :doc:`filechooserdialog` and :doc:`filechooserbutton` widgets, and can also be used on its own. It provides a method of selecting both files and folders for opening or saving.

Methods defined in the :doc:`filechooser` object can be used by the FileChooserWidget.

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

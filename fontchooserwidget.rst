FontChooserWidget
=================
The FontChooserWidget is used within the :doc:`fontchooserdialog`, and is often placed in a window along with other widgets to provide font selection for the user.

.. note::

  Internally, the FontChooserWidget uses the :doc:`fontchooser` object to perform actions such as retrieving the selected colour. See the FontChooser page for further methods.

===========
Constructor
===========
The constructor for the FontChooserWidget is::

  GtkWidget *fontchooserwidget = gtk_font_chooser_widget_new();

=======
Example
=======
Below is an example of a FontChooserWidget:

.. literalinclude:: _examples/fontchooserwidget.c

Download: :download:`FontChooserWidget <_examples/fontchooserwidget.c>`

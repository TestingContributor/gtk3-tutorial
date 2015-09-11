ColorChooserWidget
==================
The ColorChooserWidget is used when the colour selection widget is to be embedded in a :doc:`window` or :doc:`dialog`.

.. note::

  Internally, the ColorChooserDialog uses the :doc:`colorchooser` object to perform actions such as retrieving the selected colour. See the ColorChooser page for further methods.

===========
Constructor
===========
Construction of the ColorChooserWidget is made by::

  GtkWidget *colorchooserwidget = gtk_color_chooser_widget_new();

=======
Example
=======
Below is an example of a ColorChooserWidget:

.. literalinclude:: _examples/colorchooserwidget.c

Download: :download:`ColorChooserWidget <_examples/colorchooserwidget.c>`

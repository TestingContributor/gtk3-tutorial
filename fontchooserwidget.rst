FontChooserWidget
=================
The FontChooserWidget is used within the :doc:`fontchooserdialog`, and is often placed in a window along with other widgets to provide font selection for the user.

.. note::

  The methods contained within the :doc:`fontchooser` object are used by the FontChooserWidget.

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

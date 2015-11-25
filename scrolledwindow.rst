ScrolledWindow
==============
The ScrolledWindow widget provides both horizontal and vertical scrollbars, of which the size is automatically determined based on the size of the child widget. It is most often used as a replacement for individual :doc:`scrollbar` widgets.

===========
Constructor
===========
The ScrolledWindow widget is constructed using the call::

  GtkWidget *scrolledwindow = gtk_scrolled_window_new();

=======
Example
=======
Below is an example of a ScrolledWindow:

.. literalinclude:: _examples/scrolledwindow.c

Download: :download:`ScrolledWindow <_examples/scrolledwindow.c>`

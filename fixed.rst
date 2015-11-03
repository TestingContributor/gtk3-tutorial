Fixed
=====
The Fixed container allows widgets to be placed at specified co-ordinates, with given sizes. No automatic layout management is performed on widgets that are added.

===========
Constructor
===========
The constructor for the Fixed container is::

  GtkWidget *fixed = gtk_fixed_new();

=======
Methods
=======
A widget is added to the Fixed container via::

  gtk_fixed_put(GTK_FIXED(fixed), widget, x, y);

The *widget* parameter is the name of the child to be added. The *x* and *y* co-ordinates specify where on the container the widget will be shown.

Widgets can also be moved if required using::

  gtk_fixed_move(GTK_FIXED(fixed), widget, x, y);

=======
Example
=======
Below is an example of an Fixed:

.. literalinclude:: _examples/fixed.c

Download: :download:`Fixed <_examples/fixed.c>`

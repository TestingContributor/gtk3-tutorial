Layout
======
The Layout container is similar to the :doc:`fixed` container in that it provides an interface in which widgets can be placed at specified locations. It differs however in that it provides an infinite scrolling area rather than one of a set size.

===========
Constructor
===========
Construction of the Layout is made with::

  GtkWidget *layout = gtk_layout_new(hadjustment, vadjustment);

The *hadjustment* and *vadjustment* specify the horizontal and vertical :doc:`adjustment` objects which will be used to control scrolling of the Layout. Alternatively, they can be set to ``NULL`` if not required.

=======
Methods
=======
The size of the scrollable area can be set using::

  gtk_layout_size_size(GTK_LAYOUT(layout), width, height);

Retrieval of the set size of the Layout is obtained via::

  gtk_layout_get_size(GTK_LAYOUT(layout));

Widgets are then added to the Layout by::

  gtk_layout_put(GTK_LAYOUT(layout), widget, x, y);

The *widget* parameter is the name of the child to be added. The *x* and *y* co-ordinates specify where on the container the widget will be shown.

An added widget can also be moved to another location with::

  gtk_layout_move(GTK_LAYOUT(layout), widget, x, y);

=======
Example
=======
Below is an example of an Layout:

.. literalinclude:: _examples/layout.c

Download: :download:`Layout <_examples/layout.c>`

Popover
=======
A Popover is similar to a :doc:`menu`, typically providing widgets on the popped up window such as buttons and labels. It differentiates however in that it is attached to another widget, and is able to display its content in sections.

===========
Constructor
===========
The construction of the Popover is made using::

  GtkWidget *popover = gtk_popover_new();

=======
Methods
=======
Widgets can be added to the Popover by the method::

  gtk_popover_add(GTK_POPOVER(popover), child);

The position that the Popover appears in can be set via::

  gtk_popover_set_position(GTK_POPOVER(popover), position);

Setting of the *position* parameter should be one of the following::

* ``GTK_POS_LEFT``
* ``GTK_POS_RIGHT``
* ``GTK_POS_TOP``
* ``GTK_POS_BOTTOM``

A Popover can be made modal if required. When the Popover modality is set to ``TRUE``, the Popover will grab all input and keyboard focus while it is being displayed. Clicking outside the Popover will dismiss it, and return all focus to the window. It is set via::

  gtk_popover_set_modal(GTK_POPOVER(popover), modal);

=======
Example
=======
Below is an example of a Popover:

.. literalinclude:: _examples/popover.c

Download: :download:`Popover <_examples/popover.c>`

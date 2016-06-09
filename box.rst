Box
===
A Box widget is a container used to layout child widgets in either a horizontal or vertical direction.

===========
Constructor
===========
The Box widget can be constructed with::

  GtkBox *box = gtk_box_new(orientation, spacing);

A *spacing* value indicates the number of pixels in space which will be added between each child widget. The *orientation* parameter determines which way to the child widgets will be laid out.

* ``GTK_ORIENTATION_HORIZONTAL``
* ``GTK_ORIENTATION_VERTICAL``

=======
Methods
=======
Child widgets can be added to the top or left (depending on orientation), and bottom or right of the Box with the methods::

  gtk_box_pack_start(GTK_BOX(box), child, expand, fill, padding);
  gtk_box_pack_end(GTK_BOX(box), child, expand, fill, padding);

The *child* widget specifies the child to be added into the Box. The *expand* property when set to ``TRUE`` allows the child to be given extra space allocated to the Box, with the extra space being allocated to all widgets with this property set to ``TRUE``. The *fill* property applies when the *expand* property is set to ``TRUE`` only, and allows the widget to fill the entire area. Finally, the *padding* value should be the number of pixels to add for spacing beyond the spacing value specified.

A child can be removed from the Box with the method::

  gtk_box_remove(GTK_BOX(box), child);

A child widget can also be moved if necessary with the call::

  gtk_box_reorder_child(GTK_BOX(box), child, position);

The *child* parameter is the pointer to the widget to be moved. The *position* value should be set to a number indicating the new position, with ``0`` identifying the top-most or left-most position in the Box.

By default, the orientation of the Box is horizontal. This can be changed by::

  gtk_box_set_orientation(GTK_BOX(box), orientation);

The *orientation* value should be set to either ``GTK_ORIENTATION_HORIZONTAL`` or ``GTK_ORIENTATION_VERTICAL``.

The child widgets held in the Box can be forced to the same size via::

  gtk_box_set_homogeneous(GTK_BOX(box), homogeneous);

Spacing between the child widgets can be defined after construction with::

  gtk_box_set_spacing(GTK_BOX(box), spacing);

Retrieval of information about how a child has been packed into the Box can be obtained using::

  gtk_box_query_child_packing(GTK_BOX(box), child);

Packing options can also be changed for a child widget which is already held in the Box by the function::

  gtk_box_set_child_packing(GTK_BOX(box), child, expand, fill, padding, pack_type);

The *expand*, *fill*, and *padding* parameters should be of the same type as the ``pack_start()`` and ``pack_end()`` methods. The *pack_type* should be set to one of:

* ``GTK_PACK_TYPE_START`` - pack at the left or top of the Box.
* ``GTK_PACK_TYPE_END`` - pack at the right or bottom of the Box.

A baseline position for the widgets added to the Box can be set with::

  gtk_box_set_baseline_position(GTK_BOX(box), position);

The *position* should be set to one of:

* ``GTK_BASELINE_POSITION_TOP`` - align to left or top of Box.
* ``GTK_BASELINE_POSITION_CENTER`` - alight to center of Box.
* ``GTK_BASELINE_POSITION_BOTTOM`` - align to right or bottom of Box.

A central widget can be defined for the Box with::

  gtk_box_set_center_widget(GTK_BOX(box), widget);

=======
Example
=======
Below is an example of a Box:

.. literalinclude:: _examples/box.c

Download: :download:`Box <_examples/box.c>`

SizeGroup
=========
The SizeGroup is an invisible object, which when associated with widgets, ensures they are equally sized. The size can be enforced horizontally, vertically, or in both directions.

===========
Constructor
===========
The SizeGroup is constructed using the call::

  sizegroup = Gtk.SizeGroup(mode);

The *mode* value should be set to the sizing type:

* ``GTK_SIZE_GROUP_NONE`` - group has no effect.
* ``GTK_SIZE_GROUP_VERTICAL`` - group affects the vertical size.
* ``GTK_SIZE_GROUP_HORIZONTAL`` - group affects the horizontal size.
* ``GTK_SIZE_GROUP_BOTH`` - group affects both vertical and horizontal sizes.

=======
Methods
=======
The mode can be set after construction using::

  gtk_size_group_set_mode(GTK_SIZE_GROUP(sizegroup), mode);

Child widgets can be added to and removed from the SizeGroup with::

  gtk_size_group_add_widget(GTK_SIZE_GROUP(sizegroup), child);
  gtk_size_group_remove_widget(GTK_SIZE_GROUP(sizegroup), child);

A list of associated widgets can be fetched via::

  gtk_size_group_get_widgets(GTK_SIZE_GROUP(sizegroup));

Widgets which are not currently being shown can be excluded from the sizing calculation using::

  gtk_size_group_set_ignore_hidden(GTK_SIZE_GROUP(sizegroup), ignore);

When *ignore* is set to ``TRUE``, the SizeGroup sizing will only be determined by the visible widgets.

=======
Example
=======
Below is an example of a SizeGroup:

.. literalinclude:: _examples/sizegroup.c

Download: :download:`SizeGroup <_examples/sizegroup.c>`

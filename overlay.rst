Overlay
=======
The Overlay provides a container allowing widgets to be laid on top of each other. It is useful for contexts where a widget may need to appear for a short time, such as displaying status messages.

===========
Constructor
===========
An Overlay is constructed using the call::

  GtkWidget *overlay = gtk_overlay_new();

=======
Methods
=======
A widget is added to the Overlay by using::

  gtk_overlay_add_overlay(GTK_OVERLAY(overlay), child);

By default, the added widget is placed at the center of the Overlay. The position can be altered by using the alignment properties.

More than one child can be added to the Overlay, and in some cases they may need to be reordered with::

  gtk_overlay_reorder_overlay(GTK_OVERLAY(overlay), position);

Input made on the Overlay can be passed through to the underlying widget using::

  gtk_overlay_set_overlay_pass_through(GTK_OVERLAY), child, pass);

The *child* indicates the widget which will receive the input. The *pass* parameter enables the functionality when set to ``TRUE``.

=======
Example
=======
Below is an example of an Overlay:

.. literalinclude:: _examples/overlay.c

Download: :download:`Overlay <_examples/overlay.c>`

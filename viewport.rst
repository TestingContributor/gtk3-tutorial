Viewport
========
The Viewport is used to add scrolling ability to widgets which do not natively support scrolling. Examples include :doc:`grid` or :doc:`box` which may need scrolling functionality if many are to be added to an interface.

===========
Constructor
===========
A Viewport is constructed using the call::

  GtkWidget *viewport = gtk_viewport_new(hadjustment, vadjustment);

The *hadjustment* and *vadjustment* parameters specify :doc:`adjustment` objects which hold the values relating to the position of the Viewport content.

=======
Methods
=======
A Viewport creates Adjustment objects itself if none are passed at construction time. Alternatively if they are passed, the reference to them can be fetched. In either case these can be obtained via::

  gtk_viewport_get_hadjustment(GTK_VIEWPORT(viewport));
  gtk_viewport_get_vadjustment(GTK_VIEWPORT(viewport));

Adjustment parameters can also be specified for the vertical and horizontal with::

  gtk_viewport_set_hadjustment(GTK_VIEWPORT(viewport), hadjustment);
  gtk_viewport_set_vadjustment(GTK_VIEWPORT(viewport), vadjustment);

A shadow can be added to the Viewport to change the appearance with::

  gtk_viewport_set_shadow_type(GTK_VIEWPORT(viewport), shadow);

The *shadow* should be set to one of the following:

* ``GTK_SHADOW_TYPE_NONE`` - no outline.
* ``GTK_SHADOW_TYPE_IN`` - outline bevelled inwards.
* ``GTK_SHADOW_TYPE_OUT`` - outline bevelled outwards.
* ``GTK_SHADOW_TYPE_ETCHED_IN`` - outline sunken.
* ``GTK_SHADOW_TYPE_ERCHED_OUT`` - outline raised.

The window objects which are created with the Viewport can be obtained via the methods::

  gtk_viewport_get_bin_window(GTK_VIEWPORT(viewport));
  gtk_viewport_get_view_window(GTK_VIEWPORT(viewport));

The ``get_bin_window()`` method returns the window of the entire Viewport. The ``get_view_window()`` method returns the window holding the content of the Viewport.

=======
Example
=======
Below is an example of a Viewport:

.. literalinclude:: _examples/viewport.c

Download: :download:`Viewport <_examples/viewport.c>`

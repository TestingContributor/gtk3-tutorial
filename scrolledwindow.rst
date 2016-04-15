ScrolledWindow
==============
The ScrolledWindow widget provides both horizontal and vertical scrollbars, of which the size is automatically determined based on the size of the child widget. It is most often used as a replacement for individual :doc:`scrollbar` widgets.

===========
Constructor
===========
The ScrolledWindow widget is constructed using the call::

  GtkWidget *scrolledwindow = gtk_scrolled_window_new(hadjustment, vadjustment);

The *hadjustment* and *vadjustment* parameters can take an :doc:`adjustment` object which contains the values required for scrolling. Alternatively, if they are not required, ``NULL`` can be specified.

=======
Methods
=======
Adjustment objects can be specified post-construction::

  gtk_scrolled_window_set_hadjustment(GTK_SCROLLED_WINDOW(scrolledwindow), hadjustment);
  gtk_scrolled_window_set_vadjustment(GTK_SCROLLED_WINDOW(scrolledwindow), vadjustment);

A policy is defined to determine whether ScrollBar widgets are displayed. This is set with::

  gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolledwindow), hpolicy, vpolicy);

The *vpolicy* and *hpolicy* values can be set to one of:

* ``GTK_POLICY_NEVER`` - never display the ScrollBar widgets.
* ``GTK_POLICY_ALWAYS`` - always display the ScrollBar widgets.
* ``GTK_POLICY_AUTOMATIC`` - only display if the child content requires extra scrolling space.

Placement of content within the ScrolledWindow can be specified with:

* ``GTK_CORNER_TOP_LEFT``
* ``GTK_CORNER_TOP_RIGHT``
* ``GTK_CORNER_BOTTOM_LEFT``
* ``GTK_CORNER_BOTTOM_RIGHT``

The placement can also be unset via::

  gtk_scrolled_window_unset_policy(GTK_SCROLLED_WINDOW(scrolledwindow));

Minimum content widths and heights are able to be defined with the functions::

  gtk_scrolled_window_set_min_content_width(GTK_SCROLLED_WINDOW(scrolledwindow), width);
  gtk_scrolled_window_set_min_content_height(GTK_SCROLLED_WINDOW(scrolledwindow), height);

The *width* and *height* values should be integers, and will typically be smaller than the width and height of the child content.

=======
Example
=======
Below is an example of a ScrolledWindow:

.. literalinclude:: _examples/scrolledwindow.c

Download: :download:`ScrolledWindow <_examples/scrolledwindow.c>`

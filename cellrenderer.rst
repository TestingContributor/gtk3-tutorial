CellRenderer
============
The CellRenderer object is the base from which the other CellRenderer family of widgets are formed. It provides common methods and properties which may be useful for displaying information within a :doc:`treeview` or :doc:`combobox`.

=======
Methods
=======
The visibility of a particular CellRenderer can be set via::

  gtk_cell_renderer_set_visible(cellrenderer, visible);

When the *visible* argument is set to ``FALSE``, the CellRenderer will be hidden.

Sensitivity of a CellRenderer can also be changed with the method::

  gtk_cell_renderer_set_sensitive(cellrenderer, sensitive);

If the *sensitive* parameter is set to ``FALSE``, the cell will be "greyed-out".

Padding can be defined for the width and height by specifying the required values in pixels::

  gtk_cell_renderer_set_pading(cellrenderer, xpadding, ypadding);

Content within the CellRenderer can be aligned by calling::

  gtk_cell_renderer_set_alignment(cellrenderer, xalign, yalign);

The *xalign* and *yalign* values should be set to a number between ``0.0`` and ``1.0``.

A fixed width and heigh value can be defiened with::

  gtk_cell_renderer_set_fixed_size(cellrenderer, width, height);

The *width* and *height* values can be set to ``-1`` if required to revert to automatic sizing.

The fixed size of a cell can also be obtained if required via::

  gtk_cell_renderer_get_fixed_size(cellrenderer);

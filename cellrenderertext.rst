CellRendererText
================
The CellRendererText is used by both :doc:`treeview` and :doc:`combobox` widgets to display items. In most cases, it will display plain text however can be adjusted to customise the appearance of the text content.

.. note::

  See the :doc:`cellrenderer` page for additional methods available.

===========
Constructor
===========
The CellRendererText can be constructed using the following::

  GtkWidget *cellrenderertext = gtk_cell_renderer_text_new();

==========
Properties
==========
The configuration of the CellRendererText is made using the property functions::

  gtk_cell_renderer_text_set_property(GTK_CELL_RENDERER_TEXT(cellrenderertext), "item", value);

The property items available for use with the CellRendererText are:

* ``"editable"`` - when the value set to ``True``, allows the user to edit the text within the cell.
* ``"family"`` - allows a family of fonts to be specified in order of preference, for example; cantarell, "droid sans", monospace.
* ``"font"`` - a font other than the system default can be used by specifying the name and size as the value.
* ``"size"`` - specifies a font size in points as an integer value.
* ``"strikethrough"`` - specifying ``True`` as the value adds a strikethrough to any text within the cell.
* ``"text"`` - setting the value to the column number of the model indicates which column the text should be pulled from.
* ``"underline"`` - using ``True`` will place a line beneath the text.
* ``"weight"`` - allows configuration of letter thinness or thickness, with an integer value of 400 being standard. Higher values increase thickness, lower values decrease thickness.

=======
Signals
=======
The commonly used signals of a CellRendererText are::

  "edited" (cellrenderertext, path, text)

An ``"edited"`` event is emitted from the CellRendererText when the user double-clicks on the cell. At this point, the cell is passed to the function along with a path identifying the location of the edited text, and finally the new text which has been entered.

=======
Example
=======
Below is an example of a CellRendererText:

.. literalinclude:: _examples/cellrenderertext.c

Download: :download:`CellRendererText <_examples/cellrenderertext.c>`

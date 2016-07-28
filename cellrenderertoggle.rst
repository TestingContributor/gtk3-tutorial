CellRendererToggle
==================
The CellRendererToggle provides a cell widget similar to a :doc:`checkbutton`, or if modified a :doc:`radiobutton`. It is used to select one or more rows, and can be used to display the selection status of a row.

.. note::

  See the :doc:`cellrenderer` page for additional methods available.

===========
Constructor
===========
The CellRendererToggle can be constructed using the following::

  GtkWidget *cellrenderertoggle = gtk_cell_renderer_toggle_new();

=======
Methods
=======
The active state of the CellRendererToggle can be set using::

  gtk_cell_renderer_toggle_set_active(GTK_CELL_RENDERER_TOGGLE(cellrenderertoggle), active);

When *active* is set to ``TRUE``, the CellRendererToggle will display a check status.

An active status value can be obtained from the CellRendererToggle via::

  gtk_cell_renderer_toggle_get_active(GTK_CELL_RENDERER_TOGGLE(cellrenderertoggle));

A CellRendererToggle can be changed to appear similar to the RadioButton widget by calling the method::

  gtk_cell_renderer_toggle_set_radio(GTK_CELL_RENDERER_TOGGLE(cellrenderertoggle), radio);

The CellRendererToggle can be made activatable with::

  gtk_cell_renderer_toggle_set_activatable(GTK_CELL_RENDERER_TOGGLE(cellrenderertoggle), activatable);

==========
Properties
==========
The configuration of the CellRendererSpin is made using the property functions::

  gtk_cell_renderer_toggle_set_property(GTK_CELL_RENDERER_TOGGLE(cellrenderertoggle), "item", value);

The property items available for use with the CellRendererSpin are:

* ``"activatable"`` - customise whether the CellRendererToggle is activatable.
* ``"active"`` - this toggles the state of the CellRendererToggle.
* ``"inconsistent"`` - when set to ``True``, the CellRendererToggle can be used to indicate the status of other features.
* ``"radio"`` - if set to ``True``, the CellRendererToggle will be drawn like a RadioButton.

=======
Signals
=======
The commonly used signals of a CellRendererToggle are::

  "toggled" (cellrenderertoggle, path)

The ``"toggled"`` signals emits from the CellRendererToggle when the user clicks to display or remove the tick within the widget. It provides the *path* which identifies the location of the item which has been modified.

=======
Example
=======
Below is an example of a CellRendererToggle:

.. literalinclude:: _examples/cellrenderertoggle.c

Download: :download:`CellRendererToggle <_examples/cellrenderertoggle.c>`

ListBoxRow
==========
The ListBoxRow represents a child container representing a row within the :doc:`listbox` widget.

===========
Constructor
===========
The ListBoxRow object is constructed using the call::

  GtkWidget *listboxrow = gtk_list_box_row_new();

=======
Methods
=======
A check can be made on whether a ListBoxRow is selected using::

  gtk_list_box_row_is_selected(GTK_LIST_BOX_ROW(listboxrow));

In some cases, it may be preferred that the row is not selectable. This can be set via::

  gtk_list_box_row_set_selectable(GTK_LIST_BOX_ROW(listboxrow), selectable);

When the *selectable* parameter is set to ``FALSE``, the user will not be able to select the row.

A row can also be made activatable with the method::

  gtk_list_box_row_set_activatable(GTK_LIST_BOX_ROW(listboxrow), activatable);

Header widgets can be added to ListBoxRow widgets by calling::

  gtk_list_box_row_set_header(GTK_LIST_BOX_ROW(listboxrow), widget);

The index value of a particular row in the ListBox can be obtained from the method::

  gtk_list_box_row_get_index(GTK_LIST_BOX_ROW(listboxrow));

A value returned indicates the position in the ListBox, with ``0`` indicating the row is first in the ListBox. A value of ``-1`` indicates the row has not been added to a ListBox.

=======
Example
=======
An example of the ListBoxRow can be found on the ListBox page.

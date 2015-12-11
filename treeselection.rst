TreeSelection
=============
The TreeSelection object is used by a :doc:`treeview` to control the row or rows selected. Using it, information about the row and contained within the row can be retrieved and manipulated.

===========
Constructor
===========
A TreeSelection is automatically created when a TreeView is created, and accessed using the TreeView ``get_selection()`` method.

=======
Methods
=======
To configure how row selection modes work, use::

  gtk_tree_selection_set_mode(GTK_TREE_SELECTION(treeselection), mode);

The *mode* value should be set to one of::

* ``GTK_SELECTION_MODE_NONE`` - no row selection is possible.
* ``GTK_SELECTION_MODE_SINGLE`` - zero or one row many be selected.
* ``GTK_SELECTION_MODE_BROWSE`` - at least one row will always be selected.
* ``GTK_SELECTION_MODE_MULTIPLE`` - any number of rows can be selected.

The number of rows which are selected can be retrieved with::

  gtk_tree_selection_count_selected_rows(GTK_TREE_SELECTION(treeselection));

Retrieval of the associated TreeView can be fetched from the TreeSelection by calling::

  gtk_tree_selection_get_tree_view(GTK_TREE_SELECTION(treeselection));

All of the rows held by the TreeSelection can be selected or unselected with::

  gtk_tree_selection_select_all(GTK_TREE_SELECTION(treeselection));
  gtk_tree_selection_unselect_all(GTK_TREE_SELECTION(treeselection));

To select rows, the TreeIter or TreePath object should be specified::

  gtk_tree_selection_select_iter(GTK_TREE_SELECTION(treeselection), treeiter);
  gtk_tree_selection_select_path(GTK_TREE_SELECTION(treeselection), treepath);

Rows can also be unselected as required, again by specifying the TreeIter or TreePath::

  gtk_tree_selection_unselect_iter(GTK_TREE_SELECTION(treeselection), treeiter);
  gtk_tree_selection_unselect_path(GTK_TREE_SELECTION(treeselection), treepath);

Checking whether a row is selected can be made using the methods::

  gtk_tree_selection_iter_is_selected(GTK_TREE_SELECTION(treeselection), treeiter);
  gtk_tree_selection_path_is_selected(GTK_TREE_SELECTION(treeselection), treepath);

A range of rows can be selected or unselected using the TreePath objects as bookends for the range::

  gtk_tree_selection_select_range(GTK_TREE_SELECTION(treeselection), start, end);
  gtk_tree_selection_unselect_range(GTK_TREE_SELECTION(treeselection), start, end);

The *start* parameter defines the first row TreePath, and the *end* defines the last row TreePath, with all rows in between also being selected.

If the selection mode is set to ``GTK_SELECTION_MODE_SINGLE``, the row selected can be obtained from the TreeSelection using::

  gtk_tree_selection_get_selected(GTK_TREE_SELECTION(treeselection));

The method will return both the selected TreeIter, and the model from which the data is populated.

Alternatively, if using any other selection mode, call::

  gtk_tree_selection_get_selected_rows(GTK_TREE_SELECTION(treeselection));

The above method will return a list of TreePath objects for each selected row. Also returned is the model used to populate the TreeView.

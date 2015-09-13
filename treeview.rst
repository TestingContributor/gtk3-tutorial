TreeView
========
The TreeView is a powerful widget which provides a way to display data in a grid-like fashion. It uses either a :doc:`liststore` or :doc:`treestore` as the model, and other objects such as :doc:`treeviewcolumn` and CellRenderer's to control the display of the data.

===========
Constructor
===========
Construction of the TreeView widget is made using::

  GtkWidget *treeview = gtk_tree_view_new();

The construction can also be made with the model attached via::

  GtkWidget *treeview = gtk_tree_view_new_with_model(model);

A defined *model* should be a :doc:`liststore` or :doc:`treestore` object.

=======
Methods
=======
The model associated with the TreeView can be set via::

  gtk_tree_view_set_model(GTK_TREE_VIEW(treeview), model);

Retrieval of the attached model can be done using::

  gtk_tree_view_get_model(GTK_TREE_VIEW(treeview));

Each column by default has a header identifying the purpose of the column. This can be hidden with::

  gtk_tree_view_set_headers_visible(GTK_TREE_VIEW(treeview), headers_visible);

Child columns are added with one of two methods::

  gtk_tree_view_append_column(GTK_TREE_VIEW(treeview), column);
  gtk_tree_view_insert_column(GTK_TREE_VIEW(treeview), column, position);

Both methods take a :doc:`treeviewcolumn` as the *column* argument. The ``insert_column()`` method takes a *position* value signifying where the column should be placed, with ``0`` indicating the first place.

A column can also be removed from view by calling::

  gtk_tree_view_remove_column(GTK_TREE_VIEW(treeview), column);

A column, or columns, can be retrieved from the TreeView by using::

  gtk_tree_view_get_column(GTK_TREE_VIEW(treeview), position);
  gtk_tree_view_get_columns(GTK_TREE_VIEW(treeview));

The ``get_column()`` method takes a *position* parameter, with ``0`` indicating the column in the first position. The ``get_columns()`` method returns a list of all the attached column objects.

Grid lines can be displayed on the TreeView with::

  gtk_tree_view_set_grid_lines(GTK_TREE_VIEW(treeview), grid_lines);

The *grid_lines* parameter should be set to one of:

* ``GTK_TREE_VIEW_GRID_LINES_NONE`` - no grid lines.
* ``GTK_TREE_VIEW_GRID_LINES_HORIZONTAL`` - display horizontal grid lines.
* ``GTK_TREE_VIEW_GRID_LINES_VERTICAL`` - display vertical grid lines.
* ``GTK_TREE_VIEW_GRID_LINES_BOTH`` - display grid lines in both directions.

By default, activation of any item in the TreeView requires a double-click. This can be changed to single-click with::

  gtk_tree_view_set_activate_on_single_click(GTK_TREE_VIEW(treeview), single);

=======
Example
=======
For an example of the TreeView, see the :doc:`liststore` or :doc:`treestore` examples.

TreeViewColumn
==============
The TreeViewColumn is created for attachment into a :doc:`treeview`, from which CellRenderer widgets are added to control the display of the data content.

===========
Constructor
===========
The TreeViewColumn construction method is::

  GtkWidget *treeviewcolumn = gtk_tree_view_column_new();

=======
Methods
=======
A title can be defined on the TreeViewColumn with::

  gtk_tree_view_column_set_title(GTK_TREE_VIEW_COLUMN(treeviewcolumn), title);

Rather than a simple string being provided, a widget can be used as the title instead via::

  gtk_tree_view_column_set_widget(GTK_TREE_VIEW_COLUMN(treeviewcolumn), widget);

By default, each column is sized to the content. They can be expanded however to fill the space provided by the TreeView by calling::

  gtk_tree_view_column_set_expand(GTK_TREE_VIEW_COLUMN(treeviewcolumn, expand);

A minimum and maximum width can also be specified with::

  gtk_tree_view_column_set_min_width(GTK_TREE_VIEW_COLUMN(treeviewcolumn), min_width);
  gtk_tree_view_column_set_max_width(GTK_TREE_VIEW_COLUMN(treeviewcolumn), max_width);

A fixed width defined in pixels can be set by using::

  gtk_tree_view_column_set_fixed_width(GTK_TREE_VIEW_COLUMN(treeviewcolumn), fixed_width);

Resizability of a column by the user can be toggled with::

  gtk_tree_view_column_set_resizable(GTK_TREE_VIEW_COLUMN(treeviewcolumn), resizable);

The visibility of a column can be toggled by calling::

  gtk_tree_view_column_set_visible(GTK_TREE_VIEW_COLUMN(treeviewcolumn), visible);

Retrieval of a columns visibility can be done by::

  gtk_tree_view_column_get_visible(GTK_TREE_VIEW_COLUMN(treeviewcolumn));

A TreeViewColumn can be used to fetch the attached TreeView::

  gtk_tree_view_column_get_tree_view(GTK_TREE_VIEW_COLUMN(treeviewcolumn));

If the TreeViewColumn is not attached to a TreeView, ``NULL`` is returned by the method.

=======
Example
=======
For an example of the TreeViewColumn, see the :doc:`liststore` or :doc:`treestore` examples.

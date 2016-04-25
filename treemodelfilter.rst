TreeModelFilter
===============
A TreeModelFilter is used to handle the filtering of rows held within a :doc:`liststore` or :doc:`treestore`. It works in conjunction with a handler function which determines which rows should be visible or not.

===========
Constructor
===========
The TreeModelFilter is constructed by calling::

  gtk_tree_model_filter_new(model, root)

The *model* paramter specifies the base model which is to be filtered. A virtual root TreePath object as *root* must also be specified.

=======
Methods
=======
The TreeModelFilter can be refiltered on demand with a call to the method::

  gtk_tree_model_filter_refilter(GTK_TREE_MODEL_FILTER(treemodelfilter));

A function is used to handle which rows are visible or not, with the function returning ``TRUE`` if the row should be displayed, and ``FALSE`` if not. This is declared with::

  gtk_tree_model_filter_set_visible_func(GTK_TREE_MODEL_FILTER(treemodelfilter), function, data);

The *function* parameter specifies the name of the function where the filtering will be handled. The *data* declares the information which will be processed.

A column can also be defined where the filter should look for visibility information::

  gtk_tree_model_filter_set_visible_column(GTK_TREE_MODEL_FILTER(treemodelfilter), column);

The model associated with the TreeModelFilter is retrievable with::

  gtk_tree_model_filter_get_model(GTK_TREE_MODEL_FILTER(treemodelfilter));

The TreeModelFilter and underlying model do not share TreeIter objects, which are the basis of identifying selected rows. To use a Treeiter from the model to find a row in the TreeModelFilter, or vice-versa, the TreeIter must be converted. This can be done forward or backward by::

  gtk_tree_model_filter_convert_child_iter_to_iter(GTK_TREE_MODEL_FILTER(treemodelfilter), filter_iter, child_iter);
  gtk_tree_model_filter_convert_iter_to_child_iter(GTK_TREE_MODEL_FILTER(treemodelfilter), child_iter, filter_iter);

TreePath objects can also be converted in the same way::

  gtk_tree_model_filter_convert_child_path_to_path(GTK_TREE_MODEL_FILTER(treemodelfilter), filter_path, child_path);
  gtk_tree_model_filter_convert_path_to_child_path(GTK_TREE_MODEL_FILTER(treemodelfilter), child_path, filter_path);

=======
Example
=======
Below is an example of an TreeModelFilter:

.. literalinclude:: _examples/treemodelfilter.c

Download: :download:`TreeModelFilter <_examples/treemodelfilter.c>`

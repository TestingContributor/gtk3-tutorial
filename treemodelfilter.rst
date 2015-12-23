TreeModelFilter
===============
A TreeModelFilter is used to handle the filtering of rows held within a :doc:`liststore` or :doc:`treestore`. It works in conjunction with a handler function which determines which rows should be visible or not.

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

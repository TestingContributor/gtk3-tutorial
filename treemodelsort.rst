TreeModelSort
=============
The TreeModelSort provides powerful sorting functionality for items held in a :doc:`liststore` or :doc:`treestore`. Sorts can either be made simply by specifying the order and column on which they operate, or more complex by declaring a handler function where custom sorting is defined.

=======
Methods
=======
The model associated with a TreeModelSort can be retrieved with::

  gtk_tree_model_sort_get_model(GTK_TREE_MODEL_SORT(treemodelsort));

TreeModelSort
=============
The TreeModelSort provides powerful sorting functionality for items held in a :doc:`liststore` or :doc:`treestore`. Sorts can either be made simply by specifying the order and column on which they operate, or more complex by declaring a handler function where custom sorting is defined.

===========
Constructor
===========
Construction of the TreeModelSort can be made with an associated model by calling::

  gtk_tree_model_sort_new_with_model(GTK_TREE_MODEL(model));

The *model* should be set to the ListStore or TreeStore which will be sorted.

=======
Methods
=======
The model associated with a TreeModelSort can be retrieved with::

  gtk_tree_model_sort_get_model(GTK_TREE_MODEL_SORT(treemodelsort));

The underlying model and the TreeModelSort do not share TreeIter objects, therefore when a TreeIter is obtained from the model and must reference the sorted tree row, or vice-versa, the TreeIter must be converted. This is done using the methods::

  gtk_tree_model_sort_convert_child_iter_to_iter(GTK_TREE_MODEL_SORT(treemodelsort), child_iter);
  gtk_tree_model_sort_convert_iter_to_child_iter(GTK_TREE_MODEL_SORT(treemodelsort), iter);

To convert from the base model to the TreeModelSort, use the first method. To convert from the TreeModelSort to the underlying model, call the second method.

TreePath objects can also be converted in the same manner::

  gtk_tree_model_sort_convert_child_path_to_path(GTK_TREE_MODEL_SORT(treemodelsort), child_path);
  gtk_tree_model_sort_convert_path_to_child_path(GTK_TREE_MODEL_SORT(treemodelsort), path);

=======
Example
=======
Below is an example of an TreeModelSort:

.. literalinclude:: _examples/treemodelsort.c

Download: :download:`TreeModelSort <_examples/treemodelsort.c>`

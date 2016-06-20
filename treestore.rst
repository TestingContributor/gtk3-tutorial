TreeStore
=========
A TreeStore is similar to a :doc:`liststore`, however it allows items to be inserted at sublevels to other items rather than simply as a flat list. It is most commonly used alongside :doc:`treeview` widgets, and is able to store a number of data types including text, values, and images. As with the ListStore, the object is not visible.

===========
Constructor
===========
The constructor for the TreeStore object is::

  GtkTreeStore *treestore = gtk_tree_store_new(columns, type, type, type...);

The *columns* parameter indicates the number of columns the TreeStore will hold. A matching number of *type* declarations can then be supplied which indicate what type of data will be stored in each column. The types permissible include::

* ``G_TYPE_STRING``
* ``G_TYPE_INT``
* ``G_TYPE_FLOAT``
* ``G_TYPE_DOUBLE``
* ``G_TYPE_BOOLEAN``
* ``G_TYPE_CHAR``
* ``G_TYPE_OBJECT``

=======
Methods
=======
A new row is able to be added to the TreeStore using the methods::

  gtk_tree_store_prepend(treestore, treeiter, parent);
  gtk_tree_store_append(treestore, treeiter, parent);
  gtk_tree_store_insert(treestore, treeiter, parent, position);

The *treeiter* parameter should point to an appropriate :doc:`treeiter` object which identifies the particular row being added. A *parent* value can also be defined, with ``NULL`` specifying no parent, and a TreeIter of the parent on which the new row will be a sibling. The ``insert()`` method also takes the *position* value indicating the location where the row should be added.

Data can then be added for the row with the call::

  gtk_tree_store_set(treestore, treeiter, data, -1);

A row can also be removed from the TreeStore with::

  gtk_tree_store_remove(treestore, treeiter);

The *treeiter* arguments is a pointer to the row, with a valid TreeIter removing the row and the function returning ``TRUE``. A ``FALSE`` value will be returned if the row could not be removed.

All items within the TreeStore can be removed using the method::

  gtk_tree_store_clear(treestore);

Rows within the TreeStore can be swapped via::

  gtk_tree_store_swap(treestore, treeiter1, treeiter2);

.. note::

  The ``swap()`` function only works on TreeStore objects which are unsorted.

Moving of rows already held in the TreeStore can be done using the methods::

  gtk_tree_store_move_before(treestore, treeiter, position);
  gtk_tree_store_move_after(treestore, treeiter, position);

The *treeiter* call in both methods takes the TreeIter of the item to be moved. The *position* argument is also a TreeIter, but it is that of the existing item to place the moved row above or below.

.. note::

  The ``move_before()`` and ``move_after()`` methods only work on TreeStore objects which are unsorted.

=======
Example
=======
Below is an example of a TreeStore:

.. literalinclude:: _examples/treestore.c

Download: :download:`TreeStore <_examples/treestore.c>`

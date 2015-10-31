Notebook
========
The Notebook widget provides a container for tabbed interfaces, within which more widgets can be placed in the tabs. They are commonly used in applications such as web browsers or file managers to provide switching between different views. Their use is also found in preference dialogs which provide grouped options.

===========
Constructor
===========
The constructor for the Notebook is::

  GtkWidget *notebook = gtk_notebook_new();

=======
Methods
=======
Pages are added to the Notebook via three methods::

  gtk_notebook_append_page(GTK_NOTEBOOK(notebook), child, label);
  gtk_notebook_prepend_page(GTK_NOTEBOOK(notebook), child, label);
  gtk_notebook_insert_page(GTK_NOTEBOOK(notebook), child, label, position);

The *child* property indicates the widget which will be added to the page. Commonly this will be a :doc:`grid` or other container widget. The *label* is the text which is to be displayed identifying the tab. Finally, the ``insert_page()`` method takes a *position* value indicating where in the Notebook the new tab should be added, with ``0`` representing the first tab or alternatively, to add the page to the end use ``-1``.

Pages can also be removed::

  gtk_notebook_remove_page(GTK_NOTEBOOK(notebook), position);

As with the insert method, the *position* value indicates the index of the page to be removed, with ``0`` for the first page.

The page number for a given child in the Notebook can be found using::

  gtk_notebook_page_num(GTK_NOTEBOOK(notebook), child);

On the reverse, the child widget for a given page number can also be found::

  gtk_notebook_get_nth_page(GTK_NOTEBOOK(notebook), position);

The total number of pages held by the Notebook is discoverable using the method::

  gtk_notebook_get_n_pages(GTK_NOTEBOOK(notebook));

Programatically changing the currently visible page is done via::

  gtk_notebook_set_current_page(GTK_NOTEBOOK(notebook), position);

If the passed *position* value is negative, the last page will be made current. If the number exceeds the total number in the Notebook, no changes will be made.

A page can be reordered once added if necessary by using::

  gtk_notebook_reorder_child(GTK_NOTEBOOK(notebook), child, position);

The *child* indicates the tab which is to be moved. The *position* value states the new position where the tab is to be moved, with ``-1`` allowing the tab to be moved to the end.

The next and previous tabs can also be programatically selected with::

  gtk_notebook_next_page(GTK_NOTEBOOK(notebook));
  gtk_notebook_prev_page(GTK_NOTEBOOK(notebook));

By default, tabs are placed alongside the top each of the Notebook container. This can be adjusted using::

  gtk_notebook_set_tab_pos(GTK_NOTEBOOK(notebook), edge);

The *edge* argument should be set to one of:

* ``GTK_POS_LEFT`` - draw tabs on left.
* ``GTK_POS_RIGHT`` - draw tabs on right.
* ``GTK_POS_TOP`` - draw tabs on top.
* ``GTK_POS_BOTTOM`` - draw tabs on bottom.

In some cases, the tabs themselves may need to be hidden. This is done via the call::

  gtk_notebook_set_show_tabs(GTK_NOTEBOOK(notebook), show);

It may be preferential in some applications to allow the user to reorder the tabs to their own preference. This is done by using::

  gtk_notebook_set_tab_reorderable(GTK_NOTEBOOK(notebook), child, reorderable);

The method must be called for each tab which is to be made reorderable. The *reorderable* property must be set to ``TRUE`` for this feature to be enabled.

Additional widgets can be added to the tab area of the Notebook. This is known as the action area and is added via::

  gtk_notebook_set_action_widget(GTK_NOTEBOOK(notebook), widget, packing);

The *widget* can be either a single widget or a container. The *packing* constant should be set to one of:

* ``GTK_PACK_TYPE_START`` - child is packed at start of the box.
* ``GTK_PACK_TYPE_END`` - child is packed at end of the box.

=======
Example
=======
Below is an example of an Notebook:

.. literalinclude:: _examples/notebook.c

Download: :download:`Notebook <_examples/notebook.c>`

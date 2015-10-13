RecentChooser
=============
The RecentChooser object provides for management of recently opened files. Access to the object is typically provided through the :doc:`recentchoosermenu`, :doc:`recentchooserwidget`, or :doc:`recentchooserdialog` widgets.

.. note::

  The methods shown below are typically accessed using the widget which will be displaying the recent files.

=======
Methods
=======
The currently selected item can be obtained from the chooser using the methods::

  gtk_recent_chooser_get_current_uri(GTK_RECENT_CHOOSER(recentchooser));
  gtk_recent_chooser_get_current_item(GTK_RECENT_CHOOSER(recentchooser));

A full list of items or URIs can be fetched with::

  gtk_recent_chooser_get_uris(GTK_RECENT_CHOOSER(recentchooser));
  gtk_recent_chooser_get_items(GTK_RECENT_CHOOSER(recentchooser));

Files which can no longer be found, such as those which have been moved or deleted can be set to show or hide with::

  gtk_recent_chooser_set_show_not_found(GTK_RECENT_CHOOSER(recentchooser), show_not_found);

Icons can be configured to show on the widget with::

  gtk_recent_chooser_set_show_icons(GTK_RECENT_CHOOSER(recentchooser), show_icons);

The list of recently opened files can be limited to those on the local system via::

  gtk_recent_chooser_set_local_only(GTK_RECENT_CHOOSER(recentchooser), show_local);

Tooltips can also be displayed showing the full path of the item with::

  gtk_recent_chooser_set_show_tips(GTK_RECENT_CHOOSER(recentchooser), show_tips);

Configuration of whether multiple items can be selected from the chooser can be set::

  gtk_recent_chooser_set_select_multiple(GTK_RECENT_CHOOSER(recentchooser), multiple);

If multiple file selections are permitted, all the items can be selected or unselected with::

  gtk_recent_chooser_select_all(GTK_RECENT_CHOOSER(recentchooser));
  gtk_recent_chooser_unselect_all(GTK_RECENT_CHOOSER(recentchooser));

Recent files can be sorted using::

  gtk_recent_chooser_set_sort_type(GTK_RECENT_CHOOSER(recentchooser), sort_type);

The *sort_type* should be set to one of:

* ``GTK_RECENT_SORT_NONE`` - no sorting method.
* ``GTK_RECENT_SORT_MRU`` - sort by most recently used.
* ``GTK_RECENT_SORT_LRU`` - sort by least recently used.
* ``GTK_RECENT_SORT_CUSTOM`` - custom sorting method.

If the sorting method is set to ``GTK_RECENT_SORT_CUSTOM``, a function which handles the sorting should be defined using::

  gtk_recent_chooser_set_sort_func(GTK_RECENT_CHOOSER(recentchooser), function);

Filtering of recent items can also be achieved with the :doc:`recentfilter` object, and applied using::

  gtk_recent_chooser_add_filter(GTK_RECENT_CHOOSER(recentchooser), filter);

More than one filter can be applied using the ``add_filter()`` method.

A filter may also be removed from the RecentChooser using::

  gtk_recent_chooser_remove_filter(GTK_RECENT_CHOOSER(recentchooser), filter);

The filter attached to the RecentChooser can be returned in a list by calling::

  gtk_recent_chooser_list_filters(GTK_RECENT_CHOOSER(recentchooser));

=======
Example
=======
For an example of the RecentChooser, see the :doc:`recentchoosermenu`, :doc:`recentchooserwidget`, or :doc:`recentchooserdialog` widgets.

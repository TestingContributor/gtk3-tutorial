IconView
========
An IconView provides a grid-like widget for the purpose of displaying images, typically icons, and an associated text label.

===========
Constructor
===========
The constructor for the IconView is::

  GtkWidget *iconview = gtk_icon_view_new();

Alternatively, a model can be defined for use at construction time with::

  GtkWidget *iconview = gtk_icon_view_new_with_model(model);

The *model* should be a defined :doc:`liststore`.

=======
Methods
=======
The associated model to be used with the IconView is able to be specified with::

  gtk_icon_view_set_model(GTK_ICON_VIEW(iconview), model);

The columns within the model must be defined for their role by using the methods::

  gtk_icon_view_set_text_column(GTK_ICON_VIEW(iconview), column);
  gtk_icon_view_set_markup_column(GTK_ICON_VIEW(iconview), column);
  gtk_icon_view_set_pixbuf_column(GTK_ICON_VIEW(iconview), column);
  gtk_icon_view_set_tooltip_column(GTK_ICON_VIEW(iconview), column);

A list of currently selected items can be obtained with::

  gtk_icon_view_get_selected_items(GTK_ICON_VIEW(iconview));

The returned list provides a TreePath object for each selected item being held in the IconView.

By default, the icons will be spaced across the IconView to take up the available space. The number of columns can be limited by using::

  gtk_icon_view_set_columns(GTK_ICON_VIEW(iconview), columns);

The width in pixels of each item can be customised with::

  gtk_icon_view_set_item_width(GTK_ICON_VIEW(iconview), width);

Row and column spacing can also be defined with a pixel gap::

  gtk_icon_view_set_row_spacing(GTK_ICON_VIEW(iconview), spacing);
  gtk_icon_view_set_column_spacing(GTK_ICON_VIEW(iconview), spacing);

Spacing within the cells is also definable, with the gap between the image and text label customisable using::

  gtk_icon_view_set_spacing(GTK_ICON_VIEW(iconview), spacing);

A margin can also be defined providing a gap between the IconView frame, and the contents::

  gtk_icon_view_set_margin(GTK_ICON_VIEW(iconview), margin);

Finally, padding can also be used which specifies spacing around each item::

  gtk_icon_view_set_item_padding(GTK_ICON_VIEW(iconview), padding);

All items in the IconView can be selected or unselected using the methods::

  gtk_icon_view_select_all(GTK_ICON_VIEW(iconview));
  gtk_icon_view_unselect_all(GTK_ICON_VIEW(iconview));

Ordering of the items within the IconView can be changed by the user if enabled with the call::

  gtk_icon_view_set_reorderable(GTK_ICON_VIEW(iconview), reorderable);

When *reorderable* is set to ``TRUE``, the user can drag-and-drop an item into a new place.

By default, one item in the IconView can be selected at a single time. This is configured using::

  gtk_icon_view_set_selection_mode(GTK_ICON_VIEW(iconview), mode);

The *mode* should be set to one of:

* ``GTK_SELECTION_NONE`` - prevent any selection being made.
* ``GTK_SELECTION_SINGLE`` - zero or one element may be selected.
* ``GTK_SELECTION_BROWSE`` - at least one item is selected, with the user not being able to deselect an item.
* ``GTK_SELECTION_MULTIPLE`` - zero, one or more items may be selected.

The TreePath for a particular item can be selected or unselected with::

  gtk_icon_view_select_path(GTK_ICON_VIEW(iconview), treepath);
  gtk_icon_view_unselect_path(GTK_ICON_VIEW(iconview), treepath);

A user must double-click an item within the IconView to activate it, however this can be changed to single-click with the method::

  gtk_icon_view_set_activate_on_single_click(GTK_ICON_VIEW(iconview), single_click);

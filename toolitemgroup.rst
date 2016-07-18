ToolItemGroup
=============
A ToolItemGroup is used to create separate groupings within the :doc:`toolpalette` widget. They are used to separate :doc:`toolitem` objects into logical groups.

===========
Constructor
===========
The constructor for the ToolItemGroup is::

  GtkWidget *toolitemgroup = gtk_tool_item_group_new(label);

A *label* string should be supplied which is displayed on the expander portion of the ToolItemGroup. Its use is to provide a section header for the contained ToolItem widgets.

=======
Methods
=======
A label can be changed after construction with::

  gtk_tool_item_group_set_label(GTK_TOOL_ITEM_GROUP(toolitemgroup), label);

A :doc:`label` widget can be used instead of a string via the method::

  gtk_tool_item_group_set_label_widget(GTK_TOOL_ITEM_GROUP(toolitemgroup), label);

Items can be added to the ToolItemGroup with the method::

  gtk_tool_item_group_insert(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem, position);

The *toolitem* parameter specifies the ToolItem to be added to the group. The *position* takes an integer value which specifies where in the ToolPalette the group will be added, with ``0`` used for the first position.

A ToolItem can also be repositioned within the group via::

  gtk_tool_item_group_set_item_position(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem, position);

An items position within the ToolItemGroup can be retrieved by running::

  gtk_tool_item_group_get_item_position(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem);

Alternatively, an item within a ToolItemGroup can be retrieved using its position index with::

  gtk_tool_item_group_get_nth_item(GTK_TOOL_ITEM_GROUP(toolitemgroup), position);

If required, items can be removed by calling::

  gtk_tool_item_group_remove(GTK_TOOL_ITEM_GROUP(toolitemgroup), toolitem);

By default, all ToolItemGroup objects are set as expanded and all icons visible. However, it may be necessary in some cases to collapse some groups programatically::

  gtk_tool_item_group_set_collapsed(GTK_TOOL_ITEM_GROUP(toolitemgroup), collapsed);

The number of ToolItem widgets contained within the ToolItemGroup can be obtained from::

  gtk_tool_item_group_get_n_items(GTK_TOOL_ITEM_GROUP(toolitemgroup));

=======
Example
=======
For an example of the ToolItemGroup, see the :doc:`toolpalette` page.

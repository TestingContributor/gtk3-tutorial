ToolItem
========
The ToolItem is the base of the :doc:`toolbutton`, :doc:`toggletoolbutton`, :doc:`radiotoolbutton`, and :doc:`menutoolbutton` widgets. The ToolItem shares a number of methods across the widgets.

Alongside being the base of the other Tool related widgets, the ToolItem also provides a container which allows adding of standard widgets to the Toolbar. This is commonly used for adding :doc:`searchentry` or :doc:`scale` widgets.

===========
Constructor
===========
The constructor of the ToolItem is::

  GtkWidget *toolitem = gtk_tool_item_new();

=======
Methods
=======
To ensure the ToolItem is the same size as other ToolItem widgets, call::

  gtk_tool_item_set_homogeneous(GTK_TOOL_ITEM(toolitem), homogeneous);

The *homogeneous* value must be set to ``TRUE`` on each widget which is to be made of equal size.

In some cases, a ToolItem should be expanded to fill the available empty space within the Toolbar via::

  gtk_tool_item_set_expand(GTK_TOOL_ITEM(toolitem), expand);

Tooltip information can be set with the methods::

  gtk_tool_item_set_tooltip_text(GTK_TOOL_ITEM(toolitem), text);
  gtk_tool_item_set_tooltip_markup(GTK_TOOL_ITEM(toolitem), markup);

In some cases, a ToolItem may be hidden or shown based on the orientation of the Toolbar. This is set with the methods::

  gtk_tool_item_set_visible_horizontal(GTK_TOOL_ITEM(toolitem), visible);
  gtk_tool_item_set_visible_vertical(GTK_TOOL_ITEM(toolitem), visible);

By default, some desktop environments only show an icon. If the item is important and/or commonly used, it may also be useful to display the text on the item. This is set with::

  gtk_tool_item_set_is_important(GTK_TOOL_ITEM(toolitem), important);

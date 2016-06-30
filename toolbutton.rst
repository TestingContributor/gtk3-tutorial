ToolButton
==========
The ToolButton is placed in a :doc:`toolbar` and is the most common item to be added to the Toolbar. It is typically used for common functionality of an application such as saving a document or opening a new tab.

===========
Constructor
===========
The constructor for the ToolButton is::

  GtkWidget *toolbutton = gtk_tool_button_new(icon, label);

An *icon* value allows the ToolButton to be displayed with an icon. Typically this will be an :doc:`image` widget which has a suitable icon loaded. If no icon is required, ``null`` can be passed. An associated *label* should also be specified stating the purpose of the ToolButton.

=======
Methods
=======
A label can also be set for the ToolButton post-construction by::

  gtk_tool_button_set_label(GTK_TOOL_BUTTON(toolbutton), label);

Alternatively, a Label widget can be added::

  gtk_tool_button_set_label_widget(GTK_TOOL_BUTTON(toolbutton), widget);

The mnemonic shortcut will also be set in most cases to ease accessibility::

  gtk_tool_button_set_use_underline(GTK_TOOL_BUTTON(toolbutton), underline);

Icons can be displayed from the theme by defining the name, or an appropriate widget can be set::

  gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON(toolbutton), name);
  gtk_tool_button_set_icon_widget(GTK_TOOL_BUTTON(toolbutton), icon);

By default, when a toolbar style is set to display text beside icons, no text will actually be displayed. To enable the text on only key ToolButton widgets, use the method::

  gtk_tool_button_set_is_important(GTK_TOOL_BUTTON(toolbutton), important);

.. note::

  Icon text is always displayed when text is set to show below icons. This method only affects the text beside icons functionality.

.. note::

  It is good interface design to ensure only important items in the Toolbar have the ``set_is_important()`` method set.

In some cases, it may be useful to have an item set to invisible if the Toolbar is configured to either horizontal or vertical mode via::

  gtk_tool_button_set_visible_horizontal(GTK_TOOL_BUTTON(toolbutton), visible);
  gtk_tool_button_set_visible_vertical(GTK_TOOL_BUTTON(toolbutton), visible);

When the *visible* parameter is set to ``true``, the item will be displayed in the set mode. When ``false`` is set, the item will not be shown to the user. In any case, if the method is not used, a ToolButton will always be shown.

It is highly recommended to set a :doc:`tooltip` on the ToolButton using::

  gtk_tool_button_set_tooltip_text(GTK_WIDGET(toolbutton), text);
  gtk_tool_button_set_tooltip_markup(GTK_WIDGET(toolbutton), markup);

=======
Signals
=======
The commonly used signals of an ToolButton are::

  "clicked" (toolbutton)

The ``"clicked"`` signal emits from the ToolButton when the user presses and then releases the mouse button. It can also occur when the item has the focus and the user presses the :kbd:`Return` button for example.

=======
Example
=======
An example of the ToolButton can be found on the Toolbar page.

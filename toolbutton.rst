ToolButton
==========
The ToolButton is placed in a :doc:`toolbar` and is the most common item to be added to the Toolbar. It is typically used for common functionality of an application such as saving a document or opening a new tab.

===========
Constructor
===========
The constructor for the ToolButton is::

  GtkWidget *toolbutton = gtk_tool_button_new(icon, label);

An *icon* value allows the ToolButton to be displayed with an icon. An associated *label* should also be specified stating the purpose of the ToolButton.

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

=======
Example
=======
An example of the ToolButton can be found on the Toolbar page.

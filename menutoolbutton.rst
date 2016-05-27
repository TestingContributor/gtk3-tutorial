MenuToolButton
==============
A MenuToolButton provides a combination button and menu in a single widget. The button function typically operates a common function, with the :doc:`menu` providing related actions. An example of this widget is the back button in a browser which typically goes back to the previous page on the button click, and provides a menu of other previous pages.

===========
Constructor
===========
The MenuToolButton is created using the constructor::

  GtkWidget *menutoolbutton = gtk_menu_tool_button_new(icon, label);

An *icon* value allows the MenuToolButton to be displayed with an icon. An associated *label* should also be specified stating the purpose of the ToolButton.

=======
Methods
=======
A Menu object is associated with the MenuToolButton by the method::

  gtk_menu_tool_button_set_menu(GTK_MENU_TOOL_BUTTON(menutoolbutton), menu);

If required, the Menu object can also be retrieved by::

  gtk_menu_tool_button_get_menu(GTK_MENU_TOOL_BUTTON(menutoolbutton));

The arrow provided with the MenuToolButton to initiate the dropdown action can be set with tooltip text or markup with::

  gtk_menu_tool_button_set_arrow_tooltip_text(GTK_MENU_TOOL_BUTTON(menutoolbutton), text);
  gtk_menu_tool_button_set_arrow_tooltip_markup(GTK_MENU_TOOL_BUTTON(menutoolbutton), markup);

=======
Example
=======
An example of the MenuToolButton can be found on the Toolbar page.

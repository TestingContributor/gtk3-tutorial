ToggleToolButton
================
A ToggleToolButton behaves the same as the :doc:`togglebutton` widget, with the button able to display and on or off state. It is commonly used for showing or hiding a view for example.

===========
Constructor
===========
A ToggleToolButton is constructed using the call::

  GtkWidget *toggletoolbutton = gtk_toggle_tool_button_new();

=======
Methods
=======
The active setting of the ToggleToolButton is set using the method::

  gtk_toggle_tool_button_set_active(GTK_TOGGLE_TOOL_BUTTON(toggletoolbutton), active);

When *active* is set to ``TRUE``, the ToggleToolButton will appear depressed until the user clicks it or the active state is programatically set.

The state of the ToggleToolButton can also be retrieved using::

  gtk_toggle_tool_button_get_active(GTK_TOGGLE_TOOL_BUTTON(toggletoolbutton));

=======
Example
=======
An example of the ToggleToolButton can be found on the Toolbar page.

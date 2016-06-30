ToggleToolButton
================
A ToggleToolButton behaves the same as the :doc:`togglebutton` widget, with the button able to display and on or off state. It is commonly used for showing or hiding a view for example.

===========
Constructor
===========
A ToggleToolButton is constructed using the call::

  GtkWidget *toggletoolbutton = gtk_toggle_tool_button_new(label);

The *label* parameter defines the string of text to display alongside the ToggleToolButton.

=======
Methods
=======
The active setting of the ToggleToolButton is set using the method::

  gtk_toggle_tool_button_set_active(GTK_TOGGLE_TOOL_BUTTON(toggletoolbutton), active);

When *active* is set to ``TRUE``, the ToggleToolButton will appear depressed until the user clicks it or the active state is programatically set.

The state of the ToggleToolButton can also be retrieved using::

  gtk_toggle_tool_button_get_active(GTK_TOGGLE_TOOL_BUTTON(toggletoolbutton));

=======
Signals
=======
The commonly used signals of an ToggleToolButton are::

  "toggled" (toggletoolbutton)

When the user clicks on the ToggleToolButton and the state is changed to active or inactive, the ``"toggled"`` signal is emitted.

=======
Example
=======
An example of the ToggleToolButton can be found on the Toolbar page.

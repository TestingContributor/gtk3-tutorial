RadioToolButton
===============
A RadioToolButton is similar to the :doc:`radiobutton` widget in that it is typically grouped with other RadioToolButton widgets, of which only one can be selected at a single time.

===========
Constructor
===========
Construction of the RadioToolButton is made with::

  GtkWidget *radiotoolbutton = gtk_radio_tool_button_new(group);

The *group* arguments takes a list object which details each associated RadioToolButton.

Alternatively, a base RadioToolButton can be provided to instantiate the group::

  GtkWidget *radiotoolbutton = gtk_radio_tool_button_new_from_widget(group);

=======
Methods
=======
The group can also be defined after construction by calling::

  gtk_radio_tool_button_set_group(GTK_RADIO_TOOL_BUTTON(radiotoolbutton), group);

If required, the group value of a RadioToolButton can be obtained with::

  gtk_radio_tool_button_get_group(GTK_RADIO_TOOL_BUTTON(radiotoolbutton));

=======
Example
=======
An example of the RadioToolButton can be found on the Toolbar page.

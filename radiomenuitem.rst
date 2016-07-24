RadioMenuItem
=============
A RadioMenuItem provides a widget functionality equivalent to the :doc:`radiobutton`. Typically, the RadioMenuItem is joined in a group with other RadioMenuItem widgets, with only one of the group being selected at a single time.

===========
Constructor
===========
The constructor for the empty RadioMenuItem is::

  GtkWidget *radiomenuitem = gtk_radio_menu_item_new();

A label can be defined at construction with the call::

  GtkWidget *radiomenuitem = gtk_radio_menu_item_new_with_label(label);

If a mnemonic key is also to be used, call the constructor::

  GtkWidget *radiomenuitem = gtk_radio_menu_item_new_with_mnemonic(label);

When a previous RadioMenuItem has been created, and the next is to be a part of the same group, the following constructors can be used::

  GtkWidget *radiomenuitem = gtk_radio_menu_item_new_from_widget(group);
  GtkWidget *radiomenuitem = gtk_radio_menu_item_new_with_label_from_widget(group, label);
  GtkWidget *radiomenuitem = gtk_radio_menu_item_new_with_mnemonic_from_widget(group, label);

The *group* parameter specifies the base RadioMenuItem which will form the group.

=======
Methods
=======
In some cases, the RadioMenuItem may be grouped after construction. This is done with::

  gtk_radio_menu_item_set_group(GTK_RADIO_MENU_ITEM(radiomenuitem), group);

The group which the RadioMenuItem is a member of can be retrieved via::

  gtk_radio_menu_item_get_group(GTK_RADIO_MENU_ITEM(radiomenuitem));

=======
Example
=======
For an example of the RadioMenuItem see the :doc:`menu` page.

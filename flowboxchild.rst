FlowBoxChild
============
The FlowBoxChild is used to represent an item within a :doc:`flowbox` widget.

===========
Constructor
===========
The constructor of the FlowBoxChild is::

  GtkWidget *flowboxchild = gtk_flow_box_child_new();

=======
Methods
=======
The current index of the item within the FlowBox can be obtained through::

  gtk_flow_box_child_get_index(GTK_FLOW_BOX_CHILD(flowboxchild));

The function will return the position value of the FlowBoxChild if it has been added, or ``-1`` if it has not yet been added.

A check can also be made on whether the FlowBoxChild is currently selected::

  gtk_flow_box_child_is_selected(GTK_FLOW_BOX_CHILD(flowboxchild));

=======
Example
=======
An example of the FlowBoxChild can be found on the FlowBox page.

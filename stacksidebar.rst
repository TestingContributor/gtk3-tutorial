StackSidebar
============
The StackSidebar can be connected to the :doc:`stack` to provide a sidebar for switching between the children contained in the Stack.

===========
Constructor
===========
A StackSidebar is constructed using::

  GtkWidget *stacksidebar = gtk_stack_sidebar_new();

=======
Methods
=======
To associate the Stack with the StackSidebar call::

  gtk_stack_sidebar_set_stack(GTK_STACK_SIDEBAR(stacksidebar), stack);

Retrieval of the associated Stack widget can be made via::

  gtk_stack_sidebar_get_stack(GTK_STACK_SIDEBAR(stacksidebar));

=======
Example
=======
Below is an example of a StackSidebar:

.. literalinclude:: _examples/stacksidebar.c

Download: :download:`StackSidebar <_examples/stacksidebar.c>`

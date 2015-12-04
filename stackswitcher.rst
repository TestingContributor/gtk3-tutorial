StackSwitcher
=============
A StackSwitcher is an object associated with a :doc:`stack` to provide an interface to switch children in the Stack. The layout provides a horizontal bar with a button for each child in the Stack.

===========
Constructor
===========
The StackSwitcher can be constructed via::

  GtkWidget *stackswitcher = gtk_stack_switcher_new();

=======
Methods
=======
The StackSwitcher can be attached to the Stack via::

  gtk_stack_switcher_set_stack(GTK_STACK_SWITCHER(stackswitcher), stack);

Retrival of the associated Stack object can be made using::

  gtk_stack_switcher_get_stack(GTK_STACK_SWITCHER(stackswitcher));

=======
Example
=======
Below is an example of a StackSwitcher:

.. literalinclude:: _examples/stackswitcher.c

Download: :download:`StackSwitcher <_examples/stackswitcher.c>`

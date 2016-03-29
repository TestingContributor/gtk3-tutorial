RecentChooserDialog
===================
The RecentChooserDialog provides for the selection of recently used documents from a dialog.

===========
Constructor
===========
Construction of the RecentChooserDialog is made using::

  GtkWidget *recentchooserdialog = gtk_recent_chooser_dialog_new(title, parent, buttons...);

The *title* parameter specifies the text to be displayed on the RecentChooserDialog window. A *parent* window which owns the dialog should also be specified. Finally, *buttons* can be added by providing the text and appropriate response value.

A :doc:`recentmanager` can also be specified at construction via::

  GtkWidget *recentchooserdialog = gtk_recent_chooser_dialog_new_for_manager(title, parent, manager, buttons...);

=======
Methods
=======

.. note::

  Further methods for use with the RecentChooser family of widgets are defined on the :doc:`recentchooser` page.

=======
Example
=======
Below is an example of an RecentChooserDialog:

.. literalinclude:: _examples/recentchooserdialog.c

Download: :download:`RecentChooserDialog <_examples/recentchooserdialog.c>`

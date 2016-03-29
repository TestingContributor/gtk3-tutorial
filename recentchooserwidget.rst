RecentChooserWidget
===================
The RecentChooserWidget is used within the :doc:`recentchooserdialog` widget, and enables the opening of recently used documents and files.

============
Construction
============
Construction of the RecentChooserWidget is done with::

  GtkWidget *recentchooserwidget = gtk_recent_chooser_widget_new();

A :doc:`recentmanager` object is also able to be specified using::

  GtkWidget *recentchooserwidget = gtk_recent_chooser_widget_new_for_manager(manager);

=======
Methods
=======

.. note::

  Further methods for use with the RecentChooser family of widgets are defined on the :doc:`recentchooser` page.

=======
Example
=======
Below is an example of an RecentChooserWidget:

.. literalinclude:: _examples/recentchooserwidget.c

Download: :download:`RecentChooserWidget <_examples/recentchooserwidget.c>`

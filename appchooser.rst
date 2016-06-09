AppChooser
==========
The AppChooser object provides a common backend for the :doc:`appchooserwidget`, :doc:`appchooserdialog`, and :doc:`appchooserbutton` widgets.

===========
Constructor
===========
The AppChooser is constructed automatically when the AppChooserWidget, AppChooserDialog, and AppChooserButton widgets are constructed. Each of the methods specified below are usually called directly on the widget.

=======
Methods
=======
The application information for a selected application can be obtained from::

  gtk_app_chooser_get_app_info(GTK_APP_CHOOSER(appchooser));

Content type specified on the AppChooser can be fetched by calling::

  gtk_app_chooser_get_content_type(GTK_APP_CHOOSER(appchooser));

The list of applications displayed by the AppChooser can be manually reloaded with::

  gtk_app_chooser_refresh(GTK_APP_CHOOSER(appchooser));

=======
Example
=======
See the AppChooserWidget, AppChooserDialog, or AppChooserButton pages for examples.

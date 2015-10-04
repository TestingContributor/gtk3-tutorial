FileFilter
==========
A FileFilter is used to filter out the visible files within a :doc:`filechooser` based widget. It is commonly used in file open dialogs to limit file types to those supported by the application.

===========
Constructor
===========
The constructor for the FileFilter is::

  filefilter = gtk_file_filter_new();

=======
Methods
=======
The name of the filter displayed within a FileChooser can be set to::

  filefilter.set_name(name)

A pattern can be used to provide the filtering with a glob style rule via::

  filefilter.add_pattern(pattern)

The *pattern* string typically uses an asterisk to specify a wildcard, such as ``*.png`` to only display files ending with png extensions.

Alternatively, a mime type can be used to filter files with::

  filefilter.add_mime_type(mime_type)

The *mime_type* parameter indicates the mime type to display, such as ``"text/plain"`` to display plain text files.

If the application uses the FileFilter to open images using the :doc:`image` widget, the supported formats of the widget can automatically be added using::

  filefilter.add_pixbuf_formats()

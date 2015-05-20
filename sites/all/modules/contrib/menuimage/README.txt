Module: 'menuimage'
kris@o3world.com
march 16 '13

When editing a menu link, this module provides a file field to
upload an image to associate with a menu item. The fid of that
file is stored as 'image' the link's options array, which may be
passed as a parameter to file_load to obtain its public:// uri,
to be used with either file_build_uri or image_style_url.

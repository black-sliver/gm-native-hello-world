{
    // set up globals for use in sample.gms
    global.ext_hello_callback = external_define('hello_world.dll', 'hello_callback', dll_cdecl,
                                                ty_string,1,ty_string);
}

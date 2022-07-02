Basically when you use the .c file and its required .h file to your project, things should always be working. This libary is completely stand alone and does not require any 3rd party libraries (at least not any C doesn't provide by 
default). The visual studio project file was only so I can easily set up a project to test if everything works, but none of that is required. This library was only tested in visual studio, but I do not see any reason at all why 
other C compilers should get you any trouble here. 

I also didn't provde any projects to turn this into a .dll/.so or something. I didn't see any reason to do that, and if you really want this to be anything like that, I guess you can set that up yourself.

This has only be tested in Windows, but I would not see any reason why Mac, Linux, or any other system would be able to cause you any kind of trouble. Any C compiler should be able to handle this.

I've already set the header to make this all C++ compatible too, so C++ users should just include the header file and add the .c file, and no I already took the trouble with 'extern "C"' from your hands.

Cut short, this couldn't be any easier. Right?

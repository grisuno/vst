# vst

The specific command to build a VST plugin using GCC would depend on the specific directory structure and file names of your project. Here is an example command that shows how you might build a plugin using GCC:

g++ -shared -fPIC -I/path/to/juce/modules -o myplugin.dll main.cpp HarmonicsPluginProcessor.cpp HarmonicsPluginEditor.cpp -L/path/to/juce/bin -ljuce-audio-basics -ljuce-audio-devices -ljuce-audio-formats -ljuce-audio-processors -ljuce-audio-utils -ljuce-core -ljuce-data-structures -ljuce-events -ljuce-graphics -ljuce-gui-basics -ljuce-gui-extra

This command tells the GCC compiler to:

generate a shared object (-shared)
create position-independent code (-fPIC)
include the JUCE library's headers (-I/path/to/juce/modules)
output the compiled plugin to a file named myplugin.dll (-o myplugin.dll)
include the source files for the processor and editor classes (main.cpp, HarmonicsPluginProcessor.cpp, HarmonicsPluginEditor.cpp)
link against the JUCE library's binary files (-L/path/to/juce/bin)
link against the specific JUCE modules required by your plugin (-ljuce-audio-basics, -ljuce-audio-devices, etc.)
You will need to adjust the paths and file names to match your specific project.

Also, you may have to install additional dependencies that JUCE need to be compiled like ALSA or jack, please check the JUCE website for more information about this topic.

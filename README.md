# Having fun with C

I'm using [c/c++ plugin for VS Code](https://code.visualstudio.com/docs/languages/cpp)

## How to build code?

Just hit ⇧⌘B (Shift+Command+B) - and compiler will build executable binaries.

Then you just need to run `$ ./a.out`

Main configuration is in `.vscode/tasks.json` Notice some important things:

* Code will be build for debugging (`-g` flag in `args` array). You should remove it if you want to build it without this feature.
* In order to *debug* this code you'll need to open debug tab and run it from there.
* Which builded file to run on debug defined here: `.vscode/launch.json`
* Breakpoints work, you need to rebuild app after placing them.

## Tutorials

* https://www.youtube.com/watch?v=-CpG3oATGIs (4:38:52)

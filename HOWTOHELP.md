# How you can help us with testing

## Introduction
open.mp server has been under so many tests for past few months, before and after first beta testing phase where we picked people to help us privately;  
But now open.mp has entered a totally new phase and here we are going for a public beta release so everyone can participate with remaining unknown issues.  
Please read the following contents in order to figure out how you can become helpful and help us with open.mp server beta testing  

open.mp has been tested on production (and still is) since months ago on a romanian server with 1000 players daily peak called [nephrite.ro](https://nephrite.ro/) (IP: ruby.nephrite.ro:7777);  
And so far it has been a great experience for us, and now it's ready enough to go public as a beta for people in community to test their own servers/scripts.  
Performance wise open.mp has been giving us a great show and results with vastly improved performance and stability over the SA:MP server.

## Where do I start?
You can start with going to [Releases](https://github.com/openmultiplayer/server-beta/releases) to download **latest** beta version to test your scripts with.  
You can easily set up your server as it's almost close to how SA:MP server works, but with some small differences if you want to do it in our way (we still support the way SA:MP works with `server.cfg` and its file structure, having gamemodes, filterscripts and scriptfiles folders for example)

## What am I supposed to do as a tester and how can I help?
Firstly what we want is slowly porting your gamemodes and scripts to open.mp, which you normally shouldn't have issues with unless you have memory hacking plugins and we haven't added support for needed features yet (we have over 150 YSF natives already built in and the rest are comign as well). By running your script with open.mp and connecting to it, you can see if there are any differences and behavior changes, so you can report them to us properly by giving us enough info to reproduce and fix the issue.  

But what if you don't have a script of your own and you are still interested in testing it? Another thing that can be really helpful to us, is testing what we have already created and implemented, as in current natives we have and all the extra ones.  
At the time of writing this, we have all latest SA:MP natives implemented, including many new ones either done by us or ported from YSF to be built into open.mp instead.  
You can start with testing those natives and their behaviors by checking the results either returned by those used natives or callback calls.

## How to run my scripts with open.mp server
There are now three methods to start your server - an existing `server.cfg`, a new `config.json`, or the command-line.  
To use your existing server.cfg simply copy it in to the directory with the `omp-server` binary and run it from the command line:

### **open.mp way of running your server**
Linux:

```
./omp-server
```

Windows:

```
omp-server.exe
```

To launch a mode by name directly just add it after the binary:

Linux:

```
./omp-server --script my-mode.amx
```

Windows:

```
omp-server.exe --script my-mode.amx
```

This should still be in the `gamemodes/` directory as before.

To get an example `config.json`, just ask for one:

Linux:

```
./omp-server --write-config
```

Windows:

```
omp-server.exe --write-config
```

### **SA:MP way of running your server, legacy support**
If you want to go with the way SA:MP works, all you have to do is dropping your file structure in your open.mp server folder, and it will pick your `server.cfg` and load your scripts from `gamemodes` and `filterscripts` folders, and also load legacy plugins from your `plugins` folder. Please note that memory hacking plugins won't work, and the commonly used ones should be fine. (i.e: sscanf, streamer, MySQL, discord-connector, crashdetect and etc)  

## Report bugs and behavior differences
You can do that by creating issues in [issues](https://github.com/openmultiplayer/server-beta/issues) but keep that in mind you are supposed to use and go with pre-made templates as much as possible.

### **Before you create an issue**
1. Go to https://github.com/openmultiplayer/server-beta/issues 
2. Use the integrated search input field to make sure that your issue has not been posted yet.

### **When you proceed to post an issue**
1. Visit https://github.com/openmultiplayer/server-beta/issues/new/choose
2. Select "open.mp Server Bug Report", "Different Behavior Compared To SA:MP Server".
3. Use this template and fill it out with information relevant to this issue.

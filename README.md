# open.mp server open beta test

## Introduction
The open.mp server project is a SA:MP server replacement, you can run your scripts with open.mp and your players are still able to join your server with SA:MP clients, but with a few differences on server side, which are explained below.  

The open.mp server has undergone so many tests in the past few months, before and after the closed beta testing phase where we picked people to help us privately; 
but now open.mp has entered a new phase and we're finally going for a public beta release so everyone can participate by finding any remaining unknown issues.  

The open.mp server has been tested extensively in production for months on a Romanian server with a 1000 player daily peak called [nephrite.ro](https://nephrite.ro/) and so far it has been a great experience for us. Performance wise open.mp has been great and results in vastly improved performance and stability over the SA:MP server.

## Compatibility
While an aim of this project is close feature parity with the existing SA:MP server to make porting easy (before we can start doing more interesting things, of which we have many many ideas), 100% compatibility is impossible for one simple reason - the SA:MP server has bugs*.  Reproducing the bugs is silly - another aim of the project is fixing and improving upon the server.  Those aims must thus be balanced and while we believe we have done an excellent job maintaining backwards-compatibility there are a few areas where the original behaviour was not quite right (or just downright broken) and we have taken the lead from fixes.inc in terms of semantics.  You can view the fixes.inc readme if you want a full list of these changes (those of you already using that include can now remove it), but a few notable ones brought up repeatedly are:

* Pool size functions now return `-1` when there are no entries.
* Deprecated functions are properly deprecated.
* `OnPlayerConnect` and `OnPlayerDisconnect` are called when scripts load and unload (thus the players and scripts are connected).  There is a new reason `4` for disconnections in this case.

\* All software has bugs, including this server, that's not a slight against SA:MP specifically.

## Where do I start?
You can start by going to [Releases](https://github.com/openmultiplayer/server-beta/releases) to download the **latest** beta version to test your scripts with.  
You can easily set up your server as it's almost like how the SA:MP server works but with some small differences if you want to do things our way (we still support the way SA:MP works with `server.cfg` and its file structure, having gamemodes, filterscripts and scriptfiles folders for example).

**The Windows build requires the [Microsoft Visual C++ Redistributable 2015-2019](https://aka.ms/vs/17/release/vc_redist.x86.exe).**

- **New implemented natives:** https://gist.github.com/AmyrAhmady/94a33fc502c2694032523969e7d2ee02
- **List of converted memory hacking plugins:** [open.mp plugin list](https://github.com/openmultiplayer/server-beta/blob/master/PLUGINLIST.md)

## What am I supposed to do as a tester and how can I help?
Firstly, what we want is for you to slowly port your gamemodes and scripts to open.mp, which you normally shouldn't have issues with unless you have memory hacking plugins or we haven't added support for the needed features yet (we have over 150 YSF natives already built in and the rest are coming as well). By running your script with open.mp and connecting to it, you can see if there are any differences and behaviour changes and report them to us properly by giving us enough information to reproduce and fix the issue.

But what if you don't have a script of your own and you are still interested in testing? Another thing that can be really helpful to us is testing what we have already created and implemented, as in current natives we have and all the extra ones.  
At the time of writing this we have all the latest SA:MP **0.3.7** natives implemented, including many new ones either done by us or ported from YSF to be built into open.mp instead.
You can start with testing those natives and their behaviour by checking the results either returned by those used natives or callback calls.

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
If you want to go with the way SA:MP works, all you have to do is drop your file structure in your open.mp server folder (or your open.mp files in your SA:MP server root folder), and it will read your `server.cfg` and load your scripts from the `gamemodes` and `filterscripts` folders, and also load legacy plugins from your `plugins` folder. Please note that memory hacking plugins won't work but the commonly used ones should be fine. (i.e: sscanf, streamer, MySQL, discord-connector, crashdetect, etc.)  
We're working on adding our own versions of most known memory hacking plugins too. (i.e: remaining YSF features, pawn.cmd, pawn.raknet, FCNPC and etc)

## Report bugs and behaviour differences
You can do that by creating issues in [issues](https://github.com/openmultiplayer/server-beta/issues) but keep in mind you are supposed to use the pre-made templates as much as possible.

### **Before you create an issue**
1. Go to https://github.com/openmultiplayer/server-beta/issues 
2. Use the integrated search field to make sure that your issue has not been posted yet.

### **When you proceed to post an issue**
1. Visit https://github.com/openmultiplayer/server-beta/issues/new/choose
2. Select "open.mp Server Bug Report", "Different Behaviour Compared To SA:MP Server".
3. Use this template and fill it out with information relevant to this issue.

# LoLTimer  
> **DISCLAIMER**: This is an old project that no longer serves its purpose. I mainly uploaded it to GitHub to learn the gist of it, and also to try and polish this app (fix code & add new functionality) for a _portfolio_ standpoint.  
Pull requests are always welcomed, yet discouraged. Thank you for your understanding.

Until [July 16th, 2014 (Patch 4.12)](http://na.leagueoflegends.com/en/news/game-updates/patch/patch-412-notes#patch-jungle-timers), if you wanted to manage the jungle respawn timers (the time it took the jungle mobs to respawn once killed) in League of Legends, you had to _manually_ keep record of them-- ie. through the ingame chat.  
The other option you had back then were third-party apps, which I had no use for other than for those timers (like _Curse Voice_) or I simply didn't really trusted.  
For that reason, I decided to try myself and made a small app to automate this process.

![](https://github.com/ktox/LoLTimer/blob/master/docs/images/ss-loltimer.png)

Made way back in 2014, it's written under the [***ZinjaI*** IDE](http://zinjai.sourceforge.net/) using the tools I had available back then:
 - **C++03**
 - **wxWidgets 2.8** (with help from [**wxFormBuilder**](https://github.com/wxFormBuilder/wxFormBuilder)), for _GUI_ and _Sound_.
 - **SFML 2** (now updated to 2.4.2), for _Keybinding_.
 
 ## Install
 Just [download](https://github.com/ktox/LoLTimer/releases) the most recent ZIP file available, extract it and run the _.exe_. That's it!  
 
 Since it is being compiled using _static_ libraries, the .exe can be a bit big. But, at the same time, _it doesn't need anything_ other than the **wav** folder (which I plan to merge into the executable in the near future) in order to work. :)
 
 ## Usage
 Press the "**Available**" button for the monster you want to start the timer of.  
 A voice will remind you of the time when you have _60_ and _10_ seconds left, and _when it respawns_.  
 
 Alternatively, the following keybinds are already set up for you:  
 
| Camp       | Key |
| -----------|:---:|
| Dragon     | F6  |
| Baron      | F7  |
| Their Red  | F8  |
| Their Blue | F9  |
| Our Red    | F10 |
| Our Blue   | F11 |

In both cases, while the timer for a camp is running, the button changes to "**DOWN**". You can _stop_ it by clicking on it again.

**Neither the _Language_ nor the _Reminder_ sections work yet-- they're dummies for future functionality**.

## TODO
> This section covers some stuff I want to fix, change or add. Still not sure if I'll cover all this, or even work on something not mentioned here.

- Add a _changelog_ (probably using a _date_, rather than a _versioning_ format)
- Fix some class responsabilities I don't like
- Integrate the _.wav_ files into the exe
- Try and reduce the file size (maybe work around the libraries?)
- Use JSON to bring Spanish language in a _non-hardcoded_ way and user keybindings
- Get the Reminders working -- those will allow the user to change the 60/10 warnings.
- Misc checks
- Codebase upgrade to C++11/14 (necessary? worth?)

OwnTracks iOS App 8.0 Release Notes
===================================

## OwnTracks 8.0.33
>Release date: 2015-05-?? for beta testing

Bug fix results from beta test

[FIX] crash when accessing addressbook with leading `@` in names #115, #202
[FIX] typo in .otrc/.otrw processing message #203
[NEW] add type to transition messages and suppress beacon notifications #199
[NEW] optimize beacon ranging result messages #204

## OwnTracks 8.0.32
>Release date: 2015-05-22 for beta testing

Bug fixes and small enhancements

[NEW] add export of waypoints only
[NEW] direct link to hosted from settings (called Manage Tracking)
[FIX] clean database only if .otrc file received (not for .otrw)
[FIX] correct beacon region indicator when all beacons reset

## OwnTracks 8.0.31
>Release date: 2015-05-21 for alpha testers only

Beacon related bug fixes

[FIX] waypoints were deleted after being imported
[FIX] correct beacon region indicator when using multiple beacons

## OwnTracks 8.0.30
>Release date: 2015-05-?? for alpha testers only

Public Mode UI Clarity

[NEW] show base topic in location details screen #198
[NEW] disable forced crash button
[NEW] implement new .otrc format // unfortunately Safari on iOS does not support direct download and open in app

## OwnTracks 8.0.29
>Release date: 2015-05-17 for alpha testers only

App crashing Down Under

[FIX] crash when linking to address book entry w/o contact image #196

## OwnTracks 8.0.28
>Release date: 2015-05-09 for alpha testers only

Bug fixing and avoiding

[FIX] avoid iPad CLLocationManager reports <nil> location #192
[FIX] fixed iPad export settings popup location #187

## OwnTracks 8.0.27
>Release date: 2015-05-08 for alpha testers only

Preparing for launch 3

[NEW] user warning when no location is available

## OwnTracks 8.0.26
>Release date: 2015-05-08 (skipped)

Preparing for launch 2

[FIX] correct link to registration site

## OwnTracks 8.0.25
>Release date: 2015-05-08 for alpha testers only

Preparing for launch

[NEW] Update Public and Hosted Mode settings
[NEW] Upgrade to CocoaPods 0.37
[NEW] Upgrade to fabric.io 1.2.5

## OwnTracks 8.0.24
>Release date: 2015-05-07 for alpha testers only

Bugfix continued

[FIX] Fixed crash when exporting settings in Hosted Mode #184
[NEW] Implement forced crash button for iPad too #185
[NEW] Warning when switching between Modes #182
                    	
## OwnTracks 8.0.23
>Release date: 2015-05-06 for alpha testers only

Bugfix for Hosted Mode

[FIX] Anonymous location publishes before entering user credentials are suppressed #180
[FIX] Enabled response to 'reportLocation' command in hosted mode #179
                    	
## OwnTracks 8.0.22
>Release date: 2015-05-03 for alpha testers only

Bugfix message processing

[FIX] db updates are saved to "disk" after processing incoming messages  #176
                    	
## OwnTracks 8.0.21
>Release date: 2015-05-02 for alpha testers only

Bugfix for short lived connections

[FIX] Messages queued and not delivered although in Wifi environment #173
                    	
## OwnTracks 8.0.20
>Release date: 2015-05-01 for alpha testers only

Hunting bugs still

[FIX] Today widget paging on last page causes crash #169
[FIX] Freeze screen after reconnect and a bunch of queued messages #175
                    	
## OwnTracks 8.0.19
>Release date: 2015-05-01 for alpha testers only

Tracing down some bugs

[NEW] A few connection details are logged to fabrics.io which are transferred when a crash happens or is forced #173
[NEW] You may force a crash using a button next to the version display on the Settings tab
[FIX] duplicate publish of current location when tapping long with 3 fingers on iPad #168
[FIX] User feedback is now more direct when long tapping with 3 fingers #173
[FIX] Freeze of screen is eliminated by avoiding unnecessary UI re-draws #174

## OwnTracks 8.0.18
>Release date: 2015-04-27 for alpha testers only (8.0.17 skipped)

And here it comes: Apple Watch --- Wrist ready
as well as fixes and enhancements to a number of UI issues

[NEW] Apple Watch shows your closes friends (all friends linked to address book) same as Today widget #113
[NEW] New more intuitive action sheets for Follow icon, Mode icon, and Ranging icon #119 #164 #165 #166
[NEW] Entering or leaving a region triggers location publish again (was lost when we moved events to subtopic) #159
[NEW] Authorisation settings in Hosted mode are picked up immediately after hitting return #157
[NEW] Editing/Adding waypoint is now possible by long-pressing on map and by dragging waypoints #156 #155
[FIX] Coloring of regions on map corresponds now to enter/leave events #123
[FIX] Connection idle (blue indicator) after startup is eliminated #109

## OwnTracks 8.0.16
>Release date: 2015-04-23 for alpha testers only

Elaborated on iPad and Hosted Mode

[NEW] Separate settings for user, device and token in Hosted mode #154
[FIX] Fix missing link on iPad from settings to effective settings display #153
[FIX] Fix missing display on iPad for effective subscriptions #152

## OwnTracks 8.0.15
>Release date: 2015-04-20 for alpha testers only (8.0.14 skipped)

Found a number of bugs while testing in different environments

[NEW] Clearer UI in settings tab for Check and Mode #145
[FIX] Hitting Annotation Info in map before hiding Navigation Bar opened Status view without possibility to return #147
[NEW] On reconnect (or when switching Modes) a location update is published #148
[FIX] correct default subscriptions for non-standard topic settings #149
[FIX] notifications in-app and in iOS Notification Center when entering/leaving regions #150

## OwnTracks 8.0.13
>Release date: 2015-04-19 for alpha testers only

Testing in different private environments

* [FIX] process incoming topics with leading slash correctly #143
* [NEW] Rename Mode Own to Private #144

## OwnTracks 8.0.12
>Release date: 2015-04-18 for alpha testers only

UI feedback said the settings tab is confusing when switching between modes

* [NEW] Dynamic field selection in settings tab depending on Mode

## OwnTracks 8.0.11
>Release date: 2015-04-16 for alpha testers only

Extending Public Mode

* [NEW] Public, Hosted, and Own modes
* [FIX] Load correct image format for assigned friends without image in address book

## OwnTracks 8.0.10
>Release date: 2015-04-13 for alpha testers only

You were having problems bootstrapping a new install with the help of a saved config file.

* [FIX] loading config (.otrc) while settings tab was open did not update values #140

## OwnTracks 8.0.9
>Release date: 2015-04-12 for alpha testers only

You experienced crashes, missed faces on the map, missed enter/leave notifications.

* [FIX] fixes a crash happening when a face is available for a user, but no locations
	have been recorded yet #137
* [FIX] makes sure a face is shown on the map even when face is processed after
	initial display of the map point #138
* [FIX] processes face for own device (formerly faces were processed for other devices only)
* [FIX] re-enabled local notification for own enter/leave events #139

## OwnTracks 8.0.8
>Release date: 2015-04-11 for alpha testers only

You always missed the possibility to hide the keyboard in settings.
You wondered which updates OwnTracks is doing in the background.
You experienced crashes when inserting new waypoints or watched incorrect list display in location view.

* [NEW] hit the return key in text inputs hides the keyboard (implies extended keyboard for numeric inputs)
* [NEW] the number of received but not yet processed updates is displayed as a red badge next to the friends
	tab on iPhone, or next to the friends tab in the master view on the iPad.
	The display of locations to be transmitted next to the connection status indicator was dropped. This
	information is still shown as the badge value on the launcher screen.
* [NEW] drop sections in location view to avoid missing entries. Location updates and Waypoints are now shown
	in a single section, sorted by their timestamp. Waypoints are marked with a blue circle.
* [FIX] correct update table view after multiple changes to database #107, #128, #131, #132
* [FIX] password was not imported from config file
* [FIX] crash when pointing to an invalid address book entry

## OwnTracks 8.0.7
>Release date: 2015-04-08 for alpha testers only

* [FIX] re-subscribe to correct topics after change Public Mode
* [FIX] import config new format (numbers and booleans instead of strings)
* [FIX] auto enabling Public Mode only if first install

## OwnTracks 8.0.6
>Release date: 2015-04-08 for beta testers - laster revoked due to stability issues

* [NEW] display images from address book or MQTT (face) on Today widget or Watch
* [NEW] receive faces and names via MQTT and store in local db
* [NEW] public mode as initial setting. Public mode connects to predifined broker, hiding
	all other configuration fields
* [FIX] no subscription to `cmd` subtopic



Migrating to 8.0 from 7.5.1
===========================

OwnTracks 8.0 is a major release with a number of enhancements.


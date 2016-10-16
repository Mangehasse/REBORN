/*
    File: fn_welcomeNotification.sqf
    Author:

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'><img image='textures\arp.paa' /></t><br /><br />";
_message = _message + "Keep in mind that this server is new, so bugs will appear. Please report them here: <a href='http://www.arpgaming.invisionzone.com/forum/41-bug-reporting/' color='#56BDD6'>Bug Reporting</a><br /><br />";
_message = _message + "Useful Links (click on the links to open your browser)<br /><br />";
_message = _message + "Check out our Website <a href='http://www.arpgaming.nu/' color='#56BDD6'>Arpgaming.nu</a> for the latest news, announcements and changelogs.<br /><br />";
_message = _message + "Make sure you read our <a href='view-source:http://arpgaming.invisionzone.com/topic/9-general-rules/' color='#56BDD6'>Rules</a> before you begin your adventure on Altis.<br /><br />";
_message = _message + "TeamSpeak 3 Address: ts.arpgaming.nu<br /><br />";


//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;

// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Version: 1.0
//	@file Name: Door_lockDoor.sqf
//	@file Author: LouD / Cael817 for original script
//	@file Description: Door script

private ["_doorFinder","_door"];
_doorFinder = (nearestObjects [player, ["Land_Canal_Wall_10m_F"], 10]);
_door = _doorFinder select 0;

if (!isNil "_door" && {!isNull _door}) then
{
	[[netId _door, false], "A3W_fnc_hideObjectGlobal", _door] call A3W_fnc_MP;
	hint "Your door is closed";
}
else 
{
	hint "No locked door found";
};
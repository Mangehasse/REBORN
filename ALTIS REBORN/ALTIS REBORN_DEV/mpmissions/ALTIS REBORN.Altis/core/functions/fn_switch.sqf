//
// File: fn_switch.sqf
// Author: Alduin86
//
// Description:
// Switch for pickaxe, netting and co
//
if(player distance (getMarkerPos "lead_1") < 30) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
        
if(player distance (getMarkerPos "lead_2") < 30) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
        
if(player distance (getMarkerPos "iron_1") < 30) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
if(player distance (getMarkerPos "iron_2") < 30) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
 
if(player distance (getMarkerPos "salt_1") < 120) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
 
if(player distance (getMarkerPos "sand_1") < 75) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
 
if(player distance (getMarkerPos "diamond_1") < 50) then
        {
           [] spawn life_fnc_pickAxeUse;
        };

if(player distance (getMarkerPos "diamond_2") < 50) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
 
if(player distance (getMarkerPos "oil_1") < 40) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
        
if(player distance (getMarkerPos "oil_2") < 80) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
        
if(player distance (getMarkerPos "rock_1") < 50) then
        {
           [] spawn life_fnc_pickAxeUse;
        };
 
if(player distance (getMarkerPos "zinc_1") < 50) then
        {
           [] spawn life_fnc_netzUse;
        }; 

if(player distance (getMarkerPos "silver_1") < 50) then
        {
           [] spawn life_fnc_netzUse;
        }; 

if(player distance (getMarkerPos "silver_2") < 50) then
        {
           [] spawn life_fnc_netzUse;
        }; 
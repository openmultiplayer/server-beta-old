// Player
native TogglePlayerWidescreen(playerid, bool:set);
native IsPlayerWidescreenToggled(playerid);
native GetSpawnInfo(playerid, &teamid, &modelid = 0, &Float:fSpawnX = 0.0, &Float:fSpawnY = 0.0, &Float:fSpawnZ = 0.0, &Float:fAngleZ = 0.0, &weapon1 = 0, &weapon1_ammo = 0, &weapon2 = 0, &weapon2_ammo = 0, &weapon3 = 0, &weapon3_ammo = 0);
native GetPlayerSkillLevel(playerid, skill);
native GetPlayerWeather(playerid);
native IsPlayerCheckpointActive(playerid);
native GetPlayerCheckpoint(playerid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0, &Float:fSize = 0.0);
native IsPlayerRaceCheckpointActive(playerid);
native GetPlayerRaceCheckpoint(playerid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0, &Float:fNextX = 0.0, &Float:fNextY = 0.0, &Float:fNextZ = 0.0, &Float:fSize = 0.0);
native GetPlayerWorldBounds(playerid, &Float:fMaxX, &Float:fMinX = 0.0, &Float:fMaxY = 0.0, &Float:fMinY = 0.0);
native IsPlayerInModShop(playerid);
native GetPlayerSirenState(playerid);
native GetPlayerLandingGearState(playerid);
native GetPlayerHydraReactorAngle(playerid);
native Float:GetPlayerTrainSpeed(playerid);
native Float:GetPlayerZAim(playerid);
native GetPlayerSurfingOffsets(playerid, &Float:fOffsetX, &Float:fOffsetY = 0.0, &Float:fOffsetZ = 0.0);
native GetPlayerRotationQuat(playerid, &Float:w, &Float:x = 0.0, &Float:y = 0.0, &Float:z = 0.0);
native GetPlayerDialogID(playerid);
native GetPlayerSpectateID(playerid);
native GetPlayerSpectateType(playerid);
native GetPlayerRawIp(playerid);
native SetPlayerGravity(playerid, Float:gravity);
native Float:GetPlayerGravity(playerid);
native SetPlayerAdmin(playerid, bool:admin); // Set player as RCON admin
native IsPlayerSpawned(playerid);
native IsPlayerControllable(playerid);
native IsPlayerCameraTargetEnabled(playerid);
native TogglePlayerGhostMode(playerid, bool:toggle);
native GetPlayerGhostMode(playerid);
native GetPlayerBuildingsRemoved(playerid);
native GetPlayerAttachedObject(playerid, index, &modelid, &bone = 0, &Float:fX = 0.0, &Float:fY = 0.0, &Float:fZ = 0.0, &Float:fRotX = 0.0, &Float:fRotY = 0.0, &Float:fRotZ = 0.0, &Float:fScaleX = 0.0, &Float:fScaleY = 0.0, &Float:fScaleZ = 0.0, &materialcolor1 = 0, &materialcolor2 = 0);
native SendClientMessagef(playerid, color, const message[], {Float,_}:...);
native GameTextForPlayerf(playerid, displaytime, style, const message[], {Float,_}:...);
native SendPlayerMessageToPlayerf(playerid, senderid, const message[], {Float,_}:...);
native RemovePlayerWeapon(playerid, weaponid);
native HidePlayerDialog(playerid);
native bool:IsPlayerUsingOfficialClient(playerid);

#if !defined AllowPlayerTeleport
  native bool:AllowPlayerTeleport(playerid, bool:allow);
#endif

native bool:IsPlayerTeleportAllowed(playerid);
native bool:AllowPlayerWeapons(playerid, bool:allow);
native bool:ArePlayerWeaponsAllowed(playerid);

// Textdraw - Global
native IsValidTextDraw(Text:textdrawid);
native IsTextDrawVisibleForPlayer(playerid, Text:textdrawid);
native TextDrawGetString(Text:textdrawid, text[], len = sizeof(text));
native TextDrawSetPos(Text:textdrawid, Float:fX, Float:fY); // You can change textdraw pos with it, but you need to use TextDrawShowForPlayer() after that
native TextDrawGetLetterSize(Text:textdrawid, &Float:fX, &Float:fY = 0.0);
native TextDrawGetTextSize(Text:textdrawid, &Float:fX, &Float:fY = 0.0);
native TextDrawGetPos(Text:textdrawid, &Float:fX, &Float:fY = 0.0);
native TextDrawGetColor(Text:textdrawid);
native TextDrawGetBoxColor(Text:textdrawid);
native TextDrawGetBackgroundColor(Text:textdrawid);
native TextDrawGetShadow(Text:textdrawid);
native TextDrawGetOutline(Text:textdrawid);
native TextDrawGetFont(Text:textdrawid);
native TextDrawIsBox(Text:textdrawid);
native TextDrawIsProportional(Text:textdrawid);
native TextDrawIsSelectable(Text:textdrawid);
native TextDrawGetAlignment(Text:textdrawid);
native TextDrawGetPreviewModel(Text:textdrawid);
native TextDrawGetPreviewRot(Text:textdrawid, &Float:fRotX, &Float:fRotY = 0.0, &Float:fRotZ = 0.0, &Float:fZoom = 0.0);
native TextDrawGetPreviewVehCol(Text:textdrawid, &color1, &color2 = 0);
native TextDrawSetStringForPlayer(Text:textdrawid, playerid, const fmat[], {Float,_}:...);

// Textdraw - Player
native IsValidPlayerTextDraw(playerid, PlayerText:textdrawid);
native IsPlayerTextDrawVisible(playerid, PlayerText:textdrawid);
native PlayerTextDrawGetString(playerid, PlayerText:textdrawid, text[], len = sizeof(text));
native PlayerTextDrawSetPos(playerid, PlayerText:textdrawid, Float:fX, Float:fY);
native PlayerTextDrawGetLetterSize(playerid, PlayerText:textdrawid, &Float:fX, &Float:fY = 0.0);
native PlayerTextDrawGetTextSize(playerid, PlayerText:textdrawid, &Float:fX, &Float:fY = 0.0);
native PlayerTextDrawGetPos(playerid, PlayerText:textdrawid, &Float:fX, &Float:fY = 0.0);
native PlayerTextDrawGetColor(playerid, PlayerText:textdrawid);
native PlayerTextDrawGetBoxColor(playerid, PlayerText:textdrawid);
native PlayerTextDrawGetBackgroundCol(playerid, PlayerText:textdrawid);
native PlayerTextDrawGetShadow(playerid, PlayerText:textdrawid);
native PlayerTextDrawGetOutline(playerid, PlayerText:textdrawid);
native PlayerTextDrawGetFont(playerid, PlayerText:textdrawid);
native PlayerTextDrawIsBox(playerid, PlayerText:textdrawid);
native PlayerTextDrawIsProportional(playerid, PlayerText:textdrawid);
native PlayerTextDrawIsSelectable(playerid, PlayerText:textdrawid);
native PlayerTextDrawGetAlignment(playerid, PlayerText:textdrawid);
native PlayerTextDrawGetPreviewModel(playerid, PlayerText:textdrawid);
native PlayerTextDrawGetPreviewRot(playerid, PlayerText:textdrawid, &Float:fRotX, &Float:fRotY = 0.0, &Float:fRotZ = 0.0, &Float:fZoom = 0.0);
native PlayerTextDrawGetPreviewVehCol(playerid, PlayerText:textdrawid, &color1, &color2 = 0);

// Gangzone - Global
native IsValidGangZone(zoneid);
native IsPlayerInGangZone(playerid, zoneid);
native IsGangZoneVisibleForPlayer(playerid, zoneid);
native GangZoneGetColorForPlayer(playerid, zoneid);
native GangZoneGetFlashColorForPlayer(playerid, zoneid);
native IsGangZoneFlashingForPlayer(playerid, zoneid);
native GangZoneGetPos(zoneid, &Float:fMinX, &Float:fMinY = 0.0, &Float:fMaxX = 0.0, &Float:fMaxY = 0.0);
native UseGangZoneCheck(zoneid, bool:toggle);

// Gangzone callbacks - Global
forward OnPlayerEnterGangZone(playerid, zoneid);
forward OnPlayerLeaveGangZone(playerid, zoneid);
forward OnPlayerClickGangZone(playerid, zoneid);


// Gangzone - Player
native CreatePlayerGangZone(playerid, Float:fMinX, Float:fMinY, Float:fMaxX, Float:fMaxY);
native PlayerGangZoneDestroy(playerid, zoneid);
native PlayerGangZoneShow(playerid, zoneid, color);
native PlayerGangZoneHide(playerid, zoneid);
native PlayerGangZoneFlash(playerid, zoneid, color);
native PlayerGangZoneStopFlash(playerid, zoneid);
native IsValidPlayerGangZone(playerid, zoneid);
native IsPlayerInPlayerGangZone(playerid, zoneid);
native IsPlayerGangZoneVisible(playerid, zoneid);
native PlayerGangZoneGetColor(playerid, zoneid);
native PlayerGangZoneGetFlashColor(playerid, zoneid);
native IsPlayerGangZoneFlashing(playerid, zoneid);
native PlayerGangZoneGetPos(playerid, zoneid, &Float:fMinX, &Float:fMinY, &Float:fMaxX, &Float:fMaxY);
native UsePlayerGangZoneCheck(playerid, zoneid, bool:use);

// Gangzone callbacks - Player
forward OnPlayerEnterPlayerGangZone(playerid, zoneid);
forward OnPlayerLeavePlayerGangZone(playerid, zoneid);
forward OnPlayerClickPlayerGangZone(playerid, zoneid);


// Object - Global
native Float:GetObjectDrawDistance(objectid);
native Float:GetObjectMoveSpeed(objectid);
native GetObjectTarget(objectid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0);
native GetObjectMovingTargetPos(objectid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0);
native GetObjectMovingTargetRot(objectid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0);
native GetObjectAttachedData(objectid, &attached_vehicleid, &attached_objectid = 0, &attached_playerid = 0);
native GetObjectAttachedOffset(objectid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0, &Float:fRotX = 0.0, &Float:fRotY = 0.0, &Float:fRotZ = 0.0);
native GetObjectSyncRotation(objectid);
native IsObjectMaterialSlotUsed(objectid, materialindex); // Return values: 1 = material, 2 = material text
native GetObjectMaterial(objectid, materialindex, &modelid, txdname[], txdnamelen = sizeof(txdname), texturename[], texturenamelen = sizeof(texturename), &materialcolor = 0);
native GetObjectMaterialText(objectid, materialindex, text[], textlen = sizeof(text), &materialsize, fontface[], fontfacelen = sizeof(fontface), &fontsize = 0, &bold = 0, &fontcolor = 0, &backcolor = 0, &textalignment = 0);
native IsObjectNoCameraCol(objectid);


// Object - Player
native Float:GetPlayerObjectDrawDistance(playerid, objectid);
native SetPlayerObjectMoveSpeed(playerid, objectid, Float:fSpeed);
native Float:GetPlayerObjectMoveSpeed(playerid, objectid);
native GetPlayerObjectTarget(playerid, objectid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0);
native GetPlayerObjectMovingTargetPos(playerid, objectid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0);
native GetPlayerObjectMovingTargetRot(playerid, objectid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0);
native GetPlayerObjectAttachedData(playerid, objectid, &attached_vehicleid, &attached_objectid = 0, &attached_playerid = 0);
native GetPlayerObjectAttachedOffset(playerid, objectid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0, &Float:fRotX = 0.0, &Float:fRotY = 0.0, &Float:fRotZ = 0.0);
native GetPlayerObjectSyncRotation(playerid, objectid);
native IsPlayerObjectMaterialSlotUsed(playerid, objectid, materialindex); // Return values: 1 = material, 2 = material text
native GetPlayerObjectMaterial(playerid, objectid, materialindex, &modelid, txdname[], txdnamelen = sizeof(txdname), texturename[], texturenamelen = sizeof(texturename), &materialcolor = 0);
native GetPlayerObjectMaterialText(playerid, objectid, materialindex, text[], textlen = sizeof(text), &materialsize, fontface[], fontfacelen = sizeof(fontface), &fontsize = 0, &bold = 0, &fontcolor = 0, &backcolor = 0, &textalignment = 0);
native IsPlayerObjectNoCameraCol(playerid, objectid);
native GetPlayerSurfingPlayerObjectID(playerid);
native GetPlayerCameraTargetPlayerObj(playerid);
native GetObjectType(playerid, objectid);


// Pickup - Global
native IsValidPickup(pickupid);
native IsPickupStreamedIn(playerid, pickupid);
native GetPickupPos(pickupid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0);
native GetPickupModel(pickupid);
native GetPickupType(pickupid);
native GetPickupVirtualWorld(pickupid);
native SetPickupPos(pickupid, Float:fX, Float:fY, Float:fZ, bool:update=true);
native SetPickupModel(pickupid, model, bool:update=true);
native SetPickupType(pickupid, type, bool:update=true);
native SetPickupVirtualWorld(pickupid, virtualworld);
native ShowPickupForPlayer(playerid, pickupid);
native HidePickupForPlayer(playerid, pickupid);
native IsPickupHiddenForPlayer(playerid, pickupid);

// Menu
native IsMenuDisabled(Menu:menuid);
native IsMenuRowDisabled(Menu:menuid, row);
native GetMenuColumns(Menu:menuid);
native GetMenuItems(Menu:menuid, column);
native GetMenuPos(Menu:menuid, &Float:fX, &Float:fY = 0.0);
native GetMenuColumnWidth(Menu:menuid, &Float:fColumn1, &Float:fColumn2 = 0.0);
native GetMenuColumnHeader(Menu:menuid, column, header[], len = sizeof(header));
native GetMenuItem(Menu:menuid, column, itemid, item[], len = sizeof(item));

// 3D Text - Global
native bool:IsValid3DTextLabel(Text3D:id);
native Is3DTextLabelStreamedIn(playerid, Text3D:id);
native Get3DTextLabelText(Text3D:id, text[], len = sizeof(text));
native Get3DTextLabelColor(Text3D:id);
native Get3DTextLabelPos(Text3D:id, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0);
native Set3DTextLabelDrawDistance(Text3D:id, Float:dist);
native Float:Get3DTextLabelDrawDistance(Text3D:id);
native bool:Get3DTextLabelLOS(Text3D:id);
native Set3DTextLabelLOS(Text3D:id, bool:status);
native Set3DTextLabelVirtualWorld(Text3D:id, worldid);
native Get3DTextLabelVirtualWorld(Text3D:id);
native Get3DTextLabelAttachedData(Text3D:id, &attached_playerid, &attached_vehicleid = 0);

// 3D Text - Player
native bool:IsValidPlayer3DTextLabel(playerid, PlayerText3D:id);
native GetPlayer3DTextLabelText(playerid, PlayerText3D:id, text[], len = sizeof(text));
native GetPlayer3DTextLabelColor(playerid, PlayerText3D:id);
native GetPlayer3DTextLabelPos(playerid, PlayerText3D:id, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0);
native SetPlayer3DTextLabelDrawDist(playerid, PlayerText3D:id, Float:fDist);
native Float:GetPlayer3DTextLabelDrawDist(playerid, PlayerText3D:id);
native bool:GetPlayer3DTextLabelLOS(playerid, PlayerText3D:id);
native SetPlayer3DTextLabelLOS(playerid, PlayerText3D:id, bool:status);
native GetPlayer3DTextLabelVirtualW(playerid, PlayerText3D:id);
native GetPlayer3DTextLabelAttached(playerid, PlayerText3D:id, &attached_playerid, &attached_vehicleid = 0);

// Vehicle
native GetVehicleSpawnInfo(vehicleid, &Float:fX, &Float:fY = 0.0, &Float:fZ = 0.0, &Float:fRot = 0.0, &color1 = 0, &color2 = 0);
native SetVehicleSpawnInfo(vehicleid, modelid, Float:fX, Float:fY, Float:fZ, Float:fAngle, color1, color2, respawntime = -2, interior = -2);
native GetVehicleColor(vehicleid, &color1, &color2 = 0);
native GetVehiclePaintjob(vehicleid);
native GetVehicleInterior(vehicleid);
native GetVehicleNumberPlate(vehicleid, plate[], len = sizeof(plate));
native SetVehicleRespawnDelay(vehicleid, delay);
native GetVehicleRespawnDelay(vehicleid);
native GetVehicleTower(vehicleid);
native GetVehicleCab(vehicleid);
native GetVehicleOccupiedTick(vehicleid);
native HasVehicleBeenOccupied(vehicleid);
native IsVehicleOccupied(vehicleid);
native GetVehicleRespawnTick(vehicleid);
native IsVehicleDead(vehicleid);
native ToggleVehicleSirenEnabled(vehicleid, enabled);
native IsVehicleSirenEnabled(vehicleid);
native GetVehicleModelCount(modelid);
native GetVehicleLastDriver(vehicleid);
native GetVehicleDriver(vehicleid);
native GetVehicleModelsUsed();
native GetVehicleSirenState(vehicleid);
native GetVehicleLandingGearState(vehicleid);
native GetVehicleHydraReactorAngle(vehicleid);
native Float:GetVehicleTrainSpeed(vehicleid);
native GetVehicleMatrix(vehicleid, &Float:fRightX, &Float:fRightY = 0.0, &Float:fRightZ = 0.0, &Float:fUpX = 0.0, &Float:fUpY = 0.0, &Float:fUpZ = 0.0, &Float:fAtX = 0.0, &Float:fAtY = 0.0, &Float:fAtZ = 0.0);

// Actor
native GetActorSkin(actorid);
native SetActorSkin(actorid, model);
native GetActorSpawnInfo(actorid, &skinid, &Float:fX = 0.0, &Float:fY = 0.0, &Float:fZ = 0.0, &Float:fAngle = 0.0);
native GetActorAnimation(actorid, animlib[], animlibsize = sizeof(animlib), animname[], animnamesize = sizeof(animname), &Float:fDelta, &loop = 0, &lockx = 0, &locky = 0, &freeze = 0, &time = 0);

// Chat character replacement
native ToggleChatTextReplacement(bool:toggle);
native bool:ChatTextReplacementToggled();

// Classes
native GetAvailableClasses();
native GetPlayerClass(classid, &teamid, &modelid = 0, &Float:fSpawnX = 0.0, &Float:fSpawnY = 0.0, &Float:fSpawnZ = 0.0, &Float:fAngleZ = 0.0, &weapon1 = 0, &weapon1_ammo = 0, &weapon2 = 0, &weapon2_ammo = 0, &weapon3 = 0, &weapon3_ammo = 0);
native EditPlayerClass(classid, teamid, modelid, Float:fSpawnX, Float:fSpawnY, Float:fSpawnZ, Float:fAngleZ, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);

// Weapons
native GetWeaponSlot(weaponid);

// Core
native ClearBanList();
native IsBanned(const ipaddress[]);
native bool:IsValidNickName(const name[]);
native AllowNickNameCharacter(character, bool:allow);
native bool:IsNickNameCharacterAllowed(character);
native bool:AddServerRule(const name[], const value[]);
native bool:SetServerRule(const name[], const value[]);
native bool:IsValidServerRule(const name[]);
native bool:RemoveServerRule(const name[]);
native SendClientMessageToAllf(color, const message[], {Float,_}:...);
native GameTextForAllf(displaytime, style, const message[], {Float,_}:...);
native SendPlayerMessageToAllf(senderid, const message[], {Float,_}:...);
native SendRconCommandf(const command[], {Float,_}:...);
native GetRunningTimers();
native GetVehicles(outputVehicles[], size = sizeof outputVehicles);
native GetPlayers(outputPlayers[], size = sizeof outputPlayers);
native GetActors(outputActors[], size = sizeof outputActors);

#if !defined AllowAdminTeleport
  native AllowAdminTeleport(bool:allow);
#endif

native bool:IsAdminTeleportAllowed();

#if !defined AllowInteriorWeapons
  native AllowInteriorWeapons(bool:allow);
#endif

native bool:AreInteriorWeaponsAllowed();
native bool:AreAllAnimationsEnabled();
native void:EnableAllAnimations(bool:enable);
native GetWeather();

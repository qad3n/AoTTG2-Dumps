// Type: UI.MultiplayerRoomListPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MultiplayerRoomListPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/MultiplayerRoomListPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MultiplayerRoomListPopup.<>c__DisplayClass35_0$$.ctor
// il2cpp: void UI_MultiplayerRoomListPopup___c__DisplayClass35_0___ctor (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x40f93b0

void UI_MultiplayerRoomListPopup_<>c__DisplayClass35_0___ctor
               (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup.<>c__DisplayClass35_0$$<RefreshList>b__0
// il2cpp: void UI_MultiplayerRoomListPopup___c__DisplayClass35_0___RefreshList_b__0 (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x40fa5c0

void UI_MultiplayerRoomListPopup_<>c__DisplayClass35_0__<RefreshList>b__0
               (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_MultiplayerPasswordPopup_o *__this_01;
  System_String_o *pSVar2;
  Settings_MultiplayerSettings_o *__this_02;
  long lVar3;
  UI_MessagePopup_o *__this_03;
  UI_MultiplayerRoomListPopup_o *pUVar4;
  Photon_Realtime_RoomInfo_o *room;
  char cVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  
  pUVar4 = (__this->fields).__4__this;
  if (pUVar4 == (UI_MultiplayerRoomListPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  room = (__this->fields).room;
  if (DAT_05704840 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Requires user account to join");
    il2cpp_init_method_metadata(&"");
    DAT_05704840 = '\x01';
    if (DAT_0570483e != '\0') goto LAB_040f99fb;
LAB_040f9bf3:
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    DAT_0570483e = '\x01';
    iVar1 = *(int *)(TypeInfo_RoomProperty + 0xe4);
  }
  else {
    if (DAT_0570483e == '\0') goto LAB_040f9bf3;
LAB_040f99fb:
    iVar1 = *(int *)(TypeInfo_RoomProperty + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar6 = PhotonExtensions__GetBoolProperty
                    (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30),0,
                     (MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar6 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar5 = (char)bVar6;
    }
    else {
      bVar6 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar5 = (char)bVar6;
    }
    if (cVar5 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((lVar3 != 0) &&
         (__this_03 = *(UI_MessagePopup_o **)(lVar3 + 0x30), __this_03 != (UI_MessagePopup_o *)0x0))
      {
        UI_MessagePopup__Show(__this_03,"Requires user account to join",1,(MethodInfo *)0x0);
        return;
      }
      goto LAB_040f9d27;
    }
  }
  if (DAT_0570483d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&"");
    DAT_0570483d = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = PhotonExtensions__GetStringProperty
                     (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),""
                      ,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = PhotonExtensions__GetStringProperty
                     (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x20),""
                      ,(MethodInfo *)0x0);
  bVar6 = System_String__op_Inequality
                    (pSVar7,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
      __this_02 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
      pSVar7 = *(System_String_o **)&(room->fields).autoCleanUp;
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = PhotonExtensions__GetStringProperty
                         (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),
                          "",(MethodInfo *)0x0);
      if (__this_02 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__JoinRoom
                  (__this_02,pSVar7,pSVar8,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8)
                   ,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    (*(pUVar4->klass->vtable)._26_HideAllPopups.methodPtr)
              (pUVar4,(pUVar4->klass->vtable)._26_HideAllPopups.method);
    if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
      __this_01 = (pUVar4->fields)._multiplayerPasswordPopup;
      pSVar2 = *(System_String_o **)&(room->fields).autoCleanUp;
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = PhotonExtensions__GetStringProperty
                         (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),
                          "",(MethodInfo *)0x0);
      if (__this_01 != (UI_MultiplayerPasswordPopup_o *)0x0) {
        (__this_01->fields)._actualPasswordHash = pSVar7;
        il2cpp_runtime_glue(&(__this_01->fields)._actualPasswordHash);
        (__this_01->fields)._passwordSalt = pSVar8;
        il2cpp_runtime_glue(&(__this_01->fields)._passwordSalt,pSVar8);
        (__this_01->fields)._roomName = pSVar9;
        il2cpp_runtime_glue(&(__this_01->fields)._roomName,pSVar9);
        (__this_01->fields)._roomId = pSVar2;
        il2cpp_runtime_glue(&(__this_01->fields)._roomId);
        __this_00 = (__this_01->fields)._incorrectPasswordLabel;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
        UI_BasePopup__Show((UI_BasePopup_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_040f9d27:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_MultiplayerRoomListPopup__get_ThemePanel (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f79a0

System_String_o *
UI_MultiplayerRoomListPopup__get_ThemePanel
          (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704832 == '\0') {
    il2cpp_init_method_metadata(&"MultiplayerRoomListPopup");
    DAT_05704832 = '\x01';
  }
  return "MultiplayerRoomListPopup";
}


// UI.MultiplayerRoomListPopup$$get_HasPremadeContent
// il2cpp: bool UI_MultiplayerRoomListPopup__get_HasPremadeContent (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f79d0

bool_conflict
UI_MultiplayerRoomListPopup__get_HasPremadeContent
          (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MultiplayerRoomListPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerRoomListPopup__get_HorizontalPadding (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f79e0

int32_t UI_MultiplayerRoomListPopup__get_HorizontalPadding
                  (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerRoomListPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerRoomListPopup__get_VerticalPadding (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f79f0

int32_t UI_MultiplayerRoomListPopup__get_VerticalPadding
                  (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerRoomListPopup$$get_Width
// il2cpp: float UI_MultiplayerRoomListPopup__get_Width (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f7a00

float UI_MultiplayerRoomListPopup__get_Width
                (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.MultiplayerRoomListPopup$$get_Height
// il2cpp: float UI_MultiplayerRoomListPopup__get_Height (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f7a10

float UI_MultiplayerRoomListPopup__get_Height
                (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  return 660.0;
}


// UI.MultiplayerRoomListPopup$$Setup
// il2cpp: void UI_MultiplayerRoomListPopup__Setup (UI_MultiplayerRoomListPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40f7a20

void UI_MultiplayerRoomListPopup__Setup
               (UI_MultiplayerRoomListPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  int iVar3;
  uint uVar4;
  Settings_StringSetting_o *setting;
  Il2CppClass *pIVar5;
  UnityEngine_UI_Selectable_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  System_String_o *subCategory;
  int32_t fontSize;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UI_InputSettingElement_o *__this_02;
  UI_ElementStyle_o *__this_03;
  System_String_o *title;
  Il2CppObject *pIVar11;
  UnityEngine_UI_Text_o *pUVar12;
  System_String_o *pSVar13;
  System_Object_array *pSVar14;
  UnityEngine_UI_RawImage_o *__this_04;
  UnityEngine_Texture_o *value_00;
  uint uVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_UI_ColorBlock_o UStack_88;
  
  if (DAT_05704833 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Button___GetComponentsInChildren_Button);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_AddComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__29_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__29_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__29_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__29_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__29_4);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__29_5);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__29_6);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"0 ");
    il2cpp_init_method_metadata(&"RoomList");
    il2cpp_init_method_metadata(&"Page/RightButton");
    il2cpp_init_method_metadata(&"MultiplayerRoomListPopup");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"NoRoomsLabel");
    il2cpp_init_method_metadata(&"BackgroundTexture");
    il2cpp_init_method_metadata(&"Page/LeftButton");
    il2cpp_init_method_metadata(&"SearchInputSetting");
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Page/PageLabel");
    il2cpp_init_method_metadata(&"DefaultButton");
    il2cpp_init_method_metadata(&"RoomButton");
    il2cpp_init_method_metadata(&"PlayersOnlineLabel");
    il2cpp_init_method_metadata(&"Filters");
    il2cpp_init_method_metadata(&"FilterButton");
    il2cpp_init_method_metadata(&"DefaultLabel");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"PlayersOnline");
    il2cpp_init_method_metadata(&"BackgroundColor");
    il2cpp_init_method_metadata(&"NoRooms");
    il2cpp_init_method_metadata(&"MainBody");
    il2cpp_init_method_metadata(&"Search");
    il2cpp_init_method_metadata(&"RefreshButton");
    DAT_05704833 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "MultiplayerRoomListPopup";
  pSVar13 = "MainMenu";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar7,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = UI_UIManager__GetLocaleCommon("Create",(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar9,__this_01,pSVar7,0.0,pUVar8,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).BottomBar;
  pSVar7 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar9,__this_01,pSVar7,0.0,pUVar8,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).TopBar;
  if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
      (pUVar9 = UnityEngine_Transform__Find(pUVar9,"SearchInputSetting",(MethodInfo *)0x0),
      pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
     pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
    __this_02 = (UI_InputSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(pUVar10,MethodInfo_InputSettingElement_AddComponent_InputSettingEle);
    setting = (__this->fields)._filterQuery;
    __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_03,0x18,0.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
    title = UI_UIManager__GetLocaleCommon("Search",(MethodInfo *)0x0);
    pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_02 != (UI_InputSettingElement_o *)0x0) {
      UI_InputSettingElement__Setup
                (__this_02,(Settings_BaseSetting_o *)setting,__this_03,title,pSVar7,160.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,pUVar8,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).TopBar;
      if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
          (pUVar9 = UnityEngine_Transform__Find(pUVar9,"FilterButton",(MethodInfo *)0x0),
          pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
         (pIVar11 = UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar9,MethodInfo_Button_GetComponent_Button),
         pIVar11 != (Il2CppObject *)0x0)) {
        pIVar5 = pIVar11[0x10].klass;
        pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (pIVar5 != (Il2CppClass *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener
                    ((UnityEngine_Events_UnityEvent_o *)pIVar5,pUVar8,(MethodInfo *)0x0);
          pUVar9 = (__this->fields).TopBar;
          if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
              (pUVar9 = UnityEngine_Transform__Find(pUVar9,"RefreshButton",(MethodInfo *)0x0),
              pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
             (pIVar11 = UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pUVar9,MethodInfo_Button_GetComponent_Button),
             pIVar11 != (Il2CppObject *)0x0)) {
            pIVar5 = pIVar11[0x10].klass;
            pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (pIVar5 != (Il2CppClass *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener
                        ((UnityEngine_Events_UnityEvent_o *)pIVar5,pUVar8,(MethodInfo *)0x0);
              pUVar9 = (__this->fields).TopBar;
              if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                  (pUVar9 = UnityEngine_Transform__Find(pUVar9,"Page/LeftButton",(MethodInfo *)0x0),
                  pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
                 (pIVar11 = UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pUVar9,MethodInfo_Button_GetComponent_Button),
                 pIVar11 != (Il2CppObject *)0x0)) {
                pIVar5 = pIVar11[0x10].klass;
                pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                if (pIVar5 != (Il2CppClass *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener
                            ((UnityEngine_Events_UnityEvent_o *)pIVar5,pUVar8,(MethodInfo *)0x0);
                  pUVar9 = (__this->fields).TopBar;
                  if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                      (pUVar9 = UnityEngine_Transform__Find(pUVar9,"Page/RightButton",(MethodInfo *)0x0),
                      pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
                     (pIVar11 = UnityEngine_Component__GetComponent<object>
                                          ((UnityEngine_Component_o *)pUVar9,MethodInfo_Button_GetComponent_Button),
                     pIVar11 != (Il2CppObject *)0x0)) {
                    pIVar5 = pIVar11[0x10].klass;
                    pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    if (pIVar5 != (Il2CppClass *)0x0) {
                      UnityEngine_Events_UnityEvent__AddListener
                                ((UnityEngine_Events_UnityEvent_o *)pIVar5,pUVar8,(MethodInfo *)0x0)
                      ;
                      pUVar9 = (__this->fields).TopBar;
                      if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                         (pUVar9 = UnityEngine_Transform__Find
                                             (pUVar9,"Page/PageLabel",(MethodInfo *)0x0),
                         pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                        pUVar12 = (UnityEngine_UI_Text_o *)
                                  UnityEngine_Component__GetComponent<object>
                                            ((UnityEngine_Component_o *)pUVar9,MethodInfo_Text_GetComponent_Text);
                        (__this->fields)._pageLabel = pUVar12;
                        il2cpp_runtime_glue(&(__this->fields)._pageLabel,pUVar12);
                        pUVar9 = (__this->fields).SinglePanel;
                        if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                           (pUVar9 = UnityEngine_Transform__Find
                                               (pUVar9,"RoomList",(MethodInfo *)0x0),
                           pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                          pUVar10 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                          ppUVar1 = &(__this->fields)._roomList;
                          (__this->fields)._roomList = pUVar10;
                          il2cpp_runtime_glue();
                          pUVar10 = (__this->fields)._roomList;
                          if (((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
                              (pUVar9 = UnityEngine_GameObject__get_transform
                                                  (pUVar10,(MethodInfo *)0x0),
                              pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
                             (pUVar9 = UnityEngine_Transform__Find
                                                 (pUVar9,"NoRoomsLabel",(MethodInfo *)0x0),
                             pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                            pUVar10 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0
                                                );
                            ppUVar2 = &(__this->fields)._noRoomsLabel;
                            (__this->fields)._noRoomsLabel = pUVar10;
                            il2cpp_runtime_glue(ppUVar2,pUVar10);
                            pUVar10 = (__this->fields)._noRoomsLabel;
                            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar11 = UnityEngine_GameObject__GetComponent<object>
                                                  (pUVar10,MethodInfo_Text_GetComponent_Text);
                              pSVar7 = UI_UIManager__GetLocale
                                                 (pSVar13,subCategory,"NoRooms","",
                                                  "",(MethodInfo *)0x0);
                              if (pIVar11 != (Il2CppObject *)0x0) {
                                (*pIVar11->klass->vtable[0x4b].methodPtr)
                                          (pIVar11,pSVar7,pIVar11->klass->vtable[0x4b].method);
                                pUVar9 = (__this->fields).TopBar;
                                if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                   (pUVar9 = UnityEngine_Transform__Find
                                                       (pUVar9,"PlayersOnlineLabel",(MethodInfo *)0x0),
                                   pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                                  pUVar12 = (UnityEngine_UI_Text_o *)
                                            UnityEngine_Component__GetComponent<object>
                                                      ((UnityEngine_Component_o *)pUVar9,
                                                       MethodInfo_Text_GetComponent_Text);
                                  (__this->fields)._playersOnlineLabel = pUVar12;
                                  il2cpp_runtime_glue(&(__this->fields)._playersOnlineLabel,pUVar12);
                                  pUVar12 = (__this->fields)._playersOnlineLabel;
                                  pSVar13 = UI_UIManager__GetLocale
                                                      (pSVar13,subCategory,"PlayersOnline",""
                                                       ,"",(MethodInfo *)0x0);
                                  pSVar13 = System_String__Concat
                                                      ("0 ",pSVar13,(MethodInfo *)0x0);
                                  if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
                                    (*(pUVar12->klass->vtable)._75_set_text.methodPtr)
                                              (pUVar12,pSVar13,
                                               (pUVar12->klass->vtable)._75_set_text.method);
                                    pUVar9 = (__this->fields).TopBar;
                                    if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                        (pUVar9 = UnityEngine_Transform__Find
                                                            (pUVar9,"FilterButton",(MethodInfo *)0x0),
                                        pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
                                       (pUVar9 = UnityEngine_Transform__Find
                                                           (pUVar9,"Text",(MethodInfo *)0x0),
                                       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                                      pIVar11 = UnityEngine_Component__GetComponent<object>
                                                          ((UnityEngine_Component_o *)pUVar9,
                                                           MethodInfo_Text_GetComponent_Text);
                                      pSVar13 = UI_UIManager__GetLocaleCommon
                                                          ("Filters",(MethodInfo *)0x0);
                                      if (pIVar11 != (Il2CppObject *)0x0) {
                                        (*pIVar11->klass->vtable[0x4b].methodPtr)
                                                  (pIVar11,pSVar13,
                                                   pIVar11->klass->vtable[0x4b].method);
                                        pUVar9 = (__this->fields).TopBar;
                                        if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                           (pSVar14 = 
                                                  UnityEngine_Component__GetComponentsInChildren<object>
                                                            ((UnityEngine_Component_o *)pUVar9,
                                                             MethodInfo_Button___GetComponentsInChildren_Button),
                                           pSVar14 != (System_Object_array *)0x0)) {
                                          iVar3 = (int)pSVar14->max_length;
                                          if (0 < iVar3) {
                                            uVar15 = 0;
                                            if (iVar3 != 0) {
                                              do {
                                                if (__this_01 == (UI_ElementStyle_o *)0x0)
                                                goto LAB_040f8896;
                                                __this_00 = (UnityEngine_UI_Selectable_o *)
                                                            pSVar14->m_Items[(int)uVar15];
                                                pSVar13 = (__this_01->fields).ThemePanel;
                                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                  il2cpp_init_class();
                                                }
                                                UI_UIManager__GetThemeColorBlock
                                                          (&UStack_88,pSVar13,"DefaultButton",
                                                           "","DefaultPanel",
                                                           (MethodInfo *)0x0);
                                                if (__this_00 == (UnityEngine_UI_Selectable_o *)0x0)
                                                goto LAB_040f8896;
                                                value.fields.m_NormalColor.fields.b =
                                                     UStack_88.fields.m_NormalColor.fields.b;
                                                value.fields.m_NormalColor.fields.a =
                                                     UStack_88.fields.m_NormalColor.fields.a;
                                                value.fields.m_NormalColor.fields.r =
                                                     UStack_88.fields.m_NormalColor.fields.r;
                                                value.fields.m_NormalColor.fields.g =
                                                     UStack_88.fields.m_NormalColor.fields.g;
                                                value.fields.m_HighlightedColor.fields.r =
                                                     UStack_88.fields.m_HighlightedColor.fields.r;
                                                value.fields.m_HighlightedColor.fields.g =
                                                     UStack_88.fields.m_HighlightedColor.fields.g;
                                                value.fields.m_HighlightedColor.fields.b =
                                                     UStack_88.fields.m_HighlightedColor.fields.b;
                                                value.fields.m_HighlightedColor.fields.a =
                                                     UStack_88.fields.m_HighlightedColor.fields.a;
                                                value.fields.m_PressedColor.fields.r =
                                                     UStack_88.fields.m_PressedColor.fields.r;
                                                value.fields.m_PressedColor.fields.g =
                                                     UStack_88.fields.m_PressedColor.fields.g;
                                                value.fields.m_PressedColor.fields.b =
                                                     UStack_88.fields.m_PressedColor.fields.b;
                                                value.fields.m_PressedColor.fields.a =
                                                     UStack_88.fields.m_PressedColor.fields.a;
                                                value.fields.m_SelectedColor.fields.r =
                                                     UStack_88.fields.m_SelectedColor.fields.r;
                                                value.fields.m_SelectedColor.fields.g =
                                                     UStack_88.fields.m_SelectedColor.fields.g;
                                                value.fields.m_SelectedColor.fields.b =
                                                     UStack_88.fields.m_SelectedColor.fields.b;
                                                value.fields.m_SelectedColor.fields.a =
                                                     UStack_88.fields.m_SelectedColor.fields.a;
                                                value.fields.m_DisabledColor.fields.r =
                                                     UStack_88.fields.m_DisabledColor.fields.r;
                                                value.fields.m_DisabledColor.fields.g =
                                                     UStack_88.fields.m_DisabledColor.fields.g;
                                                value.fields.m_DisabledColor.fields.b =
                                                     UStack_88.fields.m_DisabledColor.fields.b;
                                                value.fields.m_DisabledColor.fields.a =
                                                     UStack_88.fields.m_DisabledColor.fields.a;
                                                value.fields.m_ColorMultiplier =
                                                     UStack_88.fields.m_ColorMultiplier;
                                                value.fields.m_FadeDuration =
                                                     UStack_88.fields.m_FadeDuration;
                                                UnityEngine_UI_Selectable__set_colors
                                                          (__this_00,value,(MethodInfo *)0x0);
                                                pUVar9 = UnityEngine_Component__get_transform
                                                                   ((UnityEngine_Component_o *)
                                                                    __this_00,(MethodInfo *)0x0);
                                                if (pUVar9 == (UnityEngine_Transform_o *)0x0)
                                                goto LAB_040f8896;
                                                pUVar9 = UnityEngine_Transform__Find
                                                                   (pUVar9,"Text",
                                                                    (MethodInfo *)0x0);
                                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                  il2cpp_init_class();
                                                }
                                                bVar6 = UnityEngine_Object__op_Inequality
                                                                  ((UnityEngine_Object_o *)pUVar9,
                                                                   (UnityEngine_Object_o *)0x0,
                                                                   (MethodInfo *)0x0);
                                                if ((char)bVar6 != '\0') {
                                                  pUVar9 = UnityEngine_Component__get_transform
                                                                     ((UnityEngine_Component_o *)
                                                                      __this_00,(MethodInfo *)0x0);
                                                  if ((pUVar9 == (UnityEngine_Transform_o *)0x0) ||
                                                     (pUVar9 = UnityEngine_Transform__Find
                                                                         (pUVar9,"Text",
                                                                          (MethodInfo *)0x0),
                                                     pUVar9 == (UnityEngine_Transform_o *)0x0))
                                                  goto LAB_040f8896;
                                                  pIVar11 = 
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar9,
                                                             MethodInfo_Text_GetComponent_Text);
                                                  pSVar13 = (__this_01->fields).ThemePanel;
                                                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                    il2cpp_init_class();
                                                  }
                                                  UVar16 = UI_UIManager__GetThemeColor
                                                                     (pSVar13,"DefaultButton",
                                                                      "TextColor","DefaultPanel",
                                                                      (MethodInfo *)0x0);
                                                  if (pIVar11 == (Il2CppObject *)0x0)
                                                  goto LAB_040f8896;
                                                  (*pIVar11->klass->vtable[0x17].methodPtr)
                                                            (UVar16.fields.r,UVar16.fields.b,pIVar11
                                                             ,pIVar11->klass->vtable[0x17].method);
                                                }
                                                uVar15 = uVar15 + 1;
                                                uVar4 = (uint)pSVar14->max_length;
                                                if ((int)uVar4 <= (int)uVar15) goto LAB_040f8642;
                                              } while (uVar15 < uVar4);
                                            }
                    /* WARNING: Subroutine does not return */
                                            il2cpp_raise_exception();
                                          }
LAB_040f8642:
                                          pUVar9 = (__this->fields).TopBar;
                                          if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                              (pUVar9 = UnityEngine_Transform__Find
                                                                  (pUVar9,"Page/PageLabel",
                                                                   (MethodInfo *)0x0),
                                              pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
                                             (pIVar11 = UnityEngine_Component__GetComponent<object>
                                                                  ((UnityEngine_Component_o *)pUVar9
                                                                   ,MethodInfo_Text_GetComponent_Text),
                                             __this_01 != (UI_ElementStyle_o *)0x0)) {
                                            pSVar13 = (__this_01->fields).ThemePanel;
                                            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                              il2cpp_init_class();
                                            }
                                            UVar16 = UI_UIManager__GetThemeColor
                                                               (pSVar13,"DefaultLabel","TextColor",
                                                                "DefaultPanel",(MethodInfo *)0x0);
                                            if (pIVar11 != (Il2CppObject *)0x0) {
                                              (*pIVar11->klass->vtable[0x17].methodPtr)
                                                        (UVar16.fields.r,UVar16.fields.b,pIVar11,
                                                         pIVar11->klass->vtable[0x17].method);
                                              pUVar9 = (__this->fields).TopBar;
                                              if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                                 (pUVar9 = UnityEngine_Transform__Find
                                                                     (pUVar9,"PlayersOnlineLabel",
                                                                      (MethodInfo *)0x0),
                                                 pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                                                pIVar11 = 
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar9,
                                                             MethodInfo_Text_GetComponent_Text);
                                                UVar16 = UI_UIManager__GetThemeColor
                                                                   ((__this_01->fields).ThemePanel,
                                                                    "DefaultLabel","TextColor",
                                                                    "DefaultPanel",(MethodInfo *)0x0);
                                                if (pIVar11 != (Il2CppObject *)0x0) {
                                                  (*pIVar11->klass->vtable[0x17].methodPtr)
                                                            (UVar16.fields.r,UVar16.fields.b,pIVar11
                                                             ,pIVar11->klass->vtable[0x17].method);
                                                  pUVar10 = *ppUVar2;
                                                  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                                    pIVar11 = 
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar10,MethodInfo_Text_GetComponent_Text);
                                                  UVar16 = UI_UIManager__GetThemeColor
                                                                     ((__this_01->fields).ThemePanel
                                                                      ,"RoomButton","TextColor",
                                                                      "DefaultPanel",(MethodInfo *)0x0
                                                                     );
                                                  if (pIVar11 != (Il2CppObject *)0x0) {
                                                    (*pIVar11->klass->vtable[0x17].methodPtr)
                                                              (UVar16.fields.r,UVar16.fields.b,
                                                               pIVar11,pIVar11->klass->vtable[0x17].
                                                                       method);
                                                    pUVar10 = *ppUVar1;
                                                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0)
                                                    {
                                                      __this_04 = (UnityEngine_UI_RawImage_o *)
                                                                                                                                    
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar10,MethodInfo_RawImage_GetComponent_RawImage);
                                                  value_00 = (UnityEngine_Texture_o *)
                                                             UI_UIManager__GetThemeTexture
                                                                       ((__this_01->fields).
                                                                        ThemePanel,"MainBody",
                                                                        "BackgroundTexture","DefaultPanel",
                                                                        (MethodInfo *)0x0);
                                                  if (__this_04 != (UnityEngine_UI_RawImage_o *)0x0)
                                                  {
                                                    UnityEngine_UI_RawImage__set_texture
                                                              (__this_04,value_00,(MethodInfo *)0x0)
                                                    ;
                                                    pUVar10 = *ppUVar1;
                                                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0)
                                                    {
                                                      pIVar11 = 
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar10,MethodInfo_RawImage_GetComponent_RawImage);
                                                  UVar16 = UI_UIManager__GetThemeColor
                                                                     ((__this_01->fields).ThemePanel
                                                                      ,"MainBody","BackgroundColor",
                                                                      "DefaultPanel",(MethodInfo *)0x0
                                                                     );
                                                  if (pIVar11 != (Il2CppObject *)0x0) {
                                                    (*pIVar11->klass->vtable[0x17].methodPtr)
                                                              (UVar16.fields.r,UVar16.fields.b,
                                                               pIVar11,pIVar11->klass->vtable[0x17].
                                                                       method);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_040f8896:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$Show
// il2cpp: void UI_MultiplayerRoomListPopup__Show (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f88a0

void UI_MultiplayerRoomListPopup__Show(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704834 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704834 = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._currentPage;
  if (__this_00 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)__this_00,0,MethodInfo_Void_set_Value);
    UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
    (__this->fields)._currentUpdateDelay = 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$Hide
// il2cpp: void UI_MultiplayerRoomListPopup__Hide (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f8910

void UI_MultiplayerRoomListPopup__Hide(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if (DAT_05704835 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704835 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
          (Settings_MultiplayerSettings_o *)0x0) goto LAB_040f8978;
      Settings_MultiplayerSettings__Disconnect
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                 (MethodInfo *)0x0);
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_040f8978:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$HideNoDisconnect
// il2cpp: void UI_MultiplayerRoomListPopup__HideNoDisconnect (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f8980

void UI_MultiplayerRoomListPopup__HideNoDisconnect
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$Update
// il2cpp: void UI_MultiplayerRoomListPopup__Update (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f8990

void UI_MultiplayerRoomListPopup__Update(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentUpdateDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentUpdateDelay = fVar2;
  if (fVar2 <= 0.0) {
    UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
    (__this->fields)._currentUpdateDelay = (__this->fields)._maxUpdateDelay;
  }
  return;
}


// UI.MultiplayerRoomListPopup$$SetupPopups
// il2cpp: void UI_MultiplayerRoomListPopup__SetupPopups (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f89f0

void UI_MultiplayerRoomListPopup__SetupPopups
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  UI_BasePopup_o *item;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Component_o *pUVar7;
  UI_MultiplayerPasswordPopup_o *pUVar8;
  UI_MultiplayerFilterPopup_o *pUVar9;
  
  if (DAT_05704836 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MultiplayerFilterPopup_GetComponent_MultiplayerF);
    il2cpp_init_method_metadata(&MethodInfo_MultiplayerPasswordPopup_GetComponent_Multiplaye);
    il2cpp_init_method_metadata(&MethodInfo_MultiplayerFilterPopup_CreateHeadedPanel_Multipl);
    il2cpp_init_method_metadata(&MethodInfo_MultiplayerPasswordPopup_CreateHeadedPanel_Multi);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05704836 = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar7 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_MultiplayerPasswordPopup_CreateHeadedPanel_Multi);
  if (pUVar7 != (UnityEngine_Component_o *)0x0) {
    pUVar8 = (UI_MultiplayerPasswordPopup_o *)
             UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_MultiplayerPasswordPopup_GetComponent_Multiplaye);
    (__this->fields)._multiplayerPasswordPopup = pUVar8;
    il2cpp_runtime_glue(&(__this->fields)._multiplayerPasswordPopup);
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_MultiplayerFilterPopup_CreateHeadedPanel_Multipl);
    if (pUVar7 != (UnityEngine_Component_o *)0x0) {
      pUVar9 = (UI_MultiplayerFilterPopup_o *)
               UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_MultiplayerFilterPopup_GetComponent_MultiplayerF);
      (__this->fields)._multiplayerFilterPopup = pUVar9;
      il2cpp_runtime_glue(&(__this->fields)._multiplayerFilterPopup,pUVar9);
      lVar5 = MethodInfo_Void_Add;
      pSVar3 = (__this->fields)._popups;
      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar8 = (__this->fields)._multiplayerPasswordPopup;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 != (UI_BasePopup_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
            il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
            pSVar3 = (__this->fields)._popups;
            lVar5 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            pSVar3 = (__this->fields)._popups;
            lVar5 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar5;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            item = (UI_BasePopup_o *)(__this->fields)._multiplayerFilterPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar3->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = item;
                il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$RefreshList
// il2cpp: void UI_MultiplayerRoomListPopup__RefreshList (UI_MultiplayerRoomListPopup_o* __this, bool refetch, const MethodInfo* method);
// 0x40f4d70

void UI_MultiplayerRoomListPopup__RefreshList
               (UI_MultiplayerRoomListPopup_o *__this,bool_conflict refetch,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_UI_Text_o *pUVar4;
  Settings_IntSetting_o *pSVar5;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar6;
  Il2CppClass *pIVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  UnityEngine_UI_ColorBlock_o value;
  long lVar8;
  int32_t iVar9;
  bool_conflict bVar10;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  Photon_Realtime_RoomInfo_array *pPVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  MethodInfo *method_00;
  System_Collections_Generic_List_RoomInfo__o *pSVar14;
  Il2CppObject *pIVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Events_UnityAction_o *call;
  UI_MultiplayerRoomListPopup_o *__this_04;
  UnityEngine_GameObject_o *pUVar18;
  UnityEngine_UI_Selectable_o *__this_05;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar19;
  undefined4 in_register_00000034;
  Il2CppObject *pIVar20;
  UI_MultiplayerRoomListPopup_o *__this_06;
  UnityEngine_Color_o UVar21;
  undefined8 in_stack_fffffffffffffe98;
  undefined8 in_stack_fffffffffffffea0;
  Il2CppObject *in_stack_fffffffffffffea8;
  int local_10c;
  undefined1 local_108 [32];
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  _union_247328 local_c8;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  UnityEngine_Color_Fields local_a8 [2];
  UnityEngine_UI_ColorBlock_o local_88;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,refetch);
  if (DAT_05704837 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_RoomInfo___ToArray_RoomInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_RoomInfo_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HoverTooltip_AddComponent_HoverTooltip);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Photon_Realtime_RoomInfo__G);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MainMenuGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshList_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass35_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"MultiplayerRoomListPopup");
    il2cpp_init_method_metadata(&"Requires user account to join");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Prefabs/MainMenu/MultiplayerRoomButton");
    il2cpp_init_method_metadata(&"PasswordIcon");
    il2cpp_init_method_metadata(&"RoomButton");
    il2cpp_init_method_metadata(&"VerificationIcon");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"0/0");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"PlayersOnline");
    DAT_05704837 = '\x01';
  }
  local_10c = 0;
  local_108._0_8_ = (Il2CppMethodPointer)0x0;
  local_108._8_8_ = (Il2CppMethodPointer)0x0;
  local_108._16_8_ = (InvokerMethod)0x0;
  (__this->fields)._currentUpdateDelay = (__this->fields)._maxUpdateDelay;
  if ((char)refetch != '\0') {
    if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_040f58d5;
    source = System_Collections_Generic_Dictionary<object__object>__get_Values
                       (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    pPVar11 = (Photon_Realtime_RoomInfo_array *)
              System_Linq_Enumerable__ToArray<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_RoomInfo___ToArray_RoomInfo);
    (__this->fields)._rooms = pPVar11;
    il2cpp_runtime_glue(&(__this->fields)._rooms);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar9 = Photon_Pun_PhotonNetwork__get_CountOfPlayers((MethodInfo *)0x0);
    local_10c = iVar9 / 2;
    pSVar12 = System_Int32__ToString((int32_t)&local_10c,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar13 = UI_UIManager__GetLocale
                        ("MainMenu","MultiplayerRoomListPopup","PlayersOnline","","",
                         (MethodInfo *)0x0);
    method_00 = (MethodInfo *)System_String__Concat(pSVar12," ",pSVar13,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._playersOnlineLabel;
    if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040f58d5;
    (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
              (pUVar4,method_00,(pUVar4->klass->vtable)._75_set_text.method);
  }
  UI_MultiplayerRoomListPopup__ClearRoomButtons(__this,method_00);
  pSVar14 = UI_MultiplayerRoomListPopup__GetFilteredRooms(__this,method_00);
  if ((pSVar14 != (System_Collections_Generic_List_RoomInfo__o *)0x0) &&
     (pUVar17 = (__this->fields)._noRoomsLabel, pUVar17 != (UnityEngine_GameObject_o *)0x0)) {
    if ((pSVar14->fields)._size == 0) {
      UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._pageLabel;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                  (pUVar4,"0/0",(pUVar4->klass->vtable)._75_set_text.method);
        return;
      }
    }
    else {
      iVar19 = 0;
      UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
      if (DAT_0570483a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
        DAT_0570483a = '\x01';
      }
      iVar2 = (pSVar14->fields)._size;
      if (iVar2 != 0) {
        iVar19 = (iVar2 + -1) / (__this->fields)._roomsPerPage + 1;
      }
      (__this->fields)._lastPageCount = iVar19;
      pSVar5 = (__this->fields)._currentPage;
      local_108._24_8_ = __this;
      if (pSVar5 != (Settings_IntSetting_o *)0x0) {
        iVar9 = (pSVar5->fields)._value;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar9 = System_Math__Min(iVar9,iVar19 + -1,(MethodInfo *)0x0);
        Settings_TypedSetting<int>__set_Value
                  ((Settings_TypedSetting_int__o *)pSVar5,iVar9,MethodInfo_Void_set_Value);
        __this_06 = (UI_MultiplayerRoomListPopup_o *)local_108._24_8_;
        pSVar5 = ((UI_MultiplayerRoomListPopup_Fields *)(local_108._24_8_ + 0x10))->_currentPage;
        if (pSVar5 != (Settings_IntSetting_o *)0x0) {
          iVar19 = (int)local_108._24_8_;
          pUVar4 = ((UI_MultiplayerRoomListPopup_Fields *)(local_108._24_8_ + 0x10))->_pageLabel;
          local_10c = (pSVar5->fields)._value + 1;
          pSVar12 = System_Int32__ToString((int32_t)&local_10c,(MethodInfo *)0x0);
          pSVar13 = System_Int32__ToString(iVar19 + 0x120,(MethodInfo *)0x0);
          pSVar12 = System_String__Concat(pSVar12,"/",pSVar13,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                      (pUVar4,pSVar12,(pUVar4->klass->vtable)._75_set_text.method);
            pSVar14 = UI_MultiplayerRoomListPopup__GetCurrentPageRooms(__this_06,pSVar14,method_01);
            if (pSVar14 != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,
                         (System_Collections_Generic_List_object__o *)pSVar14,MethodInfo_List_1_T__Enumerator_Photon_Realtime_RoomInfo__G);
              local_108._16_8_ = CONCAT44(fStack_d4,local_d8);
              while( true ) {
                __this_02.fields._index = (int)in_stack_fffffffffffffea0;
                __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
                __this_02.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
                __this_02.fields._current = in_stack_fffffffffffffea8;
                bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (__this_02,(MethodInfo_3185E20 *)local_108);
                if ((char)bVar10 == '\0') {
                  __this_03.fields._index = (int)in_stack_fffffffffffffea0;
                  __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
                  __this_03.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
                  __this_03.fields._current = in_stack_fffffffffffffea8;
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (__this_03,(MethodInfo_3185E10 *)local_108);
                  return;
                }
                pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass35_0);
                System_Object___ctor(pIVar15,(MethodInfo *)0x0);
                if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pIVar15[1].monitor = __this_06;
                il2cpp_runtime_glue(&pIVar15[1].monitor,__this_06);
                pIVar20 = pIVar15 + 1;
                pIVar15[1].klass = (Il2CppClass *)local_108._16_8_;
                il2cpp_runtime_glue(pIVar20);
                pUVar17 = (__this_06->fields)._roomList;
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                pUVar17 = UI_ElementFactory__InstantiateAndBind
                                    (pUVar16,"Prefabs/MainMenu/MultiplayerRoomButton",(MethodInfo *)0x0);
                lVar8 = MethodInfo_Void_Add;
                __this_01 = (__this_06->fields)._roomButtons;
                if (__this_01 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar6 = (__this_01->fields)._items;
                if (pUVar6 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar3 = (__this_01->fields)._size;
                if (uVar3 < (uint)pUVar6->max_length) {
                  (__this_01->fields)._size = uVar3 + 1;
                  pUVar6->m_Items[(int)uVar3] = pUVar17;
                  il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar3,pUVar17);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (Il2CppObject *)pUVar17,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pIVar15 = UnityEngine_GameObject__GetComponent<object>(pUVar17,MethodInfo_Button_GetComponent_Button);
                if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pIVar7 = pIVar15[0x10].klass;
                call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                if (pIVar7 == (Il2CppClass *)0x0) break;
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)pIVar7,call,(MethodInfo *)0x0);
                pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                __this_06 = (UI_MultiplayerRoomListPopup_o *)local_108._24_8_;
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                __this_04 = (UI_MultiplayerRoomListPopup_o *)
                            UnityEngine_Transform__Find(pUVar16,"Text",(MethodInfo *)0x0);
                if (__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pIVar15 = UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)__this_04,MethodInfo_Text_GetComponent_Text);
                pSVar12 = UI_MultiplayerRoomListPopup__GetRoomFormattedName
                                    (__this_04,(Photon_Realtime_RoomInfo_o *)pIVar20->klass,
                                     method_02);
                if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                (*pIVar15->klass->vtable[0x4b].methodPtr)
                          (pIVar15,pSVar12,pIVar15->klass->vtable[0x4b].method);
                pIVar7 = pIVar20->klass;
                if (DAT_0570483d == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
                  il2cpp_init_method_metadata(&"");
                  DAT_0570483d = '\x01';
                }
                if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar12 = PhotonExtensions__GetStringProperty
                                    ((Photon_Realtime_RoomInfo_o *)pIVar7,
                                     *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),
                                     "",(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   (pSVar12,(System_String_o *)
                                            **(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                                   );
                if ((char)bVar10 != '\0') {
                  pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar16 = UnityEngine_Transform__Find(pUVar16,"PasswordIcon",(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar18 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UnityEngine_GameObject__SetActive(pUVar18,0,(MethodInfo *)0x0);
                }
                pIVar7 = pIVar20->klass;
                if (DAT_0570483e == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
                  DAT_0570483e = '\x01';
                }
                if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar10 = PhotonExtensions__GetBoolProperty
                                   ((Photon_Realtime_RoomInfo_o *)pIVar7,
                                    *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30),0,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar16 = UnityEngine_Transform__Find(pUVar16,"VerificationIcon",(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar18 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UnityEngine_GameObject__SetActive(pUVar18,0,(MethodInfo *)0x0);
                }
                else {
                  pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar16 = UnityEngine_Transform__Find(pUVar16,"VerificationIcon",(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar18 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UnityEngine_GameObject__SetActive(pUVar18,1,(MethodInfo *)0x0);
                  pIVar15 = UnityEngine_GameObject__AddComponent<object>(pUVar18,MethodInfo_HoverTooltip_AddComponent_HoverTooltip);
                  if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pIVar15[2].klass = "Requires user account to join";
                  il2cpp_runtime_glue(pIVar15 + 2);
                }
                __this_05 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent<object>(pUVar17,MethodInfo_Button_GetComponent_Button);
                pSVar12 = (System_String_o *)
                          (*((*&__this_06->klass)->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this_06,
                                     ((*&__this_06->klass)->vtable)._4_get_ThemePanel.method);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UI_UIManager__GetThemeColorBlock
                          (&local_88,pSVar12,"RoomButton","","DefaultPanel",
                           (MethodInfo *)0x0);
                local_a8[1].r = local_88.fields.m_ColorMultiplier;
                local_a8[1].g = local_88.fields.m_FadeDuration;
                local_a8[0].r = local_88.fields.m_DisabledColor.fields.r;
                local_a8[0].g = local_88.fields.m_DisabledColor.fields.g;
                local_a8[0].b = local_88.fields.m_DisabledColor.fields.b;
                local_a8[0].a = local_88.fields.m_DisabledColor.fields.a;
                local_b8 = local_88.fields.m_SelectedColor.fields.r;
                fStack_b4 = local_88.fields.m_SelectedColor.fields.g;
                fStack_b0 = local_88.fields.m_SelectedColor.fields.b;
                fStack_ac = local_88.fields.m_SelectedColor.fields.a;
                local_c8._0_4_ = local_88.fields.m_PressedColor.fields.r;
                local_c8._4_4_ = local_88.fields.m_PressedColor.fields.g;
                fStack_c0 = local_88.fields.m_PressedColor.fields.b;
                fStack_bc = local_88.fields.m_PressedColor.fields.a;
                local_d8 = local_88.fields.m_HighlightedColor.fields.r;
                fStack_d4 = local_88.fields.m_HighlightedColor.fields.g;
                fStack_d0 = local_88.fields.m_HighlightedColor.fields.b;
                fStack_cc = local_88.fields.m_HighlightedColor.fields.a;
                local_e8._0_4_ = local_88.fields.m_NormalColor.fields.r;
                local_e8._4_4_ = local_88.fields.m_NormalColor.fields.g;
                fStack_e0 = local_88.fields.m_NormalColor.fields.b;
                fStack_dc = local_88.fields.m_NormalColor.fields.a;
                if (__this_05 == (UnityEngine_UI_Selectable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                in_stack_fffffffffffffe98 =
                     CONCAT44(local_88.fields.m_NormalColor.fields.g,
                              local_88.fields.m_NormalColor.fields.r);
                in_stack_fffffffffffffea0 =
                     CONCAT44(local_88.fields.m_NormalColor.fields.a,
                              local_88.fields.m_NormalColor.fields.b);
                in_stack_fffffffffffffea8 =
                     (Il2CppObject *)
                     CONCAT44(local_88.fields.m_HighlightedColor.fields.g,
                              local_88.fields.m_HighlightedColor.fields.r);
                value.fields.m_HighlightedColor.fields.a =
                     local_88.fields.m_HighlightedColor.fields.a;
                value.fields.m_HighlightedColor.fields.b =
                     local_88.fields.m_HighlightedColor.fields.b;
                value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
                value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
                value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
                value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
                value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
                value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
                value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
                value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
                value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
                value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
                value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
                value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
                value.fields.m_HighlightedColor.fields._0_8_ = in_stack_fffffffffffffea8;
                value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
                value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
                value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
                value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
                value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                UnityEngine_UI_Selectable__set_colors(__this_05,value,(MethodInfo *)0x0);
                pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pUVar16 = UnityEngine_Transform__Find(pUVar16,"Text",(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pIVar15 = UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar16,MethodInfo_Text_GetComponent_Text);
                pSVar12 = (System_String_o *)
                          (*((*&__this_06->klass)->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this_06,
                                     ((*&__this_06->klass)->vtable)._4_get_ThemePanel.method);
                UVar21 = UI_UIManager__GetThemeColor
                                   (pSVar12,"RoomButton","TextColor","DefaultPanel",(MethodInfo *)0x0
                                   );
                if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception(UVar21.fields.r,UVar21.fields.b);
                }
                (*pIVar15->klass->vtable[0x17].methodPtr)
                          (pIVar15,pIVar15->klass->vtable[0x17].method);
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
    }
  }
LAB_040f58d5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$GetCurrentPageRooms
// il2cpp: System_Collections_Generic_List_RoomInfo__o* UI_MultiplayerRoomListPopup__GetCurrentPageRooms (UI_MultiplayerRoomListPopup_o* __this, System_Collections_Generic_List_RoomInfo__o* rooms, const MethodInfo* method);
// 0x40f91e0

System_Collections_Generic_List_RoomInfo__o *
UI_MultiplayerRoomListPopup__GetCurrentPageRooms
          (UI_MultiplayerRoomListPopup_o *__this,System_Collections_Generic_List_RoomInfo__o *rooms,
          MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Settings_IntSetting_o *pSVar4;
  Photon_Realtime_RoomInfo_array *pPVar5;
  long lVar6;
  int32_t iVar7;
  System_Collections_Generic_List_RoomInfo__o *__this_00;
  Photon_Realtime_RoomInfo_o *item;
  int index;
  
  if (DAT_05704838 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Photon_Realtime_RoomInfo);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_RoomInfo_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_RoomInfo);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704838 = '\x01';
  }
  if (rooms != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    __this_00 = rooms;
    if ((__this->fields)._roomsPerPage < (rooms->fields)._size) {
      __this_00 = (System_Collections_Generic_List_RoomInfo__o *)il2cpp_runtime_glue(TypeInfo_List_RoomInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Photon_Realtime_RoomInfo);
      pSVar4 = (__this->fields)._currentPage;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto LAB_040f9384;
      iVar2 = (__this->fields)._roomsPerPage;
      index = (pSVar4->fields)._value * iVar2;
      iVar7 = (rooms->fields)._size;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar7 = System_Math__Min(iVar2 + index,iVar7,(MethodInfo *)0x0);
      if (index < iVar7) {
        if (__this_00 == (System_Collections_Generic_List_RoomInfo__o *)0x0) {
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)rooms,index,MethodInfo_RoomInfo_get_Item);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        do {
          while( true ) {
            item = (Photon_Realtime_RoomInfo_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)rooms,index,MethodInfo_RoomInfo_get_Item)
            ;
            lVar6 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pPVar5 = (__this_00->fields)._items;
            if (pPVar5 == (Photon_Realtime_RoomInfo_array *)0x0) goto LAB_040f9384;
            uVar3 = (__this_00->fields)._size;
            if ((uint)pPVar5->max_length <= uVar3) break;
            (__this_00->fields)._size = uVar3 + 1;
            pPVar5->m_Items[(int)uVar3] = item;
            il2cpp_runtime_glue(pPVar5->m_Items + (int)uVar3,item);
            index = index + 1;
            if (iVar7 == index) {
              return __this_00;
            }
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          index = index + 1;
        } while (iVar7 != index);
      }
    }
    return __this_00;
  }
LAB_040f9384:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$GetFilteredRooms
// il2cpp: System_Collections_Generic_List_RoomInfo__o* UI_MultiplayerRoomListPopup__GetFilteredRooms (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f8d80

System_Collections_Generic_List_RoomInfo__o *
UI_MultiplayerRoomListPopup__GetFilteredRooms
          (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Photon_Realtime_RoomInfo_array *pPVar3;
  Photon_Realtime_RoomInfo_o *room;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Photon_Realtime_RoomInfo_array *pPVar6;
  long lVar7;
  bool_conflict bVar8;
  System_Collections_Generic_List_RoomInfo__o *__this_00;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *a;
  MethodInfo *method_00;
  UI_MultiplayerRoomListPopup_o *__this_01;
  ulong uVar12;
  
  if (DAT_05704839 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Photon_Realtime_RoomInfo);
    il2cpp_init_method_metadata(&TypeInfo_List_RoomInfo);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"");
    DAT_05704839 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_RoomInfo__o *)il2cpp_runtime_glue(TypeInfo_List_RoomInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Photon_Realtime_RoomInfo);
  pPVar3 = (__this->fields)._rooms;
  if (pPVar3 != (Photon_Realtime_RoomInfo_array *)0x0) {
    if ((int)pPVar3->max_length < 1) {
      return __this_00;
    }
    uVar12 = 0;
    if ((pPVar3->max_length & 0xffffffff) != 0) {
      do {
        room = pPVar3->m_Items[uVar12];
        if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = PhotonExtensions__GetStringProperty
                           (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),
                            "",(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) goto LAB_040f916f;
        pSVar9 = System_String__ToLower(pSVar9,(MethodInfo *)0x0);
        pSVar10 = PhotonExtensions__GetStringProperty
                            (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 8),
                             "",(MethodInfo *)0x0);
        if (pSVar10 == (System_String_o *)0x0) goto LAB_040f916f;
        pSVar10 = System_String__ToLower(pSVar10,(MethodInfo *)0x0);
        pSVar11 = PhotonExtensions__GetStringProperty
                            (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x10),
                             "",(MethodInfo *)0x0);
        if (pSVar11 == (System_String_o *)0x0) goto LAB_040f916f;
        pSVar11 = System_String__ToLower(pSVar11,(MethodInfo *)0x0);
        pSVar4 = (__this->fields)._filterQuery;
        if ((pSVar4 == (Settings_StringSetting_o *)0x0) ||
           (__this_01 = (UI_MultiplayerRoomListPopup_o *)(pSVar4->fields)._value,
           __this_01 == (UI_MultiplayerRoomListPopup_o *)0x0)) goto LAB_040f916f;
        a = System_String__ToLower((System_String_o *)__this_01,(MethodInfo *)0x0);
        bVar8 = UI_MultiplayerRoomListPopup__IsValidRoom(__this_01,room,method_00);
        if ((char)bVar8 != '\0') {
          bVar8 = System_String__op_Inequality
                            (a,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                             (MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            if (pSVar9 == (System_String_o *)0x0) goto LAB_040f916f;
            bVar8 = System_String__Contains(pSVar9,a,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              if (pSVar10 == (System_String_o *)0x0) goto LAB_040f916f;
              bVar8 = System_String__Contains(pSVar10,a,(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                if (pSVar11 == (System_String_o *)0x0) goto LAB_040f916f;
                bVar8 = System_String__Contains(pSVar11,a,(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') goto LAB_040f8e80;
              }
            }
          }
          pSVar5 = (__this->fields)._filterShowFull;
          if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto LAB_040f916f;
          if (*(char *)((long)&(pSVar5->fields).DefaultValue + 1) == '\0') {
            if (room == (Photon_Realtime_RoomInfo_o *)0x0) goto LAB_040f916f;
            if ((room->fields).maxPlayers <= *(int *)&(room->fields).propertiesListedInLobby)
            goto LAB_040f8e80;
          }
          pSVar5 = (__this->fields)._filterShowPassword;
          if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto LAB_040f916f;
          if (*(char *)((long)&(pSVar5->fields).DefaultValue + 1) == '\0') {
            if (DAT_0570483d == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
              il2cpp_init_method_metadata(&"");
              DAT_0570483d = '\x01';
            }
            if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = PhotonExtensions__GetStringProperty
                               (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),
                                "",(MethodInfo *)0x0);
            bVar8 = System_String__op_Inequality
                              (pSVar9,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                               (MethodInfo *)0x0);
            if ((char)bVar8 != '\0') goto LAB_040f8e80;
          }
          lVar7 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto LAB_040f916f;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pPVar6 = (__this_00->fields)._items;
          if (pPVar6 == (Photon_Realtime_RoomInfo_array *)0x0) goto LAB_040f916f;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pPVar6->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pPVar6->m_Items[(int)uVar2] = room;
            il2cpp_runtime_glue(pPVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)room,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
LAB_040f8e80:
        uVar12 = uVar12 + 1;
        uVar2 = (uint)pPVar3->max_length;
        if ((long)(int)uVar2 <= (long)uVar12) {
          return __this_00;
        }
      } while (uVar12 < uVar2);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040f916f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$GetPageCount
// il2cpp: int32_t UI_MultiplayerRoomListPopup__GetPageCount (UI_MultiplayerRoomListPopup_o* __this, System_Collections_Generic_List_RoomInfo__o* rooms, const MethodInfo* method);
// 0x40f9180

int32_t UI_MultiplayerRoomListPopup__GetPageCount
                  (UI_MultiplayerRoomListPopup_o *__this,
                  System_Collections_Generic_List_RoomInfo__o *rooms,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570483a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_0570483a = '\x01';
  }
  if (rooms != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    iVar1 = (rooms->fields)._size;
    if (iVar1 != 0) {
      return (iVar1 + -1) / (__this->fields)._roomsPerPage + 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$ClearRoomButtons
// il2cpp: void UI_MultiplayerRoomListPopup__ClearRoomButtons (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40f8bd0

void UI_MultiplayerRoomListPopup__ClearRoomButtons
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar6;
  
  if (DAT_0570483b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570483b = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._roomButtons;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    while( true ) {
      __this_00.fields._8_8_ = pIVar5;
      __this_00.fields._list = pSVar4;
      __this_00.fields._current = (Il2CppObject *)obj;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') break;
      pUVar6 = obj;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      obj = pUVar6;
    }
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
    pSVar2 = (__this->fields)._roomButtons;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$IsValidRoom
// il2cpp: bool UI_MultiplayerRoomListPopup__IsValidRoom (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* info, const MethodInfo* method);
// 0x40f9890

bool_conflict
UI_MultiplayerRoomListPopup__IsValidRoom
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *info,MethodInfo *method
          )

{
  ExitGames_Client_Photon_Hashtable_o *pEVar1;
  System_String_o *__this_00;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_0570483c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&"vc");
    DAT_0570483c = '\x01';
  }
  if (info != (Photon_Realtime_RoomInfo_o *)0x0) {
    pEVar1 = (info->fields).customProperties;
    if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,
                         (Il2CppObject *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 == '\0') {
        return 0;
      }
      pEVar1 = (info->fields).customProperties;
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,
                           *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 8),MethodInfo_Boolean_ContainsKey);
        if ((char)bVar2 == '\0') {
          return 0;
        }
        pEVar1 = (info->fields).customProperties;
        if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pEVar1 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
          bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            ((System_Collections_Generic_Dictionary_object__object__o *)pEVar1,
                             *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x10),MethodInfo_Boolean_ContainsKey)
          ;
          if ((char)bVar2 == '\0') {
            return 0;
          }
          __this_00 = *(System_String_o **)&(info->fields).autoCleanUp;
          if (__this_00 != (System_String_o *)0x0) {
            uVar3 = System_String__EndsWith(__this_00,"vc",(MethodInfo *)0x0);
            return uVar3 ^ 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$GetPasswordHash
// il2cpp: System_String_o* UI_MultiplayerRoomListPopup__GetPasswordHash (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* info, const MethodInfo* method);
// 0x40f97c0

System_String_o *
UI_MultiplayerRoomListPopup__GetPasswordHash
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *info,MethodInfo *method
          )

{
  System_String_o *pSVar1;
  
  if (DAT_0570483d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&"");
    DAT_0570483d = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (info,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),""
                      ,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerRoomListPopup$$GetAccountRequired
// il2cpp: bool UI_MultiplayerRoomListPopup__GetAccountRequired (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* info, const MethodInfo* method);
// 0x40f9830

bool_conflict
UI_MultiplayerRoomListPopup__GetAccountRequired
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *info,MethodInfo *method
          )

{
  bool_conflict bVar1;
  
  if (DAT_0570483e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    DAT_0570483e = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = PhotonExtensions__GetBoolProperty
                    (info,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30),0,
                     (MethodInfo *)0x0);
  return bVar1;
}


// UI.MultiplayerRoomListPopup$$GetRoomFormattedName
// il2cpp: System_String_o* UI_MultiplayerRoomListPopup__GetRoomFormattedName (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x40f93c0

System_String_o *
UI_MultiplayerRoomListPopup__GetRoomFormattedName
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *room,MethodInfo *method
          )

{
  uint uVar1;
  Il2CppObject *pIVar2;
  undefined8 in_RAX;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Object_array *args;
  long lVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  undefined8 local_38;
  
  local_38 = in_RAX;
  if (DAT_0570483f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&"   ");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&" / ");
    il2cpp_init_method_metadata(&"");
    DAT_0570483f = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = PhotonExtensions__GetStringProperty
                     (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = MiscExtensions__HexColor(pSVar3,(MethodInfo *)0x0);
  pSVar4 = PhotonExtensions__GetStringProperty
                     (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 8),"",
                      (MethodInfo *)0x0);
  pSVar5 = PhotonExtensions__GetStringProperty
                     (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x10),""
                      ,(MethodInfo *)0x0);
  args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,9);
  if (args == (System_Object_array *)0x0) {
LAB_040f97b8:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pSVar3 != (System_String_o *)0x0) &&
     (lVar6 = il2cpp_runtime_glue(pSVar3,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
LAB_040f97a9:
    uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar8,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar3;
    il2cpp_runtime_glue(args->m_Items,pSVar3);
    if (" / " == (Il2CppObject *)0x0) {
      uVar1 = (uint)args->max_length;
      pIVar7 = (Il2CppObject *)0x0;
      pIVar2 = " / ";
    }
    else {
      lVar6 = il2cpp_runtime_glue(" / ",(((args->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_040f97a9;
      uVar1 = (uint)args->max_length;
      pIVar7 = " / ";
      pIVar2 = " / ";
    }
    " / " = pIVar2;
    if (1 < uVar1) {
      args->m_Items[1] = pIVar7;
      il2cpp_runtime_glue(args->m_Items + 1,pIVar2);
      if ((pSVar4 != (System_String_o *)0x0) &&
         (lVar6 = il2cpp_runtime_glue(pSVar4,(((args->obj).klass)->_1).element_class), lVar6 == 0))
      goto LAB_040f97a9;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)pSVar4;
        il2cpp_runtime_glue(args->m_Items + 2,pSVar4);
        if (" / " == (Il2CppObject *)0x0) {
          uVar1 = (uint)args->max_length;
          pIVar7 = (Il2CppObject *)0x0;
          pIVar2 = " / ";
        }
        else {
          lVar6 = il2cpp_runtime_glue(" / ",(((args->obj).klass)->_1).element_class);
          if (lVar6 == 0) goto LAB_040f97a9;
          uVar1 = (uint)args->max_length;
          pIVar7 = " / ";
          pIVar2 = " / ";
        }
        " / " = pIVar2;
        if (3 < uVar1) {
          args->m_Items[3] = pIVar7;
          il2cpp_runtime_glue(args->m_Items + 3,pIVar2);
          if ((pSVar5 != (System_String_o *)0x0) &&
             (lVar6 = il2cpp_runtime_glue(pSVar5,(((args->obj).klass)->_1).element_class), lVar6 == 0
             )) goto LAB_040f97a9;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = (Il2CppObject *)pSVar5;
            il2cpp_runtime_glue(args->m_Items + 4,pSVar5);
            if ("   " == (Il2CppObject *)0x0) {
              uVar1 = (uint)args->max_length;
              pIVar7 = (Il2CppObject *)0x0;
              pIVar2 = "   ";
            }
            else {
              lVar6 = il2cpp_runtime_glue("   ",(((args->obj).klass)->_1).element_class);
              if (lVar6 == 0) goto LAB_040f97a9;
              uVar1 = (uint)args->max_length;
              pIVar7 = "   ";
              pIVar2 = "   ";
            }
            "   " = pIVar2;
            if (5 < uVar1) {
              args->m_Items[5] = pIVar7;
              il2cpp_runtime_glue(args->m_Items + 5,pIVar2);
              if (room == (Photon_Realtime_RoomInfo_o *)0x0) goto LAB_040f97b8;
              local_38 = CONCAT44(*(undefined4 *)&(room->fields).propertiesListedInLobby,
                                  (undefined4)local_38);
              pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&local_38 + 4);
              if ((pIVar7 != (Il2CppObject *)0x0) &&
                 (lVar6 = il2cpp_runtime_glue(pIVar7,(((args->obj).klass)->_1).element_class),
                 lVar6 == 0)) goto LAB_040f97a9;
              if (6 < (uint)args->max_length) {
                args->m_Items[6] = pIVar7;
                il2cpp_runtime_glue(args->m_Items + 6,pIVar7);
                if ("/" == (Il2CppObject *)0x0) {
                  uVar1 = (uint)args->max_length;
                  pIVar7 = (Il2CppObject *)0x0;
                  pIVar2 = "/";
                }
                else {
                  lVar6 = il2cpp_runtime_glue("/",(((args->obj).klass)->_1).element_class);
                  if (lVar6 == 0) goto LAB_040f97a9;
                  uVar1 = (uint)args->max_length;
                  pIVar7 = "/";
                  pIVar2 = "/";
                }
                "/" = pIVar2;
                if (7 < uVar1) {
                  args->m_Items[7] = pIVar7;
                  il2cpp_runtime_glue(args->m_Items + 7,pIVar2);
                  local_38 = CONCAT44(local_38._4_4_,(room->fields).maxPlayers);
                  pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
                  if ((pIVar7 != (Il2CppObject *)0x0) &&
                     (lVar6 = il2cpp_runtime_glue(pIVar7,(((args->obj).klass)->_1).element_class),
                     lVar6 == 0)) goto LAB_040f97a9;
                  if (8 < (uint)args->max_length) {
                    args->m_Items[8] = pIVar7;
                    il2cpp_runtime_glue(args->m_Items + 8);
                    pSVar3 = System_String__Concat(args,(MethodInfo *)0x0);
                    return pSVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$OnRoomClick
// il2cpp: void UI_MultiplayerRoomListPopup__OnRoomClick (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x40f99d0

void UI_MultiplayerRoomListPopup__OnRoomClick
               (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *room,
               MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_MultiplayerPasswordPopup_o *__this_01;
  System_String_o *pSVar2;
  Settings_MultiplayerSettings_o *__this_02;
  long lVar3;
  UI_MessagePopup_o *__this_03;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  
  if (DAT_05704840 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Requires user account to join");
    il2cpp_init_method_metadata(&"");
    DAT_05704840 = '\x01';
    if (DAT_0570483e != '\0') goto LAB_040f99fb;
LAB_040f9bf3:
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    DAT_0570483e = '\x01';
    iVar1 = *(int *)(TypeInfo_RoomProperty + 0xe4);
  }
  else {
    if (DAT_0570483e == '\0') goto LAB_040f9bf3;
LAB_040f99fb:
    iVar1 = *(int *)(TypeInfo_RoomProperty + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar5 = PhotonExtensions__GetBoolProperty
                    (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30),0,
                     (MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar4 = (char)bVar5;
    }
    else {
      bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar4 = (char)bVar5;
    }
    if (cVar4 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((lVar3 != 0) &&
         (__this_03 = *(UI_MessagePopup_o **)(lVar3 + 0x30), __this_03 != (UI_MessagePopup_o *)0x0))
      {
        UI_MessagePopup__Show(__this_03,"Requires user account to join",1,(MethodInfo *)0x0);
        return;
      }
      goto LAB_040f9d27;
    }
  }
  if (DAT_0570483d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&"");
    DAT_0570483d = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = PhotonExtensions__GetStringProperty
                     (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),""
                      ,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = PhotonExtensions__GetStringProperty
                     (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x20),""
                      ,(MethodInfo *)0x0);
  bVar5 = System_String__op_Inequality
                    (pSVar6,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
      __this_02 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
      pSVar6 = *(System_String_o **)&(room->fields).autoCleanUp;
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = PhotonExtensions__GetStringProperty
                         (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),
                          "",(MethodInfo *)0x0);
      if (__this_02 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__JoinRoom
                  (__this_02,pSVar6,pSVar7,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8)
                   ,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
              (__this,(__this->klass->vtable)._26_HideAllPopups.method);
    if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
      __this_01 = (__this->fields)._multiplayerPasswordPopup;
      pSVar2 = *(System_String_o **)&(room->fields).autoCleanUp;
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = PhotonExtensions__GetStringProperty
                         (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),
                          "",(MethodInfo *)0x0);
      if (__this_01 != (UI_MultiplayerPasswordPopup_o *)0x0) {
        (__this_01->fields)._actualPasswordHash = pSVar6;
        il2cpp_runtime_glue(&(__this_01->fields)._actualPasswordHash);
        (__this_01->fields)._passwordSalt = pSVar7;
        il2cpp_runtime_glue(&(__this_01->fields)._passwordSalt,pSVar7);
        (__this_01->fields)._roomName = pSVar8;
        il2cpp_runtime_glue(&(__this_01->fields)._roomName,pSVar8);
        (__this_01->fields)._roomId = pSVar2;
        il2cpp_runtime_glue(&(__this_01->fields)._roomId);
        __this_00 = (__this_01->fields)._incorrectPasswordLabel;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
        UI_BasePopup__Show((UI_BasePopup_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_040f9d27:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerRoomListPopup__OnButtonClick (UI_MultiplayerRoomListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f9d30

void UI_MultiplayerRoomListPopup__OnButtonClick
               (UI_MultiplayerRoomListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  Il2CppMethodPointer vtable_dispatch;
  UI_CreateGamePopup_o *__this_00;
  uint32_t uVar5;
  bool_conflict bVar6;
  UI_MultiplayerFilterPopup_c *pUVar7;
  MethodInfo *extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **extraout_RDX_01;
  Il2CppClass **ppIVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar9;
  UI_MultiplayerFilterPopup_o *pUVar10;
  Settings_IntSetting_o *__this_01;
  
  if (DAT_05704841 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CreateGamePopup);
    il2cpp_init_method_metadata(&TypeInfo_DuelPopup);
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"RightPage");
    il2cpp_init_method_metadata(&"LeftPage");
    il2cpp_init_method_metadata(&"Filter");
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Duel");
    il2cpp_init_method_metadata(&"Refresh");
    DAT_05704841 = '\x01';
    method = extraout_RDX;
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method,method);
  uVar5 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar5 < 0x990de47e) {
    if (uVar5 == 0x990de47d) {
      bVar6 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar3 != (long *)0x0) {
        if ((*(byte *)(TypeInfo_MainMenu + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) ==
            TypeInfo_MainMenu)) {
          __this_00 = (UI_CreateGamePopup_o *)plVar3[0x13];
          if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto LAB_040fa1ea;
          bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
          if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
            UI_CreateGamePopup__Show(__this_00,1,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_040fa1e5;
      }
    }
    else {
      if (uVar5 == 0x815aad4) {
        bVar6 = System_String__op_Equality(name,"Refresh",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
        return;
      }
      if (uVar5 != 0x479b753b) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"Duel",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar3 != (long *)0x0) {
        if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_MainMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) !=
            TypeInfo_MainMenu)) goto LAB_040fa1e5;
        pUVar10 = (UI_MultiplayerFilterPopup_o *)plVar3[0x19];
        if (pUVar10 == (UI_MultiplayerFilterPopup_o *)0x0) goto LAB_040fa1ea;
        bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
        if (((pUVar10->klass->_2).naturalAligment < bVar1) ||
           ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DuelPopup)) {
LAB_040fa1e5:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        pUVar7 = pUVar10->klass;
        bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
        if (((pUVar7->_2).naturalAligment < bVar1) ||
           (ppIVar8 = (pUVar7->_2).typeHierarchy, ppIVar8[(ulong)bVar1 - 1] != TypeInfo_DuelPopup))
        goto LAB_040fa1e5;
        goto LAB_040fa028;
      }
    }
  }
  else {
    if (uVar5 < 0xc2954bc3) {
      if (uVar5 == 0xb60645db) {
        bVar6 = System_String__op_Equality(name,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        __this_01 = (__this->fields)._currentPage;
        if (__this_01 != (Settings_IntSetting_o *)0x0) {
          iVar9 = (__this_01->fields)._value;
          if (iVar9 < 1) {
            iVar9 = (__this->fields)._lastPageCount;
          }
          iVar9 = iVar9 + -1;
LAB_040fa1bd:
          Settings_TypedSetting<int>__set_Value
                    ((Settings_TypedSetting_int__o *)__this_01,iVar9,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this,0,method_01);
          return;
        }
        goto LAB_040fa1ea;
      }
      if (uVar5 != 0xc2954bc2) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar3 == (long *)0x0) goto LAB_040fa1ea;
      lVar4 = *plVar3;
      if ((*(byte *)(lVar4 + 0x130) < *(byte *)(TypeInfo_MainMenu + 0x130)) ||
         (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) !=
          TypeInfo_MainMenu)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar3);
      }
      (**(code **)(lVar4 + 0x198))(plVar3,*(undefined8 *)(lVar4 + 0x1a0));
      pUVar10 = (UI_MultiplayerFilterPopup_o *)plVar3[0x15];
      ppIVar8 = extraout_RDX_00;
    }
    else {
      if (uVar5 == 0xcad5d456) {
        bVar6 = System_String__op_Equality(name,"RightPage",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        __this_01 = (__this->fields)._currentPage;
        if (__this_01 != (Settings_IntSetting_o *)0x0) {
          iVar2 = (__this_01->fields)._value;
          iVar9 = iVar2 + 1;
          if ((__this->fields)._lastPageCount + -1 <= iVar2) {
            iVar9 = 0;
          }
          goto LAB_040fa1bd;
        }
        goto LAB_040fa1ea;
      }
      if (uVar5 != 0xf4a9c097) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"Filter",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar10 = (__this->fields)._multiplayerFilterPopup;
      ppIVar8 = extraout_RDX_01;
    }
    if (pUVar10 != (UI_MultiplayerFilterPopup_o *)0x0) {
      pUVar7 = pUVar10->klass;
LAB_040fa028:
      vtable_dispatch = (pUVar7->vtable)._21_Show.methodPtr;
      (*vtable_dispatch)
                (pUVar10,(pUVar7->vtable)._21_Show.method,ppIVar8,vtable_dispatch);
      return;
    }
  }
LAB_040fa1ea:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$.ctor
// il2cpp: void UI_MultiplayerRoomListPopup___ctor (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40fa200

void UI_MultiplayerRoomListPopup___ctor(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  uint16_t uVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  Settings_StringSetting_o *__this_01;
  Settings_BoolSetting_o *pSVar2;
  Settings_IntSetting_o *__this_02;
  System_Char_array *pSVar3;
  
  if (DAT_05704842 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_char);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"`");
    DAT_05704842 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._roomButtons = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._roomButtons,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._filterQuery = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._filterQuery,__this_01);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields)._filterShowFull = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._filterShowFull,pSVar2);
  pSVar2 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,1,(MethodInfo *)0x0);
  (__this->fields)._filterShowPassword = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._filterShowPassword);
  __this_02 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(__this_02,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentPage = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._currentPage,__this_02);
  (__this->fields)._maxUpdateDelay = 5.0;
  (__this->fields)._currentUpdateDelay = 5.0;
  (__this->fields)._roomsPerPage = 10;
  pSVar3 = (System_Char_array *)il2cpp_glue_02274930(TypeInfo_char);
  if ("`" != (System_String_o *)0x0) {
    uVar1 = System_String__get_Chars("`",0,(MethodInfo *)0x0);
    if (pSVar3 != (System_Char_array *)0x0) {
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = uVar1;
        (__this->fields)._roomSeperator = pSVar3;
        il2cpp_runtime_glue(&(__this->fields)._roomSeperator);
        UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_0
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_0 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40fa430

void UI_MultiplayerRoomListPopup__<Setup>b__29_0
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704843 == '\0') {
    il2cpp_init_method_metadata(&"Create");
    DAT_05704843 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"Create",in_RDX);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_1
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_1 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40fa470

void UI_MultiplayerRoomListPopup__<Setup>b__29_1
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704844 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704844 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_2
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_2 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40fa4b0

void UI_MultiplayerRoomListPopup__<Setup>b__29_2
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_MultiplayerRoomListPopup__RefreshList(__this,1,in_RDX);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_3
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_3 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40fa4c0

void UI_MultiplayerRoomListPopup__<Setup>b__29_3
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704845 == '\0') {
    il2cpp_init_method_metadata(&"Filter");
    DAT_05704845 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"Filter",in_RDX);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_4
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_4 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40fa500

void UI_MultiplayerRoomListPopup__<Setup>b__29_4
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704846 == '\0') {
    il2cpp_init_method_metadata(&"Refresh");
    DAT_05704846 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"Refresh",in_RDX);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_5
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_5 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40fa540

void UI_MultiplayerRoomListPopup__<Setup>b__29_5
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704847 == '\0') {
    il2cpp_init_method_metadata(&"LeftPage");
    DAT_05704847 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"LeftPage",in_RDX);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_6
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_6 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x40fa580

void UI_MultiplayerRoomListPopup__<Setup>b__29_6
               (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704848 == '\0') {
    il2cpp_init_method_metadata(&"RightPage");
    DAT_05704848 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerRoomListPopup__OnButtonClick(__this,"RightPage",in_RDX);
  return;
}



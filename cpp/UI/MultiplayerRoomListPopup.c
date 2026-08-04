// Type: UI.MultiplayerRoomListPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerRoomListPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerRoomListPopup.cs
// --------------------------------

// UI.MultiplayerRoomListPopup.<>c__DisplayClass35_0$$.ctor
// il2cpp: void UI_MultiplayerRoomListPopup___c__DisplayClass35_0___ctor (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x440d6f0

void UI_MultiplayerRoomListPopup___c__DisplayClass35_0___ctor
               (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup.<>c__DisplayClass35_0$$<RefreshList>b__0
// il2cpp: void UI_MultiplayerRoomListPopup___c__DisplayClass35_0___RefreshList_b__0 (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x440e900

void UI_MultiplayerRoomListPopup___c__DisplayClass35_0___RefreshList_b__0
               (UI_MultiplayerRoomListPopup___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_MultiplayerSettings_o *__this_00;
  long lVar3;
  UI_MessagePopup_o *__this_01;
  Il2CppMethodPointer vtableDispatch;
  long *plVar4;
  UI_MultiplayerRoomListPopup_c *pUVar5;
  MethodInfo *pMVar6;
  UI_CreateGamePopup_o *__this_02;
  char cVar7;
  uint16_t uVar8;
  bool_conflict bVar9;
  uint32_t uVar10;
  System_String_o *pSVar11;
  System_String_o *roomName;
  UI_MultiplayerRoomListPopup_o **ppUVar12;
  UI_MultiplayerPasswordPopup_c *pUVar13;
  System_Collections_Generic_List_GameObject__o *__this_03;
  Settings_StringSetting_o *__this_04;
  Settings_BoolSetting_o *pSVar14;
  Settings_IntSetting_o *pSVar15;
  System_Char_array *pSVar16;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar17;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_MultiplayerRoomListPopup_o **room;
  UI_MultiplayerRoomListPopup_o **key;
  undefined1 *puVar18;
  int iVar19;
  UI_MultiplayerRoomListPopup_o *__this_05;
  UI_MultiplayerPasswordPopup_o *pUVar20;
  UI_MultiplayerRoomListPopup_o *__this_06;
  MethodInfo *in_R9;
  UI_MultiplayerRoomListPopup_o *unaff_R15;
  undefined1 auStack_38 [8];
  
  __this_06 = (__this->fields).__4__this;
  if (__this_06 == (UI_MultiplayerRoomListPopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae5e4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&"MainMenu");
      il2cpp_runtime_helper_023445d0(&"Title");
      il2cpp_runtime_helper_023445d0(&"MultiplayerSettingsPopup");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ae5e4 = '\x01';
    }
    if (*(int *)((long)&(TypeInfo_UIManager->fields)._filterQuery + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__GetLocale
              ("MainMenu","MultiplayerSettingsPopup","Title","","",(MethodInfo *)0x0);
    return;
  }
  room = (UI_MultiplayerRoomListPopup_o **)(__this->fields).room;
  if (g_data_057ae5db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Requires user account to join");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5db = '\x01';
    if (g_data_057ae5d9 == '\0') goto label_0440df33;
label_0440dd3b:
    iVar19 = *(int *)(TypeInfo_RoomProperty + 0xe4);
  }
  else {
    if (g_data_057ae5d9 != '\0') goto label_0440dd3b;
label_0440df33:
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    g_data_057ae5d9 = '\x01';
    iVar19 = *(int *)(TypeInfo_RoomProperty + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = *(UI_MultiplayerRoomListPopup_o ***)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30);
  bVar9 = PhotonExtensions__GetBoolProperty_3f67fc0
                    ((Photon_Realtime_RoomInfo_o *)room,(System_String_o *)key,0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar7 = (char)bVar9;
    }
    else {
      bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar7 = (char)bVar9;
    }
    if (cVar7 == '\0') {
      room = &TypeInfo_UIManager;
      if (*(int *)((long)&(TypeInfo_UIManager->fields)._filterQuery + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar3 = *(long *)&(((TypeInfo_UIManager->fields)._pageLabel)->fields).m_Color.fields;
      __this_05 = TypeInfo_UIManager;
      if (lVar3 != 0) {
        __this_01 = *(UI_MessagePopup_o **)(lVar3 + 0x30);
        __this_05 = (UI_MultiplayerRoomListPopup_o *)0x0;
        if (__this_01 != (UI_MessagePopup_o *)0x0) {
          UI_MessagePopup__Show(__this_01,"Requires user account to join",1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_0440e067;
    }
  }
  if (g_data_057ae5d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5d8 = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  unaff_R15 = (UI_MultiplayerRoomListPopup_o *)
              PhotonExtensions__GetStringProperty_3f67f30
                        ((Photon_Realtime_RoomInfo_o *)room,
                         *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),"",
                         (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = PhotonExtensions__GetStringProperty_3f67f30
                      ((Photon_Realtime_RoomInfo_o *)room,
                       *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x20),"",
                       (MethodInfo *)0x0);
  key = (UI_MultiplayerRoomListPopup_o **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_05 = unaff_R15;
  bVar9 = System_String__op_Inequality((System_String_o *)unaff_R15,(System_String_o *)key,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    if ((UI_MultiplayerRoomListPopup_o *)room != (UI_MultiplayerRoomListPopup_o *)0x0) {
      __this_00 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
      unaff_R15 = (UI_MultiplayerRoomListPopup_o *)
                  (((UI_MultiplayerRoomListPopup_o *)room)->fields)._currentCategoryPanel;
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      key = (UI_MultiplayerRoomListPopup_o **)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8);
      __this_05 = (UI_MultiplayerRoomListPopup_o *)room;
      pSVar11 = PhotonExtensions__GetStringProperty_3f67f30
                          ((Photon_Realtime_RoomInfo_o *)room,(System_String_o *)key,"",
                           (MethodInfo *)0x0);
      __this_06 = (UI_MultiplayerRoomListPopup_o *)0x0;
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__JoinRoom
                  (__this_00,(System_String_o *)unaff_R15,pSVar11,
                   (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    key = (UI_MultiplayerRoomListPopup_o **)(__this_06->klass->vtable)._26_HideAllPopups.method;
    __this_05 = __this_06;
    (*(__this_06->klass->vtable)._26_HideAllPopups.methodPtr)();
    if ((UI_MultiplayerRoomListPopup_o *)room != (UI_MultiplayerRoomListPopup_o *)0x0) {
      pUVar20 = (__this_06->fields)._multiplayerPasswordPopup;
      __this_06 = (UI_MultiplayerRoomListPopup_o *)
                  (((UI_MultiplayerRoomListPopup_o *)room)->fields)._currentCategoryPanel;
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      key = (UI_MultiplayerRoomListPopup_o **)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8);
      __this_05 = (UI_MultiplayerRoomListPopup_o *)room;
      roomName = PhotonExtensions__GetStringProperty_3f67f30
                           ((Photon_Realtime_RoomInfo_o *)room,(System_String_o *)key,"",
                            (MethodInfo *)0x0);
      if (pUVar20 != (UI_MultiplayerPasswordPopup_o *)0x0) {
        UI_MultiplayerPasswordPopup__Show
                  (pUVar20,(System_String_o *)unaff_R15,pSVar11,(System_String_o *)__this_06,roomName,in_R9);
        return;
      }
    }
  }
label_0440e067:
  ppUVar12 = (UI_MultiplayerRoomListPopup_o **)il2cpp_runtime_helper_022b2c90();
  puVar18 = auStack_38;
  do {
    *(UI_MultiplayerRoomListPopup_o **)(puVar18 + -8) = __this_06;
    *(UI_MultiplayerRoomListPopup_o ***)(puVar18 + -0x10) = room;
    *(UI_MultiplayerRoomListPopup_o ***)(puVar18 + -0x18) = ppUVar12;
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)(puVar18 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    vtableDispatch = (__this_05->klass->vtable)._26_HideAllPopups.methodPtr;
    *(undefined8 *)(puVar18 + -0x20) = 0x440e13d;
    (*vtableDispatch)(__this_05);
    *(undefined8 *)(puVar18 + -0x20) = 0x440e147;
    uVar10 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)key,(MethodInfo *)0x0);
    if (uVar10 < 0x990de47e) {
      if (uVar10 == 0x990de47d) {
        *(undefined8 *)(puVar18 + -0x20) = 0x440e3c3;
        bVar9 = System_String__op_Equality
                          ((System_String_o *)key,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        *(undefined8 *)(puVar18 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this_05,(MethodInfo *)0x0);
        key = &TypeInfo_UIManager;
        if (*(int *)((long)&(TypeInfo_UIManager->fields)._filterQuery + 4) == 0) {
          *(undefined8 *)(puVar18 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar4 = *(long **)&(((TypeInfo_UIManager->fields)._pageLabel)->fields).m_Color.fields;
        if (plVar4 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_02 = (UI_CreateGamePopup_o *)plVar4[0x13];
            if (__this_02 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_02,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar10 == 0x815aad4) {
          *(undefined8 *)(puVar18 + -0x20) = 0x440e393;
          bVar9 = System_String__op_Equality((System_String_o *)key,"Refresh",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          UI_MultiplayerRoomListPopup__RefreshList(__this_05,1,method_00);
          return;
        }
        if (uVar10 != 0x479b753b) {
          return;
        }
        *(undefined8 *)(puVar18 + -0x20) = 0x440e182;
        bVar9 = System_String__op_Equality((System_String_o *)key,"Duel",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        *(undefined8 *)(puVar18 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this_05,(MethodInfo *)0x0);
        key = &TypeInfo_UIManager;
        if (*(int *)((long)&(TypeInfo_UIManager->fields)._filterQuery + 4) == 0) {
          *(undefined8 *)(puVar18 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar4 = *(long **)&(((TypeInfo_UIManager->fields)._pageLabel)->fields).m_Color.fields;
        if (plVar4 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pUVar20 = (UI_MultiplayerPasswordPopup_o *)plVar4[0x19];
            if (pUVar20 == (UI_MultiplayerPasswordPopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar20->klass->_2).naturalAligment) &&
               ((pUVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pUVar13 = pUVar20->klass;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pUVar13->_2).naturalAligment) &&
                 (ppIVar17 = (pUVar13->_2).typeHierarchy, ppIVar17[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          key = &TypeInfo_UIManager;
          *(undefined8 *)(puVar18 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)(puVar18 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar10) {
        if (uVar10 == 0xcad5d456) {
          *(undefined8 *)(puVar18 + -0x20) = 0x440e4d6;
          bVar9 = System_String__op_Equality((System_String_o *)key,"RightPage",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pSVar15 = (__this_05->fields)._currentPage;
          if (pSVar15 != (Settings_IntSetting_o *)0x0) {
            iVar2 = (pSVar15->fields)._value;
            iVar19 = iVar2 + 1;
            if ((__this_05->fields)._lastPageCount + -1 <= iVar2) {
              iVar19 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar10 != 0xf4a9c097) {
            return;
          }
          *(undefined8 *)(puVar18 + -0x20) = 0x440e34d;
          bVar9 = System_String__op_Equality((System_String_o *)key,"Filter",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar20 = (UI_MultiplayerPasswordPopup_o *)(__this_05->fields)._multiplayerFilterPopup;
          ppIVar17 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pUVar20 != (UI_MultiplayerPasswordPopup_o *)0x0) {
            pUVar13 = pUVar20->klass;
label_0440e368:
            vtableDispatch = (pUVar13->vtable)._21_Show.methodPtr;
            (*vtableDispatch)(pUVar20,(pUVar13->vtable)._21_Show.method,ppIVar17,vtableDispatch)
            ;
            return;
          }
        }
        goto label_0440e52a;
      }
      if (uVar10 == 0xb60645db) {
        *(undefined8 *)(puVar18 + -0x20) = 0x440e49f;
        bVar9 = System_String__op_Equality((System_String_o *)key,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pSVar15 = (__this_05->fields)._currentPage;
        if (pSVar15 != (Settings_IntSetting_o *)0x0) {
          iVar19 = (pSVar15->fields)._value;
          if (iVar19 < 1) {
            iVar19 = (__this_05->fields)._lastPageCount;
          }
          iVar19 = iVar19 + -1;
label_0440e4fd:
          *(undefined8 *)(puVar18 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar15,iVar19,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this_05,0,method_01);
          return;
        }
        goto label_0440e52a;
      }
      if (uVar10 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)(puVar18 + -0x20) = 0x440e299;
      bVar9 = System_String__op_Equality((System_String_o *)key,"Back",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (*(int *)((long)&(TypeInfo_UIManager->fields)._filterQuery + 4) == 0) {
        *(undefined8 *)(puVar18 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      key = *(UI_MultiplayerRoomListPopup_o ***)&(((TypeInfo_UIManager->fields)._pageLabel)->fields).m_Color.fields;
      if ((UI_MultiplayerRoomListPopup_o *)key == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440e52a;
      pUVar5 = ((UI_MultiplayerRoomListPopup_o *)key)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar5->_2).naturalAligment) &&
         ((pUVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar6 = (pUVar5->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar5->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)(puVar18 + -0x20) = 0x440e312;
        (*vtableDispatch)(key,pMVar6);
        pUVar20 = (((UI_MultiplayerRoomListPopup_o *)key)->fields)._multiplayerPasswordPopup;
        ppIVar17 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)(puVar18 + -0x20) = 0x440e537;
    __this_06 = (UI_MultiplayerRoomListPopup_o *)key;
    il2cpp_runtime_helper_022b2fd0();
    *(UI_MultiplayerRoomListPopup_o **)(puVar18 + -0x20) = unaff_R15;
    *(UI_MultiplayerRoomListPopup_o **)(puVar18 + -0x28) = __this_05;
    *(UI_MultiplayerRoomListPopup_o ***)(puVar18 + -0x30) = key;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)(puVar18 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)(puVar18 + -0x38) = 0x440e5bb;
    __this_03 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_GameObject);
    (__this_06->fields)._roomButtons = __this_03;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&(__this_06->fields)._roomButtons,__this_03);
    pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e60d;
    __this_04 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0(__this_04,pSVar11,0x7fffffff,(MethodInfo *)0x0);
    (__this_06->fields)._filterQuery = __this_04;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&(__this_06->fields)._filterQuery,__this_04);
    unaff_R15 = (UI_MultiplayerRoomListPopup_o *)&TypeInfo_BoolSetting;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e647;
    pSVar14 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar14,1,(MethodInfo *)0x0);
    (__this_06->fields)._filterShowFull = pSVar14;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&(__this_06->fields)._filterShowFull,pSVar14);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e677;
    pSVar14 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar14,1,(MethodInfo *)0x0);
    (__this_06->fields)._filterShowPassword = pSVar14;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&(__this_06->fields)._filterShowPassword);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e6ae;
    pSVar15 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(pSVar15,0,0,0x7fffffff,(MethodInfo *)0x0);
    (__this_06->fields)._currentPage = pSVar15;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&(__this_06->fields)._currentPage,pSVar15);
    (__this_06->fields)._maxUpdateDelay = 5.0;
    (__this_06->fields)._currentUpdateDelay = 5.0;
    (__this_06->fields)._roomsPerPage = 10;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e70b;
    pSVar16 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this_05 = "`";
    if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
      *(undefined8 *)(puVar18 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)(puVar18 + -0x38) = 0x440e726;
      uVar8 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (pSVar16 == (System_Char_array *)0x0) goto label_0440e75a;
      if ((int)pSVar16->max_length != 0) {
        pSVar16->m_Items[0] = uVar8;
        (__this_06->fields)._roomSeperator = pSVar16;
        *(undefined8 *)(puVar18 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&(__this_06->fields)._roomSeperator);
        UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_06,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)(puVar18 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    *(System_Char_array **)(puVar18 + -0x38) = pSVar16;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)(puVar18 + -0x40) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
    }
    ppUVar12 = &"Create";
    room = *(UI_MultiplayerRoomListPopup_o ***)(puVar18 + -0x38);
    puVar18 = puVar18 + -0x30;
    key = (UI_MultiplayerRoomListPopup_o **)"Create";
  } while( true );
}


// UI.MultiplayerRoomListPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_MultiplayerRoomListPopup__get_ThemePanel (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440bce0

System_String_o *
UI_MultiplayerRoomListPopup__get_ThemePanel(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae5cd == '\0') {
    il2cpp_runtime_helper_023445d0(&"MultiplayerRoomListPopup");
    g_data_057ae5cd = '\x01';
  }
  return "MultiplayerRoomListPopup";
}


// UI.MultiplayerRoomListPopup$$get_HasPremadeContent
// il2cpp: bool UI_MultiplayerRoomListPopup__get_HasPremadeContent (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440bd10

bool_conflict
UI_MultiplayerRoomListPopup__get_HasPremadeContent(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MultiplayerRoomListPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerRoomListPopup__get_HorizontalPadding (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440bd20

int32_t UI_MultiplayerRoomListPopup__get_HorizontalPadding
                  (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerRoomListPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerRoomListPopup__get_VerticalPadding (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440bd30

int32_t UI_MultiplayerRoomListPopup__get_VerticalPadding
                  (UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerRoomListPopup$$get_Width
// il2cpp: float UI_MultiplayerRoomListPopup__get_Width (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440bd40

float UI_MultiplayerRoomListPopup__get_Width(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.MultiplayerRoomListPopup$$get_Height
// il2cpp: float UI_MultiplayerRoomListPopup__get_Height (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440bd50

float UI_MultiplayerRoomListPopup__get_Height(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  return 660.0;
}


// UI.MultiplayerRoomListPopup$$Setup
// il2cpp: void UI_MultiplayerRoomListPopup__Setup (UI_MultiplayerRoomListPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x440bd60

void UI_MultiplayerRoomListPopup__Setup
               (UI_MultiplayerRoomListPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  int iVar2;
  uint uVar3;
  Settings_StringSetting_o *setting;
  Il2CppClass *pIVar4;
  UnityEngine_UI_ColorBlock_o value;
  int32_t fontSize;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UI_MultiplayerRoomListPopup_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UI_InputSettingElement_o *__this_01;
  UI_ElementStyle_o *__this_02;
  System_String_o *title;
  Il2CppObject *pIVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_UI_Text_o *pUVar12;
  System_String_o *pSVar13;
  UI_MultiplayerRoomListPopup_o *pUVar14;
  System_Object_array *pSVar15;
  UnityEngine_UI_RawImage_o *__this_03;
  UnityEngine_Texture_o *value_00;
  MethodInfo *method_00;
  UI_MultiplayerRoomListPopup_o *__this_04;
  UI_BasePopup_o *__this_05;
  UI_BasePopup_o *__this_06;
  uint uVar16;
  UnityEngine_Color_o UVar17;
  UI_MultiplayerRoomListPopup_c *pUStack_88;
  void *pvStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  System_Threading_CancellationTokenSource_o *pSStack_70;
  UnityEngine_Transform_o *pUStack_68;
  UnityEngine_Transform_o *pUStack_60;
  UnityEngine_Transform_o *pUStack_58;
  System_Collections_Generic_List_BasePopup__o *pSStack_50;
  UnityEngine_GameObject_o *pUStack_48;
  Settings_StringSetting_o *pSStack_40;
  System_Collections_Generic_Dictionary_string__Type__o *pSStack_38;
  
  if (g_data_057ae5ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponentsInChildren_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_AddComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__29_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__29_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__29_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__29_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__29_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__29_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__29_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"0 ");
    il2cpp_runtime_helper_023445d0(&"RoomList");
    il2cpp_runtime_helper_023445d0(&"Page/RightButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"NoRoomsLabel");
    il2cpp_runtime_helper_023445d0(&"BackgroundTexture");
    il2cpp_runtime_helper_023445d0(&"Page/LeftButton");
    il2cpp_runtime_helper_023445d0(&"SearchInputSetting");
    il2cpp_runtime_helper_023445d0(&"Create");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Page/PageLabel");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"RoomButton");
    il2cpp_runtime_helper_023445d0(&"PlayersOnlineLabel");
    il2cpp_runtime_helper_023445d0(&"Filters");
    il2cpp_runtime_helper_023445d0(&"FilterButton");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"PlayersOnline");
    il2cpp_runtime_helper_023445d0(&"BackgroundColor");
    il2cpp_runtime_helper_023445d0(&"NoRooms");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    il2cpp_runtime_helper_023445d0(&"Search");
    il2cpp_runtime_helper_023445d0(&"RefreshButton");
    g_data_057ae5ce = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar13 = "MultiplayerRoomListPopup";
  pUVar14 = "MainMenu";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar11 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Create",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar11,__this_00,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar11 = (__this->fields).BottomBar;
  pSVar6 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar11,__this_00,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
  if (((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
      (pUVar8 = (UI_MultiplayerRoomListPopup_o *)
                UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)__this_04,"SearchInputSetting",(MethodInfo *)0x0),
      pUVar8 == (UI_MultiplayerRoomListPopup_o *)0x0)) ||
     (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
     __this_04 = pUVar8, pUVar9 == (UnityEngine_GameObject_o *)0x0)) {
label_0440cbd6:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_01 = (UI_InputSettingElement_o *)UnityEngine_GameObject__AddComponent_object_(pUVar9,MethodInfo_InputSettingElement_AddComponent_InputSettingElement);
    setting = (__this->fields)._filterQuery;
    __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_02,0x18,0.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
    title = UI_UIManager__GetLocaleCommon("Search",(MethodInfo *)0x0);
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pUVar8 = (UI_MultiplayerRoomListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    __this_04 = pUVar8;
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 == (UI_InputSettingElement_o *)0x0) goto label_0440cbd6;
    UI_InputSettingElement__Setup
              (__this_01,(Settings_BaseSetting_o *)setting,__this_02,title,pSVar6,160.0,40.0,0,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)pUVar8,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
    if (((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
        (pUVar8 = (UI_MultiplayerRoomListPopup_o *)
                  UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_04,"FilterButton",(MethodInfo *)0x0),
        pUVar8 == (UI_MultiplayerRoomListPopup_o *)0x0)) ||
       (pIVar10 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Button_GetComponent_Button),
       __this_04 = pUVar8, pIVar10 == (Il2CppObject *)0x0)) goto label_0440cbd6;
    pIVar4 = pIVar10[0x10].klass;
    pUVar8 = (UI_MultiplayerRoomListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    __this_04 = pUVar8;
    UnityEngine_Events_UnityAction___ctor();
    if (pIVar4 == (Il2CppClass *)0x0) goto label_0440cbd6;
    UnityEngine_Events_UnityEvent__AddListener
              ((UnityEngine_Events_UnityEvent_o *)pIVar4,(UnityEngine_Events_UnityAction_o *)pUVar8,
               (MethodInfo *)0x0);
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
    if (((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
        (pUVar8 = (UI_MultiplayerRoomListPopup_o *)
                  UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_04,"RefreshButton",(MethodInfo *)0x0),
        pUVar8 == (UI_MultiplayerRoomListPopup_o *)0x0)) ||
       (pIVar10 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Button_GetComponent_Button),
       __this_04 = pUVar8, pIVar10 == (Il2CppObject *)0x0)) goto label_0440cbd6;
    pIVar4 = pIVar10[0x10].klass;
    pUVar8 = (UI_MultiplayerRoomListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    __this_04 = pUVar8;
    UnityEngine_Events_UnityAction___ctor();
    if (pIVar4 == (Il2CppClass *)0x0) goto label_0440cbd6;
    UnityEngine_Events_UnityEvent__AddListener
              ((UnityEngine_Events_UnityEvent_o *)pIVar4,(UnityEngine_Events_UnityAction_o *)pUVar8,
               (MethodInfo *)0x0);
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
    if (((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
        (pUVar8 = (UI_MultiplayerRoomListPopup_o *)
                  UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_04,"Page/LeftButton",(MethodInfo *)0x0),
        pUVar8 == (UI_MultiplayerRoomListPopup_o *)0x0)) ||
       (pIVar10 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Button_GetComponent_Button),
       __this_04 = pUVar8, pIVar10 == (Il2CppObject *)0x0)) goto label_0440cbd6;
    pIVar4 = pIVar10[0x10].klass;
    pUVar8 = (UI_MultiplayerRoomListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    __this_04 = pUVar8;
    UnityEngine_Events_UnityAction___ctor();
    if (pIVar4 == (Il2CppClass *)0x0) goto label_0440cbd6;
    UnityEngine_Events_UnityEvent__AddListener
              ((UnityEngine_Events_UnityEvent_o *)pIVar4,(UnityEngine_Events_UnityAction_o *)pUVar8,
               (MethodInfo *)0x0);
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
    if (((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
        (pUVar8 = (UI_MultiplayerRoomListPopup_o *)
                  UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_04,"Page/RightButton",(MethodInfo *)0x0),
        pUVar8 == (UI_MultiplayerRoomListPopup_o *)0x0)) ||
       (pIVar10 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Button_GetComponent_Button),
       __this_04 = pUVar8, pIVar10 == (Il2CppObject *)0x0)) goto label_0440cbd6;
    pIVar4 = pIVar10[0x10].klass;
    pUVar8 = (UI_MultiplayerRoomListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    __this_04 = pUVar8;
    UnityEngine_Events_UnityAction___ctor();
    if (pIVar4 == (Il2CppClass *)0x0) goto label_0440cbd6;
    UnityEngine_Events_UnityEvent__AddListener
              ((UnityEngine_Events_UnityEvent_o *)pIVar4,(UnityEngine_Events_UnityAction_o *)pUVar8,
               (MethodInfo *)0x0);
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
    if ((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
       (pUVar11 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_04,"Page/PageLabel",(MethodInfo *)0x0),
       pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_0440cbd6;
    pUVar12 = (UnityEngine_UI_Text_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._pageLabel = pUVar12;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._pageLabel);
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).SinglePanel;
    if ((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
       (pUVar11 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_04,"RoomList",(MethodInfo *)0x0),
       pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_0440cbd6;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._roomList;
    (__this->fields)._roomList = pUVar9;
    il2cpp_runtime_helper_022b4080();
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields)._roomList;
    if (((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
        (pUVar8 = (UI_MultiplayerRoomListPopup_o *)
                  UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_04,(MethodInfo *)0x0),
        pUVar8 == (UI_MultiplayerRoomListPopup_o *)0x0)) ||
       (pUVar11 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pUVar8,"NoRoomsLabel",(MethodInfo *)0x0),
       __this_04 = pUVar8, pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_0440cbd6;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    (__this->fields)._noRoomsLabel = pUVar9;
    il2cpp_runtime_helper_022b4080();
    pUVar9 = (__this->fields)._noRoomsLabel;
    __this_04 = (UI_MultiplayerRoomListPopup_o *)0x0;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_0440cbd6;
    pIVar10 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_Text_GetComponent_Text);
    __this_04 = pUVar14;
    pSVar6 = UI_UIManager__GetLocale
                       ((System_String_o *)pUVar14,pSVar13,"NoRooms","","",
                        (MethodInfo *)0x0);
    if (pIVar10 == (Il2CppObject *)0x0) goto label_0440cbd6;
    (*pIVar10->klass->vtable[0x4b].methodPtr)(pIVar10,pSVar6,pIVar10->klass->vtable[0x4b].method);
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
    if ((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
       (pUVar11 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_04,"PlayersOnlineLabel",(MethodInfo *)0x0),
       pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_0440cbd6;
    pUVar12 = (UnityEngine_UI_Text_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._playersOnlineLabel = pUVar12;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._playersOnlineLabel,pUVar12);
    pUVar12 = (__this->fields)._playersOnlineLabel;
    pSVar13 = UI_UIManager__GetLocale
                        ((System_String_o *)pUVar14,pSVar13,"PlayersOnline","","",
                         (MethodInfo *)0x0);
    __this_04 = "0 ";
    pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)"0 ",pSVar13,(MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_UI_Text_o *)0x0) goto label_0440cbd6;
    (*(pUVar12->klass->vtable)._75_set_text.methodPtr)
              (pUVar12,pSVar13,(pUVar12->klass->vtable)._75_set_text.method);
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
    if (((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
        (pUVar14 = (UI_MultiplayerRoomListPopup_o *)
                   UnityEngine_Transform__Find
                             ((UnityEngine_Transform_o *)__this_04,"FilterButton",(MethodInfo *)0x0),
        pUVar14 == (UI_MultiplayerRoomListPopup_o *)0x0)) ||
       (pUVar11 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pUVar14,"Text",(MethodInfo *)0x0),
       __this_04 = pUVar14, pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_0440cbd6;
    pIVar10 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text);
    __this_04 = "Filters";
    pSVar13 = UI_UIManager__GetLocaleCommon((System_String_o *)"Filters",(MethodInfo *)0x0);
    if (pIVar10 == (Il2CppObject *)0x0) goto label_0440cbd6;
    (*pIVar10->klass->vtable[0x4b].methodPtr)(pIVar10,pSVar13,pIVar10->klass->vtable[0x4b].method);
    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
    if ((__this_04 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
       (pSVar15 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                            ((UnityEngine_Component_o *)__this_04,MethodInfo_Button_GetComponentsInChildren_Button),
       pSVar15 == (System_Object_array *)0x0)) goto label_0440cbd6;
    iVar2 = (int)pSVar15->max_length;
    if (iVar2 < 1) {
label_0440c982:
      __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
      if (((__this_04 != (UI_MultiplayerRoomListPopup_o *)0x0) &&
          (pUVar14 = (UI_MultiplayerRoomListPopup_o *)
                     UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)__this_04,"Page/PageLabel",(MethodInfo *)0x0),
          pUVar14 != (UI_MultiplayerRoomListPopup_o *)0x0)) &&
         (pIVar10 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar14,MethodInfo_Text_GetComponent_Text), __this_04 = pUVar14,
         __this_00 != (UI_ElementStyle_o *)0x0)) {
        __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this_00->fields).ThemePanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar17 = UI_UIManager__GetThemeColor
                           ((System_String_o *)__this_04,"DefaultLabel","TextColor","DefaultPanel",
                            (MethodInfo *)0x0);
        if (pIVar10 != (Il2CppObject *)0x0) {
          (*pIVar10->klass->vtable[0x17].methodPtr)(UVar17.fields.r,UVar17.fields.b,pIVar10);
          __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).TopBar;
          if ((__this_04 != (UI_MultiplayerRoomListPopup_o *)0x0) &&
             (pUVar11 = UnityEngine_Transform__Find
                                  ((UnityEngine_Transform_o *)__this_04,"PlayersOnlineLabel",(MethodInfo *)0x0),
             pUVar11 != (UnityEngine_Transform_o *)0x0)) {
            pIVar10 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text);
            __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this_00->fields).ThemePanel;
            UVar17 = UI_UIManager__GetThemeColor
                               ((System_String_o *)__this_04,"DefaultLabel","TextColor","DefaultPanel",
                                (MethodInfo *)0x0);
            if (pIVar10 != (Il2CppObject *)0x0) {
              (*pIVar10->klass->vtable[0x17].methodPtr)(UVar17.fields.r,UVar17.fields.b,pIVar10);
              pUVar9 = (__this->fields)._noRoomsLabel;
              __this_04 = (UI_MultiplayerRoomListPopup_o *)0x0;
              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                pIVar10 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_Text_GetComponent_Text);
                __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this_00->fields).ThemePanel;
                UVar17 = UI_UIManager__GetThemeColor
                                   ((System_String_o *)__this_04,"RoomButton","TextColor","DefaultPanel",
                                    (MethodInfo *)0x0);
                if (pIVar10 != (Il2CppObject *)0x0) {
                  (*pIVar10->klass->vtable[0x17].methodPtr)(UVar17.fields.r,UVar17.fields.b,pIVar10);
                  pUVar9 = *ppUVar1;
                  __this_04 = (UI_MultiplayerRoomListPopup_o *)0x0;
                  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                    __this_03 = (UnityEngine_UI_RawImage_o *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_RawImage_GetComponent_RawImage);
                    __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this_00->fields).ThemePanel;
                    value_00 = (UnityEngine_Texture_o *)
                               UI_UIManager__GetThemeTexture
                                         ((System_String_o *)__this_04,"MainBody","BackgroundTexture","DefaultPanel",
                                          (MethodInfo *)0x0);
                    if (__this_03 != (UnityEngine_UI_RawImage_o *)0x0) {
                      UnityEngine_UI_RawImage__set_texture(__this_03,value_00,(MethodInfo *)0x0);
                      pUVar9 = *ppUVar1;
                      __this_04 = (UI_MultiplayerRoomListPopup_o *)0x0;
                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                        pIVar10 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_RawImage_GetComponent_RawImage);
                        __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this_00->fields).ThemePanel;
                        UVar17 = UI_UIManager__GetThemeColor
                                           ((System_String_o *)__this_04,"MainBody","BackgroundColor",
                                            "DefaultPanel",(MethodInfo *)0x0);
                        if (pIVar10 != (Il2CppObject *)0x0) {
                          (*pIVar10->klass->vtable[0x17].methodPtr)
                                    (UVar17.fields.r,UVar17.fields.b,pIVar10,
                                     pIVar10->klass->vtable[0x17].method);
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
      goto label_0440cbd6;
    }
    uVar16 = 0;
    pUVar14 = __this_04;
    if (iVar2 != 0) {
      do {
        __this_04 = pUVar14;
        if (__this_00 == (UI_ElementStyle_o *)0x0) goto label_0440cbd6;
        pUVar8 = (UI_MultiplayerRoomListPopup_o *)pSVar15->m_Items[(int)uVar16];
        pSVar13 = (__this_00->fields).ThemePanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_04 = (UI_MultiplayerRoomListPopup_o *)&stack0xffffffffffffff78;
        UI_UIManager__GetThemeColorBlock
                  ((UnityEngine_UI_ColorBlock_o *)__this_04,pSVar13,"DefaultButton","","DefaultPanel",
                   (MethodInfo *)0x0);
        if (pUVar8 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440cbd6;
        value.fields.m_NormalColor.fields._8_8_ = pvStack_80;
        value.fields.m_NormalColor.fields._0_8_ = pUStack_88;
        value.fields.m_HighlightedColor.fields.r = (float)uStack_78;
        value.fields.m_HighlightedColor.fields.g = (float)uStack_74;
        value.fields.m_HighlightedColor.fields._8_8_ = pSStack_70;
        value.fields.m_PressedColor.fields._0_8_ = pUStack_68;
        value.fields.m_PressedColor.fields._8_8_ = pUStack_60;
        value.fields.m_SelectedColor.fields._0_8_ = pUStack_58;
        value.fields.m_SelectedColor.fields._8_8_ = pSStack_50;
        value.fields.m_DisabledColor.fields._0_8_ = pUStack_48;
        value.fields.m_DisabledColor.fields._8_8_ = pSStack_40;
        value.fields._80_8_ = pSStack_38;
        UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar8,value,(MethodInfo *)0x0);
        __this_04 = pUVar8;
        pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
        if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0440cbd6;
        pUVar14 = (UI_MultiplayerRoomListPopup_o *)
                  UnityEngine_Transform__Find(pUVar11,"Text",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pUVar14 = (UI_MultiplayerRoomListPopup_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
          __this_04 = pUVar8;
          if ((pUVar14 == (UI_MultiplayerRoomListPopup_o *)0x0) ||
             (pUVar11 = UnityEngine_Transform__Find
                                  ((UnityEngine_Transform_o *)pUVar14,"Text",(MethodInfo *)0x0),
             __this_04 = pUVar14, pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_0440cbd6;
          pUVar14 = (UI_MultiplayerRoomListPopup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text);
          __this_04 = (UI_MultiplayerRoomListPopup_o *)(__this_00->fields).ThemePanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar17 = UI_UIManager__GetThemeColor
                             ((System_String_o *)__this_04,"DefaultButton","TextColor","DefaultPanel",
                              (MethodInfo *)0x0);
          if (pUVar14 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440cbd6;
          (*(pUVar14->klass->vtable)._23_SyncSettingElements.methodPtr)(UVar17.fields.r,UVar17.fields.b);
        }
        uVar16 = uVar16 + 1;
        uVar3 = (uint)pSVar15->max_length;
        if ((int)uVar3 <= (int)uVar16) goto label_0440c982;
        __this_04 = pUVar14;
      } while (uVar16 < uVar3);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae5cf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae5cf = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this_04,(MethodInfo *)0x0);
  __this_05 = (UI_BasePopup_o *)(__this_04->fields)._currentPage;
  if (__this_05 != (UI_BasePopup_o *)0x0) {
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_05,0,MethodInfo_Void_set_Value);
    UI_MultiplayerRoomListPopup__RefreshList(__this_04,1,method_00);
    (__this_04->fields)._currentUpdateDelay = 0.5;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae5d0 = '\x01';
  }
  __this_06 = __this_05;
  pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
label_0440ccb8:
    il2cpp_runtime_helper_022b2c90();
    UI_BasePopup__Hide(__this_06,(MethodInfo *)0x0);
    return;
  }
  bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    __this_06 = (UI_BasePopup_o *)0x0;
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
        (Settings_MultiplayerSettings_o *)0x0) goto label_0440ccb8;
    Settings_MultiplayerSettings__Disconnect
              ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),(MethodInfo *)0x0);
  }
  UI_BasePopup__Hide(__this_05,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$Show
// il2cpp: void UI_MultiplayerRoomListPopup__Show (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440cbe0

void UI_MultiplayerRoomListPopup__Show(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  UI_BasePopup_o *__this_01;
  UI_BasePopup_o *__this_02;
  
  if (g_data_057ae5cf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae5cf = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  __this_01 = (UI_BasePopup_o *)(__this->fields)._currentPage;
  if (__this_01 != (UI_BasePopup_o *)0x0) {
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_01,0,MethodInfo_Void_set_Value);
    UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
    (__this->fields)._currentUpdateDelay = 0.5;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae5d0 = '\x01';
  }
  __this_02 = __this_01;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_02 = (UI_BasePopup_o *)0x0;
      if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
          (Settings_MultiplayerSettings_o *)0x0) goto label_0440ccb8;
      Settings_MultiplayerSettings__Disconnect
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),(MethodInfo *)0x0);
    }
    UI_BasePopup__Hide(__this_01,(MethodInfo *)0x0);
    return;
  }
label_0440ccb8:
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup__Hide(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$Hide
// il2cpp: void UI_MultiplayerRoomListPopup__Hide (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440cc50

void UI_MultiplayerRoomListPopup__Hide(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_MultiplayerRoomListPopup_o *__this_01;
  
  if (g_data_057ae5d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae5d0 = '\x01';
  }
  __this_01 = __this;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_01 = (UI_MultiplayerRoomListPopup_o *)0x0;
      if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
          (Settings_MultiplayerSettings_o *)0x0) goto label_0440ccb8;
      Settings_MultiplayerSettings__Disconnect
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),(MethodInfo *)0x0);
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
label_0440ccb8:
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup__Hide((UI_BasePopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$HideNoDisconnect
// il2cpp: void UI_MultiplayerRoomListPopup__HideNoDisconnect (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440ccc0

void UI_MultiplayerRoomListPopup__HideNoDisconnect(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerRoomListPopup$$Update
// il2cpp: void UI_MultiplayerRoomListPopup__Update (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440ccd0

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
// 0x440cd30

void UI_MultiplayerRoomListPopup__SetupPopups(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  uint uVar3;
  int32_t length;
  UI_BasePopup_array *pUVar4;
  UI_BasePopup_o *item;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar6;
  System_Collections_Generic_List_BasePopup__o *__this_04;
  UnityEngine_Component_o *pUVar7;
  UI_MultiplayerPasswordPopup_o *pUVar8;
  UI_MultiplayerFilterPopup_o *pUVar9;
  long *plVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_T__o *pSVar12;
  Il2CppMethodPointer pIVar13;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar14;
  
  if (g_data_057ae5d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MultiplayerFilterPopup_GetComponent_MultiplayerFilterPop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MultiplayerPasswordPopup_GetComponent_MultiplayerPasswor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MultiplayerFilterPopup_CreateHeadedPanel_MultiplayerFilt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MultiplayerPasswordPopup_CreateHeadedPanel_MultiplayerPa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae5d1 = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_List_BasePopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_04,0,MethodInfo_MultiplayerPasswordPopup_CreateHeadedPanel_MultiplayerPa);
  if (pUVar7 != (UnityEngine_Component_o *)0x0) {
    pUVar8 = (UI_MultiplayerPasswordPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar7,MethodInfo_MultiplayerPasswordPopup_GetComponent_MultiplayerPasswor)
    ;
    (__this->fields)._multiplayerPasswordPopup = pUVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._multiplayerPasswordPopup);
    __this_04 = (System_Collections_Generic_List_BasePopup__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_04,0,MethodInfo_MultiplayerFilterPopup_CreateHeadedPanel_MultiplayerFilt)
    ;
    if (pUVar7 != (UnityEngine_Component_o *)0x0) {
      pUVar9 = (UI_MultiplayerFilterPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar7,MethodInfo_MultiplayerFilterPopup_GetComponent_MultiplayerFilterPop)
      ;
      (__this->fields)._multiplayerFilterPopup = pUVar9;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._multiplayerFilterPopup,pUVar9);
      lVar5 = MethodInfo_Void_Add;
      __this_04 = (__this->fields)._popups;
      if (__this_04 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar8 = (__this->fields)._multiplayerPasswordPopup;
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (__this_04->fields)._items;
        if (pUVar4 != (UI_BasePopup_array *)0x0) {
          uVar3 = (__this_04->fields)._size;
          if (uVar3 < (uint)pUVar4->max_length) {
            (__this_04->fields)._size = uVar3 + 1;
            pUVar4->m_Items[(int)uVar3] = (UI_BasePopup_o *)pUVar8;
            il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
            __this_04 = (__this->fields)._popups;
            lVar5 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pUVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            __this_04 = (__this->fields)._popups;
            lVar5 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar5;
          if (__this_04 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            item = (UI_BasePopup_o *)(__this->fields)._multiplayerFilterPopup;
            piVar1 = &(__this_04->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (__this_04->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar3 = (__this_04->fields)._size;
              if ((uint)pUVar4->max_length <= uVar3) {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                return;
              }
              (__this_04->fields)._size = uVar3 + 1;
              pUVar4->m_Items[(int)uVar3] = item;
              il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae5d6 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pUVar4 = __this_04[5].fields._items;
  if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_0440d03e;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
             (System_Collections_Generic_List_object__o *)pUVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  while (__this_00.fields._8_8_ = pIVar13, __this_00.fields._list = pSVar12,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0), (char)bVar6 != '\0') {
    pUVar14 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    obj = pUVar14;
  }
  __this_01.fields._8_8_ = pIVar13;
  __this_01.fields._list = pSVar12;
  __this_01.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  do {
    pUVar4 = __this_04[5].fields._items;
    if (pUVar4 != (UI_BasePopup_array *)0x0) {
      piVar2 = (int *)((long)&pUVar4->max_length + 4);
      *piVar2 = *piVar2 + 1;
      length = (int32_t)pUVar4->max_length;
      *(undefined4 *)&pUVar4->max_length = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)pUVar4->bounds,0,length,(MethodInfo *)0x0);
      }
      return;
    }
label_0440d03e:
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) goto label_0440d084;
    plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar5 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar13;
    __this_02.fields._list = pSVar12;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  } while (lVar5 == 0);
  il2cpp_runtime_helper_022fefe0(lVar5);
label_0440d084:
  __this_03.fields._8_8_ = pIVar13;
  __this_03.fields._list = pSVar12;
  __this_03.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  _Unwind_Resume(auVar11._0_8_);
}


// UI.MultiplayerRoomListPopup$$RefreshList
// il2cpp: void UI_MultiplayerRoomListPopup__RefreshList (UI_MultiplayerRoomListPopup_o* __this, bool refetch, const MethodInfo* method);
// 0x4409060

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
  long lVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  UnityEngine_UI_ColorBlock_o value;
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
  UI_MultiplayerRoomListPopup_o *__this_06;
  UnityEngine_GameObject_o *pUVar18;
  UnityEngine_UI_Selectable_o *__this_07;
  long *plVar19;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar20;
  undefined4 in_register_00000034;
  Il2CppObject *pIVar21;
  UI_MultiplayerRoomListPopup_o *__this_08;
  float fVar22;
  UnityEngine_Color_o UVar23;
  undefined1 auVar24 [12];
  undefined8 in_stack_fffffffffffffe98;
  undefined8 in_stack_fffffffffffffea0;
  Il2CppClass *in_stack_fffffffffffffea8;
  int local_10c;
  undefined1 local_108 [32];
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  Il2CppClass *local_d8;
  Il2CppRGCTXData *pIStack_d0;
  _union_249689 local_c8;
  float fStack_c0;
  float fStack_bc;
  UnityEngine_Color_Fields local_b8;
  UnityEngine_Color_Fields local_a8 [2];
  undefined1 local_88 [24];
  Il2CppRGCTXData *pIStack_70;
  void *local_68;
  float fStack_60;
  float fStack_5c;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  float local_38;
  float fStack_34;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,refetch);
  if (g_data_057ae5d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_P);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_ToArray_RoomInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HoverTooltip_AddComponent_HoverTooltip);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Photon_Realtime_RoomInfo_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenuGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshList_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass35_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Requires user account to join");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomButton");
    il2cpp_runtime_helper_023445d0(&"PasswordIcon");
    il2cpp_runtime_helper_023445d0(&"RoomButton");
    il2cpp_runtime_helper_023445d0(&"VerificationIcon");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"0/0");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"PlayersOnline");
    g_data_057ae5d2 = '\x01';
  }
  local_10c = 0;
  local_108._0_8_ = (Il2CppMethodPointer)0x0;
  local_108._8_8_ = (Il2CppMethodPointer)0x0;
  local_108._16_8_ = (Il2CppClass *)0x0;
  (__this->fields)._currentUpdateDelay = (__this->fields)._maxUpdateDelay;
  if ((char)refetch != '\0') {
    if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04409bc5;
    source = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_P);
    pPVar11 = (Photon_Realtime_RoomInfo_array *)
              System_Linq_Enumerable__ToArray_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_RoomInfo_ToArray_RoomInfo);
    (__this->fields)._rooms = pPVar11;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._rooms);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar9 = Photon_Pun_PhotonNetwork__get_CountOfPlayers((MethodInfo *)0x0);
    local_10c = iVar9 / 2;
    pSVar12 = System_Int32__ToString((int32_t)&local_10c,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = UI_UIManager__GetLocale
                        ("MainMenu","MultiplayerRoomListPopup","PlayersOnline","","",(MethodInfo *)0x0);
    method_00 = (MethodInfo *)System_String__Concat_3af7150(pSVar12," ",pSVar13,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._playersOnlineLabel;
    if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) goto label_04409bc5;
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
      iVar20 = 0;
      UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
      if (g_data_057ae5d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        g_data_057ae5d5 = '\x01';
      }
      iVar2 = (pSVar14->fields)._size;
      if (iVar2 != 0) {
        iVar20 = (iVar2 + -1) / (__this->fields)._roomsPerPage + 1;
      }
      (__this->fields)._lastPageCount = iVar20;
      pSVar5 = (__this->fields)._currentPage;
      local_108._24_8_ = __this;
      if (pSVar5 != (Settings_IntSetting_o *)0x0) {
        iVar9 = (pSVar5->fields)._value;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar9 = System_Math__Min_3cb7d70(iVar9,iVar20 + -1,(MethodInfo *)0x0);
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar5,iVar9,MethodInfo_Void_set_Value);
        __this_08 = (UI_MultiplayerRoomListPopup_o *)local_108._24_8_;
        pSVar5 = ((UI_MultiplayerRoomListPopup_Fields *)(local_108._24_8_ + 0x10))->_currentPage;
        if (pSVar5 != (Settings_IntSetting_o *)0x0) {
          iVar20 = (int)local_108._24_8_;
          pUVar4 = ((UI_MultiplayerRoomListPopup_Fields *)(local_108._24_8_ + 0x10))->_pageLabel;
          local_10c = (pSVar5->fields)._value + 1;
          pSVar12 = System_Int32__ToString((int32_t)&local_10c,(MethodInfo *)0x0);
          pSVar13 = System_Int32__ToString(iVar20 + 0x120,(MethodInfo *)0x0);
          pSVar12 = System_String__Concat_3af7150(pSVar12,"/",pSVar13,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                      (pUVar4,pSVar12,(pUVar4->klass->vtable)._75_set_text.method);
            pSVar14 = UI_MultiplayerRoomListPopup__GetCurrentPageRooms(__this_08,pSVar14,method_01);
            if (pSVar14 != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,
                         (System_Collections_Generic_List_object__o *)pSVar14,MethodInfo_List_1_T_Enumerator_Photon_Realtime_RoomInfo_GetEnumerat);
              local_108._16_8_ = local_d8;
              local_108._0_8_ = CONCAT44(local_e8._4_4_,local_e8._0_4_);
              local_108._8_8_ = CONCAT44(fStack_dc,fStack_e0);
              while( true ) {
                __this_02.fields._index = (int)in_stack_fffffffffffffea0;
                __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
                __this_02.fields._current = (Il2CppObject *)in_stack_fffffffffffffea8;
                bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_02,(MethodInfo_321A1D0 *)local_108);
                if ((char)bVar10 == '\0') {
                  __this_03.fields._index = (int)in_stack_fffffffffffffea0;
                  __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
                  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
                  __this_03.fields._current = (Il2CppObject *)in_stack_fffffffffffffea8;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_03,(MethodInfo_321A1C0 *)local_108);
                  return;
                }
                pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass35_0);
                System_Object___ctor(pIVar15,(MethodInfo *)0x0);
                if (pIVar15 == (Il2CppObject *)0x0) break;
                pIVar15[1].monitor = __this_08;
                il2cpp_runtime_helper_022b4080(&pIVar15[1].monitor,__this_08);
                pIVar21 = pIVar15 + 1;
                pIVar15[1].klass = (Il2CppClass *)local_108._16_8_;
                il2cpp_runtime_helper_022b4080(pIVar21);
                pUVar17 = (__this_08->fields)._roomList;
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_04409b52;
                pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                pUVar17 = UI_ElementFactory__InstantiateAndBind(pUVar16,"Prefabs/MainMenu/MultiplayerRoomButton",(MethodInfo *)0x0);
                lVar8 = MethodInfo_Void_Add;
                __this_01 = (__this_08->fields)._roomButtons;
                if (__this_01 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04409b57;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar6 = (__this_01->fields)._items;
                if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto label_04409b5c;
                uVar3 = (__this_01->fields)._size;
                if (uVar3 < (uint)pUVar6->max_length) {
                  (__this_01->fields)._size = uVar3 + 1;
                  pUVar6->m_Items[(int)uVar3] = pUVar17;
                  il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar3,pUVar17);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar17,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_04409b61;
                pIVar15 = UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Button_GetComponent_Button);
                if (pIVar15 == (Il2CppObject *)0x0) goto label_04409b66;
                pIVar7 = pIVar15[0x10].klass;
                call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                if (pIVar7 == (Il2CppClass *)0x0) goto label_04409b6b;
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)pIVar7,call,(MethodInfo *)0x0);
                pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                __this_08 = (UI_MultiplayerRoomListPopup_o *)local_108._24_8_;
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04409b70;
                __this_06 = (UI_MultiplayerRoomListPopup_o *)
                            UnityEngine_Transform__Find(pUVar16,"Text",(MethodInfo *)0x0);
                if (__this_06 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_04409b75;
                pIVar15 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_06,MethodInfo_Text_GetComponent_Text);
                pSVar12 = UI_MultiplayerRoomListPopup__GetRoomFormattedName
                                    (__this_06,(Photon_Realtime_RoomInfo_o *)pIVar21->klass,method_02);
                if (pIVar15 == (Il2CppObject *)0x0) goto label_04409b7a;
                (*pIVar15->klass->vtable[0x4b].methodPtr)(pIVar15,pSVar12,pIVar15->klass->vtable[0x4b].method)
                ;
                pIVar7 = pIVar21->klass;
                if (g_data_057ae5d8 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
                  il2cpp_runtime_helper_023445d0(&"");
                  g_data_057ae5d8 = '\x01';
                }
                if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar12 = PhotonExtensions__GetStringProperty_3f67f30
                                    ((Photon_Realtime_RoomInfo_o *)pIVar7,
                                     *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),""
                                     ,(MethodInfo *)0x0);
                bVar10 = System_String__op_Equality
                                   (pSVar12,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04409b9d;
                  pUVar16 = UnityEngine_Transform__Find(pUVar16,"PasswordIcon",(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04409ba2;
                  pUVar18 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                  if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar18,0,(MethodInfo *)0x0);
                    goto label_044097e0;
                  }
                  goto label_04409ba7;
                }
label_044097e0:
                pIVar7 = pIVar21->klass;
                if (g_data_057ae5d9 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
                  g_data_057ae5d9 = '\x01';
                }
                if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = PhotonExtensions__GetBoolProperty_3f67fc0
                                   ((Photon_Realtime_RoomInfo_o *)pIVar7,
                                    *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30),0,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04409bac;
                  pUVar16 = UnityEngine_Transform__Find(pUVar16,"VerificationIcon",(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04409bb1;
                  pUVar18 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                  if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_04409bb6;
                  UnityEngine_GameObject__SetActive(pUVar18,1,(MethodInfo *)0x0);
                  pIVar15 = UnityEngine_GameObject__AddComponent_object_(pUVar18,MethodInfo_HoverTooltip_AddComponent_HoverTooltip);
                  if (pIVar15 != (Il2CppObject *)0x0) {
                    pIVar15[2].klass = "Requires user account to join";
                    il2cpp_runtime_helper_022b4080(pIVar15 + 2);
                    goto label_0440991f;
                  }
                  goto label_04409bbb;
                }
                pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04409b93;
                pUVar16 = UnityEngine_Transform__Find(pUVar16,"VerificationIcon",(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04409b98;
                pUVar18 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_04409bc0;
                UnityEngine_GameObject__SetActive(pUVar18,0,(MethodInfo *)0x0);
label_0440991f:
                __this_07 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Button_GetComponent_Button);
                pSVar12 = (System_String_o *)
                          (*((*&__this_08->klass)->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this_08,((*&__this_08->klass)->vtable)._4_get_ThemePanel.method);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UI_UIManager__GetThemeColorBlock
                          ((UnityEngine_UI_ColorBlock_o *)local_88,pSVar12,"RoomButton","",
                           "DefaultPanel",(MethodInfo *)0x0);
                local_a8[1].r = local_38;
                local_a8[1].g = fStack_34;
                local_a8[0].r = local_48.r;
                local_a8[0].g = local_48.g;
                local_a8[0].b = local_48.b;
                local_a8[0].a = local_48.a;
                local_b8.r = local_58.r;
                local_b8.g = local_58.g;
                local_b8.b = local_58.b;
                local_b8.a = local_58.a;
                local_c8.genericMethod = local_68;
                fStack_c0 = fStack_60;
                fStack_bc = fStack_5c;
                local_d8 = (Il2CppClass *)local_88._16_8_;
                pIStack_d0 = pIStack_70;
                local_e8._0_4_ = local_88._0_4_;
                local_e8._4_4_ = local_88._4_4_;
                fStack_e0 = (float)local_88._8_4_;
                fStack_dc = (float)local_88._12_4_;
                if (__this_07 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04409b7f;
                in_stack_fffffffffffffe98 = CONCAT44(local_88._4_4_,local_88._0_4_);
                in_stack_fffffffffffffea0 = CONCAT44(local_88._12_4_,local_88._8_4_);
                value.fields.m_NormalColor.fields.b = (float)local_88._8_4_;
                value.fields.m_NormalColor.fields.a = (float)local_88._12_4_;
                value.fields.m_NormalColor.fields.r = (float)local_88._0_4_;
                value.fields.m_NormalColor.fields.g = (float)local_88._4_4_;
                value.fields.m_HighlightedColor.fields.r = (float)local_88._16_4_;
                value.fields.m_HighlightedColor.fields.g = (float)local_88._20_4_;
                value.fields.m_HighlightedColor.fields._8_8_ = pIStack_70;
                value.fields.m_PressedColor.fields._0_8_ = local_68;
                value.fields.m_PressedColor.fields.b = fStack_60;
                value.fields.m_PressedColor.fields.a = fStack_5c;
                value.fields.m_SelectedColor.fields.r = local_58.r;
                value.fields.m_SelectedColor.fields.g = local_58.g;
                value.fields.m_SelectedColor.fields.b = local_58.b;
                value.fields.m_SelectedColor.fields.a = local_58.a;
                value.fields.m_DisabledColor.fields.r = local_48.r;
                value.fields.m_DisabledColor.fields.g = local_48.g;
                value.fields.m_DisabledColor.fields.b = local_48.b;
                value.fields.m_DisabledColor.fields.a = local_48.a;
                value.fields.m_ColorMultiplier = local_38;
                value.fields.m_FadeDuration = fStack_34;
                in_stack_fffffffffffffea8 = (Il2CppClass *)local_88._16_8_;
                UnityEngine_UI_Selectable__set_colors(__this_07,value,(MethodInfo *)0x0);
                pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04409b84;
                pUVar16 = UnityEngine_Transform__Find(pUVar16,"Text",(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04409b89;
                pIVar15 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar16,MethodInfo_Text_GetComponent_Text);
                pSVar12 = (System_String_o *)
                          (*((*&__this_08->klass)->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this_08,((*&__this_08->klass)->vtable)._4_get_ThemePanel.method);
                UVar23 = UI_UIManager__GetThemeColor
                                   (pSVar12,"RoomButton","TextColor","DefaultPanel",(MethodInfo *)0x0);
                fVar22 = UVar23.fields.r;
                if (pIVar15 == (Il2CppObject *)0x0) goto label_04409b8e;
                (*pIVar15->klass->vtable[0x17].methodPtr)
                          (fVar22,UVar23.fields.b,pIVar15,pIVar15->klass->vtable[0x17].method);
              }
              il2cpp_runtime_helper_022b2c90();
label_04409b52:
              il2cpp_runtime_helper_022b2c90();
label_04409b57:
              il2cpp_runtime_helper_022b2c90();
label_04409b5c:
              il2cpp_runtime_helper_022b2c90();
label_04409b61:
              il2cpp_runtime_helper_022b2c90();
label_04409b66:
              il2cpp_runtime_helper_022b2c90();
label_04409b6b:
              il2cpp_runtime_helper_022b2c90();
label_04409b70:
              il2cpp_runtime_helper_022b2c90();
label_04409b75:
              il2cpp_runtime_helper_022b2c90();
label_04409b7a:
              il2cpp_runtime_helper_022b2c90();
label_04409b7f:
              il2cpp_runtime_helper_022b2c90();
label_04409b84:
              il2cpp_runtime_helper_022b2c90();
label_04409b89:
              fVar22 = (float)il2cpp_runtime_helper_022b2c90();
label_04409b8e:
              il2cpp_runtime_helper_022b2c90(fVar22);
label_04409b93:
              il2cpp_runtime_helper_022b2c90();
label_04409b98:
              il2cpp_runtime_helper_022b2c90();
label_04409b9d:
              il2cpp_runtime_helper_022b2c90();
label_04409ba2:
              il2cpp_runtime_helper_022b2c90();
label_04409ba7:
              il2cpp_runtime_helper_022b2c90();
label_04409bac:
              il2cpp_runtime_helper_022b2c90();
label_04409bb1:
              il2cpp_runtime_helper_022b2c90();
label_04409bb6:
              il2cpp_runtime_helper_022b2c90();
label_04409bbb:
              il2cpp_runtime_helper_022b2c90();
label_04409bc0:
              il2cpp_runtime_helper_022b2c90();
            }
          }
        }
      }
    }
  }
label_04409bc5:
  auVar24 = il2cpp_runtime_helper_022b2c90();
  if (auVar24._8_4_ == 1) {
    plVar19 = (long *)__cxa_begin_catch(auVar24._0_8_);
    lVar8 = *plVar19;
    __cxa_end_catch();
    __this_04.fields._index = (int)in_stack_fffffffffffffea0;
    __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
    __this_04.fields._current = (Il2CppObject *)in_stack_fffffffffffffea8;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)local_108);
    if (lVar8 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_05.fields._index = (int)in_stack_fffffffffffffea0;
  __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe98;
  __this_05.fields._current = (Il2CppObject *)in_stack_fffffffffffffea8;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)local_108);
  _Unwind_Resume(auVar24._0_8_);
}


// UI.MultiplayerRoomListPopup$$GetCurrentPageRooms
// il2cpp: System_Collections_Generic_List_RoomInfo__o* UI_MultiplayerRoomListPopup__GetCurrentPageRooms (UI_MultiplayerRoomListPopup_o* __this, System_Collections_Generic_List_RoomInfo__o* rooms, const MethodInfo* method);
// 0x440d520

System_Collections_Generic_List_RoomInfo__o *
UI_MultiplayerRoomListPopup__GetCurrentPageRooms
          (UI_MultiplayerRoomListPopup_o *__this,System_Collections_Generic_List_RoomInfo__o *rooms,
          MethodInfo *method)

{
  int32_t *piVar1;
  int32_t val2;
  Settings_IntSetting_o *pSVar2;
  Photon_Realtime_RoomInfo_array *pPVar3;
  long lVar4;
  uint uVar5;
  System_Collections_Generic_List_RoomInfo__o *__this_00;
  Photon_Realtime_RoomInfo_o *item;
  System_Collections_Generic_List_RoomInfo__o *extraout_RAX;
  uint uVar6;
  int iVar7;
  
  if (g_data_057ae5d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_RoomInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_RoomInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae5d3 = '\x01';
  }
  if (rooms != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    if ((rooms->fields)._size <= (__this->fields)._roomsPerPage) {
      return rooms;
    }
    __this_00 = (System_Collections_Generic_List_RoomInfo__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_RoomInfo);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Photon_Realtime_RoomInfo);
    pSVar2 = (__this->fields)._currentPage;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      iVar7 = (__this->fields)._roomsPerPage;
      uVar6 = (pSVar2->fields)._value * iVar7;
      __this = (UI_MultiplayerRoomListPopup_o *)(ulong)uVar6;
      val2 = (rooms->fields)._size;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar5 = System_Math__Min_3cb7d70(iVar7 + uVar6,val2,(MethodInfo *)0x0);
      if ((int)uVar5 <= (int)uVar6) {
        return __this_00;
      }
      if (__this_00 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_0440d6c9;
      while( true ) {
        iVar7 = (int)__this;
        item = (Photon_Realtime_RoomInfo_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)rooms,iVar7,MethodInfo_RoomInfo_get_Item);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pPVar3 = (__this_00->fields)._items;
        if (pPVar3 == (Photon_Realtime_RoomInfo_array *)0x0) break;
        uVar6 = (__this_00->fields)._size;
        if (uVar6 < (uint)pPVar3->max_length) {
          (__this_00->fields)._size = uVar6 + 1;
          pPVar3->m_Items[(int)uVar6] = item;
          il2cpp_runtime_helper_022b4080(pPVar3->m_Items + (int)uVar6,item);
          __this = (UI_MultiplayerRoomListPopup_o *)(ulong)(iVar7 + 1U);
          if (uVar5 == iVar7 + 1U) {
            return __this_00;
          }
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          __this = (UI_MultiplayerRoomListPopup_o *)(ulong)(iVar7 + 1U);
          if (uVar5 == iVar7 + 1U) {
            return __this_00;
          }
        }
      }
    }
  }
  uVar6 = (uint)__this;
  il2cpp_runtime_helper_022b2c90();
label_0440d6c9:
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)rooms,uVar6,MethodInfo_RoomInfo_get_Item);
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)rooms,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.MultiplayerRoomListPopup$$GetFilteredRooms
// il2cpp: System_Collections_Generic_List_RoomInfo__o* UI_MultiplayerRoomListPopup__GetFilteredRooms (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440d0c0

System_Collections_Generic_List_RoomInfo__o *
UI_MultiplayerRoomListPopup__GetFilteredRooms(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t val2;
  Photon_Realtime_RoomInfo_array *pPVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  long lVar5;
  Settings_IntSetting_o *pSVar6;
  int32_t *piVar7;
  long lVar8;
  bool_conflict bVar9;
  uint uVar10;
  UI_MultiplayerRoomListPopup_o *pUVar11;
  System_String_o *pSVar12;
  UI_MultiplayerRoomListPopup_o *__this_00;
  UI_MultiplayerRoomListPopup_o *__this_01;
  UI_MultiplayerRoomListPopup_o *pUVar13;
  UI_MultiplayerRoomListPopup_o *__this_02;
  UI_MultiplayerRoomListPopup_o *__this_03;
  System_Collections_Generic_List_RoomInfo__o *__this_04;
  Photon_Realtime_RoomInfo_o *item;
  System_Collections_Generic_List_RoomInfo__o *extraout_RAX;
  MethodInfo *method_00;
  uint uVar14;
  int iVar15;
  UI_MultiplayerRoomListPopup_o *key;
  UI_MultiplayerRoomListPopup_o *pUVar16;
  ulong uVar17;
  
  if (g_data_057ae5d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_RoomInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_RoomInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5d4 = '\x01';
  }
  pUVar11 = (UI_MultiplayerRoomListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_RoomInfo);
  key = MethodInfo_List_1_Photon_Realtime_RoomInfo;
  __this_03 = pUVar11;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pUVar11,(MethodInfo_362B8B0 *)MethodInfo_List_1_Photon_Realtime_RoomInfo);
  pPVar2 = (__this->fields)._rooms;
  if (pPVar2 == (Photon_Realtime_RoomInfo_array *)0x0) {
label_0440d4af:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)pPVar2->max_length < 1) {
      return (System_Collections_Generic_List_RoomInfo__o *)pUVar11;
    }
    uVar17 = 0;
    if ((pPVar2->max_length & 0xffffffff) != 0) {
      do {
        pUVar16 = (UI_MultiplayerRoomListPopup_o *)pPVar2->m_Items[uVar17];
        if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        key = (UI_MultiplayerRoomListPopup_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8);
        __this_03 = pUVar16;
        pSVar12 = PhotonExtensions__GetStringProperty_3f67f30
                            ((Photon_Realtime_RoomInfo_o *)pUVar16,(System_String_o *)key,"",
                             (MethodInfo *)0x0);
        if (pSVar12 == (System_String_o *)0x0) goto label_0440d4af;
        __this_00 = (UI_MultiplayerRoomListPopup_o *)System_String__ToLower(pSVar12,(MethodInfo *)0x0);
        key = *(UI_MultiplayerRoomListPopup_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 8);
        __this_03 = pUVar16;
        pSVar12 = PhotonExtensions__GetStringProperty_3f67f30
                            ((Photon_Realtime_RoomInfo_o *)pUVar16,(System_String_o *)key,"",
                             (MethodInfo *)0x0);
        if (pSVar12 == (System_String_o *)0x0) goto label_0440d4af;
        __this_01 = (UI_MultiplayerRoomListPopup_o *)System_String__ToLower(pSVar12,(MethodInfo *)0x0);
        key = *(UI_MultiplayerRoomListPopup_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x10);
        __this_03 = pUVar16;
        pUVar13 = (UI_MultiplayerRoomListPopup_o *)
                  PhotonExtensions__GetStringProperty_3f67f30
                            ((Photon_Realtime_RoomInfo_o *)pUVar16,(System_String_o *)key,"",
                             (MethodInfo *)0x0);
        if (pUVar13 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440d4af;
        key = (UI_MultiplayerRoomListPopup_o *)0x0;
        __this_02 = (UI_MultiplayerRoomListPopup_o *)
                    System_String__ToLower((System_String_o *)pUVar13,(MethodInfo *)0x0);
        pSVar3 = (__this->fields)._filterQuery;
        __this_03 = pUVar13;
        if ((pSVar3 == (Settings_StringSetting_o *)0x0) ||
           (__this_03 = (UI_MultiplayerRoomListPopup_o *)(pSVar3->fields)._value,
           __this_03 == (UI_MultiplayerRoomListPopup_o *)0x0)) goto label_0440d4af;
        pUVar13 = (UI_MultiplayerRoomListPopup_o *)
                  System_String__ToLower((System_String_o *)__this_03,(MethodInfo *)0x0);
        key = pUVar16;
        bVar9 = UI_MultiplayerRoomListPopup__IsValidRoom
                          (__this_03,(Photon_Realtime_RoomInfo_o *)pUVar16,method_00);
        if ((char)bVar9 != '\0') {
          key = (UI_MultiplayerRoomListPopup_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          __this_03 = pUVar13;
          bVar9 = System_String__op_Inequality
                            ((System_String_o *)pUVar13,(System_String_o *)key,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            if (__this_00 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440d4af;
            key = pUVar13;
            bVar9 = System_String__Contains
                              ((System_String_o *)__this_00,(System_String_o *)pUVar13,(MethodInfo *)0x0);
            __this_03 = __this_00;
            if ((char)bVar9 == '\0') {
              if (__this_01 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440d4af;
              key = pUVar13;
              bVar9 = System_String__Contains
                                ((System_String_o *)__this_01,(System_String_o *)pUVar13,(MethodInfo *)0x0);
              __this_03 = __this_01;
              if ((char)bVar9 == '\0') {
                if (__this_02 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440d4af;
                bVar9 = System_String__Contains
                                  ((System_String_o *)__this_02,(System_String_o *)pUVar13,(MethodInfo *)0x0);
                key = pUVar13;
                __this_03 = __this_02;
                if ((char)bVar9 == '\0') goto label_0440d1c0;
              }
            }
          }
          pSVar4 = (__this->fields)._filterShowFull;
          if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_0440d4af;
          if (*(char *)((long)&(pSVar4->fields).DefaultValue + 1) == '\0') {
            if (pUVar16 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440d4af;
            if (*(int *)&(pUVar16->fields).SinglePanel <= *(int *)&(pUVar16->fields).MaskBackground)
            goto label_0440d1c0;
          }
          pSVar4 = (__this->fields)._filterShowPassword;
          if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_0440d4af;
          if (*(char *)((long)&(pSVar4->fields).DefaultValue + 1) == '\0') {
            if (g_data_057ae5d8 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
              il2cpp_runtime_helper_023445d0(&"");
              g_data_057ae5d8 = '\x01';
            }
            if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_03 = (UI_MultiplayerRoomListPopup_o *)
                        PhotonExtensions__GetStringProperty_3f67f30
                                  ((Photon_Realtime_RoomInfo_o *)pUVar16,
                                   *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),"",
                                   (MethodInfo *)0x0);
            key = (UI_MultiplayerRoomListPopup_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            bVar9 = System_String__op_Inequality
                              ((System_String_o *)__this_03,(System_String_o *)key,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') goto label_0440d1c0;
          }
          lVar8 = MethodInfo_Void_Add;
          __this_03 = pUVar11;
          if (pUVar11 == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440d4af;
          piVar1 = (int *)((long)&(pUVar11->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar5 = (pUVar11->fields).m_CachedPtr;
          key = pUVar16;
          if (lVar5 == 0) goto label_0440d4af;
          uVar14 = *(uint *)&(pUVar11->fields).m_CancellationTokenSource;
          if (uVar14 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)&(pUVar11->fields).m_CancellationTokenSource = uVar14 + 1;
            __this_03 = (UI_MultiplayerRoomListPopup_o *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
            *(UI_MultiplayerRoomListPopup_o **)(lVar5 + 0x20 + (long)(int)uVar14 * 8) = pUVar16;
            il2cpp_runtime_helper_022b4080();
            key = pUVar16;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pUVar11,(Il2CppObject *)pUVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            key = pUVar16;
          }
        }
label_0440d1c0:
        uVar17 = uVar17 + 1;
        uVar14 = (uint)pPVar2->max_length;
        if ((long)(int)uVar14 <= (long)uVar17) {
          return (System_Collections_Generic_List_RoomInfo__o *)pUVar11;
        }
      } while (uVar17 < uVar14);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar11 = key;
  pUVar16 = __this_03;
  if (g_data_057ae5d5 == '\0') {
    pUVar16 = (UI_MultiplayerRoomListPopup_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5d5 = '\x01';
  }
  if (key != (UI_MultiplayerRoomListPopup_o *)0x0) {
    iVar15 = *(int *)&(key->fields).m_CancellationTokenSource;
    if (iVar15 != 0) {
      return (System_Collections_Generic_List_RoomInfo__o *)
             (ulong)((iVar15 + -1) / (__this_03->fields)._roomsPerPage + 1);
    }
    return (System_Collections_Generic_List_RoomInfo__o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_RoomInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_RoomInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae5d3 = '\x01';
  }
  if (pUVar11 != (UI_MultiplayerRoomListPopup_o *)0x0) {
    if (*(int *)&(pUVar11->fields).m_CancellationTokenSource <= (pUVar16->fields)._roomsPerPage) {
      return (System_Collections_Generic_List_RoomInfo__o *)pUVar11;
    }
    __this_04 = (System_Collections_Generic_List_RoomInfo__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_RoomInfo);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_04,(MethodInfo_362B8B0 *)MethodInfo_List_1_Photon_Realtime_RoomInfo);
    pSVar6 = (pUVar16->fields)._currentPage;
    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
      iVar15 = (pUVar16->fields)._roomsPerPage;
      uVar14 = (pSVar6->fields)._value * iVar15;
      pUVar16 = (UI_MultiplayerRoomListPopup_o *)(ulong)uVar14;
      val2 = *(int32_t *)&(pUVar11->fields).m_CancellationTokenSource;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar10 = System_Math__Min_3cb7d70(iVar15 + uVar14,val2,(MethodInfo *)0x0);
      if ((int)uVar10 <= (int)uVar14) {
        return __this_04;
      }
      if (__this_04 == (System_Collections_Generic_List_RoomInfo__o *)0x0) goto label_0440d6c9;
      while( true ) {
        iVar15 = (int)pUVar16;
        item = (Photon_Realtime_RoomInfo_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pUVar11,iVar15,MethodInfo_RoomInfo_get_Item);
        lVar8 = MethodInfo_Void_Add;
        piVar7 = &(__this_04->fields)._version;
        *piVar7 = *piVar7 + 1;
        pPVar2 = (__this_04->fields)._items;
        if (pPVar2 == (Photon_Realtime_RoomInfo_array *)0x0) break;
        uVar14 = (__this_04->fields)._size;
        if (uVar14 < (uint)pPVar2->max_length) {
          (__this_04->fields)._size = uVar14 + 1;
          pPVar2->m_Items[(int)uVar14] = item;
          il2cpp_runtime_helper_022b4080(pPVar2->m_Items + (int)uVar14,item);
          pUVar16 = (UI_MultiplayerRoomListPopup_o *)(ulong)(iVar15 + 1U);
          if (uVar10 == iVar15 + 1U) {
            return __this_04;
          }
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          pUVar16 = (UI_MultiplayerRoomListPopup_o *)(ulong)(iVar15 + 1U);
          if (uVar10 == iVar15 + 1U) {
            return __this_04;
          }
        }
      }
    }
  }
  uVar14 = (uint)pUVar16;
  il2cpp_runtime_helper_022b2c90();
label_0440d6c9:
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)pUVar11,uVar14,MethodInfo_RoomInfo_get_Item);
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.MultiplayerRoomListPopup$$GetPageCount
// il2cpp: int32_t UI_MultiplayerRoomListPopup__GetPageCount (UI_MultiplayerRoomListPopup_o* __this, System_Collections_Generic_List_RoomInfo__o* rooms, const MethodInfo* method);
// 0x440d4c0

int32_t UI_MultiplayerRoomListPopup__GetPageCount
                  (UI_MultiplayerRoomListPopup_o *__this,System_Collections_Generic_List_RoomInfo__o *rooms,
                  MethodInfo *method)

{
  int32_t *piVar1;
  int32_t val2;
  Settings_IntSetting_o *pSVar2;
  Photon_Realtime_RoomInfo_array *pPVar3;
  long lVar4;
  uint uVar5;
  int32_t extraout_EAX;
  System_Collections_Generic_List_RoomInfo__o *__this_00;
  Photon_Realtime_RoomInfo_o *item;
  uint uVar6;
  int iVar7;
  System_Collections_Generic_List_RoomInfo__o *__this_01;
  UI_MultiplayerRoomListPopup_o *pUVar8;
  
  __this_01 = rooms;
  pUVar8 = __this;
  if (g_data_057ae5d5 == '\0') {
    pUVar8 = (UI_MultiplayerRoomListPopup_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5d5 = '\x01';
  }
  if (rooms != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    iVar7 = (rooms->fields)._size;
    if (iVar7 == 0) {
      return 0;
    }
    return (iVar7 + -1) / (__this->fields)._roomsPerPage + 1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_RoomInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_RoomInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae5d3 = '\x01';
  }
  if (__this_01 != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    __this_00 = __this_01;
    if ((__this_01->fields)._size <= (pUVar8->fields)._roomsPerPage) goto label_0440d6b2;
    __this_00 = (System_Collections_Generic_List_RoomInfo__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_RoomInfo);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Photon_Realtime_RoomInfo);
    pSVar2 = (pUVar8->fields)._currentPage;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      iVar7 = (pUVar8->fields)._roomsPerPage;
      uVar6 = (pSVar2->fields)._value * iVar7;
      pUVar8 = (UI_MultiplayerRoomListPopup_o *)(ulong)uVar6;
      val2 = (__this_01->fields)._size;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar5 = System_Math__Min_3cb7d70(iVar7 + uVar6,val2,(MethodInfo *)0x0);
      if ((int)uVar5 <= (int)uVar6) {
label_0440d6b2:
        return (int32_t)__this_00;
      }
      if (__this_00 != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
        do {
          while( true ) {
            iVar7 = (int)pUVar8;
            item = (Photon_Realtime_RoomInfo_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,iVar7,MethodInfo_RoomInfo_get_Item);
            lVar4 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pPVar3 = (__this_00->fields)._items;
            if (pPVar3 == (Photon_Realtime_RoomInfo_array *)0x0) goto label_0440d6c4;
            uVar6 = (__this_00->fields)._size;
            if ((uint)pPVar3->max_length <= uVar6) break;
            (__this_00->fields)._size = uVar6 + 1;
            pPVar3->m_Items[(int)uVar6] = item;
            il2cpp_runtime_helper_022b4080(pPVar3->m_Items + (int)uVar6,item);
            pUVar8 = (UI_MultiplayerRoomListPopup_o *)(ulong)(iVar7 + 1U);
            if (uVar5 == iVar7 + 1U) goto label_0440d6b2;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          pUVar8 = (UI_MultiplayerRoomListPopup_o *)(ulong)(iVar7 + 1U);
        } while (uVar5 != iVar7 + 1U);
        goto label_0440d6b2;
      }
      goto label_0440d6c9;
    }
  }
label_0440d6c4:
  uVar6 = (uint)pUVar8;
  il2cpp_runtime_helper_022b2c90();
label_0440d6c9:
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)__this_01,uVar6,MethodInfo_RoomInfo_get_Item);
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


// UI.MultiplayerRoomListPopup$$ClearRoomButtons
// il2cpp: void UI_MultiplayerRoomListPopup__ClearRoomButtons (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440cf10

void UI_MultiplayerRoomListPopup__ClearRoomButtons(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar9;
  
  if (g_data_057ae5d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae5d6 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._roomButtons;
  if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0440d03e;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  while (__this_00.fields._8_8_ = pIVar8, __this_00.fields._list = pSVar7,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar4 != '\0') {
    pUVar9 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    obj = pUVar9;
  }
  __this_01.fields._8_8_ = pIVar8;
  __this_01.fields._list = pSVar7;
  __this_01.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  do {
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
label_0440d03e:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) goto label_0440d084;
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_0440d084:
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._list = pSVar7;
  __this_03.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.MultiplayerRoomListPopup$$IsValidRoom
// il2cpp: bool UI_MultiplayerRoomListPopup__IsValidRoom (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* info, const MethodInfo* method);
// 0x440dbd0

bool_conflict
UI_MultiplayerRoomListPopup__IsValidRoom
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  code cVar2;
  int iVar3;
  ExitGames_Client_Photon_Hashtable_o *pEVar4;
  System_String_c *pSVar5;
  UI_MultiplayerPasswordPopup_o *__this_00;
  Settings_MultiplayerSettings_o *__this_01;
  UI_MessagePopup_o *__this_02;
  code *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  Il2CppMethodPointer vtableDispatch;
  UI_CreateGamePopup_o *__this_03;
  char cVar9;
  uint16_t uVar10;
  bool_conflict bVar11;
  uint uVar12;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  uint32_t uVar13;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  bool_conflict extraout_EAX_04;
  bool_conflict extraout_EAX_05;
  System_String_o *pSVar14;
  System_String_o *roomName;
  Il2CppClass **ppIVar15;
  Il2CppClass *pIVar16;
  System_Collections_Generic_List_object__o *__this_04;
  Settings_StringSetting_o *__this_05;
  Settings_BoolSetting_o *pSVar17;
  Settings_IntSetting_o *__this_06;
  long lVar18;
  int iVar21;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ExitGames_Client_Photon_Hashtable_o *unaff_RBX;
  Il2CppClass **ppIVar19;
  Il2CppClass **key;
  undefined8 *puVar20;
  System_String_o **ppSVar22;
  Il2CppClass *__this_07;
  Il2CppRuntimeInterfaceOffsetPair *pIVar23;
  Settings_TypedSetting_int__o *__this_08;
  MethodInfo *in_R9;
  MethodInfo_3105020 **unaff_R12;
  Il2CppClass **unaff_R15;
  undefined8 uStack_60;
  ExitGames_Client_Photon_Hashtable_o *pEStack_58;
  MethodInfo_3105020 **ppMStack_50;
  
  ppIVar19 = (Il2CppClass **)info;
  if (g_data_057ae5d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    ppSVar22 = &"vc";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5d7 = '\x01';
    __this = (UI_MultiplayerRoomListPopup_o *)ppSVar22;
  }
  if (info != (Photon_Realtime_RoomInfo_o *)0x0) {
    pEVar4 = (info->fields).customProperties;
    unaff_R15 = &TypeInfo_RoomProperty;
    __this = (UI_MultiplayerRoomListPopup_o *)TypeInfo_RoomProperty;
    if (*(int *)&(TypeInfo_RoomProperty->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX = (ExitGames_Client_Photon_Hashtable_o *)0x0;
    if (pEVar4 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      ppIVar19 = *(Il2CppClass ***)TypeInfo_RoomProperty->static_fields;
      unaff_R12 = &MethodInfo_Boolean_ContainsKey;
      bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         ((System_Collections_Generic_Dictionary_object__object__o *)pEVar4,
                          (Il2CppObject *)ppIVar19,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar11 == '\0') {
        return 0;
      }
      pEVar4 = (info->fields).customProperties;
      __this = (UI_MultiplayerRoomListPopup_o *)TypeInfo_RoomProperty;
      if (*(int *)&(TypeInfo_RoomProperty->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (ExitGames_Client_Photon_Hashtable_o *)0x0;
      if (pEVar4 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        ppIVar19 = *(Il2CppClass ***)((long)TypeInfo_RoomProperty->static_fields + 8);
        bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_object__object__o *)pEVar4,
                            (Il2CppObject *)ppIVar19,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar11 == '\0') {
          return 0;
        }
        unaff_RBX = (info->fields).customProperties;
        __this = (UI_MultiplayerRoomListPopup_o *)TypeInfo_RoomProperty;
        if (*(int *)&(TypeInfo_RoomProperty->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (unaff_RBX != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
          ppIVar19 = *(Il2CppClass ***)((long)TypeInfo_RoomProperty->static_fields + 0x10);
          bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_object__object__o *)unaff_RBX,
                              (Il2CppObject *)ppIVar19,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar11 == '\0') {
            return 0;
          }
          pSVar14 = *(System_String_o **)&(info->fields).autoCleanUp;
          __this = (UI_MultiplayerRoomListPopup_o *)0x0;
          if (pSVar14 != (System_String_o *)0x0) {
            uVar12 = System_String__EndsWith(pSVar14,"vc",(MethodInfo *)0x0);
            return uVar12 ^ 1;
          }
        }
      }
    }
  }
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pEStack_58 = unaff_RBX;
  ppMStack_50 = unaff_R12;
  if (g_data_057ae5db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Requires user account to join");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5db = '\x01';
    if (g_data_057ae5d9 != '\0') goto label_0440dd3b;
label_0440df33:
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    g_data_057ae5d9 = '\x01';
    iVar21 = *(int *)&(TypeInfo_RoomProperty->_2).field_0x1c;
  }
  else {
    if (g_data_057ae5d9 == '\0') goto label_0440df33;
label_0440dd3b:
    iVar21 = *(int *)&(TypeInfo_RoomProperty->_2).field_0x1c;
  }
  if (iVar21 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = *(Il2CppClass ***)((long)TypeInfo_RoomProperty->static_fields + 0x30);
  bVar11 = PhotonExtensions__GetBoolProperty_3f67fc0
                     ((Photon_Realtime_RoomInfo_o *)ppIVar19,(System_String_o *)key,0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar11 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar9 = (char)bVar11;
    }
    else {
      bVar11 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar9 = (char)bVar11;
    }
    if (cVar9 == '\0') {
      ppIVar19 = &TypeInfo_UIManager;
      if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar18 = *(long *)((long)TypeInfo_UIManager->static_fields + 0x28);
      __this_07 = TypeInfo_UIManager;
      if (lVar18 != 0) {
        __this_02 = *(UI_MessagePopup_o **)(lVar18 + 0x30);
        __this_07 = (Il2CppClass *)0x0;
        if (__this_02 != (UI_MessagePopup_o *)0x0) {
          UI_MessagePopup__Show(__this_02,"Requires user account to join",1,(MethodInfo *)0x0);
          return extraout_EAX_01;
        }
      }
      goto label_0440e067;
    }
  }
  if (g_data_057ae5d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5d8 = '\x01';
  }
  if (*(int *)&(TypeInfo_RoomProperty->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  unaff_R15 = (Il2CppClass **)
              PhotonExtensions__GetStringProperty_3f67f30
                        ((Photon_Realtime_RoomInfo_o *)ppIVar19,
                         *(System_String_o **)((long)TypeInfo_RoomProperty->static_fields + 0x28),"",
                         (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo_RoomProperty->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = PhotonExtensions__GetStringProperty_3f67f30
                      ((Photon_Realtime_RoomInfo_o *)ppIVar19,
                       *(System_String_o **)((long)TypeInfo_RoomProperty->static_fields + 0x20),"",
                       (MethodInfo *)0x0);
  key = (Il2CppClass **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_07 = (Il2CppClass *)unaff_R15;
  bVar11 = System_String__op_Inequality((System_String_o *)unaff_R15,(System_String_o *)key,(MethodInfo *)0x0)
  ;
  if ((char)bVar11 == '\0') {
    if ((Il2CppClass *)ppIVar19 != (Il2CppClass *)0x0) {
      __this_01 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
      unaff_R15 = (Il2CppClass **)(((Il2CppClass *)ppIVar19)->_1).element_class;
      if (*(int *)&(TypeInfo_RoomProperty->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      key = *(Il2CppClass ***)TypeInfo_RoomProperty->static_fields;
      __this_07 = (Il2CppClass *)ppIVar19;
      pSVar14 = PhotonExtensions__GetStringProperty_3f67f30
                          ((Photon_Realtime_RoomInfo_o *)ppIVar19,(System_String_o *)key,"",
                           (MethodInfo *)0x0);
      __this = (UI_MultiplayerRoomListPopup_o *)0x0;
      if (__this_01 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__JoinRoom
                  (__this_01,(System_String_o *)unaff_R15,pSVar14,
                   (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        return extraout_EAX_00;
      }
    }
  }
  else {
    pSVar5 = (((Il2CppClass *)__this)->_1).image;
    key = (Il2CppClass **)(pSVar5->vtable)._26_Clone.method;
    __this_07 = (Il2CppClass *)__this;
    (*(pSVar5->vtable)._26_Clone.methodPtr)();
    if ((Il2CppClass *)ppIVar19 != (Il2CppClass *)0x0) {
      __this_00 = (UI_MultiplayerPasswordPopup_o *)(((Il2CppClass *)__this)->_1).implementedInterfaces;
      __this = (UI_MultiplayerRoomListPopup_o *)(((Il2CppClass *)ppIVar19)->_1).element_class;
      if (*(int *)&(TypeInfo_RoomProperty->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      key = *(Il2CppClass ***)TypeInfo_RoomProperty->static_fields;
      __this_07 = (Il2CppClass *)ppIVar19;
      roomName = PhotonExtensions__GetStringProperty_3f67f30
                           ((Photon_Realtime_RoomInfo_o *)ppIVar19,(System_String_o *)key,"",
                            (MethodInfo *)0x0);
      if (__this_00 != (UI_MultiplayerPasswordPopup_o *)0x0) {
        UI_MultiplayerPasswordPopup__Show
                  (__this_00,(System_String_o *)unaff_R15,pSVar14,(System_String_o *)__this,roomName,in_R9);
        return extraout_EAX;
      }
    }
  }
label_0440e067:
  ppIVar15 = (Il2CppClass **)il2cpp_runtime_helper_022b2c90();
  puVar20 = &uStack_60;
  do {
    *(UI_MultiplayerRoomListPopup_o **)((long)puVar20 + -8) = __this;
    *(Il2CppClass ***)((long)puVar20 + -0x10) = ppIVar19;
    *(Il2CppClass ***)((long)puVar20 + -0x18) = ppIVar15;
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    pcVar6 = *(code **)((long)(__this_07->_1).image + 0x2d8);
    *(undefined8 *)((long)puVar20 + -0x20) = 0x440e13d;
    (*pcVar6)(__this_07);
    *(undefined8 *)((long)puVar20 + -0x20) = 0x440e147;
    uVar13 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)key,(MethodInfo *)0x0);
    if (uVar13 < 0x990de47e) {
      if (uVar13 == 0x990de47d) {
        *(undefined8 *)((long)puVar20 + -0x20) = 0x440e3c3;
        bVar11 = System_String__op_Equality
                           ((System_String_o *)key,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return bVar11;
        }
        *(undefined8 *)((long)puVar20 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this_07,(MethodInfo *)0x0);
        key = &TypeInfo_UIManager;
        if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
          *(undefined8 *)((long)puVar20 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar7 = *(long **)((long)TypeInfo_UIManager->static_fields + 0x28);
        if (plVar7 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_03 = (UI_CreateGamePopup_o *)plVar7[0x13];
            if (__this_03 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_03->klass->_2).naturalAligment) &&
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_03,1,(MethodInfo *)0x0);
              return extraout_EAX_03;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar13 == 0x815aad4) {
          *(undefined8 *)((long)puVar20 + -0x20) = 0x440e393;
          bVar11 = System_String__op_Equality((System_String_o *)key,"Refresh",(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            UI_MultiplayerRoomListPopup__RefreshList((UI_MultiplayerRoomListPopup_o *)__this_07,1,method_00);
            return extraout_EAX_02;
          }
          return bVar11;
        }
        if (uVar13 != 0x479b753b) {
          return uVar13;
        }
        *(undefined8 *)((long)puVar20 + -0x20) = 0x440e182;
        bVar11 = System_String__op_Equality((System_String_o *)key,"Duel",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return bVar11;
        }
        *(undefined8 *)((long)puVar20 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this_07,(MethodInfo *)0x0);
        key = &TypeInfo_UIManager;
        if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
          *(undefined8 *)((long)puVar20 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar7 = *(long **)((long)TypeInfo_UIManager->static_fields + 0x28);
        if (plVar7 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pIVar23 = (Il2CppRuntimeInterfaceOffsetPair *)plVar7[0x19];
            if (pIVar23 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pIVar23->interfaceType->_2).naturalAligment) &&
               ((pIVar23->interfaceType->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pIVar16 = pIVar23->interfaceType;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pIVar16->_2).naturalAligment) &&
                 (ppIVar19 = (pIVar16->_2).typeHierarchy, ppIVar19[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          key = &TypeInfo_UIManager;
          *(undefined8 *)((long)puVar20 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar13) {
        if (uVar13 == 0xcad5d456) {
          *(undefined8 *)((long)puVar20 + -0x20) = 0x440e4d6;
          bVar11 = System_String__op_Equality((System_String_o *)key,"RightPage",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            return bVar11;
          }
          __this_08 = *(Settings_TypedSetting_int__o **)&(__this_07->_2).instance_size;
          if (__this_08 != (Settings_TypedSetting_int__o *)0x0) {
            iVar3 = (__this_08->fields)._value;
            iVar21 = iVar3 + 1;
            if (*(int *)&(__this_07->_2).field_count + -1 <= iVar3) {
              iVar21 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar13 != 0xf4a9c097) {
            return uVar13;
          }
          *(undefined8 *)((long)puVar20 + -0x20) = 0x440e34d;
          bVar11 = System_String__op_Equality((System_String_o *)key,"Filter",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            return bVar11;
          }
          pIVar23 = (__this_07->_1).interfaceOffsets;
          ppIVar19 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) {
            pIVar16 = pIVar23->interfaceType;
label_0440e368:
            vtableDispatch = pIVar16->vtable[0x15].methodPtr;
            bVar11 = (*vtableDispatch)
                               (pIVar23,pIVar16->vtable[0x15].method,ppIVar19,vtableDispatch);
            return bVar11;
          }
        }
        goto label_0440e52a;
      }
      if (uVar13 == 0xb60645db) {
        *(undefined8 *)((long)puVar20 + -0x20) = 0x440e49f;
        bVar11 = System_String__op_Equality((System_String_o *)key,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return bVar11;
        }
        __this_08 = *(Settings_TypedSetting_int__o **)&(__this_07->_2).instance_size;
        if (__this_08 != (Settings_TypedSetting_int__o *)0x0) {
          iVar21 = (__this_08->fields)._value;
          if (iVar21 < 1) {
            iVar21._0_2_ = (__this_07->_2).field_count;
            iVar21._2_2_ = (__this_07->_2).event_count;
          }
          iVar21 = iVar21 + -1;
label_0440e4fd:
          *(undefined8 *)((long)puVar20 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value(__this_08,iVar21,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList((UI_MultiplayerRoomListPopup_o *)__this_07,0,method_01);
          return extraout_EAX_04;
        }
        goto label_0440e52a;
      }
      if (uVar13 != 0xc2954bc2) {
        return uVar13;
      }
      *(undefined8 *)((long)puVar20 + -0x20) = 0x440e299;
      bVar11 = System_String__op_Equality((System_String_o *)key,"Back",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return bVar11;
      }
      if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
        *(undefined8 *)((long)puVar20 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      key = *(Il2CppClass ***)((long)TypeInfo_UIManager->static_fields + 0x28);
      if ((Il2CppClass *)key == (Il2CppClass *)0x0) goto label_0440e52a;
      vtableDispatch = (((Il2CppClass *)key)->_1).image;
      cVar2 = (code)(TypeInfo_MainMenu->_2).naturalAligment;
      if (((byte)cVar2 <= (byte)vtableDispatch[0x130]) &&
         (*(Il2CppClass **)(*(long *)(vtableDispatch + 200) + -8 + (ulong)(byte)cVar2 * 8) ==
          TypeInfo_MainMenu)) {
        uVar8 = *(undefined8 *)(vtableDispatch + 0x1a0);
        pcVar6 = *(code **)(vtableDispatch + 0x198);
        *(undefined8 *)((long)puVar20 + -0x20) = 0x440e312;
        (*pcVar6)(key,uVar8);
        pIVar23 = (Il2CppRuntimeInterfaceOffsetPair *)(((Il2CppClass *)key)->_1).implementedInterfaces;
        ppIVar19 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)((long)puVar20 + -0x20) = 0x440e537;
    __this = (UI_MultiplayerRoomListPopup_o *)key;
    il2cpp_runtime_helper_022b2fd0();
    *(Il2CppClass ***)((long)puVar20 + -0x20) = unaff_R15;
    *(Il2CppClass **)((long)puVar20 + -0x28) = __this_07;
    *(Il2CppClass ***)((long)puVar20 + -0x30) = key;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)((long)puVar20 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)((long)puVar20 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)((long)puVar20 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)puVar20 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)((long)puVar20 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)((long)puVar20 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)puVar20 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e5bb;
    __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_UnityEngine_GameObject);
    *(System_Collections_Generic_List_object__o **)
     &(((Il2CppClass *)__this)->_2).initializationExceptionGCHandle = __this_04;
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_2).initializationExceptionGCHandle,__this_04);
    pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e60d;
    __this_05 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0(__this_05,pSVar14,0x7fffffff,(MethodInfo *)0x0);
    *(Settings_StringSetting_o **)&(((Il2CppClass *)__this)->_2).cctor_finished = __this_05;
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_2).cctor_finished,__this_05);
    unaff_R15 = (Il2CppClass **)&TypeInfo_BoolSetting;
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e647;
    pSVar17 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar17,1,(MethodInfo *)0x0);
    (((Il2CppClass *)__this)->_2).cctor_thread = (size_t)pSVar17;
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_2).cctor_thread,pSVar17);
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e677;
    pSVar17 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar17,1,(MethodInfo *)0x0);
    (((Il2CppClass *)__this)->_2).genericContainerHandle = pSVar17;
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_2).genericContainerHandle);
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e6ae;
    __this_06 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(__this_06,0,0,0x7fffffff,(MethodInfo *)0x0);
    *(Settings_IntSetting_o **)&(((Il2CppClass *)__this)->_2).instance_size = __this_06;
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_2).instance_size,__this_06);
    (((Il2CppClass *)__this)->_2).element_size = 0x40a00000;
    (((Il2CppClass *)__this)->_2).native_size = 0x40a00000;
    (((Il2CppClass *)__this)->_2).static_fields_size = 10;
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e70b;
    lVar18 = il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this_07 = "`";
    if ("`" == (Il2CppClass *)0x0) {
label_0440e75a:
      *(undefined8 *)((long)puVar20 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)((long)puVar20 + -0x38) = 0x440e726;
      uVar10 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (lVar18 == 0) goto label_0440e75a;
      if (*(int *)(lVar18 + 0x18) != 0) {
        *(uint16_t *)(lVar18 + 0x20) = uVar10;
        (((Il2CppClass *)__this)->_2).token = (int)lVar18;
        (((Il2CppClass *)__this)->_2).method_count = (short)((ulong)lVar18 >> 0x20);
        (((Il2CppClass *)__this)->_2).property_count = (short)((ulong)lVar18 >> 0x30);
        *(undefined8 *)((long)puVar20 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_2).token);
        UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
        return extraout_EAX_05;
      }
    }
    *(undefined8 *)((long)puVar20 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    *(long *)((long)puVar20 + -0x38) = lVar18;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)((long)puVar20 + -0x40) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
    }
    ppIVar15 = &"Create";
    ppIVar19 = *(Il2CppClass ***)((long)puVar20 + -0x38);
    puVar20 = (undefined8 *)((long)puVar20 + -0x30);
    key = (Il2CppClass **)"Create";
  } while( true );
}


// UI.MultiplayerRoomListPopup$$GetPasswordHash
// il2cpp: System_String_o* UI_MultiplayerRoomListPopup__GetPasswordHash (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* info, const MethodInfo* method);
// 0x440db00

System_String_o *
UI_MultiplayerRoomListPopup__GetPasswordHash
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *info,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae5d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5d8 = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = PhotonExtensions__GetStringProperty_3f67f30
                     (info,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerRoomListPopup$$GetAccountRequired
// il2cpp: bool UI_MultiplayerRoomListPopup__GetAccountRequired (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* info, const MethodInfo* method);
// 0x440db70

bool_conflict
UI_MultiplayerRoomListPopup__GetAccountRequired
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *info,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae5d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    g_data_057ae5d9 = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = PhotonExtensions__GetBoolProperty_3f67fc0
                    (info,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30),0,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MultiplayerRoomListPopup$$GetRoomFormattedName
// il2cpp: System_String_o* UI_MultiplayerRoomListPopup__GetRoomFormattedName (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x440d700

System_String_o *
UI_MultiplayerRoomListPopup__GetRoomFormattedName
          (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  uint uVar1;
  Photon_Realtime_RoomInfo_o *pPVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Object_array *args;
  long lVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  Photon_Realtime_RoomInfo_o *room_00;
  
  if (g_data_057ae5da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&"   ");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&" / ");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5da = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = PhotonExtensions__GetStringProperty_3f67f30
                     (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = MiscExtensions__HexColor(pSVar3,(MethodInfo *)0x0);
  pSVar4 = PhotonExtensions__GetStringProperty_3f67f30
                     (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 8),"",
                      (MethodInfo *)0x0);
  pSVar5 = PhotonExtensions__GetStringProperty_3f67f30
                     (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x10),"",
                      (MethodInfo *)0x0);
  room_00 = (Photon_Realtime_RoomInfo_o *)0x9;
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (args == (System_Object_array *)0x0) goto label_0440daf8;
  if ((pSVar3 == (System_String_o *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(pSVar3), lVar6 != 0)) {
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar3;
      il2cpp_runtime_helper_022b4080(args->m_Items,pSVar3);
      if (" / " == (Il2CppObject *)0x0) {
        uVar1 = (uint)args->max_length;
        pIVar7 = (Il2CppObject *)0x0;
      }
      else {
        lVar6 = il2cpp_runtime_helper_023051f0(" / ");
        if (lVar6 == 0) goto label_0440dae9;
        uVar1 = (uint)args->max_length;
        pIVar7 = " / ";
      }
      if (1 < uVar1) {
        args->m_Items[1] = pIVar7;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if ((pSVar4 != (System_String_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pSVar4), lVar6 == 0))
        goto label_0440dae9;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = (Il2CppObject *)pSVar4;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2,pSVar4);
          if (" / " == (Il2CppObject *)0x0) {
            uVar1 = (uint)args->max_length;
            pIVar7 = (Il2CppObject *)0x0;
          }
          else {
            lVar6 = il2cpp_runtime_helper_023051f0(" / ");
            if (lVar6 == 0) goto label_0440dae9;
            uVar1 = (uint)args->max_length;
            pIVar7 = " / ";
          }
          if (3 < uVar1) {
            args->m_Items[3] = pIVar7;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3);
            if ((pSVar5 != (System_String_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5), lVar6 == 0))
            goto label_0440dae9;
            if (4 < (uint)args->max_length) {
              args->m_Items[4] = (Il2CppObject *)pSVar5;
              il2cpp_runtime_helper_022b4080(args->m_Items + 4,pSVar5);
              if ("   " == (Photon_Realtime_RoomInfo_o *)0x0) {
                uVar1 = (uint)args->max_length;
                pPVar2 = (Photon_Realtime_RoomInfo_o *)0x0;
                room_00 = "   ";
              }
              else {
                lVar6 = il2cpp_runtime_helper_023051f0("   ");
                if (lVar6 == 0) goto label_0440dae9;
                uVar1 = (uint)args->max_length;
                pPVar2 = "   ";
                room_00 = "   ";
              }
              "   " = room_00;
              if (5 < uVar1) {
                args->m_Items[5] = (Il2CppObject *)pPVar2;
                il2cpp_runtime_helper_022b4080(args->m_Items + 5);
                if (room == (Photon_Realtime_RoomInfo_o *)0x0) goto label_0440daf8;
                pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                if ((pIVar7 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 == 0))
                goto label_0440dae9;
                if (6 < (uint)args->max_length) {
                  args->m_Items[6] = pIVar7;
                  il2cpp_runtime_helper_022b4080(args->m_Items + 6,pIVar7);
                  if ("/" == (Il2CppObject *)0x0) {
                    uVar1 = (uint)args->max_length;
                    pIVar7 = (Il2CppObject *)0x0;
                  }
                  else {
                    lVar6 = il2cpp_runtime_helper_023051f0("/");
                    if (lVar6 == 0) goto label_0440dae9;
                    uVar1 = (uint)args->max_length;
                    pIVar7 = "/";
                  }
                  if (7 < uVar1) {
                    args->m_Items[7] = pIVar7;
                    il2cpp_runtime_helper_022b4080(args->m_Items + 7);
                    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
                    if ((pIVar7 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 == 0))
                    goto label_0440dae9;
                    if (8 < (uint)args->max_length) {
                      args->m_Items[8] = pIVar7;
                      il2cpp_runtime_helper_022b4080(args->m_Items + 8);
                      pSVar3 = System_String__Concat_3af7200(args,(MethodInfo *)0x0);
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
    il2cpp_runtime_helper_022b2ca0();
  }
label_0440dae9:
  uVar8 = il2cpp_runtime_helper_0231b270();
  room_00 = (Photon_Realtime_RoomInfo_o *)0x0;
  il2cpp_runtime_helper_022b2b10(uVar8);
label_0440daf8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5d8 = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = PhotonExtensions__GetStringProperty_3f67f30
                     (room_00,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),"",
                      (MethodInfo *)0x0);
  return pSVar3;
}


// UI.MultiplayerRoomListPopup$$OnRoomClick
// il2cpp: void UI_MultiplayerRoomListPopup__OnRoomClick (UI_MultiplayerRoomListPopup_o* __this, Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x440dd10

void UI_MultiplayerRoomListPopup__OnRoomClick
               (UI_MultiplayerRoomListPopup_o *__this,Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_MultiplayerSettings_o *__this_00;
  long lVar3;
  UI_MessagePopup_o *__this_01;
  Il2CppMethodPointer vtableDispatch;
  long *plVar4;
  UI_MultiplayerRoomListPopup_c *pUVar5;
  MethodInfo *pMVar6;
  UI_CreateGamePopup_o *__this_02;
  char cVar7;
  uint16_t uVar8;
  bool_conflict bVar9;
  uint32_t uVar10;
  System_String_o *pSVar11;
  System_String_o *roomName;
  UI_MultiplayerRoomListPopup_o **ppUVar12;
  UI_MultiplayerPasswordPopup_c *pUVar13;
  System_Collections_Generic_List_GameObject__o *__this_03;
  Settings_StringSetting_o *__this_04;
  Settings_BoolSetting_o *pSVar14;
  Settings_IntSetting_o *pSVar15;
  System_Char_array *pSVar16;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar17;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_MultiplayerRoomListPopup_o **key;
  undefined1 *puVar18;
  int iVar19;
  UI_MultiplayerRoomListPopup_o *__this_05;
  UI_MultiplayerPasswordPopup_o *pUVar20;
  MethodInfo *in_R9;
  UI_MultiplayerRoomListPopup_o *unaff_R15;
  undefined1 auStack_38 [8];
  
  if (g_data_057ae5db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Requires user account to join");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5db = '\x01';
    if (g_data_057ae5d9 == '\0') goto label_0440df33;
label_0440dd3b:
    iVar19 = *(int *)(TypeInfo_RoomProperty + 0xe4);
  }
  else {
    if (g_data_057ae5d9 != '\0') goto label_0440dd3b;
label_0440df33:
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    g_data_057ae5d9 = '\x01';
    iVar19 = *(int *)(TypeInfo_RoomProperty + 0xe4);
  }
  if (iVar19 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = *(UI_MultiplayerRoomListPopup_o ***)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30);
  bVar9 = PhotonExtensions__GetBoolProperty_3f67fc0(room,(System_String_o *)key,0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar7 = (char)bVar9;
    }
    else {
      bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar7 = (char)bVar9;
    }
    if (cVar7 == '\0') {
      if (*(int *)((long)&(TypeInfo_UIManager->fields)._filterQuery + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar3 = *(long *)&(((TypeInfo_UIManager->fields)._pageLabel)->fields).m_Color.fields;
      room = (Photon_Realtime_RoomInfo_o *)&TypeInfo_UIManager;
      __this_05 = TypeInfo_UIManager;
      if (lVar3 != 0) {
        __this_01 = *(UI_MessagePopup_o **)(lVar3 + 0x30);
        __this_05 = (UI_MultiplayerRoomListPopup_o *)0x0;
        if (__this_01 != (UI_MessagePopup_o *)0x0) {
          UI_MessagePopup__Show(__this_01,"Requires user account to join",1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_0440e067;
    }
  }
  if (g_data_057ae5d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5d8 = '\x01';
  }
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  unaff_R15 = (UI_MultiplayerRoomListPopup_o *)
              PhotonExtensions__GetStringProperty_3f67f30
                        (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),"",
                         (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = PhotonExtensions__GetStringProperty_3f67f30
                      (room,*(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x20),"",
                       (MethodInfo *)0x0);
  key = (UI_MultiplayerRoomListPopup_o **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_05 = unaff_R15;
  bVar9 = System_String__op_Inequality((System_String_o *)unaff_R15,(System_String_o *)key,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
      __this_00 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
      unaff_R15 = *(UI_MultiplayerRoomListPopup_o **)&(room->fields).autoCleanUp;
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      key = (UI_MultiplayerRoomListPopup_o **)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8);
      __this_05 = (UI_MultiplayerRoomListPopup_o *)room;
      pSVar11 = PhotonExtensions__GetStringProperty_3f67f30
                          (room,(System_String_o *)key,"",(MethodInfo *)0x0);
      __this = (UI_MultiplayerRoomListPopup_o *)0x0;
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__JoinRoom
                  (__this_00,(System_String_o *)unaff_R15,pSVar11,
                   (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    key = (UI_MultiplayerRoomListPopup_o **)(__this->klass->vtable)._26_HideAllPopups.method;
    __this_05 = __this;
    (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)();
    if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
      pUVar20 = (__this->fields)._multiplayerPasswordPopup;
      __this = *(UI_MultiplayerRoomListPopup_o **)&(room->fields).autoCleanUp;
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      key = (UI_MultiplayerRoomListPopup_o **)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8);
      __this_05 = (UI_MultiplayerRoomListPopup_o *)room;
      roomName = PhotonExtensions__GetStringProperty_3f67f30
                           (room,(System_String_o *)key,"",(MethodInfo *)0x0);
      if (pUVar20 != (UI_MultiplayerPasswordPopup_o *)0x0) {
        UI_MultiplayerPasswordPopup__Show
                  (pUVar20,(System_String_o *)unaff_R15,pSVar11,(System_String_o *)__this,roomName,in_R9);
        return;
      }
    }
  }
label_0440e067:
  ppUVar12 = (UI_MultiplayerRoomListPopup_o **)il2cpp_runtime_helper_022b2c90();
  puVar18 = auStack_38;
  do {
    *(UI_MultiplayerRoomListPopup_o **)(puVar18 + -8) = __this;
    *(Photon_Realtime_RoomInfo_o **)(puVar18 + -0x10) = room;
    *(UI_MultiplayerRoomListPopup_o ***)(puVar18 + -0x18) = ppUVar12;
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)(puVar18 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)(puVar18 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    vtableDispatch = (__this_05->klass->vtable)._26_HideAllPopups.methodPtr;
    *(undefined8 *)(puVar18 + -0x20) = 0x440e13d;
    (*vtableDispatch)(__this_05);
    *(undefined8 *)(puVar18 + -0x20) = 0x440e147;
    uVar10 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)key,(MethodInfo *)0x0);
    if (uVar10 < 0x990de47e) {
      if (uVar10 == 0x990de47d) {
        *(undefined8 *)(puVar18 + -0x20) = 0x440e3c3;
        bVar9 = System_String__op_Equality
                          ((System_String_o *)key,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        *(undefined8 *)(puVar18 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this_05,(MethodInfo *)0x0);
        key = &TypeInfo_UIManager;
        if (*(int *)((long)&(TypeInfo_UIManager->fields)._filterQuery + 4) == 0) {
          *(undefined8 *)(puVar18 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar4 = *(long **)&(((TypeInfo_UIManager->fields)._pageLabel)->fields).m_Color.fields;
        if (plVar4 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_02 = (UI_CreateGamePopup_o *)plVar4[0x13];
            if (__this_02 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_02,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar10 == 0x815aad4) {
          *(undefined8 *)(puVar18 + -0x20) = 0x440e393;
          bVar9 = System_String__op_Equality((System_String_o *)key,"Refresh",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          UI_MultiplayerRoomListPopup__RefreshList(__this_05,1,method_00);
          return;
        }
        if (uVar10 != 0x479b753b) {
          return;
        }
        *(undefined8 *)(puVar18 + -0x20) = 0x440e182;
        bVar9 = System_String__op_Equality((System_String_o *)key,"Duel",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        *(undefined8 *)(puVar18 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this_05,(MethodInfo *)0x0);
        key = &TypeInfo_UIManager;
        if (*(int *)((long)&(TypeInfo_UIManager->fields)._filterQuery + 4) == 0) {
          *(undefined8 *)(puVar18 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar4 = *(long **)&(((TypeInfo_UIManager->fields)._pageLabel)->fields).m_Color.fields;
        if (plVar4 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pUVar20 = (UI_MultiplayerPasswordPopup_o *)plVar4[0x19];
            if (pUVar20 == (UI_MultiplayerPasswordPopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar20->klass->_2).naturalAligment) &&
               ((pUVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pUVar13 = pUVar20->klass;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pUVar13->_2).naturalAligment) &&
                 (ppIVar17 = (pUVar13->_2).typeHierarchy, ppIVar17[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          key = &TypeInfo_UIManager;
          *(undefined8 *)(puVar18 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)(puVar18 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar10) {
        if (uVar10 == 0xcad5d456) {
          *(undefined8 *)(puVar18 + -0x20) = 0x440e4d6;
          bVar9 = System_String__op_Equality((System_String_o *)key,"RightPage",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pSVar15 = (__this_05->fields)._currentPage;
          if (pSVar15 != (Settings_IntSetting_o *)0x0) {
            iVar2 = (pSVar15->fields)._value;
            iVar19 = iVar2 + 1;
            if ((__this_05->fields)._lastPageCount + -1 <= iVar2) {
              iVar19 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar10 != 0xf4a9c097) {
            return;
          }
          *(undefined8 *)(puVar18 + -0x20) = 0x440e34d;
          bVar9 = System_String__op_Equality((System_String_o *)key,"Filter",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar20 = (UI_MultiplayerPasswordPopup_o *)(__this_05->fields)._multiplayerFilterPopup;
          ppIVar17 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pUVar20 != (UI_MultiplayerPasswordPopup_o *)0x0) {
            pUVar13 = pUVar20->klass;
label_0440e368:
            vtableDispatch = (pUVar13->vtable)._21_Show.methodPtr;
            (*vtableDispatch)(pUVar20,(pUVar13->vtable)._21_Show.method,ppIVar17,vtableDispatch)
            ;
            return;
          }
        }
        goto label_0440e52a;
      }
      if (uVar10 == 0xb60645db) {
        *(undefined8 *)(puVar18 + -0x20) = 0x440e49f;
        bVar9 = System_String__op_Equality((System_String_o *)key,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pSVar15 = (__this_05->fields)._currentPage;
        if (pSVar15 != (Settings_IntSetting_o *)0x0) {
          iVar19 = (pSVar15->fields)._value;
          if (iVar19 < 1) {
            iVar19 = (__this_05->fields)._lastPageCount;
          }
          iVar19 = iVar19 + -1;
label_0440e4fd:
          *(undefined8 *)(puVar18 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar15,iVar19,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this_05,0,method_01);
          return;
        }
        goto label_0440e52a;
      }
      if (uVar10 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)(puVar18 + -0x20) = 0x440e299;
      bVar9 = System_String__op_Equality((System_String_o *)key,"Back",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (*(int *)((long)&(TypeInfo_UIManager->fields)._filterQuery + 4) == 0) {
        *(undefined8 *)(puVar18 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      key = *(UI_MultiplayerRoomListPopup_o ***)&(((TypeInfo_UIManager->fields)._pageLabel)->fields).m_Color.fields;
      if ((UI_MultiplayerRoomListPopup_o *)key == (UI_MultiplayerRoomListPopup_o *)0x0) goto label_0440e52a;
      pUVar5 = ((UI_MultiplayerRoomListPopup_o *)key)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar5->_2).naturalAligment) &&
         ((pUVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar6 = (pUVar5->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar5->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)(puVar18 + -0x20) = 0x440e312;
        (*vtableDispatch)(key,pMVar6);
        pUVar20 = (((UI_MultiplayerRoomListPopup_o *)key)->fields)._multiplayerPasswordPopup;
        ppIVar17 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)(puVar18 + -0x20) = 0x440e537;
    __this = (UI_MultiplayerRoomListPopup_o *)key;
    il2cpp_runtime_helper_022b2fd0();
    *(UI_MultiplayerRoomListPopup_o **)(puVar18 + -0x20) = unaff_R15;
    *(UI_MultiplayerRoomListPopup_o **)(puVar18 + -0x28) = __this_05;
    *(UI_MultiplayerRoomListPopup_o ***)(puVar18 + -0x30) = key;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)(puVar18 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)(puVar18 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)(puVar18 + -0x38) = 0x440e5bb;
    __this_03 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_GameObject);
    (__this->fields)._roomButtons = __this_03;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._roomButtons,__this_03);
    pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e60d;
    __this_04 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0(__this_04,pSVar11,0x7fffffff,(MethodInfo *)0x0);
    (__this->fields)._filterQuery = __this_04;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._filterQuery,__this_04);
    unaff_R15 = (UI_MultiplayerRoomListPopup_o *)&TypeInfo_BoolSetting;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e647;
    pSVar14 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar14,1,(MethodInfo *)0x0);
    (__this->fields)._filterShowFull = pSVar14;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._filterShowFull,pSVar14);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e677;
    pSVar14 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar14,1,(MethodInfo *)0x0);
    (__this->fields)._filterShowPassword = pSVar14;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._filterShowPassword);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e6ae;
    pSVar15 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)(puVar18 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(pSVar15,0,0,0x7fffffff,(MethodInfo *)0x0);
    (__this->fields)._currentPage = pSVar15;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._currentPage,pSVar15);
    (__this->fields)._maxUpdateDelay = 5.0;
    (__this->fields)._currentUpdateDelay = 5.0;
    (__this->fields)._roomsPerPage = 10;
    *(undefined8 *)(puVar18 + -0x38) = 0x440e70b;
    pSVar16 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this_05 = "`";
    if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
      *(undefined8 *)(puVar18 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)(puVar18 + -0x38) = 0x440e726;
      uVar8 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (pSVar16 == (System_Char_array *)0x0) goto label_0440e75a;
      if ((int)pSVar16->max_length != 0) {
        pSVar16->m_Items[0] = uVar8;
        (__this->fields)._roomSeperator = pSVar16;
        *(undefined8 *)(puVar18 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._roomSeperator);
        UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)(puVar18 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    *(System_Char_array **)(puVar18 + -0x38) = pSVar16;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)(puVar18 + -0x40) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
    }
    ppUVar12 = &"Create";
    room = *(Photon_Realtime_RoomInfo_o **)(puVar18 + -0x38);
    puVar18 = puVar18 + -0x30;
    key = (UI_MultiplayerRoomListPopup_o **)"Create";
  } while( true );
}


// UI.MultiplayerRoomListPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerRoomListPopup__OnButtonClick (UI_MultiplayerRoomListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x440e070

void UI_MultiplayerRoomListPopup__OnButtonClick
               (UI_MultiplayerRoomListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  UI_TooltipPopup_c *pUVar4;
  MethodInfo *pMVar5;
  UI_CreateGamePopup_o *__this_00;
  System_String_o *defaultValue;
  uint16_t uVar6;
  uint32_t uVar7;
  bool_conflict bVar8;
  UI_TooltipPopup_o **in_RAX;
  UnityEngine_UI_Text_c *pUVar9;
  System_Collections_Generic_List_object__o *__this_01;
  System_Threading_CancellationTokenSource_o *__this_02;
  Settings_BoolSetting_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar12;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 unaff_RBX;
  long *s;
  int iVar14;
  UnityEngine_UI_Text_o *pUVar15;
  UI_TooltipPopup_o *unaff_R14;
  undefined8 *unaff_R15;
  
  s = (long *)name;
  do {
    *(UI_TooltipPopup_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(UI_TooltipPopup_o ***)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup,s,method);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    vtableDispatch = (__this->klass->vtable)._26_HideAllPopups.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e13d;
    (*vtableDispatch)(__this);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e147;
    uVar7 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)s,(MethodInfo *)0x0);
    if (uVar7 < 0x990de47e) {
      if (uVar7 == 0x990de47d) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e3c3;
        bVar8 = System_String__op_Equality
                          ((System_String_o *)s,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_00 = (UI_CreateGamePopup_o *)plVar3[0x13];
            if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_00,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar7 == 0x815aad4) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e393;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Refresh",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
          return;
        }
        if (uVar7 != 0x479b753b) {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e182;
        bVar8 = System_String__op_Equality((System_String_o *)s,"Duel",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pUVar15 = (UnityEngine_UI_Text_o *)plVar3[0x19];
            if (pUVar15 == (UnityEngine_UI_Text_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar15->klass->_2).naturalAligment) &&
               ((pUVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pUVar9 = pUVar15->klass;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pUVar9->_2).naturalAligment) &&
                 (ppIVar13 = (pUVar9->_2).typeHierarchy, ppIVar13[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          s = &TypeInfo_UIManager;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar7) {
        if (uVar7 == 0xcad5d456) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e4d6;
          bVar8 = System_String__op_Equality((System_String_o *)s,"RightPage",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pSVar11 = (__this->fields)._currentPage;
          if (pSVar11 != (Settings_IntSetting_o *)0x0) {
            iVar2 = (pSVar11->fields)._value;
            iVar14 = iVar2 + 1;
            if ((__this->fields)._lastPageCount + -1 <= iVar2) {
              iVar14 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar7 != 0xf4a9c097) {
            return;
          }
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e34d;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Filter",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pUVar15 = (UnityEngine_UI_Text_o *)(__this->fields)._multiplayerFilterPopup;
          ppIVar13 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar9 = pUVar15->klass;
label_0440e368:
            vtableDispatch = (pUVar9->vtable)._21_unknown.methodPtr;
            (*vtableDispatch)
                      (pUVar15,(pUVar9->vtable)._21_unknown.method,ppIVar13,vtableDispatch);
            return;
          }
        }
        goto label_0440e52a;
      }
      if (uVar7 == 0xb60645db) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e49f;
        bVar8 = System_String__op_Equality((System_String_o *)s,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        pSVar11 = (__this->fields)._currentPage;
        if (pSVar11 != (Settings_IntSetting_o *)0x0) {
          iVar14 = (pSVar11->fields)._value;
          if (iVar14 < 1) {
            iVar14 = (__this->fields)._lastPageCount;
          }
          iVar14 = iVar14 + -1;
label_0440e4fd:
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar11,iVar14,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this,0,method_01);
          return;
        }
        goto label_0440e52a;
      }
      if (uVar7 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e299;
      bVar8 = System_String__op_Equality((System_String_o *)s,"Back",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      s = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((UI_TooltipPopup_o *)s == (UI_TooltipPopup_o *)0x0) goto label_0440e52a;
      pUVar4 = ((UI_TooltipPopup_o *)s)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar5 = (pUVar4->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar4->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e312;
        (*vtableDispatch)(s,pMVar5);
        pUVar15 = (((UI_TooltipPopup_o *)s)->fields)._label;
        ppIVar13 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e537;
    unaff_R14 = (UI_TooltipPopup_o *)s;
    il2cpp_runtime_helper_022b2fd0();
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R15;
    *(UI_MultiplayerRoomListPopup_o **)((long)register0x00000020 + -0x28) = __this;
    *(long **)((long)register0x00000020 + -0x30) = s;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e5bb;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
    unaff_R14[1].fields.m_CachedPtr = (intptr_t)__this_01;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields,__this_01);
    defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e60d;
    __this_02 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0
              ((Settings_StringSetting_o *)__this_02,defaultValue,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.m_CancellationTokenSource = __this_02;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.m_CancellationTokenSource,__this_02);
    unaff_R15 = &TypeInfo_BoolSetting;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e647;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.SinglePanel,pSVar10);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e677;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelLeft = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelLeft);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e6ae;
    pSVar11 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(pSVar11,0,0,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelRight = (UnityEngine_Transform_o *)pSVar11;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelRight,pSVar11);
    unaff_R14[1].fields._popups = (System_Collections_Generic_List_BasePopup__o *)0x40a0000040a00000;
    *(undefined4 *)&unaff_R14[1].fields._currentCategoryPanel = 10;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e70b;
    pSVar12 = (System_Collections_Generic_Dictionary_string__Type__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this = "`";
    if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e726;
      uVar6 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (pSVar12 == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) goto label_0440e75a;
      if (*(int *)&(pSVar12->fields)._entries != 0) {
        *(uint16_t *)&(pSVar12->fields)._count = uVar6;
        unaff_R14[1].fields._categoryPanelTypes = pSVar12;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields._categoryPanelTypes);
        UI_BasePopup___ctor(unaff_R14,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    *(System_Collections_Generic_Dictionary_string__Type__o **)((long)register0x00000020 + -0x38) = pSVar12;
    method = extraout_RDX_01;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
      method = extraout_RDX_02;
    }
    in_RAX = &"Create";
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x38);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x30);
    s = (long *)"Create";
  } while( true );
}


// UI.MultiplayerRoomListPopup$$.ctor
// il2cpp: void UI_MultiplayerRoomListPopup___ctor (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440e540

void UI_MultiplayerRoomListPopup___ctor(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  UI_MultiplayerRoomListPopup_c *pUVar4;
  MethodInfo *pMVar5;
  UI_CreateGamePopup_o *__this_00;
  System_String_o *defaultValue;
  undefined8 uVar6;
  uint16_t uVar7;
  uint32_t uVar8;
  bool_conflict bVar9;
  UI_MultiplayerPasswordPopup_c *pUVar10;
  System_Collections_Generic_List_GameObject__o *__this_01;
  Settings_StringSetting_o *__this_02;
  Settings_BoolSetting_o *pSVar11;
  Settings_IntSetting_o *pSVar12;
  System_Char_array *pSVar13;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *unaff_RBX;
  int iVar15;
  UI_MultiplayerPasswordPopup_o *pUVar16;
  UI_MultiplayerRoomListPopup_o *unaff_R14;
  undefined8 *unaff_R15;
  
code_r0x0440e540:
  *(undefined8 **)((long)register0x00000020 + -8) = unaff_R15;
  *(UI_MultiplayerRoomListPopup_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ae5dd == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e55d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e569;
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e575;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e581;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e58d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e599;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e5a5;
    il2cpp_runtime_helper_023445d0(&"`");
    g_data_057ae5dd = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e5bb;
  __this_01 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e5d0;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._roomButtons = __this_01;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e5e6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._roomButtons,__this_01);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e60d;
  __this_02 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e622;
  Settings_StringSetting___ctor_40f74f0(__this_02,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._filterQuery = __this_02;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e638;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._filterQuery,__this_02);
  unaff_R15 = &TypeInfo_BoolSetting;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e647;
  pSVar11 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e659;
  Settings_BoolSetting___ctor_40f3960(pSVar11,1,(MethodInfo *)0x0);
  (__this->fields)._filterShowFull = pSVar11;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e66f;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._filterShowFull,pSVar11);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e677;
  pSVar11 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e689;
  Settings_BoolSetting___ctor_40f3960(pSVar11,1,(MethodInfo *)0x0);
  (__this->fields)._filterShowPassword = pSVar11;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e69f;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._filterShowPassword);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e6ae;
  pSVar12 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e6c5;
  Settings_IntSetting___ctor_40f39a0(pSVar12,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentPage = pSVar12;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e6db;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentPage,pSVar12);
  (__this->fields)._maxUpdateDelay = 5.0;
  (__this->fields)._currentUpdateDelay = 5.0;
  (__this->fields)._roomsPerPage = 10;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e70b;
  pSVar13 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
  unaff_R14 = "`";
  if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e75f;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e726;
    uVar7 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
    if (pSVar13 == (System_Char_array *)0x0) goto label_0440e75a;
    if ((int)pSVar13->max_length != 0) {
      pSVar13->m_Items[0] = uVar7;
      (__this->fields)._roomSeperator = pSVar13;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e74b;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._roomSeperator);
      UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e764;
  il2cpp_runtime_helper_022b2ca0();
  *(System_Char_array **)((long)register0x00000020 + -0x20) = pSVar13;
  if (g_data_057ae5de == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x28) = 0x440e789;
    il2cpp_runtime_helper_023445d0(&"Create");
    g_data_057ae5de = '\x01';
  }
  unaff_RBX = (long *)"Create";
  uVar6 = *(undefined8 *)((long)register0x00000020 + -0x20);
  *(UI_MultiplayerRoomListPopup_o **)((long)register0x00000020 + -0x20) = __this;
  *(undefined8 *)((long)register0x00000020 + -0x28) = uVar6;
  *(UI_MultiplayerRoomListPopup_o ***)((long)register0x00000020 + -0x30) = &"Create";
  if (g_data_057ae5dc == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e093;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e09f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e0ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e0b7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e0c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e0cf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e0db;
    il2cpp_runtime_helper_023445d0(&"RightPage");
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e0e7;
    il2cpp_runtime_helper_023445d0(&"LeftPage");
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e0f3;
    il2cpp_runtime_helper_023445d0(&"Filter");
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e0ff;
    il2cpp_runtime_helper_023445d0(&"Create");
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e10b;
    il2cpp_runtime_helper_023445d0(&"Back");
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e117;
    il2cpp_runtime_helper_023445d0(&"Duel");
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e123;
    il2cpp_runtime_helper_023445d0(&"Refresh");
    g_data_057ae5dc = '\x01';
  }
  vtableDispatch = (unaff_R14->klass->vtable)._26_HideAllPopups.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e13d;
  (*vtableDispatch)(unaff_R14);
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e147;
  uVar8 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)unaff_RBX,(MethodInfo *)0x0);
  if (uVar8 < 0x990de47e) {
    if (uVar8 == 0x990de47d) {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e3c3;
      bVar9 = System_String__op_Equality
                        ((System_String_o *)unaff_RBX,(System_String_o *)"Create",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e3d5;
      UI_BasePopup__Hide((UI_BasePopup_o *)unaff_R14,(MethodInfo *)0x0);
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e3ed;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar3 != (long *)0x0) {
        bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
        if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
           (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
          __this_00 = (UI_CreateGamePopup_o *)plVar3[0x13];
          if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
          bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
          if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
            UI_CreateGamePopup__Show(__this_00,1,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_0440e525;
      }
    }
    else {
      if (uVar8 == 0x815aad4) {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e393;
        bVar9 = System_String__op_Equality((System_String_o *)unaff_RBX,"Refresh",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        UI_MultiplayerRoomListPopup__RefreshList(unaff_R14,1,method_00);
        return;
      }
      if (uVar8 != 0x479b753b) {
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e182;
      bVar9 = System_String__op_Equality((System_String_o *)unaff_RBX,"Duel",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e194;
      UI_BasePopup__Hide((UI_BasePopup_o *)unaff_R14,(MethodInfo *)0x0);
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e1ac;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar3 != (long *)0x0) {
        bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
        if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
           (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
          pUVar16 = (UI_MultiplayerPasswordPopup_o *)plVar3[0x19];
          if (pUVar16 == (UI_MultiplayerPasswordPopup_o *)0x0) goto label_0440e52a;
          bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
          if ((bVar1 <= (pUVar16->klass->_2).naturalAligment) &&
             ((pUVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
            pUVar10 = pUVar16->klass;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar10->_2).naturalAligment) &&
               (ppIVar14 = (pUVar10->_2).typeHierarchy, ppIVar14[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
            goto label_0440e368;
          }
        }
label_0440e525:
        unaff_RBX = &TypeInfo_UIManager;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e52a;
        il2cpp_runtime_helper_022b2fd0();
      }
    }
  }
  else {
    if (uVar8 < 0xc2954bc3) {
      if (uVar8 == 0xb60645db) {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e49f;
        bVar9 = System_String__op_Equality((System_String_o *)unaff_RBX,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pSVar12 = (unaff_R14->fields)._currentPage;
        if (pSVar12 == (Settings_IntSetting_o *)0x0) goto label_0440e52a;
        iVar15 = (pSVar12->fields)._value;
        if (iVar15 < 1) {
          iVar15 = (unaff_R14->fields)._lastPageCount;
        }
        iVar15 = iVar15 + -1;
label_0440e4fd:
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e50c;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar12,iVar15,MethodInfo_Void_set_Value);
        UI_MultiplayerRoomListPopup__RefreshList(unaff_R14,0,method_01);
        return;
      }
      if (uVar8 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e299;
      bVar9 = System_String__op_Equality((System_String_o *)unaff_RBX,"Back",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((UI_MultiplayerRoomListPopup_o *)unaff_RBX == (UI_MultiplayerRoomListPopup_o *)0x0)
      goto label_0440e52a;
      pUVar4 = ((UI_MultiplayerRoomListPopup_o *)unaff_RBX)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar5 = (pUVar4->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar4->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e312;
        (*vtableDispatch)(unaff_RBX,pMVar5);
        pUVar16 = (((UI_MultiplayerRoomListPopup_o *)unaff_RBX)->fields)._multiplayerPasswordPopup;
        ppIVar14 = extraout_RDX;
        goto joined_r0x0440e31c;
      }
      goto label_0440e52f;
    }
    if (uVar8 == 0xcad5d456) {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e4d6;
      bVar9 = System_String__op_Equality((System_String_o *)unaff_RBX,"RightPage",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pSVar12 = (unaff_R14->fields)._currentPage;
      if (pSVar12 == (Settings_IntSetting_o *)0x0) goto label_0440e52a;
      iVar2 = (pSVar12->fields)._value;
      iVar15 = iVar2 + 1;
      if ((unaff_R14->fields)._lastPageCount + -1 <= iVar2) {
        iVar15 = 0;
      }
      goto label_0440e4fd;
    }
    if (uVar8 != 0xf4a9c097) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e34d;
    bVar9 = System_String__op_Equality((System_String_o *)unaff_RBX,"Filter",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pUVar16 = (UI_MultiplayerPasswordPopup_o *)(unaff_R14->fields)._multiplayerFilterPopup;
    ppIVar14 = extraout_RDX_00;
joined_r0x0440e31c:
    if (pUVar16 != (UI_MultiplayerPasswordPopup_o *)0x0) {
      pUVar10 = pUVar16->klass;
label_0440e368:
      vtableDispatch = (pUVar10->vtable)._21_Show.methodPtr;
      (*vtableDispatch)(pUVar16,(pUVar10->vtable)._21_Show.method,ppIVar14,vtableDispatch);
      return;
    }
  }
label_0440e52a:
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e52f;
  il2cpp_runtime_helper_022b2c90();
label_0440e52f:
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e537;
  __this = (UI_MultiplayerRoomListPopup_o *)unaff_RBX;
  il2cpp_runtime_helper_022b2fd0();
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x30);
  goto code_r0x0440e540;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_0
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_0 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440e770

void UI_MultiplayerRoomListPopup___Setup_b__29_0(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  UI_TooltipPopup_c *pUVar4;
  MethodInfo *pMVar5;
  UI_CreateGamePopup_o *__this_00;
  System_String_o *defaultValue;
  undefined8 uVar6;
  uint16_t uVar7;
  uint32_t uVar8;
  bool_conflict bVar9;
  UnityEngine_UI_Text_c *pUVar10;
  System_Collections_Generic_List_object__o *__this_01;
  System_Threading_CancellationTokenSource_o *__this_02;
  Settings_BoolSetting_o *pSVar11;
  Settings_IntSetting_o *pSVar12;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *s;
  System_Collections_Generic_Dictionary_string__Type__o *unaff_RBX;
  int iVar14;
  UnityEngine_UI_Text_o *pUVar15;
  UI_TooltipPopup_o *unaff_R14;
  undefined8 *unaff_R15;
  
  do {
    *(System_Collections_Generic_Dictionary_string__Type__o **)((long)register0x00000020 + -8) = unaff_RBX;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
    }
    s = (long *)"Create";
    uVar6 = *(undefined8 *)((long)register0x00000020 + -8);
    *(UI_TooltipPopup_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar6;
    *(UI_TooltipPopup_o ***)((long)register0x00000020 + -0x18) = &"Create";
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    vtableDispatch = (__this->klass->vtable)._26_HideAllPopups.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e13d;
    (*vtableDispatch)(__this);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e147;
    uVar8 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)s,(MethodInfo *)0x0);
    if (uVar8 < 0x990de47e) {
      if (uVar8 == 0x990de47d) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e3c3;
        bVar9 = System_String__op_Equality
                          ((System_String_o *)s,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_00 = (UI_CreateGamePopup_o *)plVar3[0x13];
            if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_00,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar8 == 0x815aad4) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e393;
          bVar9 = System_String__op_Equality((System_String_o *)s,"Refresh",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
          return;
        }
        if (uVar8 != 0x479b753b) {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e182;
        bVar9 = System_String__op_Equality((System_String_o *)s,"Duel",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pUVar15 = (UnityEngine_UI_Text_o *)plVar3[0x19];
            if (pUVar15 == (UnityEngine_UI_Text_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar15->klass->_2).naturalAligment) &&
               ((pUVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pUVar10 = pUVar15->klass;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pUVar10->_2).naturalAligment) &&
                 (ppIVar13 = (pUVar10->_2).typeHierarchy, ppIVar13[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          s = &TypeInfo_UIManager;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar8) {
        if (uVar8 == 0xcad5d456) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e4d6;
          bVar9 = System_String__op_Equality((System_String_o *)s,"RightPage",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pSVar12 = (__this->fields)._currentPage;
          if (pSVar12 != (Settings_IntSetting_o *)0x0) {
            iVar2 = (pSVar12->fields)._value;
            iVar14 = iVar2 + 1;
            if ((__this->fields)._lastPageCount + -1 <= iVar2) {
              iVar14 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar8 != 0xf4a9c097) {
            return;
          }
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e34d;
          bVar9 = System_String__op_Equality((System_String_o *)s,"Filter",(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar15 = (UnityEngine_UI_Text_o *)(__this->fields)._multiplayerFilterPopup;
          ppIVar13 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar10 = pUVar15->klass;
label_0440e368:
            vtableDispatch = (pUVar10->vtable)._21_unknown.methodPtr;
            (*vtableDispatch)
                      (pUVar15,(pUVar10->vtable)._21_unknown.method,ppIVar13,vtableDispatch);
            return;
          }
        }
        goto label_0440e52a;
      }
      if (uVar8 == 0xb60645db) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e49f;
        bVar9 = System_String__op_Equality((System_String_o *)s,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pSVar12 = (__this->fields)._currentPage;
        if (pSVar12 != (Settings_IntSetting_o *)0x0) {
          iVar14 = (pSVar12->fields)._value;
          if (iVar14 < 1) {
            iVar14 = (__this->fields)._lastPageCount;
          }
          iVar14 = iVar14 + -1;
label_0440e4fd:
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar12,iVar14,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this,0,method_01);
          return;
        }
        goto label_0440e52a;
      }
      if (uVar8 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e299;
      bVar9 = System_String__op_Equality((System_String_o *)s,"Back",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      s = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((UI_TooltipPopup_o *)s == (UI_TooltipPopup_o *)0x0) goto label_0440e52a;
      pUVar4 = ((UI_TooltipPopup_o *)s)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar5 = (pUVar4->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar4->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e312;
        (*vtableDispatch)(s,pMVar5);
        pUVar15 = (((UI_TooltipPopup_o *)s)->fields)._label;
        ppIVar13 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x440e537;
    unaff_R14 = (UI_TooltipPopup_o *)s;
    il2cpp_runtime_helper_022b2fd0();
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R15;
    *(UI_MultiplayerRoomListPopup_o **)((long)register0x00000020 + -0x28) = __this;
    *(long **)((long)register0x00000020 + -0x30) = s;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e5bb;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
    unaff_R14[1].fields.m_CachedPtr = (intptr_t)__this_01;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields,__this_01);
    defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e60d;
    __this_02 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0
              ((Settings_StringSetting_o *)__this_02,defaultValue,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.m_CancellationTokenSource = __this_02;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.m_CancellationTokenSource,__this_02);
    unaff_R15 = &TypeInfo_BoolSetting;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e647;
    pSVar11 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar11,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar11;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.SinglePanel,pSVar11);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e677;
    pSVar11 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar11,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelLeft = (UnityEngine_Transform_o *)pSVar11;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelLeft);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e6ae;
    pSVar12 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(pSVar12,0,0,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelRight = (UnityEngine_Transform_o *)pSVar12;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelRight,pSVar12);
    unaff_R14[1].fields._popups = (System_Collections_Generic_List_BasePopup__o *)0x40a0000040a00000;
    *(undefined4 *)&unaff_R14[1].fields._currentCategoryPanel = 10;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e70b;
    unaff_RBX = (System_Collections_Generic_Dictionary_string__Type__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this = "`";
    if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e726;
      uVar7 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (unaff_RBX == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) goto label_0440e75a;
      if (*(int *)&(unaff_RBX->fields)._entries != 0) {
        *(uint16_t *)&(unaff_RBX->fields)._count = uVar7;
        unaff_R14[1].fields._categoryPanelTypes = unaff_RBX;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields._categoryPanelTypes);
        UI_BasePopup___ctor(unaff_R14,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x30);
  } while( true );
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_1
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_1 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440e7b0

void UI_MultiplayerRoomListPopup___Setup_b__29_1(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  UI_TooltipPopup_c *pUVar4;
  MethodInfo *pMVar5;
  UI_CreateGamePopup_o *__this_00;
  System_String_o *defaultValue;
  uint16_t uVar6;
  uint32_t uVar7;
  bool_conflict bVar8;
  UnityEngine_UI_Text_c *pUVar9;
  System_Collections_Generic_List_object__o *__this_01;
  System_Threading_CancellationTokenSource_o *__this_02;
  Settings_BoolSetting_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar12;
  UI_TooltipPopup_o **ppUVar13;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *s;
  undefined8 unaff_RBX;
  undefined1 *puVar15;
  int iVar16;
  UnityEngine_UI_Text_o *pUVar17;
  UI_TooltipPopup_o *unaff_R14;
  undefined8 *unaff_R15;
  
  if (g_data_057ae5df == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5df = '\x01';
  }
  ppUVar13 = &"Back";
  puVar15 = (undefined1 *)register0x00000020;
  s = (long *)"Back";
  do {
    *(UI_TooltipPopup_o **)(puVar15 + -8) = unaff_R14;
    *(undefined8 *)(puVar15 + -0x10) = unaff_RBX;
    *(UI_TooltipPopup_o ***)(puVar15 + -0x18) = ppUVar13;
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)(puVar15 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    vtableDispatch = (__this->klass->vtable)._26_HideAllPopups.methodPtr;
    *(undefined8 *)(puVar15 + -0x20) = 0x440e13d;
    (*vtableDispatch)(__this);
    *(undefined8 *)(puVar15 + -0x20) = 0x440e147;
    uVar7 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)s,(MethodInfo *)0x0);
    if (uVar7 < 0x990de47e) {
      if (uVar7 == 0x990de47d) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3c3;
        bVar8 = System_String__op_Equality
                          ((System_String_o *)s,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_00 = (UI_CreateGamePopup_o *)plVar3[0x13];
            if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_00,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar7 == 0x815aad4) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e393;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Refresh",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
          return;
        }
        if (uVar7 != 0x479b753b) {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e182;
        bVar8 = System_String__op_Equality((System_String_o *)s,"Duel",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pUVar17 = (UnityEngine_UI_Text_o *)plVar3[0x19];
            if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar17->klass->_2).naturalAligment) &&
               ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pUVar9 = pUVar17->klass;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pUVar9->_2).naturalAligment) &&
                 (ppIVar14 = (pUVar9->_2).typeHierarchy, ppIVar14[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          s = &TypeInfo_UIManager;
          *(undefined8 *)(puVar15 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)(puVar15 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar7) {
        if (uVar7 == 0xcad5d456) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e4d6;
          bVar8 = System_String__op_Equality((System_String_o *)s,"RightPage",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pSVar11 = (__this->fields)._currentPage;
          if (pSVar11 != (Settings_IntSetting_o *)0x0) {
            iVar2 = (pSVar11->fields)._value;
            iVar16 = iVar2 + 1;
            if ((__this->fields)._lastPageCount + -1 <= iVar2) {
              iVar16 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar7 != 0xf4a9c097) {
            return;
          }
          *(undefined8 *)(puVar15 + -0x20) = 0x440e34d;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Filter",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pUVar17 = (UnityEngine_UI_Text_o *)(__this->fields)._multiplayerFilterPopup;
          ppIVar14 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar9 = pUVar17->klass;
label_0440e368:
            vtableDispatch = (pUVar9->vtable)._21_unknown.methodPtr;
            (*vtableDispatch)
                      (pUVar17,(pUVar9->vtable)._21_unknown.method,ppIVar14,vtableDispatch);
            return;
          }
        }
        goto label_0440e52a;
      }
      if (uVar7 == 0xb60645db) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e49f;
        bVar8 = System_String__op_Equality((System_String_o *)s,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        pSVar11 = (__this->fields)._currentPage;
        if (pSVar11 != (Settings_IntSetting_o *)0x0) {
          iVar16 = (pSVar11->fields)._value;
          if (iVar16 < 1) {
            iVar16 = (__this->fields)._lastPageCount;
          }
          iVar16 = iVar16 + -1;
label_0440e4fd:
          *(undefined8 *)(puVar15 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar11,iVar16,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this,0,method_01);
          return;
        }
        goto label_0440e52a;
      }
      if (uVar7 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)(puVar15 + -0x20) = 0x440e299;
      bVar8 = System_String__op_Equality
                        ((System_String_o *)s,(System_String_o *)"Back",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      s = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((UI_TooltipPopup_o *)s == (UI_TooltipPopup_o *)0x0) goto label_0440e52a;
      pUVar4 = ((UI_TooltipPopup_o *)s)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar5 = (pUVar4->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar4->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)(puVar15 + -0x20) = 0x440e312;
        (*vtableDispatch)(s,pMVar5);
        pUVar17 = (((UI_TooltipPopup_o *)s)->fields)._label;
        ppIVar14 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)(puVar15 + -0x20) = 0x440e537;
    unaff_R14 = (UI_TooltipPopup_o *)s;
    il2cpp_runtime_helper_022b2fd0();
    *(undefined8 **)(puVar15 + -0x20) = unaff_R15;
    *(UI_MultiplayerRoomListPopup_o **)(puVar15 + -0x28) = __this;
    *(long **)(puVar15 + -0x30) = s;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5bb;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
    unaff_R14[1].fields.m_CachedPtr = (intptr_t)__this_01;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields,__this_01);
    defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e60d;
    __this_02 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0
              ((Settings_StringSetting_o *)__this_02,defaultValue,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.m_CancellationTokenSource = __this_02;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.m_CancellationTokenSource,__this_02);
    unaff_R15 = &TypeInfo_BoolSetting;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e647;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.SinglePanel,pSVar10);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e677;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelLeft = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelLeft);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6ae;
    pSVar11 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(pSVar11,0,0,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelRight = (UnityEngine_Transform_o *)pSVar11;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelRight,pSVar11);
    unaff_R14[1].fields._popups = (System_Collections_Generic_List_BasePopup__o *)0x40a0000040a00000;
    *(undefined4 *)&unaff_R14[1].fields._currentCategoryPanel = 10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e70b;
    pSVar12 = (System_Collections_Generic_Dictionary_string__Type__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this = "`";
    if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
      *(undefined8 *)(puVar15 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e726;
      uVar6 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (pSVar12 == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) goto label_0440e75a;
      if (*(int *)&(pSVar12->fields)._entries != 0) {
        *(uint16_t *)&(pSVar12->fields)._count = uVar6;
        unaff_R14[1].fields._categoryPanelTypes = pSVar12;
        *(undefined8 *)(puVar15 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields._categoryPanelTypes);
        UI_BasePopup___ctor(unaff_R14,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    *(System_Collections_Generic_Dictionary_string__Type__o **)(puVar15 + -0x38) = pSVar12;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)(puVar15 + -0x40) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
    }
    ppUVar13 = &"Create";
    unaff_RBX = *(undefined8 *)(puVar15 + -0x38);
    puVar15 = puVar15 + -0x30;
    s = (long *)"Create";
  } while( true );
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_2
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_2 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440e7f0

void UI_MultiplayerRoomListPopup___Setup_b__29_2(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_MultiplayerRoomListPopup__RefreshList(__this,1,in_RDX);
  return;
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_3
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_3 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440e800

void UI_MultiplayerRoomListPopup___Setup_b__29_3(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  UI_TooltipPopup_c *pUVar4;
  MethodInfo *pMVar5;
  UI_CreateGamePopup_o *__this_00;
  System_String_o *defaultValue;
  uint16_t uVar6;
  uint32_t uVar7;
  bool_conflict bVar8;
  UnityEngine_UI_Text_c *pUVar9;
  System_Collections_Generic_List_object__o *__this_01;
  System_Threading_CancellationTokenSource_o *__this_02;
  Settings_BoolSetting_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar12;
  UI_TooltipPopup_o **ppUVar13;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *s;
  undefined8 unaff_RBX;
  undefined1 *puVar15;
  int iVar16;
  UnityEngine_UI_Text_o *pUVar17;
  UI_TooltipPopup_o *unaff_R14;
  undefined8 *unaff_R15;
  
  if (g_data_057ae5e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Filter");
    g_data_057ae5e0 = '\x01';
  }
  ppUVar13 = &"Filter";
  puVar15 = (undefined1 *)register0x00000020;
  s = (long *)"Filter";
  do {
    *(UI_TooltipPopup_o **)(puVar15 + -8) = unaff_R14;
    *(undefined8 *)(puVar15 + -0x10) = unaff_RBX;
    *(UI_TooltipPopup_o ***)(puVar15 + -0x18) = ppUVar13;
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)(puVar15 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    vtableDispatch = (__this->klass->vtable)._26_HideAllPopups.methodPtr;
    *(undefined8 *)(puVar15 + -0x20) = 0x440e13d;
    (*vtableDispatch)(__this);
    *(undefined8 *)(puVar15 + -0x20) = 0x440e147;
    uVar7 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)s,(MethodInfo *)0x0);
    if (uVar7 < 0x990de47e) {
      if (uVar7 == 0x990de47d) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3c3;
        bVar8 = System_String__op_Equality
                          ((System_String_o *)s,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_00 = (UI_CreateGamePopup_o *)plVar3[0x13];
            if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_00,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar7 == 0x815aad4) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e393;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Refresh",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
          return;
        }
        if (uVar7 != 0x479b753b) {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e182;
        bVar8 = System_String__op_Equality((System_String_o *)s,"Duel",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pUVar17 = (UnityEngine_UI_Text_o *)plVar3[0x19];
            if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar17->klass->_2).naturalAligment) &&
               ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pUVar9 = pUVar17->klass;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pUVar9->_2).naturalAligment) &&
                 (ppIVar14 = (pUVar9->_2).typeHierarchy, ppIVar14[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          s = &TypeInfo_UIManager;
          *(undefined8 *)(puVar15 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)(puVar15 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar7) {
        if (uVar7 == 0xcad5d456) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e4d6;
          bVar8 = System_String__op_Equality((System_String_o *)s,"RightPage",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pSVar11 = (__this->fields)._currentPage;
          if (pSVar11 != (Settings_IntSetting_o *)0x0) {
            iVar2 = (pSVar11->fields)._value;
            iVar16 = iVar2 + 1;
            if ((__this->fields)._lastPageCount + -1 <= iVar2) {
              iVar16 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar7 != 0xf4a9c097) {
            return;
          }
          *(undefined8 *)(puVar15 + -0x20) = 0x440e34d;
          bVar8 = System_String__op_Equality
                            ((System_String_o *)s,(System_String_o *)"Filter",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pUVar17 = (UnityEngine_UI_Text_o *)(__this->fields)._multiplayerFilterPopup;
          ppIVar14 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar9 = pUVar17->klass;
label_0440e368:
            vtableDispatch = (pUVar9->vtable)._21_unknown.methodPtr;
            (*vtableDispatch)
                      (pUVar17,(pUVar9->vtable)._21_unknown.method,ppIVar14,vtableDispatch);
            return;
          }
        }
        goto label_0440e52a;
      }
      if (uVar7 == 0xb60645db) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e49f;
        bVar8 = System_String__op_Equality((System_String_o *)s,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        pSVar11 = (__this->fields)._currentPage;
        if (pSVar11 != (Settings_IntSetting_o *)0x0) {
          iVar16 = (pSVar11->fields)._value;
          if (iVar16 < 1) {
            iVar16 = (__this->fields)._lastPageCount;
          }
          iVar16 = iVar16 + -1;
label_0440e4fd:
          *(undefined8 *)(puVar15 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar11,iVar16,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this,0,method_01);
          return;
        }
        goto label_0440e52a;
      }
      if (uVar7 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)(puVar15 + -0x20) = 0x440e299;
      bVar8 = System_String__op_Equality((System_String_o *)s,"Back",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      s = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((UI_TooltipPopup_o *)s == (UI_TooltipPopup_o *)0x0) goto label_0440e52a;
      pUVar4 = ((UI_TooltipPopup_o *)s)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar5 = (pUVar4->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar4->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)(puVar15 + -0x20) = 0x440e312;
        (*vtableDispatch)(s,pMVar5);
        pUVar17 = (((UI_TooltipPopup_o *)s)->fields)._label;
        ppIVar14 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)(puVar15 + -0x20) = 0x440e537;
    unaff_R14 = (UI_TooltipPopup_o *)s;
    il2cpp_runtime_helper_022b2fd0();
    *(undefined8 **)(puVar15 + -0x20) = unaff_R15;
    *(UI_MultiplayerRoomListPopup_o **)(puVar15 + -0x28) = __this;
    *(long **)(puVar15 + -0x30) = s;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5bb;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
    unaff_R14[1].fields.m_CachedPtr = (intptr_t)__this_01;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields,__this_01);
    defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e60d;
    __this_02 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0
              ((Settings_StringSetting_o *)__this_02,defaultValue,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.m_CancellationTokenSource = __this_02;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.m_CancellationTokenSource,__this_02);
    unaff_R15 = &TypeInfo_BoolSetting;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e647;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.SinglePanel,pSVar10);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e677;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelLeft = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelLeft);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6ae;
    pSVar11 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(pSVar11,0,0,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelRight = (UnityEngine_Transform_o *)pSVar11;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelRight,pSVar11);
    unaff_R14[1].fields._popups = (System_Collections_Generic_List_BasePopup__o *)0x40a0000040a00000;
    *(undefined4 *)&unaff_R14[1].fields._currentCategoryPanel = 10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e70b;
    pSVar12 = (System_Collections_Generic_Dictionary_string__Type__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this = "`";
    if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
      *(undefined8 *)(puVar15 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e726;
      uVar6 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (pSVar12 == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) goto label_0440e75a;
      if (*(int *)&(pSVar12->fields)._entries != 0) {
        *(uint16_t *)&(pSVar12->fields)._count = uVar6;
        unaff_R14[1].fields._categoryPanelTypes = pSVar12;
        *(undefined8 *)(puVar15 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields._categoryPanelTypes);
        UI_BasePopup___ctor(unaff_R14,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    *(System_Collections_Generic_Dictionary_string__Type__o **)(puVar15 + -0x38) = pSVar12;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)(puVar15 + -0x40) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
    }
    ppUVar13 = &"Create";
    unaff_RBX = *(undefined8 *)(puVar15 + -0x38);
    puVar15 = puVar15 + -0x30;
    s = (long *)"Create";
  } while( true );
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_4
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_4 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440e840

void UI_MultiplayerRoomListPopup___Setup_b__29_4(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  UI_TooltipPopup_c *pUVar4;
  MethodInfo *pMVar5;
  UI_CreateGamePopup_o *__this_00;
  System_String_o *defaultValue;
  uint16_t uVar6;
  uint32_t uVar7;
  bool_conflict bVar8;
  UnityEngine_UI_Text_c *pUVar9;
  System_Collections_Generic_List_object__o *__this_01;
  System_Threading_CancellationTokenSource_o *__this_02;
  Settings_BoolSetting_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar12;
  UI_TooltipPopup_o **ppUVar13;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *s;
  undefined8 unaff_RBX;
  undefined1 *puVar15;
  int iVar16;
  UnityEngine_UI_Text_o *pUVar17;
  UI_TooltipPopup_o *unaff_R14;
  undefined8 *unaff_R15;
  
  if (g_data_057ae5e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Refresh");
    g_data_057ae5e1 = '\x01';
  }
  ppUVar13 = &"Refresh";
  puVar15 = (undefined1 *)register0x00000020;
  s = (long *)"Refresh";
  do {
    *(UI_TooltipPopup_o **)(puVar15 + -8) = unaff_R14;
    *(undefined8 *)(puVar15 + -0x10) = unaff_RBX;
    *(UI_TooltipPopup_o ***)(puVar15 + -0x18) = ppUVar13;
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)(puVar15 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    vtableDispatch = (__this->klass->vtable)._26_HideAllPopups.methodPtr;
    *(undefined8 *)(puVar15 + -0x20) = 0x440e13d;
    (*vtableDispatch)(__this);
    *(undefined8 *)(puVar15 + -0x20) = 0x440e147;
    uVar7 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)s,(MethodInfo *)0x0);
    if (uVar7 < 0x990de47e) {
      if (uVar7 == 0x990de47d) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3c3;
        bVar8 = System_String__op_Equality
                          ((System_String_o *)s,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_00 = (UI_CreateGamePopup_o *)plVar3[0x13];
            if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_00,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar7 == 0x815aad4) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e393;
          bVar8 = System_String__op_Equality
                            ((System_String_o *)s,(System_String_o *)"Refresh",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
          return;
        }
        if (uVar7 != 0x479b753b) {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e182;
        bVar8 = System_String__op_Equality((System_String_o *)s,"Duel",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pUVar17 = (UnityEngine_UI_Text_o *)plVar3[0x19];
            if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar17->klass->_2).naturalAligment) &&
               ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pUVar9 = pUVar17->klass;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pUVar9->_2).naturalAligment) &&
                 (ppIVar14 = (pUVar9->_2).typeHierarchy, ppIVar14[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          s = &TypeInfo_UIManager;
          *(undefined8 *)(puVar15 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)(puVar15 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar7) {
        if (uVar7 == 0xcad5d456) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e4d6;
          bVar8 = System_String__op_Equality((System_String_o *)s,"RightPage",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pSVar11 = (__this->fields)._currentPage;
          if (pSVar11 != (Settings_IntSetting_o *)0x0) {
            iVar2 = (pSVar11->fields)._value;
            iVar16 = iVar2 + 1;
            if ((__this->fields)._lastPageCount + -1 <= iVar2) {
              iVar16 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar7 != 0xf4a9c097) {
            return;
          }
          *(undefined8 *)(puVar15 + -0x20) = 0x440e34d;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Filter",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pUVar17 = (UnityEngine_UI_Text_o *)(__this->fields)._multiplayerFilterPopup;
          ppIVar14 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar9 = pUVar17->klass;
label_0440e368:
            vtableDispatch = (pUVar9->vtable)._21_unknown.methodPtr;
            (*vtableDispatch)
                      (pUVar17,(pUVar9->vtable)._21_unknown.method,ppIVar14,vtableDispatch);
            return;
          }
        }
        goto label_0440e52a;
      }
      if (uVar7 == 0xb60645db) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e49f;
        bVar8 = System_String__op_Equality((System_String_o *)s,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        pSVar11 = (__this->fields)._currentPage;
        if (pSVar11 != (Settings_IntSetting_o *)0x0) {
          iVar16 = (pSVar11->fields)._value;
          if (iVar16 < 1) {
            iVar16 = (__this->fields)._lastPageCount;
          }
          iVar16 = iVar16 + -1;
label_0440e4fd:
          *(undefined8 *)(puVar15 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar11,iVar16,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this,0,method_01);
          return;
        }
        goto label_0440e52a;
      }
      if (uVar7 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)(puVar15 + -0x20) = 0x440e299;
      bVar8 = System_String__op_Equality((System_String_o *)s,"Back",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      s = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((UI_TooltipPopup_o *)s == (UI_TooltipPopup_o *)0x0) goto label_0440e52a;
      pUVar4 = ((UI_TooltipPopup_o *)s)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar5 = (pUVar4->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar4->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)(puVar15 + -0x20) = 0x440e312;
        (*vtableDispatch)(s,pMVar5);
        pUVar17 = (((UI_TooltipPopup_o *)s)->fields)._label;
        ppIVar14 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)(puVar15 + -0x20) = 0x440e537;
    unaff_R14 = (UI_TooltipPopup_o *)s;
    il2cpp_runtime_helper_022b2fd0();
    *(undefined8 **)(puVar15 + -0x20) = unaff_R15;
    *(UI_MultiplayerRoomListPopup_o **)(puVar15 + -0x28) = __this;
    *(long **)(puVar15 + -0x30) = s;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5bb;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
    unaff_R14[1].fields.m_CachedPtr = (intptr_t)__this_01;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields,__this_01);
    defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e60d;
    __this_02 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0
              ((Settings_StringSetting_o *)__this_02,defaultValue,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.m_CancellationTokenSource = __this_02;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.m_CancellationTokenSource,__this_02);
    unaff_R15 = &TypeInfo_BoolSetting;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e647;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.SinglePanel,pSVar10);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e677;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelLeft = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelLeft);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6ae;
    pSVar11 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(pSVar11,0,0,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelRight = (UnityEngine_Transform_o *)pSVar11;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelRight,pSVar11);
    unaff_R14[1].fields._popups = (System_Collections_Generic_List_BasePopup__o *)0x40a0000040a00000;
    *(undefined4 *)&unaff_R14[1].fields._currentCategoryPanel = 10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e70b;
    pSVar12 = (System_Collections_Generic_Dictionary_string__Type__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this = "`";
    if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
      *(undefined8 *)(puVar15 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e726;
      uVar6 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (pSVar12 == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) goto label_0440e75a;
      if (*(int *)&(pSVar12->fields)._entries != 0) {
        *(uint16_t *)&(pSVar12->fields)._count = uVar6;
        unaff_R14[1].fields._categoryPanelTypes = pSVar12;
        *(undefined8 *)(puVar15 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields._categoryPanelTypes);
        UI_BasePopup___ctor(unaff_R14,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    *(System_Collections_Generic_Dictionary_string__Type__o **)(puVar15 + -0x38) = pSVar12;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)(puVar15 + -0x40) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
    }
    ppUVar13 = &"Create";
    unaff_RBX = *(undefined8 *)(puVar15 + -0x38);
    puVar15 = puVar15 + -0x30;
    s = (long *)"Create";
  } while( true );
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_5
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_5 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440e880

void UI_MultiplayerRoomListPopup___Setup_b__29_5(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  UI_TooltipPopup_c *pUVar4;
  MethodInfo *pMVar5;
  UI_CreateGamePopup_o *__this_00;
  System_String_o *defaultValue;
  uint16_t uVar6;
  uint32_t uVar7;
  bool_conflict bVar8;
  UnityEngine_UI_Text_c *pUVar9;
  System_Collections_Generic_List_object__o *__this_01;
  System_Threading_CancellationTokenSource_o *__this_02;
  Settings_BoolSetting_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar12;
  UI_TooltipPopup_o **ppUVar13;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *s;
  undefined8 unaff_RBX;
  undefined1 *puVar15;
  int iVar16;
  UnityEngine_UI_Text_o *pUVar17;
  UI_TooltipPopup_o *unaff_R14;
  undefined8 *unaff_R15;
  
  if (g_data_057ae5e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LeftPage");
    g_data_057ae5e2 = '\x01';
  }
  ppUVar13 = &"LeftPage";
  puVar15 = (undefined1 *)register0x00000020;
  s = (long *)"LeftPage";
  do {
    *(UI_TooltipPopup_o **)(puVar15 + -8) = unaff_R14;
    *(undefined8 *)(puVar15 + -0x10) = unaff_RBX;
    *(UI_TooltipPopup_o ***)(puVar15 + -0x18) = ppUVar13;
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)(puVar15 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    vtableDispatch = (__this->klass->vtable)._26_HideAllPopups.methodPtr;
    *(undefined8 *)(puVar15 + -0x20) = 0x440e13d;
    (*vtableDispatch)(__this);
    *(undefined8 *)(puVar15 + -0x20) = 0x440e147;
    uVar7 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)s,(MethodInfo *)0x0);
    if (uVar7 < 0x990de47e) {
      if (uVar7 == 0x990de47d) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3c3;
        bVar8 = System_String__op_Equality
                          ((System_String_o *)s,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_00 = (UI_CreateGamePopup_o *)plVar3[0x13];
            if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_00,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar7 == 0x815aad4) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e393;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Refresh",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
          return;
        }
        if (uVar7 != 0x479b753b) {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e182;
        bVar8 = System_String__op_Equality((System_String_o *)s,"Duel",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pUVar17 = (UnityEngine_UI_Text_o *)plVar3[0x19];
            if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar17->klass->_2).naturalAligment) &&
               ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pUVar9 = pUVar17->klass;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pUVar9->_2).naturalAligment) &&
                 (ppIVar14 = (pUVar9->_2).typeHierarchy, ppIVar14[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          s = &TypeInfo_UIManager;
          *(undefined8 *)(puVar15 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)(puVar15 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar7) {
        if (uVar7 == 0xcad5d456) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e4d6;
          bVar8 = System_String__op_Equality((System_String_o *)s,"RightPage",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pSVar11 = (__this->fields)._currentPage;
          if (pSVar11 != (Settings_IntSetting_o *)0x0) {
            iVar2 = (pSVar11->fields)._value;
            iVar16 = iVar2 + 1;
            if ((__this->fields)._lastPageCount + -1 <= iVar2) {
              iVar16 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar7 != 0xf4a9c097) {
            return;
          }
          *(undefined8 *)(puVar15 + -0x20) = 0x440e34d;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Filter",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pUVar17 = (UnityEngine_UI_Text_o *)(__this->fields)._multiplayerFilterPopup;
          ppIVar14 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar9 = pUVar17->klass;
label_0440e368:
            vtableDispatch = (pUVar9->vtable)._21_unknown.methodPtr;
            (*vtableDispatch)
                      (pUVar17,(pUVar9->vtable)._21_unknown.method,ppIVar14,vtableDispatch);
            return;
          }
        }
        goto label_0440e52a;
      }
      if (uVar7 == 0xb60645db) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e49f;
        bVar8 = System_String__op_Equality
                          ((System_String_o *)s,(System_String_o *)"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        pSVar11 = (__this->fields)._currentPage;
        if (pSVar11 != (Settings_IntSetting_o *)0x0) {
          iVar16 = (pSVar11->fields)._value;
          if (iVar16 < 1) {
            iVar16 = (__this->fields)._lastPageCount;
          }
          iVar16 = iVar16 + -1;
label_0440e4fd:
          *(undefined8 *)(puVar15 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar11,iVar16,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this,0,method_01);
          return;
        }
        goto label_0440e52a;
      }
      if (uVar7 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)(puVar15 + -0x20) = 0x440e299;
      bVar8 = System_String__op_Equality((System_String_o *)s,"Back",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      s = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((UI_TooltipPopup_o *)s == (UI_TooltipPopup_o *)0x0) goto label_0440e52a;
      pUVar4 = ((UI_TooltipPopup_o *)s)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar5 = (pUVar4->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar4->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)(puVar15 + -0x20) = 0x440e312;
        (*vtableDispatch)(s,pMVar5);
        pUVar17 = (((UI_TooltipPopup_o *)s)->fields)._label;
        ppIVar14 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)(puVar15 + -0x20) = 0x440e537;
    unaff_R14 = (UI_TooltipPopup_o *)s;
    il2cpp_runtime_helper_022b2fd0();
    *(undefined8 **)(puVar15 + -0x20) = unaff_R15;
    *(UI_MultiplayerRoomListPopup_o **)(puVar15 + -0x28) = __this;
    *(long **)(puVar15 + -0x30) = s;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5bb;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
    unaff_R14[1].fields.m_CachedPtr = (intptr_t)__this_01;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields,__this_01);
    defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e60d;
    __this_02 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0
              ((Settings_StringSetting_o *)__this_02,defaultValue,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.m_CancellationTokenSource = __this_02;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.m_CancellationTokenSource,__this_02);
    unaff_R15 = &TypeInfo_BoolSetting;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e647;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.SinglePanel,pSVar10);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e677;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelLeft = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelLeft);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6ae;
    pSVar11 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(pSVar11,0,0,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelRight = (UnityEngine_Transform_o *)pSVar11;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelRight,pSVar11);
    unaff_R14[1].fields._popups = (System_Collections_Generic_List_BasePopup__o *)0x40a0000040a00000;
    *(undefined4 *)&unaff_R14[1].fields._currentCategoryPanel = 10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e70b;
    pSVar12 = (System_Collections_Generic_Dictionary_string__Type__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this = "`";
    if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
      *(undefined8 *)(puVar15 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e726;
      uVar6 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (pSVar12 == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) goto label_0440e75a;
      if (*(int *)&(pSVar12->fields)._entries != 0) {
        *(uint16_t *)&(pSVar12->fields)._count = uVar6;
        unaff_R14[1].fields._categoryPanelTypes = pSVar12;
        *(undefined8 *)(puVar15 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields._categoryPanelTypes);
        UI_BasePopup___ctor(unaff_R14,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    *(System_Collections_Generic_Dictionary_string__Type__o **)(puVar15 + -0x38) = pSVar12;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)(puVar15 + -0x40) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
    }
    ppUVar13 = &"Create";
    unaff_RBX = *(undefined8 *)(puVar15 + -0x38);
    puVar15 = puVar15 + -0x30;
    s = (long *)"Create";
  } while( true );
}


// UI.MultiplayerRoomListPopup$$<Setup>b__29_6
// il2cpp: void UI_MultiplayerRoomListPopup___Setup_b__29_6 (UI_MultiplayerRoomListPopup_o* __this, const MethodInfo* method);
// 0x440e8c0

void UI_MultiplayerRoomListPopup___Setup_b__29_6(UI_MultiplayerRoomListPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  UI_TooltipPopup_c *pUVar4;
  MethodInfo *pMVar5;
  UI_CreateGamePopup_o *__this_00;
  System_String_o *defaultValue;
  uint16_t uVar6;
  uint32_t uVar7;
  bool_conflict bVar8;
  UnityEngine_UI_Text_c *pUVar9;
  System_Collections_Generic_List_object__o *__this_01;
  System_Threading_CancellationTokenSource_o *__this_02;
  Settings_BoolSetting_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar12;
  UI_TooltipPopup_o **ppUVar13;
  Il2CppClass **extraout_RDX;
  Il2CppClass **extraout_RDX_00;
  Il2CppClass **ppIVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *s;
  undefined8 unaff_RBX;
  undefined1 *puVar15;
  int iVar16;
  UnityEngine_UI_Text_o *pUVar17;
  UI_TooltipPopup_o *unaff_R14;
  undefined8 *unaff_R15;
  
  if (g_data_057ae5e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"RightPage");
    g_data_057ae5e3 = '\x01';
  }
  ppUVar13 = &"RightPage";
  puVar15 = (undefined1 *)register0x00000020;
  s = (long *)"RightPage";
  do {
    *(UI_TooltipPopup_o **)(puVar15 + -8) = unaff_R14;
    *(undefined8 *)(puVar15 + -0x10) = unaff_RBX;
    *(UI_TooltipPopup_o ***)(puVar15 + -0x18) = ppUVar13;
    if (g_data_057ae5dc == '\0') {
      *(undefined8 *)(puVar15 + -0x20) = 0x440e093;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e09f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DuelPopup);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0b7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0c3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0cf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0db;
      il2cpp_runtime_helper_023445d0(&"RightPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0e7;
      il2cpp_runtime_helper_023445d0(&"LeftPage");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0f3;
      il2cpp_runtime_helper_023445d0(&"Filter");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e0ff;
      il2cpp_runtime_helper_023445d0(&"Create");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e10b;
      il2cpp_runtime_helper_023445d0(&"Back");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e117;
      il2cpp_runtime_helper_023445d0(&"Duel");
      *(undefined8 *)(puVar15 + -0x20) = 0x440e123;
      il2cpp_runtime_helper_023445d0(&"Refresh");
      g_data_057ae5dc = '\x01';
    }
    vtableDispatch = (__this->klass->vtable)._26_HideAllPopups.methodPtr;
    *(undefined8 *)(puVar15 + -0x20) = 0x440e13d;
    (*vtableDispatch)(__this);
    *(undefined8 *)(puVar15 + -0x20) = 0x440e147;
    uVar7 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)s,(MethodInfo *)0x0);
    if (uVar7 < 0x990de47e) {
      if (uVar7 == 0x990de47d) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3c3;
        bVar8 = System_String__op_Equality
                          ((System_String_o *)s,(System_String_o *)"Create",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e3d5;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e3ed;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            __this_00 = (UI_CreateGamePopup_o *)plVar3[0x13];
            if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
            if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
              UI_CreateGamePopup__Show(__this_00,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0440e525;
        }
      }
      else {
        if (uVar7 == 0x815aad4) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e393;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Refresh",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          UI_MultiplayerRoomListPopup__RefreshList(__this,1,method_00);
          return;
        }
        if (uVar7 != 0x479b753b) {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e182;
        bVar8 = System_String__op_Equality((System_String_o *)s,"Duel",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        *(undefined8 *)(puVar15 + -0x20) = 0x440e194;
        UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        s = &TypeInfo_UIManager;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e1ac;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (plVar3 != (long *)0x0) {
          bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_MainMenu)) {
            pUVar17 = (UnityEngine_UI_Text_o *)plVar3[0x19];
            if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_0440e52a;
            bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
            if ((bVar1 <= (pUVar17->klass->_2).naturalAligment) &&
               ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DuelPopup)) {
              pUVar9 = pUVar17->klass;
              bVar1 = (TypeInfo_DuelPopup->_2).naturalAligment;
              if ((bVar1 <= (pUVar9->_2).naturalAligment) &&
                 (ppIVar14 = (pUVar9->_2).typeHierarchy, ppIVar14[(ulong)bVar1 - 1] == TypeInfo_DuelPopup))
              goto label_0440e368;
            }
          }
label_0440e525:
          s = &TypeInfo_UIManager;
          *(undefined8 *)(puVar15 + -0x20) = 0x440e52a;
          il2cpp_runtime_helper_022b2fd0();
        }
      }
label_0440e52a:
      *(undefined8 *)(puVar15 + -0x20) = 0x440e52f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (0xc2954bc2 < uVar7) {
        if (uVar7 == 0xcad5d456) {
          *(undefined8 *)(puVar15 + -0x20) = 0x440e4d6;
          bVar8 = System_String__op_Equality
                            ((System_String_o *)s,(System_String_o *)"RightPage",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pSVar11 = (__this->fields)._currentPage;
          if (pSVar11 != (Settings_IntSetting_o *)0x0) {
            iVar2 = (pSVar11->fields)._value;
            iVar16 = iVar2 + 1;
            if ((__this->fields)._lastPageCount + -1 <= iVar2) {
              iVar16 = 0;
            }
            goto label_0440e4fd;
          }
        }
        else {
          if (uVar7 != 0xf4a9c097) {
            return;
          }
          *(undefined8 *)(puVar15 + -0x20) = 0x440e34d;
          bVar8 = System_String__op_Equality((System_String_o *)s,"Filter",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pUVar17 = (UnityEngine_UI_Text_o *)(__this->fields)._multiplayerFilterPopup;
          ppIVar14 = extraout_RDX_00;
joined_r0x0440e35f:
          if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar9 = pUVar17->klass;
label_0440e368:
            vtableDispatch = (pUVar9->vtable)._21_unknown.methodPtr;
            (*vtableDispatch)
                      (pUVar17,(pUVar9->vtable)._21_unknown.method,ppIVar14,vtableDispatch);
            return;
          }
        }
        goto label_0440e52a;
      }
      if (uVar7 == 0xb60645db) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e49f;
        bVar8 = System_String__op_Equality((System_String_o *)s,"LeftPage",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        pSVar11 = (__this->fields)._currentPage;
        if (pSVar11 != (Settings_IntSetting_o *)0x0) {
          iVar16 = (pSVar11->fields)._value;
          if (iVar16 < 1) {
            iVar16 = (__this->fields)._lastPageCount;
          }
          iVar16 = iVar16 + -1;
label_0440e4fd:
          *(undefined8 *)(puVar15 + -0x20) = 0x440e50c;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar11,iVar16,MethodInfo_Void_set_Value);
          UI_MultiplayerRoomListPopup__RefreshList(__this,0,method_01);
          return;
        }
        goto label_0440e52a;
      }
      if (uVar7 != 0xc2954bc2) {
        return;
      }
      *(undefined8 *)(puVar15 + -0x20) = 0x440e299;
      bVar8 = System_String__op_Equality((System_String_o *)s,"Back",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)(puVar15 + -0x20) = 0x440e2b9;
        il2cpp_runtime_helper_02337ed0();
      }
      s = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((UI_TooltipPopup_o *)s == (UI_TooltipPopup_o *)0x0) goto label_0440e52a;
      pUVar4 = ((UI_TooltipPopup_o *)s)->klass;
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        pMVar5 = (pUVar4->vtable)._6_get_Height.method;
        vtableDispatch = (pUVar4->vtable)._6_get_Height.methodPtr;
        *(undefined8 *)(puVar15 + -0x20) = 0x440e312;
        (*vtableDispatch)(s,pMVar5);
        pUVar17 = (((UI_TooltipPopup_o *)s)->fields)._label;
        ppIVar14 = extraout_RDX;
        goto joined_r0x0440e35f;
      }
    }
    *(undefined8 *)(puVar15 + -0x20) = 0x440e537;
    unaff_R14 = (UI_TooltipPopup_o *)s;
    il2cpp_runtime_helper_022b2fd0();
    *(undefined8 **)(puVar15 + -0x20) = unaff_R15;
    *(UI_MultiplayerRoomListPopup_o **)(puVar15 + -0x28) = __this;
    *(long **)(puVar15 + -0x30) = s;
    if (g_data_057ae5dd == '\0') {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e55d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e569;
      il2cpp_runtime_helper_023445d0(&TypeInfo_char);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e575;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e581;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e58d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e599;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)(puVar15 + -0x38) = 0x440e5a5;
      il2cpp_runtime_helper_023445d0(&"`");
      g_data_057ae5dd = '\x01';
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5bb;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5d0;
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
    unaff_R14[1].fields.m_CachedPtr = (intptr_t)__this_01;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e5e6;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields,__this_01);
    defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e60d;
    __this_02 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e622;
    Settings_StringSetting___ctor_40f74f0
              ((Settings_StringSetting_o *)__this_02,defaultValue,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.m_CancellationTokenSource = __this_02;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e638;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.m_CancellationTokenSource,__this_02);
    unaff_R15 = &TypeInfo_BoolSetting;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e647;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e659;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.SinglePanel = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e66f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.SinglePanel,pSVar10);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e677;
    pSVar10 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e689;
    Settings_BoolSetting___ctor_40f3960(pSVar10,1,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelLeft = (UnityEngine_Transform_o *)pSVar10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e69f;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelLeft);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6ae;
    pSVar11 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6c5;
    Settings_IntSetting___ctor_40f39a0(pSVar11,0,0,0x7fffffff,(MethodInfo *)0x0);
    unaff_R14[1].fields.DoublePanelRight = (UnityEngine_Transform_o *)pSVar11;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e6db;
    il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields.DoublePanelRight,pSVar11);
    unaff_R14[1].fields._popups = (System_Collections_Generic_List_BasePopup__o *)0x40a0000040a00000;
    *(undefined4 *)&unaff_R14[1].fields._currentCategoryPanel = 10;
    *(undefined8 *)(puVar15 + -0x38) = 0x440e70b;
    pSVar12 = (System_Collections_Generic_Dictionary_string__Type__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_char);
    __this = "`";
    if ("`" == (UI_MultiplayerRoomListPopup_o *)0x0) {
label_0440e75a:
      *(undefined8 *)(puVar15 + -0x38) = 0x440e75f;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      *(undefined8 *)(puVar15 + -0x38) = 0x440e726;
      uVar6 = System_String__get_Chars((System_String_o *)"`",0,(MethodInfo *)0x0);
      if (pSVar12 == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) goto label_0440e75a;
      if (*(int *)&(pSVar12->fields)._entries != 0) {
        *(uint16_t *)&(pSVar12->fields)._count = uVar6;
        unaff_R14[1].fields._categoryPanelTypes = pSVar12;
        *(undefined8 *)(puVar15 + -0x38) = 0x440e74b;
        il2cpp_runtime_helper_022b4080(&unaff_R14[1].fields._categoryPanelTypes);
        UI_BasePopup___ctor(unaff_R14,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)(puVar15 + -0x38) = 0x440e764;
    il2cpp_runtime_helper_022b2ca0();
    *(System_Collections_Generic_Dictionary_string__Type__o **)(puVar15 + -0x38) = pSVar12;
    if (g_data_057ae5de == '\0') {
      *(undefined8 *)(puVar15 + -0x40) = 0x440e789;
      il2cpp_runtime_helper_023445d0(&"Create");
      g_data_057ae5de = '\x01';
    }
    ppUVar13 = &"Create";
    unaff_RBX = *(undefined8 *)(puVar15 + -0x38);
    puVar15 = puVar15 + -0x30;
    s = (long *)"Create";
  } while( true );
}



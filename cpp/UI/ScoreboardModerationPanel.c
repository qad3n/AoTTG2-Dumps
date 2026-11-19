// Type: UI.ScoreboardModerationPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ScoreboardModerationPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.ScoreboardModerationPanel.<>c$$.cctor
// il2cpp: void UI_ScoreboardModerationPanel___c___cctor (const MethodInfo* method);
// 0x5d47520

void UI_ScoreboardModerationPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547eaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c);
    Il2CppMethodInitialized_07547eaf = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_ScoreboardModerationPanel_c->static_fields->__9 = (UI_ScoreboardModerationPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ScoreboardModerationPanel_c->static_fields->__9);
  return;
}


// UI.ScoreboardModerationPanel.<>c$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c___ctor (UI_ScoreboardModerationPanel___c_o* __this, const MethodInfo* method);
// 0x5d47590

void UI_ScoreboardModerationPanel___c___ctor(UI_ScoreboardModerationPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c$$<BuildPlayerListFooter>b__59_0
// il2cpp: void UI_ScoreboardModerationPanel___c___BuildPlayerListFooter_b__59_0 (UI_ScoreboardModerationPanel___c_o* __this, const MethodInfo* method);
// 0x5d475a0

void UI_ScoreboardModerationPanel___c___BuildPlayerListFooter_b__59_0
               (UI_ScoreboardModerationPanel___c_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547eb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eb0 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    Anticheat_ModeratorManager__RequestPlayerList((System_Action_string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  Anticheat_ModeratorManager__RequestPlayerList((System_Action_string__o *)0x0,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c$$<BuildPastPlayerFooter>b__60_0
// il2cpp: void UI_ScoreboardModerationPanel___c___BuildPastPlayerFooter_b__60_0 (UI_ScoreboardModerationPanel___c_o* __this, const MethodInfo* method);
// 0x5d47600

void UI_ScoreboardModerationPanel___c___BuildPastPlayerFooter_b__60_0
               (UI_ScoreboardModerationPanel___c_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547eb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eb1 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    Anticheat_ModeratorManager__RequestPlayerList((System_Action_string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  Anticheat_ModeratorManager__RequestPlayerList((System_Action_string__o *)0x0,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass52_0$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass52_0___ctor (UI_ScoreboardModerationPanel___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x5d41590

void UI_ScoreboardModerationPanel___c__DisplayClass52_0___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass52_0$$<AddTabButton>b__0
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass52_0___AddTabButton_b__0 (UI_ScoreboardModerationPanel___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x5d47660
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4766d: mov esi, dword ptr [rax + 0x18]
// asm:   0x5d47670: pop rax
// asm:   0x5d47671: jmp 0x5d40e80  ; UI_ScoreboardModerationPanel__SetActiveTab()

void UI_ScoreboardModerationPanel___c__DisplayClass52_0___AddTabButton_b__0
               (UI_ScoreboardModerationPanel___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  int32_t key;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *__this_01;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *__this_02;
  UI_ScoreboardModerationPanel_o *__this_03;
  bool bVar1;
  MethodInfo *method_00;
  Il2CppObject **ppIVar2;
  MethodInfo *method_01;
  UI_ScoreboardModerationPanel_o *__this_04;
  Il2CppObject *pIStack_68;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;
  
  __this_03 = (__this->fields).__4__this;
  if (__this_03 == (UI_ScoreboardModerationPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  key = (__this->fields).tab;
  if (Il2CppMethodInitialized_07547e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_ScoreboardModerationPanel_Tab_Button_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_ScoreboardModerationPanel_Tab_Button_get_Value
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547e8f = '\x01';
  }
  SStack_58.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_58.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_58.fields._version = 0;
  SStack_58.fields._index = 0;
  SStack_58.fields._getEnumeratorRetType = 0;
  SStack_58.fields._36_4_ = 0;
  (__this_03->fields)._activeTab = key;
  (__this_03->fields)._selectedPlayer = (Anticheat_PlayerEntry_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields)._selectedPlayer);
  (__this_03->fields)._selectedRoomBan = (Anticheat_RoomBanEntry_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields)._selectedRoomBan);
  (__this_03->fields)._selectedRegionBan = (Anticheat_RegionBanEntry_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields)._selectedRegionBan);
  __this_00 = (__this_03->fields)._searchSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    if (Il2CppMethodInitialized_07547e91 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
                );
      Il2CppMethodInitialized_07547e91 = '\x01';
    }
    ppIVar2 = &pIStack_68;
    pIStack_68 = (Il2CppObject *)0x0;
    __this_01 = (__this_03->fields)._searchTerms;
    if (__this_01 == (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *)0x0)
    goto label_05d410d7;
    bVar1 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,key,&pIStack_68,
                       (MethodInfo_4A56D80 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
                      );
    if (!bVar1) {
      ppIVar2 = *(Il2CppObject ***)(g_data_07556758 + 0xb8);
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,*ppIVar2,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  __this_02 = (__this_03->fields)._tabButtons;
  if (__this_02 != (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *)0x0) {
    System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator
              (&SStack_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
               (MethodInfo_4A55470 *)
               MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_GetEnumerator
              );
    pIStack_68 = (Il2CppObject *)0x0;
    pSStack_60 = &SStack_58;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext
                        (&SStack_58,
                         (MethodInfo_4CDB9A0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_MoveNext
                        );
      if (!bVar1) {
        method_01 = 
        MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_Dispose
        ;
        System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose
                  (&SStack_58,
                   (MethodInfo_4CDBAC0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_Dispose
                  );
        UI_ScoreboardModerationPanel__RefreshActiveTab(__this_03,method_01);
        if (Il2CppMethodInitialized_07547e9e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_07547e9e = '\x01';
        }
        __this_04 = (UI_ScoreboardModerationPanel_o *)(__this_03->fields)._detailContainer;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          UI_ScoreboardModerationPanel__ClearContainer
                    (__this_04,(__this_03->fields)._detailContainer,method_00);
        }
        return;
      }
      if ((UnityEngine_UI_Selectable_o *)SStack_58.fields._current.fields.value ==
          (UnityEngine_UI_Selectable_o *)0x0) break;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)SStack_58.fields._current.fields.value,
                 (int)SStack_58.fields._current.fields.key != key,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
label_05d410d7:
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass58_0$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass58_0___ctor (UI_ScoreboardModerationPanel___c__DisplayClass58_0_o* __this, const MethodInfo* method);
// 0x5d43750

void UI_ScoreboardModerationPanel___c__DisplayClass58_0___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass58_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass58_0$$<PopulatePlayerList>b__0
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass58_0___PopulatePlayerList_b__0 (UI_ScoreboardModerationPanel___c__DisplayClass58_0_o* __this, const MethodInfo* method);
// 0x5d47680
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4768d: mov rsi, qword ptr [rax + 0x10]
// asm:   0x5d47691: mov edx, 1
// asm:   0x5d47696: pop rax
// asm:   0x5d47697: jmp 0x5d440e0  ; UI_ScoreboardModerationPanel__SelectPlayer()

void UI_ScoreboardModerationPanel___c__DisplayClass58_0___PopulatePlayerList_b__0
               (UI_ScoreboardModerationPanel___c__DisplayClass58_0_o *__this,MethodInfo *method)

{
  int32_t *__this_00;
  UI_ScoreboardModerationPanel_o *__this_01;
  Anticheat_PlayerEntry_o *player;
  bool bVar1;
  Il2CppObject *__this_02;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_03;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  System_String_o **ppSVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  char cVar8;
  UI_ScoreboardModerationPanel_o *pUVar9;
  MethodInfo *pMVar10;
  int32_t iVar11;
  
  __this_01 = (__this->fields).__4__this;
  if (__this_01 == (UI_ScoreboardModerationPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  player = (__this->fields).player;
  if (Il2CppMethodInitialized_07547e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__7);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__10);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__11);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__12);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__13);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionIpBan");
    il2cpp_codegen_initialize_runtime_metadata(&"RoomIpBan");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"SessionId");
    il2cpp_codegen_initialize_runtime_metadata(&"IpAddress");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionBan");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\x94");
    il2cpp_codegen_initialize_runtime_metadata(&"ViewProps");
    il2cpp_codegen_initialize_runtime_metadata(&"RoomBan");
    Il2CppMethodInitialized_07547e9f = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (Il2CppObject *)0x0) goto label_05d45059;
  __this_02[1].monitor = __this_01;
  Il2CppCodeGenWriteBarrier(&__this_02[1].monitor);
  (__this_01->fields)._selectedPlayer = player;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._selectedPlayer);
  (__this_01->fields)._selectedPlayerIsActive = true;
  if (Il2CppMethodInitialized_07547e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e9e = '\x01';
  }
  pUVar9 = (UI_ScoreboardModerationPanel_o *)(__this_01->fields)._detailContainer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    UI_ScoreboardModerationPanel__ClearContainer(pUVar9,(__this_01->fields)._detailContainer,method_00);
  }
  pSVar2 = (*(__this_01->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_01,(__this_01->klass->vtable)._4_get_ThemePanel.method);
  __this_03 = (UI_ElementStyle_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_03,0x18,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  if (player == (Anticheat_PlayerEntry_o *)0x0) goto label_05d45059;
  __this_00 = &(player->fields).ActorNumber;
  pUVar9 = (UI_ScoreboardModerationPanel_o *)__this_00;
  pSVar2 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
  pSVar3 = UI_ScoreboardModerationPanel__GetPlayerDisplayName(pUVar9,player,method_01);
  pSVar2 = System_String__Concat_5302810
                     ("#",pSVar2," ",pSVar3,(MethodInfo *)0x0);
  pUVar4 = UI_ScoreboardModerationPanel__CreateDetailsBox
                     (__this_01,(__this_01->fields)._detailContainer,method_02);
  UI_ElementFactory__CreateDefaultLabel(pUVar4,__this_03,pSVar2,1,3,(MethodInfo *)0x0);
  pSVar2 = "SessionId";
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar10 = (MethodInfo *)0x0;
  pUVar9 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
  pSVar3 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar2,"",
                      "",(MethodInfo *)0x0);
  pSVar2 = (player->fields).SessionId;
  if (pSVar2 == (System_String_o *)0x0) goto label_05d45059;
  if ((pSVar2->fields)._stringLength < 1) {
    ppSVar7 = &"\xe2\x80\x94";
  }
  else {
    ppSVar7 = &(player->fields).SessionId;
  }
  UI_ScoreboardModerationPanel__AddDetailRow
            (pUVar9,pUVar4,__this_03,pSVar3,((Anticheat_PlayerEntry_Fields *)ppSVar7)->SessionId,pMVar10);
  pSVar2 = "IpAddress";
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar10 = (MethodInfo *)0x0;
  pUVar9 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
  pSVar3 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar2,"",
                      "",(MethodInfo *)0x0);
  pSVar2 = (player->fields).IPAddress;
  if (pSVar2 == (System_String_o *)0x0) goto label_05d45059;
  if ((pSVar2->fields)._stringLength < 1) {
    ppSVar7 = &"\xe2\x80\x94";
  }
  else {
    ppSVar7 = &(player->fields).IPAddress;
  }
  UI_ScoreboardModerationPanel__AddDetailRow(pUVar9,pUVar4,__this_03,pSVar3,*ppSVar7,pMVar10);
  *(int32_t *)&__this_02[1].klass = *__this_00;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07547eed != '\0') goto label_05d4462d;
label_05d44bdb:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eed = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d4463e;
label_05d44bff:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    cVar8 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
    if (Il2CppMethodInitialized_07547eee != '\0') goto label_05d44656;
label_05d44c20:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eee = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d44663;
label_05d44c40:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    iVar11 = TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_07547eed == '\0') goto label_05d44bdb;
label_05d4462d:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d44bff;
label_05d4463e:
    cVar8 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
    if (Il2CppMethodInitialized_07547eee == '\0') goto label_05d44c20;
label_05d44656:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d44c40;
label_05d44663:
    iVar11 = TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
  }
  pUVar5 = UI_ElementFactory__CreateHorizontalGroup
                     ((__this_01->fields)._detailContainer,8.0,3,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    pSVar2 = "Kick";
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar2,"",
                        "",(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar6,__this_02,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__0,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(pUVar4,__this_03,pSVar2,0.0,0.0,pUVar6,(MethodInfo *)0x0);
    pSVar2 = "RoomBan";
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar2,"",
                        "",(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar6,__this_02,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__1,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(pUVar4,__this_03,pSVar2,0.0,0.0,pUVar6,(MethodInfo *)0x0);
    pSVar2 = "RoomIpBan";
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar2,"",
                        "",(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar6,__this_02,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__2,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(pUVar4,__this_03,pSVar2,0.0,0.0,pUVar6,(MethodInfo *)0x0);
    pSVar2 = "ViewProps";
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar2,"",
                        "",(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar6,__this_02,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__3,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(pUVar4,__this_03,pSVar2,0.0,0.0,pUVar6,(MethodInfo *)0x0);
    if ((cVar8 == '\0') || (iVar11 < 1)) {
      return;
    }
    pUVar5 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this_01->fields)._detailContainer,8.0,3,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      pSVar2 = "RegionBan";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar2,"",
                          "",(MethodInfo *)0x0);
      pUVar6 = (UnityEngine_Events_UnityAction_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar6,__this_02,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__6,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar4,__this_03,pSVar2,0.0,0.0,pUVar6,(MethodInfo *)0x0);
      pSVar2 = "RegionIpBan";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar2,"",
                          "",(MethodInfo *)0x0);
      pUVar6 = (UnityEngine_Events_UnityAction_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar6,__this_02,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__7,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar4,__this_03,pSVar2,0.0,0.0,pUVar6,(MethodInfo *)0x0);
      return;
    }
  }
label_05d45059:
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass58_1$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass58_1___ctor (UI_ScoreboardModerationPanel___c__DisplayClass58_1_o* __this, const MethodInfo* method);
// 0x5d43b60

void UI_ScoreboardModerationPanel___c__DisplayClass58_1___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass58_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass58_1$$<PopulatePlayerList>b__1
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass58_1___PopulatePlayerList_b__1 (UI_ScoreboardModerationPanel___c__DisplayClass58_1_o* __this, const MethodInfo* method);
// 0x5d476b0

void UI_ScoreboardModerationPanel___c__DisplayClass58_1___PopulatePlayerList_b__1
               (UI_ScoreboardModerationPanel___c__DisplayClass58_1_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *__this_00;
  MethodInfo *in_RCX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ScoreboardModerationPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ScoreboardModerationPanel__SelectPlayer(__this_00,(__this->fields).capturedPlayer,false,in_RCX);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass61_0$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass61_0___ctor (UI_ScoreboardModerationPanel___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5d43c00

void UI_ScoreboardModerationPanel___c__DisplayClass61_0___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass61_0$$<PopulateRoomBanList>b__0
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass61_0___PopulateRoomBanList_b__0 (UI_ScoreboardModerationPanel___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5d476d0

void UI_ScoreboardModerationPanel___c__DisplayClass61_0___PopulateRoomBanList_b__0
               (UI_ScoreboardModerationPanel___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ScoreboardModerationPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ScoreboardModerationPanel__SelectRoomBan(__this_00,(__this->fields).captured,in_RDX);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass63_0$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass63_0___ctor (UI_ScoreboardModerationPanel___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x5d43ed0

void UI_ScoreboardModerationPanel___c__DisplayClass63_0___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass63_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass63_0$$<PopulateRegionBanList>b__0
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass63_0___PopulateRegionBanList_b__0 (UI_ScoreboardModerationPanel___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x5d476f0

void UI_ScoreboardModerationPanel___c__DisplayClass63_0___PopulateRegionBanList_b__0
               (UI_ScoreboardModerationPanel___c__DisplayClass63_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ScoreboardModerationPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ScoreboardModerationPanel__SelectRegionBan(__this_00,(__this->fields).captured,in_RDX);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___ctor (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d45060

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__0
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__0 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d47710

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__0
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  int32_t actorNumber;
  
  if (Il2CppMethodInitialized_07547eb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eb2 = '\x01';
  }
  actorNumber = (__this->fields).capturedActor;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__KickPlayer(actorNumber,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__1
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__1 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d47760

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__1
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *pUVar1;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar2;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__4);
    il2cpp_codegen_initialize_runtime_metadata(&"RoomBan");
    Il2CppMethodInitialized_07547eb3 = '\x01';
  }
  pSVar2 = "RoomBan";
  pUVar1 = (__this->fields).__4__this;
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  method_00 = (MethodInfo *)"";
  pSVar2 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar2,"",
                      "",(MethodInfo *)0x0);
  __this_01 = (__this->fields).__9__4;
  if (__this_01 == (System_Action_string__o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    method_00 = (MethodInfo *)0x0;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__4,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__4 = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4);
  }
  if ((pUVar1 == (UI_ScoreboardModerationPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._reasonPopup, __this_00 == (UI_ModerationReasonPopup_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_ModerationReasonPopup__Show(__this_00,pSVar2,__this_01,method_00);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__4
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__4 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d478b0

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__4
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  int32_t actorNumber;
  
  if (Il2CppMethodInitialized_07547eb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eb4 = '\x01';
  }
  actorNumber = (__this->fields).capturedActor;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RoomBan
            (actorNumber,false,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__2
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__2 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d47910

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__2
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *pUVar1;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar2;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547eb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__5);
    il2cpp_codegen_initialize_runtime_metadata(&"RoomIpBan");
    Il2CppMethodInitialized_07547eb5 = '\x01';
  }
  pSVar2 = "RoomIpBan";
  pUVar1 = (__this->fields).__4__this;
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  method_00 = (MethodInfo *)"";
  pSVar2 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar2,"",
                      "",(MethodInfo *)0x0);
  __this_01 = (__this->fields).__9__5;
  if (__this_01 == (System_Action_string__o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    method_00 = (MethodInfo *)0x0;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__5,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__5 = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5);
  }
  if ((pUVar1 == (UI_ScoreboardModerationPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._reasonPopup, __this_00 == (UI_ModerationReasonPopup_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_ModerationReasonPopup__Show(__this_00,pSVar2,__this_01,method_00);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__5
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__5 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d47a60

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__5
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  int32_t actorNumber;
  
  if (Il2CppMethodInitialized_07547eb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eb6 = '\x01';
  }
  actorNumber = (__this->fields).capturedActor;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RoomBan
            (actorNumber,true,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__3
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__3 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d47ac0

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__3
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ScoreboardModerationPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ScoreboardModerationPanel__ShowPlayerProps(__this_00,(__this->fields).capturedActor,in_RDX);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__6
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__6 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d47ae0

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__6
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *pUVar1;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar2;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__8);
    il2cpp_codegen_initialize_runtime_metadata(&"RegionBan");
    Il2CppMethodInitialized_07547eb7 = '\x01';
  }
  pSVar2 = "RegionBan";
  pUVar1 = (__this->fields).__4__this;
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  method_00 = (MethodInfo *)"";
  pSVar2 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar2,"",
                      "",(MethodInfo *)0x0);
  __this_01 = (__this->fields).__9__8;
  if (__this_01 == (System_Action_string__o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    method_00 = (MethodInfo *)0x0;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__8,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__8 = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__8);
  }
  if ((pUVar1 == (UI_ScoreboardModerationPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._reasonPopup, __this_00 == (UI_ModerationReasonPopup_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_ModerationReasonPopup__Show(__this_00,pSVar2,__this_01,method_00);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__8
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__8 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d47c30

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__8
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  int32_t actorNumber;
  
  if (Il2CppMethodInitialized_07547eb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eb8 = '\x01';
  }
  actorNumber = (__this->fields).capturedActor;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RegionBan
            (actorNumber,false,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__7
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__7 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d47c90

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__7
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *pUVar1;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar2;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547eb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__9);
    il2cpp_codegen_initialize_runtime_metadata(&"RegionIpBan");
    Il2CppMethodInitialized_07547eb9 = '\x01';
  }
  pSVar2 = "RegionIpBan";
  pUVar1 = (__this->fields).__4__this;
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  method_00 = (MethodInfo *)"";
  pSVar2 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar2,"",
                      "",(MethodInfo *)0x0);
  __this_01 = (__this->fields).__9__9;
  if (__this_01 == (System_Action_string__o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    method_00 = (MethodInfo *)0x0;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__9,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__9 = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__9);
  }
  if ((pUVar1 == (UI_ScoreboardModerationPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._reasonPopup, __this_00 == (UI_ModerationReasonPopup_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_ModerationReasonPopup__Show(__this_00,pSVar2,__this_01,method_00);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__9
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__9 (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d47de0

void UI_ScoreboardModerationPanel___c__DisplayClass70_0___SelectPlayer_b__9
               (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  int32_t actorNumber;
  
  if (Il2CppMethodInitialized_07547eba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eba = '\x01';
  }
  actorNumber = (__this->fields).capturedActor;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RegionBan
            (actorNumber,true,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_1___ctor (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o* __this, const MethodInfo* method);
// 0x5d45410

void UI_ScoreboardModerationPanel___c__DisplayClass70_1___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__10
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__10 (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o* __this, const MethodInfo* method);
// 0x5d47e40

void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__10
               (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *pUVar1;
  UI_ScoreboardModerationPanel_o *pUVar2;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar3;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ebb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__14);
    il2cpp_codegen_initialize_runtime_metadata(&"RoomBan");
    Il2CppMethodInitialized_07547ebb = '\x01';
  }
  pSVar3 = "RoomBan";
  pUVar1 = (__this->fields).CS___8__locals1;
  if (pUVar1 != (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *)0x0) {
    pUVar2 = (pUVar1->fields).__4__this;
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    method_00 = (MethodInfo *)"";
    pSVar3 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar3,"",
                        "",(MethodInfo *)0x0);
    __this_01 = (__this->fields).__9__14;
    if (__this_01 == (System_Action_string__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      method_00 = (MethodInfo *)0x0;
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__14,
                 (MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__14 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__14);
    }
    if ((pUVar2 != (UI_ScoreboardModerationPanel_o *)0x0) &&
       (__this_00 = (pUVar2->fields)._reasonPopup, __this_00 != (UI_ModerationReasonPopup_o *)0x0)) {
      UI_ModerationReasonPopup__Show(__this_00,pSVar3,__this_01,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__14
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__14 (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d47fa0

void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__14
               (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  Anticheat_PlayerEntry_o *player;
  
  if (Il2CppMethodInitialized_07547ebc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547ebc = '\x01';
  }
  player = (__this->fields).capturedPlayer;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RoomBanPlayerEntry
            (player,false,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__11
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__11 (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o* __this, const MethodInfo* method);
// 0x5d48000

void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__11
               (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *pUVar1;
  UI_ScoreboardModerationPanel_o *pUVar2;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar3;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ebd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__15);
    il2cpp_codegen_initialize_runtime_metadata(&"RoomIpBan");
    Il2CppMethodInitialized_07547ebd = '\x01';
  }
  pSVar3 = "RoomIpBan";
  pUVar1 = (__this->fields).CS___8__locals1;
  if (pUVar1 != (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *)0x0) {
    pUVar2 = (pUVar1->fields).__4__this;
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    method_00 = (MethodInfo *)"";
    pSVar3 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar3,"",
                        "",(MethodInfo *)0x0);
    __this_01 = (__this->fields).__9__15;
    if (__this_01 == (System_Action_string__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      method_00 = (MethodInfo *)0x0;
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__15,
                 (MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__15 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__15);
    }
    if ((pUVar2 != (UI_ScoreboardModerationPanel_o *)0x0) &&
       (__this_00 = (pUVar2->fields)._reasonPopup, __this_00 != (UI_ModerationReasonPopup_o *)0x0)) {
      UI_ModerationReasonPopup__Show(__this_00,pSVar3,__this_01,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__15
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__15 (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d48160

void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__15
               (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  Anticheat_PlayerEntry_o *player;
  
  if (Il2CppMethodInitialized_07547ebe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547ebe = '\x01';
  }
  player = (__this->fields).capturedPlayer;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RoomBanPlayerEntry
            (player,true,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__12
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__12 (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o* __this, const MethodInfo* method);
// 0x5d481c0

void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__12
               (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *pUVar1;
  UI_ScoreboardModerationPanel_o *pUVar2;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar3;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ebf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__16);
    il2cpp_codegen_initialize_runtime_metadata(&"RegionBan");
    Il2CppMethodInitialized_07547ebf = '\x01';
  }
  pSVar3 = "RegionBan";
  pUVar1 = (__this->fields).CS___8__locals1;
  if (pUVar1 != (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *)0x0) {
    pUVar2 = (pUVar1->fields).__4__this;
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    method_00 = (MethodInfo *)"";
    pSVar3 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar3,"",
                        "",(MethodInfo *)0x0);
    __this_01 = (__this->fields).__9__16;
    if (__this_01 == (System_Action_string__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      method_00 = (MethodInfo *)0x0;
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__16,
                 (MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__16 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__16);
    }
    if ((pUVar2 != (UI_ScoreboardModerationPanel_o *)0x0) &&
       (__this_00 = (pUVar2->fields)._reasonPopup, __this_00 != (UI_ModerationReasonPopup_o *)0x0)) {
      UI_ModerationReasonPopup__Show(__this_00,pSVar3,__this_01,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__16
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__16 (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d48320

void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__16
               (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  Anticheat_PlayerEntry_o *player;
  
  if (Il2CppMethodInitialized_07547ec0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547ec0 = '\x01';
  }
  player = (__this->fields).capturedPlayer;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RegionBanPlayerEntry
            (player,false,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__13
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__13 (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o* __this, const MethodInfo* method);
// 0x5d48380

void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__13
               (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *pUVar1;
  UI_ScoreboardModerationPanel_o *pUVar2;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar3;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ec1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__17);
    il2cpp_codegen_initialize_runtime_metadata(&"RegionIpBan");
    Il2CppMethodInitialized_07547ec1 = '\x01';
  }
  pSVar3 = "RegionIpBan";
  pUVar1 = (__this->fields).CS___8__locals1;
  if (pUVar1 != (UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *)0x0) {
    pUVar2 = (pUVar1->fields).__4__this;
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    method_00 = (MethodInfo *)"";
    pSVar3 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar3,"",
                        "",(MethodInfo *)0x0);
    __this_01 = (__this->fields).__9__17;
    if (__this_01 == (System_Action_string__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      method_00 = (MethodInfo *)0x0;
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__17,
                 (MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__17 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__17);
    }
    if ((pUVar2 != (UI_ScoreboardModerationPanel_o *)0x0) &&
       (__this_00 = (pUVar2->fields)._reasonPopup, __this_00 != (UI_ModerationReasonPopup_o *)0x0)) {
      UI_ModerationReasonPopup__Show(__this_00,pSVar3,__this_01,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__17
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__17 (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d484e0

void UI_ScoreboardModerationPanel___c__DisplayClass70_1___SelectPlayer_b__17
               (UI_ScoreboardModerationPanel___c__DisplayClass70_1_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  Anticheat_PlayerEntry_o *player;
  
  if (Il2CppMethodInitialized_07547ec2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547ec2 = '\x01';
  }
  player = (__this->fields).capturedPlayer;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RegionBanPlayerEntry
            (player,true,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass71_0$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass71_0___ctor (UI_ScoreboardModerationPanel___c__DisplayClass71_0_o* __this, const MethodInfo* method);
// 0x5d459b0

void UI_ScoreboardModerationPanel___c__DisplayClass71_0___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass71_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass71_0$$<SelectRoomBan>b__0
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass71_0___SelectRoomBan_b__0 (UI_ScoreboardModerationPanel___c__DisplayClass71_0_o* __this, const MethodInfo* method);
// 0x5d48540

void UI_ScoreboardModerationPanel___c__DisplayClass71_0___SelectRoomBan_b__0
               (UI_ScoreboardModerationPanel___c__DisplayClass71_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *pUVar1;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar2;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ec3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass71_0_SelectRoomBan_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&"RoomUnban");
    Il2CppMethodInitialized_07547ec3 = '\x01';
  }
  pSVar2 = "RoomUnban";
  pUVar1 = (__this->fields).__4__this;
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  method_00 = (MethodInfo *)"";
  pSVar2 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar2,"",
                      "",(MethodInfo *)0x0);
  __this_01 = (__this->fields).__9__1;
  if (__this_01 == (System_Action_string__o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    method_00 = (MethodInfo *)0x0;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass71_0_SelectRoomBan_b__1,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  if ((pUVar1 == (UI_ScoreboardModerationPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._reasonPopup, __this_00 == (UI_ModerationReasonPopup_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_ModerationReasonPopup__Show(__this_00,pSVar2,__this_01,method_00);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass71_0$$<SelectRoomBan>b__1
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass71_0___SelectRoomBan_b__1 (UI_ScoreboardModerationPanel___c__DisplayClass71_0_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d48690

void UI_ScoreboardModerationPanel___c__DisplayClass71_0___SelectRoomBan_b__1
               (UI_ScoreboardModerationPanel___c__DisplayClass71_0_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  Anticheat_RoomBanEntry_o *banEntry;
  
  if (Il2CppMethodInitialized_07547ec4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547ec4 = '\x01';
  }
  banEntry = (__this->fields).captured;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RoomUnban(banEntry,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass72_0$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass72_0___ctor (UI_ScoreboardModerationPanel___c__DisplayClass72_0_o* __this, const MethodInfo* method);
// 0x5d46010

void UI_ScoreboardModerationPanel___c__DisplayClass72_0___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass72_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass72_0$$<SelectRegionBan>b__0
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass72_0___SelectRegionBan_b__0 (UI_ScoreboardModerationPanel___c__DisplayClass72_0_o* __this, const MethodInfo* method);
// 0x5d486f0

void UI_ScoreboardModerationPanel___c__DisplayClass72_0___SelectRegionBan_b__0
               (UI_ScoreboardModerationPanel___c__DisplayClass72_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *pUVar1;
  UI_ModerationReasonPopup_o *__this_00;
  System_String_o *pSVar2;
  System_Action_string__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ec5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass72_0_SelectRegionBan_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&"RegionUnban");
    Il2CppMethodInitialized_07547ec5 = '\x01';
  }
  pSVar2 = "RegionUnban";
  pUVar1 = (__this->fields).__4__this;
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  method_00 = (MethodInfo *)"";
  pSVar2 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar2,"",
                      "",(MethodInfo *)0x0);
  __this_01 = (__this->fields).__9__1;
  if (__this_01 == (System_Action_string__o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    method_00 = (MethodInfo *)0x0;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass72_0_SelectRegionBan_b__1,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  if ((pUVar1 == (UI_ScoreboardModerationPanel_o *)0x0) ||
     (__this_00 = (pUVar1->fields)._reasonPopup, __this_00 == (UI_ModerationReasonPopup_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_ModerationReasonPopup__Show(__this_00,pSVar2,__this_01,method_00);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass72_0$$<SelectRegionBan>b__1
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass72_0___SelectRegionBan_b__1 (UI_ScoreboardModerationPanel___c__DisplayClass72_0_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x5d48840

void UI_ScoreboardModerationPanel___c__DisplayClass72_0___SelectRegionBan_b__1
               (UI_ScoreboardModerationPanel___c__DisplayClass72_0_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  Anticheat_RegionBanEntry_o *banEntry;
  
  if (Il2CppMethodInitialized_07547ec6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547ec6 = '\x01';
  }
  banEntry = (__this->fields).captured;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RegionUnban(banEntry,(System_Action_string__o *)0x0,reason,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass74_0$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass74_0___ctor (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o* __this, const MethodInfo* method);
// 0x5d47050

void UI_ScoreboardModerationPanel___c__DisplayClass74_0___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass74_0$$<ShowPlayerProps>b__2
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass74_0___ShowPlayerProps_b__2 (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o* __this, System_String_o* newVal, const MethodInfo* method);
// 0x5d488a0

void UI_ScoreboardModerationPanel___c__DisplayClass74_0___ShowPlayerProps_b__2
               (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o *__this,System_String_o *newVal,
               MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ScoreboardModerationPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ScoreboardModerationPanel__ShowPlayerProps(__this_00,(__this->fields).actorNumber,method);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass74_0$$<ShowPlayerProps>b__0
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass74_0___ShowPlayerProps_b__0 (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o* __this, const MethodInfo* method);
// 0x5d488c0

void UI_ScoreboardModerationPanel___c__DisplayClass74_0___ShowPlayerProps_b__0
               (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o *__this,MethodInfo *method)

{
  int32_t targetActorNumber;
  UI_ScoreboardModerationPanel_o *pUVar1;
  UI_PlayerPropEditPopup_o *__this_00;
  System_Action_string__string__o *__this_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07547ec7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0_ShowPlayerProps_b__3);
    Il2CppMethodInitialized_07547ec7 = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_ScoreboardModerationPanel_o *)0x0) {
    __this_00 = (pUVar1->fields)._propEditPopup;
    targetActorNumber = (__this->fields).actorNumber;
    __this_01 = (__this->fields).__9__3;
    if (__this_01 == (System_Action_string__string__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string_string);
      System_Action_object__object____ctor
                ((System_Action_object__object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0_ShowPlayerProps_b__3,
                 (MethodInfo_4A89FC0 *)0x0);
      (__this->fields).__9__3 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3);
    }
    if (__this_00 != (UI_PlayerPropEditPopup_o *)0x0) {
      (__this_00->fields)._onSave = (System_Action_string__o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onSave);
      (__this_00->fields)._onAdd = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onAdd);
      UI_PlayerPropEditPopup__ShowForm
                (__this_00,targetActorNumber,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                 (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),true,in_R9);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass74_0$$<ShowPlayerProps>b__3
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass74_0___ShowPlayerProps_b__3 (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o* __this, System_String_o* newKey, System_String_o* newVal, const MethodInfo* method);
// 0x5d489c0

void UI_ScoreboardModerationPanel___c__DisplayClass74_0___ShowPlayerProps_b__3
               (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o *__this,System_String_o *newKey,
               System_String_o *newVal,MethodInfo *method)

{
  UI_ScoreboardModerationPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_ScoreboardModerationPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ScoreboardModerationPanel__ShowPlayerProps(__this_00,(__this->fields).actorNumber,(MethodInfo *)newVal);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass74_1$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass74_1___ctor (UI_ScoreboardModerationPanel___c__DisplayClass74_1_o* __this, const MethodInfo* method);
// 0x5d47060

void UI_ScoreboardModerationPanel___c__DisplayClass74_1___ctor
               (UI_ScoreboardModerationPanel___c__DisplayClass74_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel.<>c__DisplayClass74_1$$<ShowPlayerProps>b__1
// il2cpp: void UI_ScoreboardModerationPanel___c__DisplayClass74_1___ShowPlayerProps_b__1 (UI_ScoreboardModerationPanel___c__DisplayClass74_1_o* __this, const MethodInfo* method);
// 0x5d489e0

void UI_ScoreboardModerationPanel___c__DisplayClass74_1___ShowPlayerProps_b__1
               (UI_ScoreboardModerationPanel___c__DisplayClass74_1_o *__this,MethodInfo *method)

{
  int32_t targetActorNumber;
  UI_ScoreboardModerationPanel___c__DisplayClass74_0_o *object;
  UI_ScoreboardModerationPanel_o *pUVar1;
  UI_PlayerPropEditPopup_o *__this_00;
  System_String_o *key;
  System_String_o *value;
  System_Action_string__o *__this_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07547ec8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0_ShowPlayerProps_b__2);
    Il2CppMethodInitialized_07547ec8 = '\x01';
  }
  object = (__this->fields).CS___8__locals1;
  if ((object != (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o *)0x0) &&
     (pUVar1 = (object->fields).__4__this, pUVar1 != (UI_ScoreboardModerationPanel_o *)0x0)) {
    __this_00 = (pUVar1->fields)._propEditPopup;
    targetActorNumber = (object->fields).actorNumber;
    key = (__this->fields).capturedKey;
    value = (__this->fields).capturedValue;
    __this_01 = (object->fields).__9__2;
    if (__this_01 == (System_Action_string__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0_ShowPlayerProps_b__2,
                 (MethodInfo_4A81BE0 *)0x0);
      (object->fields).__9__2 = __this_01;
      Il2CppCodeGenWriteBarrier(&(object->fields).__9__2);
    }
    if (__this_00 != (UI_PlayerPropEditPopup_o *)0x0) {
      (__this_00->fields)._onSave = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onSave);
      (__this_00->fields)._onAdd = (System_Action_string__string__o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onAdd);
      UI_PlayerPropEditPopup__ShowForm(__this_00,targetActorNumber,key,value,false,in_R9);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$get_DoublePanel
// il2cpp: bool UI_ScoreboardModerationPanel__get_DoublePanel (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d3ebb0

bool UI_ScoreboardModerationPanel__get_DoublePanel(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.ScoreboardModerationPanel$$get_ScrollBar
// il2cpp: bool UI_ScoreboardModerationPanel__get_ScrollBar (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d3ebc0

bool UI_ScoreboardModerationPanel__get_ScrollBar(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.ScoreboardModerationPanel$$Setup
// il2cpp: void UI_ScoreboardModerationPanel__Setup (UI_ScoreboardModerationPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d3ebd0

void UI_ScoreboardModerationPanel__Setup
               (UI_ScoreboardModerationPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547e82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    Il2CppMethodInitialized_07547e82 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor
            ((Gisketch_Aottg2UI_Game_AottgInGameView_o *)method_00,(MethodInfo *)0x0);
  (__this->fields)._view = (Gisketch_Aottg2UI_Game_AottgInGameView_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
  UI_ScoreboardModerationPanel__SubscribeToManager(__this,method_00);
  UI_ScoreboardModerationPanel__BuildUI(__this,method_00);
  return;
}


// UI.ScoreboardModerationPanel$$OnDestroy
// il2cpp: void UI_ScoreboardModerationPanel__OnDestroy (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d3f8a0

void UI_ScoreboardModerationPanel__OnDestroy(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel__UnsubscribeFromManager(__this,method);
  return;
}


// UI.ScoreboardModerationPanel$$OnDisable
// il2cpp: void UI_ScoreboardModerationPanel__OnDisable (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d3fa70

void UI_ScoreboardModerationPanel__OnDisable(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel__HidePopupIfActive((UI_BasePopup_o *)(__this->fields)._batchBanPopup,method);
  UI_ScoreboardModerationPanel__HidePopupIfActive((UI_BasePopup_o *)(__this->fields)._propEditPopup,method);
  UI_ScoreboardModerationPanel__HidePopupIfActive((UI_BasePopup_o *)(__this->fields)._reasonPopup,method);
  return;
}


// UI.ScoreboardModerationPanel$$HidePopupIfActive
// il2cpp: void UI_ScoreboardModerationPanel__HidePopupIfActive (UI_BasePopup_o* popup, const MethodInfo* method);
// 0x5d3faa0

void UI_ScoreboardModerationPanel__HidePopupIfActive(UI_BasePopup_o *popup,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_07547e83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e83 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)popup,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((popup == (UI_BasePopup_o *)0x0) ||
     (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)popup,(MethodInfo *)0x0),
     __this == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this,(MethodInfo *)0x0);
  if (bVar1) {
    (*(popup->klass->vtable)._58_HideImmediate.methodPtr)
              (popup,(popup->klass->vtable)._58_HideImmediate.method);
    return;
  }
  return;
}


// UI.ScoreboardModerationPanel$$Update
// il2cpp: void UI_ScoreboardModerationPanel__Update (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d3fb30
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3fd02: lea r14, [rip + 0x1553d9f]  ; MethodInfo_System_Collections_Generic_List_CanvasGroup_get_Item
// asm:   0x5d3fd09: lea r13, [rip + 0x1553d88]  ; MethodInfo_System_Collections_Generic_List_CanvasGroup_RemoveAt
// asm:   0x5d3fd10: jmp 0x5d3fd24
// asm:   0x5d3fd20: dec ebp
// asm:   0x5d3fd22: js 0x5d3fd95

void UI_ScoreboardModerationPanel__Update(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o **targetAddress;
  int index;
  System_Collections_Generic_List_CanvasGroup__o *pSVar1;
  bool bVar2;
  UI_BasePopup_o *x;
  UnityEngine_CanvasGroup_o *pUVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CanvasGroup_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CanvasGroup_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CanvasGroup_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e84 = '\x01';
  }
  pUVar3 = (__this->fields)._popupCanvasGroup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                  ((UnityEngine_Component_o *)__this,
                   (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_BasePopup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    targetAddress = &(__this->fields)._popupCanvasGroup;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (UI_BasePopup_o *)0x0) goto label_05d3fda4;
      pUVar3 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)x,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
      *targetAddress = pUVar3;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
    pUVar3 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
  }
  fVar4 = 1.0 - (__this->fields)._popupMinFadeAlpha;
  pUVar3 = (__this->fields)._popupCanvasGroup;
  if (fVar4 < TypeInfo_UnityEngine_Mathf->static_fields->Epsilon ||
      fVar4 == TypeInfo_UnityEngine_Mathf->static_fields->Epsilon) {
    if (pUVar3 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05d3fda4;
    fVar5 = UnityEngine_CanvasGroup__get_alpha(pUVar3,(MethodInfo *)0x0);
  }
  else {
    if (pUVar3 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05d3fda4;
    fVar5 = UnityEngine_CanvasGroup__get_alpha(pUVar3,(MethodInfo *)0x0);
    fVar4 = (fVar5 - (__this->fields)._popupMinFadeAlpha) / fVar4;
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
  }
  pSVar1 = (__this->fields)._fadeSyncGroups;
  if (pSVar1 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
    index = (pSVar1->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar1 = (__this->fields)._fadeSyncGroups;
      if (pSVar1 == (System_Collections_Generic_List_CanvasGroup__o *)0x0) break;
      pUVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_CanvasGroup_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (__this->fields)._fadeSyncGroups;
        if (pSVar1 == (System_Collections_Generic_List_CanvasGroup__o *)0x0) break;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_CanvasGroup_RemoveAt);
      }
      else {
        if (pUVar3 == (UnityEngine_CanvasGroup_o *)0x0) break;
        UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar5,(MethodInfo *)0x0);
      }
    }
  }
label_05d3fda4:
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$RegisterFadeSyncGroup
// il2cpp: void UI_ScoreboardModerationPanel__RegisterFadeSyncGroup (UI_ScoreboardModerationPanel_o* __this, UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x5d3fdb0

void UI_ScoreboardModerationPanel__RegisterFadeSyncGroup
               (UI_ScoreboardModerationPanel_o *__this,UnityEngine_GameObject_o *target,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CanvasGroup__o *__this_00;
  UnityEngine_CanvasGroup_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_CanvasGroup_o *item;
  
  if (Il2CppMethodInitialized_07547e85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_CanvasGroup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e85 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (target != (UnityEngine_GameObject_o *)0x0) {
    item = UnityEngine_GameObject__GetComponent_object_
                     (target,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup)
    ;
    if (item == (UnityEngine_CanvasGroup_o *)0x0) {
      item = UnityEngine_GameObject__AddComponent_object_
                       (target,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    }
    pMVar4 = MethodInfo_System_Collections_Generic_List_CanvasGroup_Add;
    __this_00 = (__this->fields)._fadeSyncGroups;
    if (__this_00 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UnityEngine_CanvasGroup_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$SetupPopups
// il2cpp: void UI_ScoreboardModerationPanel__SetupPopups (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d3fed0

void UI_ScoreboardModerationPanel__SetupPopups(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_ModerationBatchBanPopup_o *pUVar7;
  UI_PlayerPropEditPopup_o *pUVar8;
  UI_ModerationReasonPopup_o *pUVar9;
  
  if (Il2CppMethodInitialized_07547e86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ModerationBatchBanPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ModerationReasonPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_PlayerPropEditPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_07547e86 = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar6,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_ModerationBatchBanPopup);
  (__this->fields)._batchBanPopup = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._batchBanPopup);
  pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
  pSVar3 = (__this->fields)._popups;
  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    pUVar7 = (__this->fields)._batchBanPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 != (UI_BasePopup_array *)0x0) {
      uVar2 = (pSVar3->fields)._size;
      if (uVar2 < (uint)pUVar4->max_length) {
        (pSVar3->fields)._size = uVar2 + 1;
        pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar8 = UI_ElementFactory__CreateDefaultPopup_object_
                         (pUVar6,false,
                          (MethodInfo_34D7290 *)
                          MethodInfo_UI_ElementFactory_CreateDefaultPopup_PlayerPropEditPopup);
      (__this->fields)._propEditPopup = pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._propEditPopup);
      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
      pSVar3 = (__this->fields)._popups;
      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar8 = (__this->fields)._propEditPopup;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 != (UI_BasePopup_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar9 = UI_ElementFactory__CreateDefaultPopup_object_
                             (pUVar6,false,
                              (MethodInfo_34D7290 *)
                              MethodInfo_UI_ElementFactory_CreateDefaultPopup_ModerationReasonPopup);
          (__this->fields)._reasonPopup = pUVar9;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._reasonPopup);
          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
          pSVar3 = (__this->fields)._popups;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar9 = (__this->fields)._reasonPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar3->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$SubscribeToManager
// il2cpp: void UI_ScoreboardModerationPanel__SubscribeToManager (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d3ec50

void UI_ScoreboardModerationPanel__SubscribeToManager
               (UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  System_Action_o *pSVar2;
  System_Action_string__o *__this_00;
  System_Action_RoomBanPage__o *__this_01;
  System_Action_RegionBanPage__o *__this_02;
  
  if (Il2CppMethodInitialized_07547e87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RoomBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RegionBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_OnAuthChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_OnRegionBanListReceived);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_OnRoomBanListReceived)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_RefreshActiveTab);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_SetStatus);
    Il2CppMethodInitialized_07547e87 = '\x01';
    cVar1 = (__this->fields)._subscribed;
  }
  else {
    cVar1 = (__this->fields)._subscribed;
  }
  if (cVar1 != '\0') {
    return;
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar2,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnAuthChanged,
             (MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__add_AuthChanged(pSVar2,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar2,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ScoreboardModerationPanel_RefreshActiveTab,
             (MethodInfo *)0x0);
  Anticheat_ModeratorManager__add_PlayerListChanged(pSVar2,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_SetStatus,(MethodInfo_4A81BE0 *)0x0);
  Anticheat_ModeratorManager__add_StatusMessage(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_RoomBanPage);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnRoomBanListReceived,(MethodInfo_4A81BE0 *)0x0
            );
  Anticheat_ModeratorManager__add_RoomBanListReceived(__this_01,(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_RegionBanPage);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnRegionBanListReceived,
             (MethodInfo_4A81BE0 *)0x0);
  Anticheat_ModeratorManager__add_RegionBanListReceived(__this_02,(MethodInfo *)0x0);
  (__this->fields)._subscribed = true;
  return;
}


// UI.ScoreboardModerationPanel$$UnsubscribeFromManager
// il2cpp: void UI_ScoreboardModerationPanel__UnsubscribeFromManager (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d3f8b0

void UI_ScoreboardModerationPanel__UnsubscribeFromManager
               (UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Action_string__o *__this_00;
  System_Action_RoomBanPage__o *__this_01;
  System_Action_RegionBanPage__o *__this_02;
  
  if (Il2CppMethodInitialized_07547e88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RoomBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RegionBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_OnAuthChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_OnRegionBanListReceived);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_OnRoomBanListReceived)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_RefreshActiveTab);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_SetStatus);
    Il2CppMethodInitialized_07547e88 = '\x01';
  }
  if ((__this->fields)._subscribed != false) {
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (pSVar1,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnAuthChanged,
               (MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__remove_AuthChanged(pSVar1,(MethodInfo *)0x0);
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (pSVar1,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_RefreshActiveTab,(MethodInfo *)0x0);
    Anticheat_ModeratorManager__remove_PlayerListChanged(pSVar1,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_SetStatus,(MethodInfo_4A81BE0 *)0x0);
    Anticheat_ModeratorManager__remove_StatusMessage(__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_RoomBanPage);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnRoomBanListReceived,
               (MethodInfo_4A81BE0 *)0x0);
    Anticheat_ModeratorManager__remove_RoomBanListReceived(__this_01,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_RegionBanPage);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnRegionBanListReceived,
               (MethodInfo_4A81BE0 *)0x0);
    Anticheat_ModeratorManager__remove_RegionBanListReceived(__this_02,(MethodInfo *)0x0);
    (__this->fields)._subscribed = false;
  }
  return;
}


// UI.ScoreboardModerationPanel$$OnAuthChanged
// il2cpp: void UI_ScoreboardModerationPanel__OnAuthChanged (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d400f0

void UI_ScoreboardModerationPanel__OnAuthChanged(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  UI_ScoreboardModerationPanel__RebuildUI(__this,method);
  return;
}


// UI.ScoreboardModerationPanel$$OnRoomBanListReceived
// il2cpp: void UI_ScoreboardModerationPanel__OnRoomBanListReceived (UI_ScoreboardModerationPanel_o* __this, Anticheat_RoomBanPage_o* page, const MethodInfo* method);
// 0x5d402a0

void UI_ScoreboardModerationPanel__OnRoomBanListReceived
               (UI_ScoreboardModerationPanel_o *__this,Anticheat_RoomBanPage_o *page,MethodInfo *method)

{
  System_Collections_Generic_List_RoomBanEntry__o *__this_00;
  Anticheat_RoomBanEntry_array *method_00;
  
  method_00 = (Anticheat_RoomBanEntry_array *)page;
  if (Il2CppMethodInitialized_07547e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RoomBanEntry_AddRange);
    Il2CppMethodInitialized_07547e89 = '\x01';
  }
  (__this->fields)._roomBanRequestPending = false;
  if (page != (Anticheat_RoomBanPage_o *)0x0) {
    (__this->fields)._roomBanCount = (page->fields).Count;
    (__this->fields)._roomBanNextStart = (page->fields).EndIndex;
    (__this->fields)._roomBanLoaded = true;
    method_00 = (page->fields).Entries;
    if ((method_00 != (Anticheat_RoomBanEntry_array *)0x0) && (method_00->max_length != 0)) {
      __this_00 = (__this->fields)._cachedRoomBans;
      if (__this_00 == (System_Collections_Generic_List_RoomBanEntry__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)method_00,
                 (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_RoomBanEntry_AddRange);
    }
  }
  if ((__this->fields)._activeTab == 2) {
    UI_ScoreboardModerationPanel__RefreshActiveTab(__this,(MethodInfo *)method_00);
    return;
  }
  return;
}


// UI.ScoreboardModerationPanel$$OnRegionBanListReceived
// il2cpp: void UI_ScoreboardModerationPanel__OnRegionBanListReceived (UI_ScoreboardModerationPanel_o* __this, Anticheat_RegionBanPage_o* page, const MethodInfo* method);
// 0x5d40550

void UI_ScoreboardModerationPanel__OnRegionBanListReceived
               (UI_ScoreboardModerationPanel_o *__this,Anticheat_RegionBanPage_o *page,MethodInfo *method)

{
  System_Collections_Generic_List_RegionBanEntry__o *__this_00;
  Anticheat_RegionBanEntry_array *method_00;
  
  method_00 = (Anticheat_RegionBanEntry_array *)page;
  if (Il2CppMethodInitialized_07547e8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RegionBanEntry_AddRange);
    Il2CppMethodInitialized_07547e8a = '\x01';
  }
  (__this->fields)._regionBanRequestPending = false;
  if (page != (Anticheat_RegionBanPage_o *)0x0) {
    (__this->fields)._regionBanCount = (page->fields).Count;
    (__this->fields)._regionBanNextStart = (page->fields).EndIndex;
    (__this->fields)._regionBanLoaded = true;
    method_00 = (page->fields).Entries;
    if ((method_00 != (Anticheat_RegionBanEntry_array *)0x0) && (method_00->max_length != 0)) {
      __this_00 = (__this->fields)._cachedRegionBans;
      if (__this_00 == (System_Collections_Generic_List_RegionBanEntry__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)method_00,
                 (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_RegionBanEntry_AddRange);
    }
  }
  if ((__this->fields)._activeTab == 3) {
    UI_ScoreboardModerationPanel__RefreshActiveTab(__this,(MethodInfo *)method_00);
    return;
  }
  return;
}


// UI.ScoreboardModerationPanel$$BuildUI
// il2cpp: void UI_ScoreboardModerationPanel__BuildUI (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d3ee20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3f875: jmp 0x5d3f308

void UI_ScoreboardModerationPanel__BuildUI(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t key;
  uint32_t uVar2;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *__this_00;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *__this_01;
  UnityEngine_UI_Graphic_o *pUVar4;
  Il2CppType *handle;
  bool bVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_02;
  UI_ScoreboardModerationPanel_o *__this_03;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_Text_o *pUVar10;
  UnityEngine_Events_UnityAction_o *__this_04;
  UnityEngine_UI_InputField_o *x;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar11;
  UnityEngine_RectOffset_o *__this_05;
  UnityEngine_UI_LayoutElement_o *pUVar12;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar13;
  MethodInfo **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Il2CppObject **value;
  UnityEngine_UI_Graphic_o *x_00;
  MethodInfo *method_04;
  float fVar14;
  float fVar15;
  float elementWidth;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547e8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_OnSearchChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SearchPlaceholder");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"DetailsSpacer");
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_07547e8b = '\x01';
  }
  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0x18,120.0,20.0,pSVar7,(MethodInfo *)0x0);
  fVar14 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                     (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar6 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  __this_03 = (UI_ScoreboardModerationPanel_o *)
              UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).DoublePanelLeft,15.0,3,(MethodInfo *)0x0);
  if (__this_03 == (UI_ScoreboardModerationPanel_o *)0x0) goto label_05d3f87a;
  method_04 = (MethodInfo *)0x0;
  pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_03,(MethodInfo *)0x0);
  pSVar7 = UI_ScoreboardModerationPanel__GetAuthStatusText(__this_03,method_04);
  pUVar9 = UI_ElementFactory__CreateDefaultLabel(pUVar8,__this_02,pSVar7,0,3,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05d3f87a;
  method_00 = &MethodInfo_UnityEngine_GameObject_GetComponent_Text;
  pUVar10 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar9,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
  (__this->fields)._authLabel = pUVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._authLabel);
  pUVar9 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).DoublePanelLeft,10.0,3,(MethodInfo *)0x0)
  ;
  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05d3f87a;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._tabButtons;
  if (__this_00 == (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *)0x0)
  goto label_05d3f87a;
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4A55190 *)
             MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_Clear);
  UI_ScoreboardModerationPanel__BuildTabButtons(__this,pUVar8,__this_02,(MethodInfo *)method_00);
  pUVar9 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).DoublePanelLeft,8.0,3,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05d3f87a;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._searchSetting;
  key = (__this->fields)._activeTab;
  if (Il2CppMethodInitialized_07547e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
              );
    Il2CppMethodInitialized_07547e91 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  __this_01 = (__this->fields)._searchTerms;
  if (__this_01 == (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *)0x0)
  goto label_05d3f87a;
  value = &local_38;
  bVar5 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,key,value,
                     (MethodInfo_4A56D80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
                    );
  if (!bVar5) {
    value = *(Il2CppObject ***)(g_data_07556758 + 0xb8);
  }
  if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05d3f87a;
  fVar14 = fVar14 * 0.5 - ((float)iVar6 + (float)iVar6);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar3,*value,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar3 = (__this->fields)._searchSetting;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar7 = UI_UIManager__GetLocaleCommon("Search",(MethodInfo *)0x0);
  fVar15 = fVar14 + -20.0;
  elementWidth = 160.0;
  if (160.0 <= fVar15) {
    elementWidth = fVar15;
  }
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_04,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnSearchChanged,(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateInputSetting
                     (pUVar8,__this_02,(Settings_BaseSetting_o *)pSVar3,pSVar7,"",
                      elementWidth,34.0,false,__this_04,(UnityEngine_Events_UnityAction_o *)0x0,
                      (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                      (MethodInfo *)0x0);
  if ((pUVar9 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar8 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_05d3f87a;
  x = (UnityEngine_UI_InputField_o *)0x0;
  pUVar8 = UnityEngine_Transform__Find(pUVar8,"InputField",(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)pUVar8,
                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_InputField);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (x == (UnityEngine_UI_InputField_o *)0x0) goto label_05d3f87a;
    pUVar4 = (x->fields).m_Placeholder;
    if (pUVar4 == (UnityEngine_UI_Graphic_o *)0x0) {
label_05d3f2f9:
      x_00 = (UnityEngine_UI_Graphic_o *)0x0;
      uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    else {
      bVar1 = (TypeInfo_UnityEngine_UI_Text->_2).typeHierarchyDepth;
      if ((pUVar4->klass->_2).typeHierarchyDepth < bVar1) goto label_05d3f2f9;
      x_00 = (UnityEngine_UI_Graphic_o *)0x0;
      if ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_UI_Text)
      {
        x_00 = pUVar4;
      }
      uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar7 = "SearchPlaceholder";
    if (bVar5) {
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar7 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar7,"",
                          "",(MethodInfo *)0x0);
      if (x_00 == (UnityEngine_UI_Graphic_o *)0x0) goto label_05d3f87a;
      (*(code *)((Il2CppClass *)x_00->klass)->vtable[75].methodPtr)
                (x_00,pSVar7,((Il2CppClass *)x_00->klass)->vtable[75].method);
    }
  }
  pUVar8 = (__this->fields).DoublePanelLeft;
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar11 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_34B0830 *)
                         MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pUVar11 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_05d3f87a;
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar11,false,(MethodInfo *)0x0);
    }
    pUVar9 = UI_ElementFactory__CreateVerticalGroup((__this->fields).DoublePanelLeft,2.0,0,(MethodInfo *)0x0);
    UI_ScoreboardModerationPanel__StyleListBox(__this,pUVar9,method_01);
    UI_ScoreboardModerationPanel__RegisterFadeSyncGroup(__this,pUVar9,method_02);
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      pUVar11 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar9,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
        UnityEngine_RectOffset___ctor_68cd0a0(__this_05,8,8,6,6,(MethodInfo *)0x0);
        if (pUVar11 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_05d3f87a;
        UnityEngine_UI_LayoutGroup__set_padding
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar11,__this_05,(MethodInfo *)0x0);
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar11,0,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar11,true,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar11,true,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar11,true,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar11,false,(MethodInfo *)0x0);
      }
      pUVar12 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar9,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
      if ((pUVar12 != (UnityEngine_UI_LayoutElement_o *)0x0) ||
         (pUVar12 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar9,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
         pUVar12 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
        (*(pUVar12->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (pUVar12,fVar14,(pUVar12->klass->vtable)._36_set_preferredWidth.method);
        (*(pUVar12->klass->vtable)._40_set_flexibleWidth.methodPtr)
                  (pUVar12,1.0,(pUVar12->klass->vtable)._40_set_flexibleWidth.method);
        fVar14 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                           (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
        (*(pUVar12->klass->vtable)._38_set_preferredHeight.methodPtr)
                  (pUVar12,(fVar14 + -160.0) * 0.8,(pUVar12->klass->vtable)._38_set_preferredHeight.method);
        (*(pUVar12->klass->vtable)._42_set_flexibleHeight.methodPtr)
                  (pUVar12,0.0,(pUVar12->klass->vtable)._42_set_flexibleHeight.method);
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
        (__this->fields)._listContainer = pUVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._listContainer);
        pUVar8 = (__this->fields).DoublePanelRight;
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar11 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar8,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            if (pUVar11 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_05d3f87a;
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar11,false,(MethodInfo *)0x0);
          }
          pUVar9 = UI_ElementFactory__CreateHorizontalGroup
                             ((__this->fields).DoublePanelRight,0.0,5,(MethodInfo *)0x0);
          if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
            pUVar8 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
            pUVar9 = UI_ElementFactory__CreateDefaultLabel
                               (pUVar8,__this_02,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,5
                                ,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
              pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar9,(MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_Text);
              (__this->fields)._statusLabel = pUVar10;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._statusLabel);
              components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
              handle = TypeRef_UnityEngine_RectTransform;
              if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_075567a8);
              }
              obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
              if (components != (System_Type_array *)0x0) {
                if ((obj != (System_Type_o *)0x0) &&
                   (pIVar13 = il2cpp_vm_Object_IsInst
                                        ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
                   pIVar13 == (Il2CppObject *)0x0)) {
                  pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
                }
                if ((int)components->max_length == 0) {
                  ThrowIndexOutOfRangeException();
                }
                components->m_Items[0] = obj;
                Il2CppCodeGenWriteBarrier(components->m_Items);
                pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                UnityEngine_GameObject___ctor_691aa60
                          (pUVar9,"DetailsSpacer",components,(MethodInfo *)0x0);
                if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                   (pUVar8 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
                   pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetParent_692d510
                            (pUVar8,(__this->fields).DoublePanelRight,false,(MethodInfo *)0x0);
                  pUVar12 = UnityEngine_GameObject__AddComponent_object_
                                      (pUVar9,(MethodInfo_353B6A0 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
                  if (pUVar12 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar12->klass->vtable)._38_set_preferredHeight.methodPtr)
                              (pUVar12,12.0,(pUVar12->klass->vtable)._38_set_preferredHeight.method);
                    (*(pUVar12->klass->vtable)._42_set_flexibleHeight.methodPtr)
                              (pUVar12,0.0,(pUVar12->klass->vtable)._42_set_flexibleHeight.method);
                    pUVar9 = UI_ElementFactory__CreateVerticalGroup
                                       ((__this->fields).DoublePanelRight,10.0,0,(MethodInfo *)0x0);
                    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar8 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                      (__this->fields)._detailContainer = pUVar8;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._detailContainer);
                      UI_ScoreboardModerationPanel__SetActiveTab(__this,(__this->fields)._activeTab,method_03)
                      ;
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
label_05d3f87a:
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$RebuildUI
// il2cpp: void UI_ScoreboardModerationPanel__RebuildUI (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d40100

void UI_ScoreboardModerationPanel__RebuildUI(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  UnityEngine_Transform_o *x;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *__this_00;
  bool bVar1;
  UnityEngine_Object_o *obj;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_ScoreboardModerationPanel_o *__this_01;
  
  if (Il2CppMethodInitialized_07547e8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e8c = '\x01';
  }
  (__this->fields)._authLabel = (UnityEngine_UI_Text_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._authLabel);
  (__this->fields)._statusLabel = (UnityEngine_UI_Text_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._statusLabel);
  (__this->fields)._listContainer = (UnityEngine_Transform_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._listContainer);
  (__this->fields)._detailContainer = (UnityEngine_Transform_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._detailContainer);
  x = (__this->fields)._footerRow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    targetAddress = &(__this->fields)._footerRow;
    if (*targetAddress == (UnityEngine_Transform_o *)0x0) goto label_05d40296;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    *targetAddress = (UnityEngine_Transform_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  __this_00 = (__this->fields)._tabButtons;
  if (__this_00 != (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *)0x0) {
    System_Collections_Generic_Dictionary_Int32Enum__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_4A55190 *)
               MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_Clear);
    (__this->fields)._selectedPlayer = (Anticheat_PlayerEntry_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedPlayer);
    (__this->fields)._selectedRoomBan = (Anticheat_RoomBanEntry_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedRoomBan);
    __this_01 = (UI_ScoreboardModerationPanel_o *)&(__this->fields)._selectedRegionBan;
    (__this->fields)._selectedRegionBan = (Anticheat_RegionBanEntry_o *)0x0;
    Il2CppCodeGenWriteBarrier((void **)__this_01);
    UI_ScoreboardModerationPanel__ClearContainer(__this_01,(__this->fields).DoublePanelLeft,method_00);
    method_02 = (MethodInfo *)(__this->fields).DoublePanelRight;
    UI_ScoreboardModerationPanel__ClearContainer(__this_01,(UnityEngine_Transform_o *)method_02,method_01);
    UI_ScoreboardModerationPanel__BuildUI(__this,method_02);
    return;
  }
label_05d40296:
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$BuildTabButtons
// il2cpp: void UI_ScoreboardModerationPanel__BuildTabButtons (UI_ScoreboardModerationPanel_o* __this, UnityEngine_Transform_o* tabRow, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d40830

void UI_ScoreboardModerationPanel__BuildTabButtons
               (UI_ScoreboardModerationPanel_o *__this,UnityEngine_Transform_o *tabRow,
               UI_ElementStyle_o *style,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  char cVar4;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_07547e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"PastPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionBans");
    il2cpp_codegen_initialize_runtime_metadata(&"Players");
    il2cpp_codegen_initialize_runtime_metadata(&"RoomBans");
    Il2CppMethodInitialized_07547e8d = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07547eed == '\0') goto label_05d40944;
label_05d408e1:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d408ee;
label_05d40964:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    cVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
    if (Il2CppMethodInitialized_07547eee == '\0') goto label_05d40981;
label_05d40902:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d4090f;
label_05d409a1:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    iVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
    if (!bVar1) goto label_05d409bd;
label_05d40922:
    bVar1 = 0 < iVar2 && cVar4 != '\0';
  }
  else {
    if (Il2CppMethodInitialized_07547eed != '\0') goto label_05d408e1;
label_05d40944:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eed = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d40964;
label_05d408ee:
    cVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
    if (Il2CppMethodInitialized_07547eee != '\0') goto label_05d40902;
label_05d40981:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eee = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d409a1;
label_05d4090f:
    iVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
    if (bVar1) goto label_05d40922;
label_05d409bd:
    bVar1 = 0 < iVar2 && cVar4 != '\0';
    if (iVar2 < 0 || cVar4 == '\0') goto label_05d40ba4;
  }
  pSVar3 = "Players";
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar5 = (MethodInfo *)0x0;
  pSVar3 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar3,"",
                      "",(MethodInfo *)0x0);
  UI_ScoreboardModerationPanel__AddTabButton(__this,tabRow,style,0,pSVar3,pMVar5);
  pSVar3 = "PastPlayers";
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar5 = (MethodInfo *)0x0;
  pSVar3 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar3,"",
                      "",(MethodInfo *)0x0);
  UI_ScoreboardModerationPanel__AddTabButton(__this,tabRow,style,1,pSVar3,pMVar5);
  pSVar3 = "RoomBans";
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar5 = (MethodInfo *)0x0;
  pSVar3 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar3,"",
                      "",(MethodInfo *)0x0);
  UI_ScoreboardModerationPanel__AddTabButton(__this,tabRow,style,2,pSVar3,pMVar5);
label_05d40ba4:
  pSVar3 = "RegionBans";
  if (bVar1) {
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pMVar5 = (MethodInfo *)0x0;
    pSVar3 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar3,"",
                        "",(MethodInfo *)0x0);
    UI_ScoreboardModerationPanel__AddTabButton(__this,tabRow,style,3,pSVar3,pMVar5);
    return;
  }
  return;
}


// UI.ScoreboardModerationPanel$$AddTabButton
// il2cpp: void UI_ScoreboardModerationPanel__AddTabButton (UI_ScoreboardModerationPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t tab, System_String_o* label, const MethodInfo* method);
// 0x5d41450

void UI_ScoreboardModerationPanel__AddTabButton
               (UI_ScoreboardModerationPanel_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,int32_t tab,System_String_o *label,MethodInfo *method)

{
  int32_t key;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *__this_00;
  UI_ScoreboardModerationPanel___c__DisplayClass52_0_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *value;
  
  if (Il2CppMethodInitialized_07547e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass52_0_AddTabButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass52_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07547e8e = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass52_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_ScoreboardModerationPanel___c__DisplayClass52_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).tab = tab;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass52_0_AddTabButton_b__0,
               (MethodInfo *)0x0);
    __this_03 = UI_ElementFactory__CreateDefaultButton(parent,style,label,0.0,0.0,__this_02,(MethodInfo *)0x0)
    ;
    if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = (__this->fields)._tabButtons;
      key = (__this_01->fields).tab;
      value = UnityEngine_GameObject__GetComponent_object_
                        (__this_03,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button
                        );
      if (__this_00 != (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *)0x0)
      {
        System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
                   (Il2CppObject *)value,
                   (MethodInfo_4A54FC0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_set_Item
                  );
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$SetActiveTab
// il2cpp: void UI_ScoreboardModerationPanel__SetActiveTab (UI_ScoreboardModerationPanel_o* __this, int32_t tab, const MethodInfo* method);
// 0x5d40e80
// eh: try 0x5d41024..0x5d410d7 -> pad 0x5d410e0 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d410f7..0x5d410fc -> pad 0x5d41121 cleanup
// eh: try 0x5d41124..0x5d4112c -> pad 0x5d41134 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4101c: nop dword ptr [rax]
// asm:   0x5d410dc: jmp 0x5d410e0
// asm:   0x5d410de: jmp 0x5d410e0
// asm:   0x5d410e0: mov rbx, rax
// asm:   0x5d410e3: cmp edx, 1
// asm:   0x5d410e6: jne 0x5d41124
// asm:   0x5d410e8: mov rdi, rbx
// asm:   0x5d410eb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d410f0: mov rbx, qword ptr [rax]
// asm:   0x5d410f3: mov qword ptr [rsp], rbx
// asm:   0x5d410f7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d410fc: lea rax, [rip + 0x154f3e5]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_Dispose
// asm:   0x5d41103: mov rsi, qword ptr [rax]
// asm:   0x5d41106: lea rdi, [rsp + 0x10]
// asm:   0x5d4110b: call 0x4ddbac0  ; System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose()
// asm:   0x5d41110: test rbx, rbx
// asm:   0x5d41113: je 0x5d41066
// asm:   0x5d41119: mov rdi, rbx
// asm:   0x5d4111c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d41121: mov rbx, rax
// asm:   0x5d41124: mov rdi, rsp
// asm:   0x5d41127: call 0x2fdc800  ; il2cpp_runtime_helper_02fdc800()
// asm:   0x5d4112c: mov rdi, rbx
// asm:   0x5d4112f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d41134: mov rdi, rax
// asm:   0x5d41137: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardModerationPanel__SetActiveTab
               (UI_ScoreboardModerationPanel_o *__this,int32_t tab,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *__this_01;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *__this_02;
  bool bVar1;
  MethodInfo *method_00;
  Il2CppObject **ppIVar2;
  MethodInfo *method_01;
  UI_ScoreboardModerationPanel_o *__this_03;
  Il2CppObject *local_68;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *local_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_07547e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_ScoreboardModerationPanel_Tab_Button_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_ScoreboardModerationPanel_Tab_Button_get_Value
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547e8f = '\x01';
  }
  local_58.fields._current.fields.key = (Il2CppObject *)0x0;
  local_58.fields._current.fields.value = (Il2CppObject *)0x0;
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._version = 0;
  local_58.fields._index = 0;
  local_58.fields._getEnumeratorRetType = 0;
  local_58.fields._36_4_ = 0;
  (__this->fields)._activeTab = tab;
  (__this->fields)._selectedPlayer = (Anticheat_PlayerEntry_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedPlayer);
  (__this->fields)._selectedRoomBan = (Anticheat_RoomBanEntry_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedRoomBan);
  (__this->fields)._selectedRegionBan = (Anticheat_RegionBanEntry_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedRegionBan);
  __this_00 = (__this->fields)._searchSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    if (Il2CppMethodInitialized_07547e91 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
                );
      Il2CppMethodInitialized_07547e91 = '\x01';
    }
    ppIVar2 = &local_68;
    local_68 = (Il2CppObject *)0x0;
    __this_01 = (__this->fields)._searchTerms;
    if (__this_01 == (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *)0x0)
    goto label_05d410d7;
    bVar1 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,tab,&local_68,
                       (MethodInfo_4A56D80 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
                      );
    if (!bVar1) {
      ppIVar2 = *(Il2CppObject ***)(g_data_07556758 + 0xb8);
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,*ppIVar2,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  __this_02 = (__this->fields)._tabButtons;
  if (__this_02 != (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *)0x0) {
    System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator
              (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
               (MethodInfo_4A55470 *)
               MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_GetEnumerator
              );
    local_68 = (Il2CppObject *)0x0;
    local_60 = &local_58;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext
                        (&local_58,
                         (MethodInfo_4CDB9A0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_MoveNext
                        );
      if (!bVar1) {
        method_01 = 
        MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_Dispose
        ;
        System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose
                  (&local_58,
                   (MethodInfo_4CDBAC0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_Dispose
                  );
        UI_ScoreboardModerationPanel__RefreshActiveTab(__this,method_01);
        if (Il2CppMethodInitialized_07547e9e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_07547e9e = '\x01';
        }
        __this_03 = (UI_ScoreboardModerationPanel_o *)(__this->fields)._detailContainer;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          UI_ScoreboardModerationPanel__ClearContainer(__this_03,(__this->fields)._detailContainer,method_00);
        }
        return;
      }
      if ((UnityEngine_UI_Selectable_o *)local_58.fields._current.fields.value ==
          (UnityEngine_UI_Selectable_o *)0x0) break;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)local_58.fields._current.fields.value,
                 (int)local_58.fields._current.fields.key != tab,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
label_05d410d7:
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$OnSearchChanged
// il2cpp: void UI_ScoreboardModerationPanel__OnSearchChanged (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d41610

void UI_ScoreboardModerationPanel__OnSearchChanged(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  uint key;
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *__this_00;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547e90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547e90 = '\x01';
  }
  pSVar1 = (__this->fields)._searchSetting;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._searchTerms;
  value = (pSVar1->fields)._value;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *)0x0) {
    ThrowNullReferenceException();
  }
  key = (__this->fields)._activeTab;
  method_00 = (MethodInfo *)(ulong)key;
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,(Il2CppObject *)value,
             (MethodInfo_4A54FC0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_set_Item);
  UI_ScoreboardModerationPanel__RefreshActiveTab(__this,method_00);
  return;
}


// UI.ScoreboardModerationPanel$$GetSearchTerm
// il2cpp: System_String_o* UI_ScoreboardModerationPanel__GetSearchTerm (UI_ScoreboardModerationPanel_o* __this, int32_t tab, const MethodInfo* method);
// 0x5d40c70

System_String_o *
UI_ScoreboardModerationPanel__GetSearchTerm
          (UI_ScoreboardModerationPanel_o *__this,int32_t tab,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *__this_00;
  bool bVar1;
  Il2CppObject **ppIVar2;
  Il2CppObject *pIStack_18;
  
  if (Il2CppMethodInitialized_07547e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
              );
    Il2CppMethodInitialized_07547e91 = '\x01';
  }
  ppIVar2 = &pIStack_18;
  pIStack_18 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._searchTerms;
  if (__this_00 == (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,tab,&pIStack_18,
                     (MethodInfo_4A56D80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
                    );
  if (!bVar1) {
    ppIVar2 = *(Il2CppObject ***)(g_data_07556758 + 0xb8);
  }
  return (System_String_o *)*ppIVar2;
}


// UI.ScoreboardModerationPanel$$MatchesSearch
// il2cpp: bool UI_ScoreboardModerationPanel__MatchesSearch (UI_ScoreboardModerationPanel_o* __this, int32_t tab, System_String_o* value, const MethodInfo* method);
// 0x5d416a0

bool UI_ScoreboardModerationPanel__MatchesSearch
               (UI_ScoreboardModerationPanel_o *__this,int32_t tab,System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *__this_00;
  System_String_o *value_00;
  bool bVar1;
  int32_t iVar2;
  Il2CppObject **value_01;
  bool bVar3;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_07547e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
              );
    Il2CppMethodInitialized_07547e91 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._searchTerms;
  if (__this_00 == (System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *)0x0) {
label_05d4176e:
    ThrowNullReferenceException();
  }
  value_01 = &local_20;
  bVar1 = System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,tab,value_01,
                     (MethodInfo_4A56D80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_TryGetValue
                    );
  if (!bVar1) {
    value_01 = *(Il2CppObject ***)(g_data_07556758 + 0xb8);
  }
  value_00 = (System_String_o *)*value_01;
  bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  bVar3 = true;
  if (!bVar1) {
    if ((value == (System_String_o *)0x0) &&
       (value = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), value == (System_String_o *)0x0))
    goto label_05d4176e;
    iVar2 = System_String__IndexOf_53072b0(value,value_00,5,(MethodInfo *)0x0);
    bVar3 = -1 < iVar2;
  }
  return bVar3;
}


// UI.ScoreboardModerationPanel$$RefreshActiveTab
// il2cpp: void UI_ScoreboardModerationPanel__RefreshActiveTab (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d40340

void UI_ScoreboardModerationPanel__RefreshActiveTab(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  UnityEngine_Transform_o *x;
  bool bVar1;
  UnityEngine_Object_o *obj;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  UI_ScoreboardModerationPanel_o *__this_01;
  
  if (Il2CppMethodInitialized_07547e92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e92 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_01 = (UI_ScoreboardModerationPanel_o *)(__this->fields)._listContainer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      UI_ScoreboardModerationPanel__ClearContainer(__this_01,(__this->fields)._listContainer,method_00);
      x = (__this->fields)._footerRow;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        targetAddress = &(__this->fields)._footerRow;
        if (*targetAddress == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
        *targetAddress = (UnityEngine_Transform_o *)0x0;
        Il2CppCodeGenWriteBarrier(targetAddress);
      }
      themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
      switch((__this->fields)._activeTab) {
      case 0:
        UI_ScoreboardModerationPanel__PopulatePlayerList
                  (__this,__this_00,true,(MethodInfo *)&switchD_05d404bb::switchdataD_010a5e48);
        UI_ScoreboardModerationPanel__BuildPlayerListFooter(__this,__this_00,method_02);
        return;
      case 1:
        UI_ScoreboardModerationPanel__PopulatePlayerList
                  (__this,__this_00,false,(MethodInfo *)&switchD_05d404bb::switchdataD_010a5e48);
        UI_ScoreboardModerationPanel__BuildPastPlayerFooter(__this,__this_00,method_03);
        return;
      case 2:
        UI_ScoreboardModerationPanel__PopulateRoomBanList(__this,__this_00,method_01);
        UI_ScoreboardModerationPanel__BuildRoomBanFooter(__this,__this_00,method_04);
        return;
      case 3:
        UI_ScoreboardModerationPanel__PopulateRegionBanList(__this,__this_00,method_01);
        UI_ScoreboardModerationPanel__BuildRegionBanFooter(__this,__this_00,method_05);
        return;
      }
    }
  }
  return;
}


// UI.ScoreboardModerationPanel$$PopulatePlayerList
// il2cpp: void UI_ScoreboardModerationPanel__PopulatePlayerList (UI_ScoreboardModerationPanel_o* __this, UI_ElementStyle_o* style, bool active, const MethodInfo* method);
// 0x5d41780
// eh: try 0x5d41c24..0x5d42099 -> pad 0x5d420c1 (+23 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d420dd..0x5d420e2 -> pad 0x5d420f8 cleanup
// eh: try 0x5d420fb..0x5d42105 -> pad 0x5d4215e catch (...) [compiler noexcept guard]
// eh: try 0x5d4211f..0x5d42124 -> pad 0x5d42149 cleanup
// eh: try 0x5d4214c..0x5d42156 -> pad 0x5d4215e catch (...) [compiler noexcept guard]
// asm: 68 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d41924: jmp 0x5d4208a
// asm:   0x5d41962: jmp 0x5d4208a
// asm:   0x5d41a0c: jmp 0x5d4208a
// asm:   0x5d41aa6: jmp 0x5d4208a
// asm:   0x5d41de2: mov qword ptr [rsp], rax
// asm:   0x5d41de6: nop word ptr cs:[rax + rax]
// asm:   0x5d42099: jmp 0x5d420c5
// asm:   0x5d4209b: jmp 0x5d420c5
// asm:   0x5d4209d: jmp 0x5d420c5
// asm:   0x5d4209f: jmp 0x5d42107
// asm:   0x5d420a1: jmp 0x5d42107
// asm:   0x5d420a3: jmp 0x5d42107
// asm:   0x5d420a5: jmp 0x5d42107
// asm:   0x5d420a7: jmp 0x5d42107
// asm:   0x5d420a9: jmp 0x5d420c5
// asm:   0x5d420ab: jmp 0x5d42107
// asm:   0x5d420ad: jmp 0x5d42107
// asm:   0x5d420af: jmp 0x5d420c5
// asm:   0x5d420b1: jmp 0x5d420c5
// asm:   0x5d420b3: jmp 0x5d420c5
// asm:   0x5d420b5: jmp 0x5d420c5
// asm:   0x5d420b7: jmp 0x5d420c5
// asm:   0x5d420b9: jmp 0x5d42107
// asm:   0x5d420bb: jmp 0x5d42107
// asm:   0x5d420bd: jmp 0x5d42107
// asm:   0x5d420bf: jmp 0x5d42107
// asm:   0x5d420c1: jmp 0x5d420c5
// asm:   0x5d420c3: jmp 0x5d42107
// asm:   0x5d420c5: mov r15, rax
// asm:   0x5d420c8: cmp edx, 1
// asm:   0x5d420cb: jne 0x5d420fb
// asm:   0x5d420cd: mov rdi, r15
// asm:   0x5d420d0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d420d5: mov rbx, qword ptr [rax]
// asm:   0x5d420d8: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d420dd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d420e2: lea rax, [rip + 0x154d88f]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerEntry_Dispose
// asm:   0x5d420e9: mov rsi, qword ptr [rax]
// asm:   0x5d420ec: lea rdi, [rsp + 0x60]
// asm:   0x5d420f1: call 0x4da11d0  ; System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose()
// asm:   0x5d420f6: jmp 0x5d42138
// asm:   0x5d420f8: mov r15, rax
// asm:   0x5d420fb: lea rdi, [rsp + 0x18]
// asm:   0x5d42100: call 0x2fdc830  ; il2cpp_runtime_helper_02fdc830()
// asm:   0x5d42105: jmp 0x5d42156
// asm:   0x5d42107: mov r15, rax
// asm:   0x5d4210a: cmp edx, 1
// asm:   0x5d4210d: jne 0x5d4214c
// asm:   0x5d4210f: mov rdi, r15
// asm:   0x5d42112: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d42117: mov rbx, qword ptr [rax]
// asm:   0x5d4211a: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d4211f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d42124: lea rax, [rip + 0x154c60d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_PlayerEntry_Dispose
// asm:   0x5d4212b: mov rsi, qword ptr [rax]
// asm:   0x5d4212e: lea rdi, [rsp + 0x40]
// asm:   0x5d42133: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d42138: test rbx, rbx
// asm:   0x5d4213b: je 0x5d41fb4
// asm:   0x5d42141: mov rdi, rbx
// asm:   0x5d42144: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d42149: mov r15, rax
// asm:   0x5d4214c: lea rdi, [rsp + 0x18]
// asm:   0x5d42151: call 0x2fdc860  ; il2cpp_runtime_helper_02fdc860()
// asm:   0x5d42156: mov rdi, r15
// asm:   0x5d42159: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d4215e: mov rdi, rax
// asm:   0x5d42161: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardModerationPanel__PopulatePlayerList
               (UI_ScoreboardModerationPanel_o *__this,UI_ElementStyle_o *style,bool active,MethodInfo *method
               )

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_List_PlayerEntry__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  undefined8 player;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t iVar7;
  int iVar8;
  UI_ScoreboardModerationPanel___c__DisplayClass58_0_o *__this_00;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  UI_ScoreboardModerationPanel_o *pUVar11;
  UI_ScoreboardModerationPanel___c__DisplayClass58_1_o *__this_01;
  System_String_o *str1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_ScoreboardModerationPanel___c__DisplayClass58_0_Fields *targetAddress;
  UI_ScoreboardModerationPanel_o *pUVar12;
  MethodInfo *in_R9;
  MethodInfo *method_02;
  undefined1 local_a0 [16];
  Anticheat_PlayerEntry_o *local_90;
  Anticheat_PlayerEntry_o *pAStack_88;
  int32_t local_80;
  undefined4 uStack_7c;
  undefined1 local_78 [32];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_07547e93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerEntry_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_PlayerEntry_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_PlayerEntry_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerEntry_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerEntry_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_PlayerEntry_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_PlayerEntry_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_PlayerEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_PlayerEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_0_PopulatePlayerList_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_1_PopulatePlayerList_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"NoMatchingEntries");
    il2cpp_codegen_initialize_runtime_metadata(&"NoEntries");
    Il2CppMethodInitialized_07547e93 = '\x01';
  }
  local_58.fields._current.fields.key = (Il2CppObject *)0x0;
  local_58.fields._current.fields.value = (Il2CppObject *)0x0;
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._version = 0;
  local_58.fields._index = 0;
  local_58.fields._getEnumeratorRetType = 0;
  local_58.fields._36_4_ = 0;
  local_78._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  local_78._16_8_ = (Anticheat_PlayerEntry_o *)0x0;
  uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  if (!active) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      if (g_data_07547ef0 == '\0') goto label_05d41a23;
label_05d4193e:
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d4194e;
label_05d41a46:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
    }
    else {
      if (g_data_07547ef0 != '\0') goto label_05d4193e;
label_05d41a23:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      g_data_07547ef0 = '\x01';
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d41a46;
label_05d4194e:
      pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
    }
    if (pSVar3 == (System_Collections_Generic_List_PlayerEntry__o *)0x0) goto label_05d4208a;
    if ((pSVar3->fields)._size == 0) goto label_05d41aab;
    if ((((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      if (g_data_07547ef0 == '\0') goto label_05d41d66;
label_05d41a82:
      uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_07547ef0 != '\0') goto label_05d41a82;
label_05d41d66:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      g_data_07547ef0 = '\x01';
      uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
    }
    else {
      pSVar3 = *(System_Collections_Generic_List_PlayerEntry__o **)
                ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x18);
    }
    if (pSVar3 == (System_Collections_Generic_List_PlayerEntry__o *)0x0) goto label_05d4208a;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_PlayerEntry_GetEnumerator);
    local_78._16_8_ = local_90;
    local_78._0_8_ = local_a0._0_8_;
    local_78._8_8_ = local_a0._8_8_;
    local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    iVar8 = 0;
    local_a0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_78;
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_PlayerEntry_MoveNext),
          player = local_78._16_8_, bVar6) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_1);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      if (__this_01 == (UI_ScoreboardModerationPanel___c__DisplayClass58_1_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar12 = (UI_ScoreboardModerationPanel_o *)&(__this_01->fields).__4__this;
      (__this_01->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier((void **)pUVar12);
      pSVar10 = UI_ScoreboardModerationPanel__GetPlayerDisplayName
                          (pUVar12,(Anticheat_PlayerEntry_o *)player,method_01);
      bVar6 = UI_ScoreboardModerationPanel__MatchesSearch(__this,1,pSVar10,method);
      pSVar9 = "LeftPlayer";
      if (bVar6) {
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        method_02 = (MethodInfo *)0x0;
        pSVar9 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar9,"",
                            "",(MethodInfo *)0x0);
        if ((Anticheat_PlayerEntry_o *)player == (Anticheat_PlayerEntry_o *)0x0) {
          ThrowNullReferenceException();
        }
        str1 = System_Int32__ToString
                         (&((Anticheat_PlayerEntry_Fields *)(player + 0x10))->ActorNumber,(MethodInfo *)0x0);
        pSVar10 = System_String__Concat_5302810
                            ("#",str1," ",pSVar10,(MethodInfo *)0x0);
        method = (MethodInfo *)System_String__Format(pSVar9,(Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        (__this_01->fields).capturedPlayer = (Anticheat_PlayerEntry_o *)player;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).capturedPlayer);
        pUVar4 = (__this->fields)._listContainer;
        pUVar11 = (UI_ScoreboardModerationPanel_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        pUVar12 = pUVar11;
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Events_UnityAction_o *)pUVar11,(Il2CppObject *)__this_01,
                   (intptr_t)
                   MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_1_PopulatePlayerList_b__1,
                   (MethodInfo *)0x0);
        UI_ScoreboardModerationPanel__CreateClickableEntry
                  (pUVar12,pUVar4,style,(System_String_o *)method,(UnityEngine_Events_UnityAction_o *)pUVar11,
                   method_02);
        iVar8 = iVar8 + 1;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_PlayerEntry_Dispose
              );
    goto label_05d41fb4;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (g_data_07547eef == '\0') goto label_05d41975;
label_05d41900:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d41910;
label_05d41998:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  else {
    if (g_data_07547eef != '\0') goto label_05d41900;
label_05d41975:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    g_data_07547eef = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d41998;
label_05d41910:
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d4208a;
  iVar7 = System_Collections_Generic_Dictionary_int__object___get_Count
                    (pSVar2,(MethodInfo_4A0F320 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_get_Count);
  if (iVar7 == 0) {
label_05d41aab:
    pSVar9 = "NoEntries";
    pUVar4 = (__this->fields)._listContainer;
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar9 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar9,"",
                        "",(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar4,style,pSVar9,0,3,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (g_data_07547eef == '\0') goto label_05d41b7e;
label_05d419e8:
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07547eef != '\0') goto label_05d419e8;
label_05d41b7e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    g_data_07547eef = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x10);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a0,pSVar2,
               (MethodInfo_4A0FBD0 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_GetEnumerator);
    local_58.fields._getEnumeratorRetType = local_80;
    local_58.fields._36_4_ = uStack_7c;
    local_58.fields._current.fields.key = (Il2CppObject *)local_90;
    local_58.fields._current.fields.value = (Il2CppObject *)pAStack_88;
    local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_a0._0_8_;
    local_58.fields._version = local_a0._8_4_;
    local_58.fields._index = local_a0._12_4_;
    local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    iVar8 = 0;
    local_a0._8_8_ = &local_58;
    while (bVar6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                             (&local_58,
                              (MethodInfo_4CA10B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerEntry_MoveNext
                             ), pIVar5 = local_58.fields._current.fields.value, bVar6) {
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_0);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      if (__this_00 == (UI_ScoreboardModerationPanel___c__DisplayClass58_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      targetAddress = &__this_00->fields;
      (__this_00->fields).player = (Anticheat_PlayerEntry_o *)pIVar5;
      pUVar12 = (UI_ScoreboardModerationPanel_o *)targetAddress;
      Il2CppCodeGenWriteBarrier(&targetAddress->player);
      pSVar9 = UI_ScoreboardModerationPanel__GetPlayerDisplayName(pUVar12,targetAddress->player,method_00);
      bVar6 = UI_ScoreboardModerationPanel__MatchesSearch(__this,0,pSVar9,method);
      if (bVar6) {
        if (targetAddress->player == (Anticheat_PlayerEntry_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar10 = System_Int32__ToString(&(targetAddress->player->fields).ActorNumber,(MethodInfo *)0x0);
        method = (MethodInfo *)
                 System_String__Concat_5302810
                           ("#",pSVar10," ",pSVar9,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._listContainer;
        pUVar11 = (UI_ScoreboardModerationPanel_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        pUVar12 = pUVar11;
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Events_UnityAction_o *)pUVar11,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_0_PopulatePlayerList_b__0,
                   (MethodInfo *)0x0);
        UI_ScoreboardModerationPanel__CreateClickableEntry
                  (pUVar12,pUVar4,style,(System_String_o *)method,(UnityEngine_Events_UnityAction_o *)pUVar11,
                   in_R9);
        iVar8 = iVar8 + 1;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
              (&local_58,
               (MethodInfo_4CA11D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerEntry_Dispose);
label_05d41fb4:
    pSVar9 = "NoMatchingEntries";
    if (iVar8 == 0) {
      pUVar4 = (__this->fields)._listContainer;
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar9 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar9,"",
                          "",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(pUVar4,style,pSVar9,0,3,(MethodInfo *)0x0);
    }
    return;
  }
label_05d4208a:
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$BuildPlayerListFooter
// il2cpp: void UI_ScoreboardModerationPanel__BuildPlayerListFooter (UI_ScoreboardModerationPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d42170
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d422cb: jmp 0x5d422e5
// asm:   0x5d4237b: cmp byte ptr [rip + 0x1805b6b], 0
// asm:   0x5d42382: je 0x5d423c5
// asm:   0x5d423b2: jmp 0x5d4252a

void UI_ScoreboardModerationPanel__BuildPlayerListFooter
               (UI_ScoreboardModerationPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  char cVar1;
  uint32_t uVar2;
  Il2CppObject *object;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *pSVar4;
  UI_ScoreboardModerationPanel___c_StaticFields *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  
  if (Il2CppMethodInitialized_07547e94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_BuildPlayerListFooter_b__59_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c_BuildPlayerListFooter_b__59_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"BatchBan");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Refresh");
    Il2CppMethodInitialized_07547e94 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).DoublePanelLeft,10.0,3,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  targetAddress = &(__this->fields)._footerRow;
  (__this->fields)._footerRow = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar3 = (__this->fields)._footerRow;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocale
                     ("Common","Refresh","","",
                      "",(MethodInfo *)0x0);
  if ((TypeInfo_UI_ScoreboardModerationPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c);
    pUVar5 = TypeInfo_UI_ScoreboardModerationPanel_c->static_fields;
    pUVar6 = pUVar5->__9__59_0;
  }
  else {
    pUVar5 = TypeInfo_UI_ScoreboardModerationPanel_c->static_fields;
    pUVar6 = pUVar5->__9__59_0;
  }
  if (pUVar6 == (UnityEngine_Events_UnityAction_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c);
      pUVar5 = TypeInfo_UI_ScoreboardModerationPanel_c->static_fields;
    }
    object = (Il2CppObject *)pUVar5->__9;
    pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar6,object,(intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c_BuildPlayerListFooter_b__59_0
               ,(MethodInfo *)0x0);
    pUVar5 = TypeInfo_UI_ScoreboardModerationPanel_c->static_fields;
    pUVar5->__9__59_0 = pUVar6;
    Il2CppCodeGenWriteBarrier(&pUVar5->__9__59_0);
  }
  UI_ElementFactory__CreateDefaultButton(pUVar3,style,pSVar4,0.0,0.0,pUVar6,(MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07547eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eed = '\x01';
    uVar2 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = *(uint32_t *)((long)TypeInfo_Anticheat_ModeratorManager + 0xe4);
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    cVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
  }
  else {
    cVar1 = (*(Anticheat_ModeratorManager_StaticFields **)((long)TypeInfo_Anticheat_ModeratorManager + 0xb8))
            ->_IsAuthenticated_k__BackingField;
  }
  if (Il2CppMethodInitialized_07547eee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eee = '\x01';
    uVar2 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "BatchBan";
  }
  else {
    pSVar4 = "BatchBan";
  }
  if ((cVar1 == '\0') ||
     (*(int *)((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0xc) < 1)) {
    "BatchBan" = pSVar4;
    return;
  }
  pUVar3 = *targetAddress;
  "BatchBan" = pSVar4;
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar4,"",
                      "",(MethodInfo *)0x0);
  pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar6,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_BuildPlayerListFooter_b__59_1,(MethodInfo *)0x0
            );
  UI_ElementFactory__CreateDefaultButton(pUVar3,style,pSVar4,0.0,0.0,pUVar6,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel$$BuildPastPlayerFooter
// il2cpp: void UI_ScoreboardModerationPanel__BuildPastPlayerFooter (UI_ScoreboardModerationPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d42540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d42668: jmp 0x5d42683

void UI_ScoreboardModerationPanel__BuildPastPlayerFooter
               (UI_ScoreboardModerationPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  Il2CppObject *object;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  System_String_o *title;
  UI_ScoreboardModerationPanel___c_StaticFields *pUVar2;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_07547e95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c_BuildPastPlayerFooter_b__60_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Refresh");
    Il2CppMethodInitialized_07547e95 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).DoublePanelLeft,10.0,3,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  (__this->fields)._footerRow = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._footerRow);
  pUVar1 = (__this->fields)._footerRow;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  title = UI_UIManager__GetLocale
                    ("Common","Refresh","","",
                     "",(MethodInfo *)0x0);
  if ((TypeInfo_UI_ScoreboardModerationPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c);
    pUVar2 = TypeInfo_UI_ScoreboardModerationPanel_c->static_fields;
    __this_01 = pUVar2->__9__60_0;
  }
  else {
    pUVar2 = TypeInfo_UI_ScoreboardModerationPanel_c->static_fields;
    __this_01 = pUVar2->__9__60_0;
  }
  if (__this_01 == (UnityEngine_Events_UnityAction_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c);
      pUVar2 = TypeInfo_UI_ScoreboardModerationPanel_c->static_fields;
    }
    object = (Il2CppObject *)pUVar2->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_01,object,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c_BuildPastPlayerFooter_b__60_0,
               (MethodInfo *)0x0);
    pUVar2 = TypeInfo_UI_ScoreboardModerationPanel_c->static_fields;
    pUVar2->__9__60_0 = __this_01;
    Il2CppCodeGenWriteBarrier(&pUVar2->__9__60_0);
  }
  UI_ElementFactory__CreateDefaultButton(pUVar1,style,title,0.0,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel$$PopulateRoomBanList
// il2cpp: void UI_ScoreboardModerationPanel__PopulateRoomBanList (UI_ScoreboardModerationPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d42710
// eh: try 0x5d42863..0x5d42c09 -> pad 0x5d42c1a (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d42c34..0x5d42c39 -> pad 0x5d42c5e cleanup
// eh: try 0x5d42c61..0x5d42c6b -> pad 0x5d42c73 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4285f: nop 
// asm:   0x5d42c0e: jmp 0x5d42c1c
// asm:   0x5d42c10: jmp 0x5d42c1c
// asm:   0x5d42c12: jmp 0x5d42c1c
// asm:   0x5d42c14: jmp 0x5d42c1c
// asm:   0x5d42c16: jmp 0x5d42c1c
// asm:   0x5d42c18: jmp 0x5d42c1c
// asm:   0x5d42c1a: jmp 0x5d42c1c
// asm:   0x5d42c1c: mov rbx, rax
// asm:   0x5d42c1f: cmp edx, 1
// asm:   0x5d42c22: jne 0x5d42c61
// asm:   0x5d42c24: mov rdi, rbx
// asm:   0x5d42c27: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d42c2c: mov rbx, qword ptr [rax]
// asm:   0x5d42c2f: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d42c34: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d42c39: lea rax, [rip + 0x154bd08]  ; MethodInfo_System_Collections_Generic_List_Enumerator_RoomBanEntry_Dispose
// asm:   0x5d42c40: mov rsi, qword ptr [rax]
// asm:   0x5d42c43: lea rdi, [rsp + 0x30]
// asm:   0x5d42c48: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d42c4d: test rbx, rbx
// asm:   0x5d42c50: je 0x5d42976
// asm:   0x5d42c56: mov rdi, rbx
// asm:   0x5d42c59: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d42c5e: mov rbx, rax
// asm:   0x5d42c61: lea rdi, [rsp + 0x18]
// asm:   0x5d42c66: call 0x2fdc890  ; il2cpp_runtime_helper_02fdc890()
// asm:   0x5d42c6b: mov rdi, rbx
// asm:   0x5d42c6e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d42c73: mov rdi, rax
// asm:   0x5d42c76: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardModerationPanel__PopulateRoomBanList
               (UI_ScoreboardModerationPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  System_Collections_Generic_List_RoomBanEntry__o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int iVar4;
  UI_ScoreboardModerationPanel___c__DisplayClass61_0_o *__this_01;
  UI_ScoreboardModerationPanel_o *__this_02;
  System_String_o *pSVar5;
  System_String_o *first;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  UI_ScoreboardModerationPanel_o *__this_03;
  MethodInfo *in_R9;
  undefined1 local_70 [16];
  Anticheat_RoomBanEntry_o *local_60;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  UnityEngine_Transform_o *local_40;
  MethodInfo *local_38;
  
  if (Il2CppMethodInitialized_07547e96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RoomBanEntry_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RoomBanEntry_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RoomBanEntry_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RoomBanEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RoomBanEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass61_0_PopulateRoomBanList_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass61_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"NoMatchingEntries");
    il2cpp_codegen_initialize_runtime_metadata(&"NoEntries");
    il2cpp_codegen_initialize_runtime_metadata(&"Loading");
    il2cpp_codegen_initialize_runtime_metadata(&"...");
    Il2CppMethodInitialized_07547e96 = '\x01';
  }
  pSVar5 = "NoEntries";
  if ((__this->fields)._roomBanLoaded == false) {
    pUVar1 = (__this->fields)._listContainer;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    first = UI_UIManager__GetLocaleCommon("Loading",(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    pSVar5 = Gisketch_Aottg2UI_Styling_GisketchArabicText__Join
                       (first,"...",pSVar5,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar1,style,pSVar5,0,3,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547e9b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_07547e9b = '\x01';
    }
    if ((__this->fields)._roomBanRequestPending == false) {
      (__this->fields)._roomBanRequestPending = true;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RequestRoomBanList_5d33a70
                (0,0x32,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_00 = (__this->fields)._cachedRoomBans;
    if (__this_00 == (System_Collections_Generic_List_RoomBanEntry__o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((__this_00->fields)._size == 0) {
      pUVar1 = (__this->fields)._listContainer;
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar5 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar5,"",
                          "",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(pUVar1,style,pSVar5,0,3,(MethodInfo *)0x0);
      return;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_RoomBanEntry_GetEnumerator);
    local_58.fields._current = (Il2CppObject *)local_60;
    local_58.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
    local_58.fields._index = local_70._8_4_;
    local_58.fields._version = local_70._12_4_;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    iVar4 = 0;
    local_70._8_8_ = &local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_RoomBanEntry_MoveNext);
      pIVar2 = local_58.fields._current;
      if (!bVar3) break;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass61_0);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      if (__this_01 == (UI_ScoreboardModerationPanel___c__DisplayClass61_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_01->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
      if ((Anticheat_RoomBanEntry_o *)pIVar2 != (Anticheat_RoomBanEntry_o *)0x0) {
        pSVar5 = ((Anticheat_RoomBanEntry_Fields *)((long)pIVar2 + 0x10))->Username;
        if (pSVar5 == (System_String_o *)0x0) {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        bVar3 = UI_ScoreboardModerationPanel__MatchesSearch(__this,2,pSVar5,in_RCX);
        if (bVar3) {
          local_38 = (MethodInfo *)
                     UI_ScoreboardModerationPanel__BanEntryLabel
                               (((Anticheat_RoomBanEntry_Fields *)((long)pIVar2 + 0x10))->Username,
                                ((Anticheat_RoomBanEntry_Fields *)((long)pIVar2 + 0x10))->IsIPBan,method_00);
          (__this_01->fields).captured = (Anticheat_RoomBanEntry_o *)pIVar2;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).captured);
          local_40 = (__this->fields)._listContainer;
          __this_02 = (UI_ScoreboardModerationPanel_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          __this_03 = __this_02;
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Events_UnityAction_o *)__this_02,(Il2CppObject *)__this_01,
                     (intptr_t)
                     MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass61_0_PopulateRoomBanList_b__0,
                     (MethodInfo *)0x0);
          in_RCX = local_38;
          UI_ScoreboardModerationPanel__CreateClickableEntry
                    (__this_03,local_40,style,(System_String_o *)local_38,
                     (UnityEngine_Events_UnityAction_o *)__this_02,in_R9);
          iVar4 = iVar4 + 1;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_58,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_RoomBanEntry_Dispose);
    pSVar5 = "NoMatchingEntries";
    if (iVar4 == 0) {
      pUVar1 = (__this->fields)._listContainer;
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar5 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar5,"",
                          "",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(pUVar1,style,pSVar5,0,3,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.ScoreboardModerationPanel$$BuildRoomBanFooter
// il2cpp: void UI_ScoreboardModerationPanel__BuildRoomBanFooter (UI_ScoreboardModerationPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d42c80

void UI_ScoreboardModerationPanel__BuildRoomBanFooter
               (UI_ScoreboardModerationPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  System_Collections_Generic_List_RoomBanEntry__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RoomBanEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_ResetRoomBanPagination);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_BuildRoomBanFooter_b__62_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadMore");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Refresh");
    Il2CppMethodInitialized_07547e97 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).DoublePanelLeft,10.0,3,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    targetAddress = &(__this->fields)._footerRow;
    (__this->fields)._footerRow = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = (__this->fields)._footerRow;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocale
                       ("Common","Refresh","",
                        "","",(MethodInfo *)0x0);
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_ResetRoomBanPagination,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(pUVar2,style,pSVar3,0.0,0.0,pUVar4,(MethodInfo *)0x0);
    pSVar3 = "LoadMore";
    if (((__this->fields)._roomBanLoaded == false) || (-1 < (__this->fields)._roomBanNextStart)) {
      pUVar2 = *targetAddress;
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar3,"",
                          "",(MethodInfo *)0x0);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar4,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_BuildRoomBanFooter_b__62_0,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar2,style,pSVar3,0.0,0.0,pUVar4,(MethodInfo *)0x0);
      return;
    }
    pSVar1 = (__this->fields)._cachedRoomBans;
    if (pSVar1 != (System_Collections_Generic_List_RoomBanEntry__o *)0x0) {
      pUVar2 = (__this->fields)._footerRow;
      pSVar3 = UI_ScoreboardModerationPanel__LoadedAllText
                         ((pSVar1->fields)._size,(__this->fields)._roomBanCount,method_00);
      UI_ElementFactory__CreateDefaultLabel(pUVar2,style,pSVar3,0,3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$PopulateRegionBanList
// il2cpp: void UI_ScoreboardModerationPanel__PopulateRegionBanList (UI_ScoreboardModerationPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d42f30
// eh: try 0x5d43083..0x5d43429 -> pad 0x5d4343a (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d43454..0x5d43459 -> pad 0x5d4347e cleanup
// eh: try 0x5d43481..0x5d4348b -> pad 0x5d43493 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4307f: nop 
// asm:   0x5d4342e: jmp 0x5d4343c
// asm:   0x5d43430: jmp 0x5d4343c
// asm:   0x5d43432: jmp 0x5d4343c
// asm:   0x5d43434: jmp 0x5d4343c
// asm:   0x5d43436: jmp 0x5d4343c
// asm:   0x5d43438: jmp 0x5d4343c
// asm:   0x5d4343a: jmp 0x5d4343c
// asm:   0x5d4343c: mov rbx, rax
// asm:   0x5d4343f: cmp edx, 1
// asm:   0x5d43442: jne 0x5d43481
// asm:   0x5d43444: mov rdi, rbx
// asm:   0x5d43447: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d4344c: mov rbx, qword ptr [rax]
// asm:   0x5d4344f: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d43454: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d43459: lea rax, [rip + 0x154b3e0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_RegionBanEntry_Dispose
// asm:   0x5d43460: mov rsi, qword ptr [rax]
// asm:   0x5d43463: lea rdi, [rsp + 0x30]
// asm:   0x5d43468: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d4346d: test rbx, rbx
// asm:   0x5d43470: je 0x5d43196
// asm:   0x5d43476: mov rdi, rbx
// asm:   0x5d43479: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d4347e: mov rbx, rax
// asm:   0x5d43481: lea rdi, [rsp + 0x18]
// asm:   0x5d43486: call 0x2fdc8c0  ; il2cpp_runtime_helper_02fdc8c0()
// asm:   0x5d4348b: mov rdi, rbx
// asm:   0x5d4348e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d43493: mov rdi, rax
// asm:   0x5d43496: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardModerationPanel__PopulateRegionBanList
               (UI_ScoreboardModerationPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  System_Collections_Generic_List_RegionBanEntry__o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int iVar4;
  UI_ScoreboardModerationPanel___c__DisplayClass63_0_o *__this_01;
  UI_ScoreboardModerationPanel_o *__this_02;
  System_String_o *pSVar5;
  System_String_o *first;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  UI_ScoreboardModerationPanel_o *__this_03;
  MethodInfo *in_R9;
  undefined1 local_70 [16];
  Anticheat_RegionBanEntry_o *local_60;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  UnityEngine_Transform_o *local_40;
  MethodInfo *local_38;
  
  if (Il2CppMethodInitialized_07547e98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RegionBanEntry_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RegionBanEntry_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RegionBanEntry_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RegionBanEntry_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RegionBanEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass63_0_PopulateRegionBanList_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass63_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"NoMatchingEntries");
    il2cpp_codegen_initialize_runtime_metadata(&"NoEntries");
    il2cpp_codegen_initialize_runtime_metadata(&"Loading");
    il2cpp_codegen_initialize_runtime_metadata(&"...");
    Il2CppMethodInitialized_07547e98 = '\x01';
  }
  pSVar5 = "NoEntries";
  if ((__this->fields)._regionBanLoaded == false) {
    pUVar1 = (__this->fields)._listContainer;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    first = UI_UIManager__GetLocaleCommon("Loading",(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    pSVar5 = Gisketch_Aottg2UI_Styling_GisketchArabicText__Join
                       (first,"...",pSVar5,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar1,style,pSVar5,0,3,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547e9d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_07547e9d = '\x01';
    }
    if ((__this->fields)._regionBanRequestPending == false) {
      (__this->fields)._regionBanRequestPending = true;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RequestRegionBanList_5d34ff0
                (0,0x32,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_00 = (__this->fields)._cachedRegionBans;
    if (__this_00 == (System_Collections_Generic_List_RegionBanEntry__o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((__this_00->fields)._size == 0) {
      pUVar1 = (__this->fields)._listContainer;
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar5 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar5,"",
                          "",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(pUVar1,style,pSVar5,0,3,(MethodInfo *)0x0);
      return;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_RegionBanEntry_GetEnumerator);
    local_58.fields._current = (Il2CppObject *)local_60;
    local_58.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
    local_58.fields._index = local_70._8_4_;
    local_58.fields._version = local_70._12_4_;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    iVar4 = 0;
    local_70._8_8_ = &local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_RegionBanEntry_MoveNext);
      pIVar2 = local_58.fields._current;
      if (!bVar3) break;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass63_0);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      if (__this_01 == (UI_ScoreboardModerationPanel___c__DisplayClass63_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_01->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
      if ((Anticheat_RegionBanEntry_o *)pIVar2 != (Anticheat_RegionBanEntry_o *)0x0) {
        pSVar5 = ((Anticheat_RegionBanEntry_Fields *)((long)pIVar2 + 0x10))->Username;
        if (pSVar5 == (System_String_o *)0x0) {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        bVar3 = UI_ScoreboardModerationPanel__MatchesSearch(__this,3,pSVar5,in_RCX);
        if (bVar3) {
          local_38 = (MethodInfo *)
                     UI_ScoreboardModerationPanel__BanEntryLabel
                               (((Anticheat_RegionBanEntry_Fields *)((long)pIVar2 + 0x10))->Username,
                                ((Anticheat_RegionBanEntry_Fields *)((long)pIVar2 + 0x10))->IsIPBan,method_00)
          ;
          (__this_01->fields).captured = (Anticheat_RegionBanEntry_o *)pIVar2;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).captured);
          local_40 = (__this->fields)._listContainer;
          __this_02 = (UI_ScoreboardModerationPanel_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          __this_03 = __this_02;
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Events_UnityAction_o *)__this_02,(Il2CppObject *)__this_01,
                     (intptr_t)
                     MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass63_0_PopulateRegionBanList_b__0,
                     (MethodInfo *)0x0);
          in_RCX = local_38;
          UI_ScoreboardModerationPanel__CreateClickableEntry
                    (__this_03,local_40,style,(System_String_o *)local_38,
                     (UnityEngine_Events_UnityAction_o *)__this_02,in_R9);
          iVar4 = iVar4 + 1;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_58,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_RegionBanEntry_Dispose);
    pSVar5 = "NoMatchingEntries";
    if (iVar4 == 0) {
      pUVar1 = (__this->fields)._listContainer;
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar5 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar5,"",
                          "",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(pUVar1,style,pSVar5,0,3,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.ScoreboardModerationPanel$$BuildRegionBanFooter
// il2cpp: void UI_ScoreboardModerationPanel__BuildRegionBanFooter (UI_ScoreboardModerationPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d434a0

void UI_ScoreboardModerationPanel__BuildRegionBanFooter
               (UI_ScoreboardModerationPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  System_Collections_Generic_List_RegionBanEntry__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547e99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RegionBanEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_ResetRegionBanPagination);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_BuildRegionBanFooter_b__64_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadMore");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Refresh");
    Il2CppMethodInitialized_07547e99 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).DoublePanelLeft,10.0,3,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    targetAddress = &(__this->fields)._footerRow;
    (__this->fields)._footerRow = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = (__this->fields)._footerRow;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocale
                       ("Common","Refresh","",
                        "","",(MethodInfo *)0x0);
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_ResetRegionBanPagination,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(pUVar2,style,pSVar3,0.0,0.0,pUVar4,(MethodInfo *)0x0);
    pSVar3 = "LoadMore";
    if (((__this->fields)._regionBanLoaded == false) || (-1 < (__this->fields)._regionBanNextStart)) {
      pUVar2 = *targetAddress;
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar3,"",
                          "",(MethodInfo *)0x0);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar4,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_BuildRegionBanFooter_b__64_0,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar2,style,pSVar3,0.0,0.0,pUVar4,(MethodInfo *)0x0);
      return;
    }
    pSVar1 = (__this->fields)._cachedRegionBans;
    if (pSVar1 != (System_Collections_Generic_List_RegionBanEntry__o *)0x0) {
      pUVar2 = (__this->fields)._footerRow;
      pSVar3 = UI_ScoreboardModerationPanel__LoadedAllText
                         ((pSVar1->fields)._size,(__this->fields)._regionBanCount,method_00);
      UI_ElementFactory__CreateDefaultLabel(pUVar2,style,pSVar3,0,3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$ResetRoomBanPagination
// il2cpp: void UI_ScoreboardModerationPanel__ResetRoomBanPagination (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d43ee0

void UI_ScoreboardModerationPanel__ResetRoomBanPagination
               (UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int32_t length;
  System_Collections_Generic_List_RoomBanEntry__o *pSVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07547e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomBanEntry_Clear)
    ;
    Il2CppMethodInitialized_07547e9a = '\x01';
  }
  pSVar3 = (__this->fields)._cachedRoomBans;
  if (pSVar3 == (System_Collections_Generic_List_RoomBanEntry__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
  }
  (__this->fields)._roomBanCount = 0;
  (__this->fields)._roomBanNextStart = 0;
  (__this->fields)._roomBanLoaded = false;
  (__this->fields)._roomBanRequestPending = false;
  (__this->fields)._selectedRoomBan = (Anticheat_RoomBanEntry_o *)0x0;
  pMVar4 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedRoomBan);
  if (Il2CppMethodInitialized_07547e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547e9b = '\x01';
    cVar2 = (__this->fields)._roomBanRequestPending;
  }
  else {
    cVar2 = (__this->fields)._roomBanRequestPending;
  }
  if (cVar2 != '\0') {
    UI_ScoreboardModerationPanel__RefreshActiveTab(__this,pMVar4);
    return;
  }
  (__this->fields)._roomBanRequestPending = true;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pMVar4 = (MethodInfo *)&g_data_00000032;
  Anticheat_ModeratorManager__RequestRoomBanList_5d33a70
            (0,0x32,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
  UI_ScoreboardModerationPanel__RefreshActiveTab(__this,pMVar4);
  return;
}


// UI.ScoreboardModerationPanel$$RequestRoomBanPage
// il2cpp: void UI_ScoreboardModerationPanel__RequestRoomBanPage (UI_ScoreboardModerationPanel_o* __this, int32_t startIndex, bool reset, const MethodInfo* method);
// 0x5d43b70

void UI_ScoreboardModerationPanel__RequestRoomBanPage
               (UI_ScoreboardModerationPanel_o *__this,int32_t startIndex,bool reset,MethodInfo *method)

{
  int32_t startIndex_00;
  
  if (Il2CppMethodInitialized_07547e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547e9b = '\x01';
  }
  if (((__this->fields)._roomBanRequestPending == false) &&
     (((reset || ((__this->fields)._roomBanLoaded == false)) || (-1 < (__this->fields)._roomBanNextStart)))) {
    (__this->fields)._roomBanRequestPending = true;
    startIndex_00 = 0;
    if (0 < startIndex) {
      startIndex_00 = startIndex;
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RequestRoomBanList_5d33a70
              (startIndex_00,0x32,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ScoreboardModerationPanel$$ResetRegionBanPagination
// il2cpp: void UI_ScoreboardModerationPanel__ResetRegionBanPagination (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d43fe0

void UI_ScoreboardModerationPanel__ResetRegionBanPagination
               (UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int32_t length;
  System_Collections_Generic_List_RegionBanEntry__o *pSVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07547e9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RegionBanEntry_Clear);
    Il2CppMethodInitialized_07547e9c = '\x01';
  }
  pSVar3 = (__this->fields)._cachedRegionBans;
  if (pSVar3 == (System_Collections_Generic_List_RegionBanEntry__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
  }
  (__this->fields)._regionBanCount = 0;
  (__this->fields)._regionBanNextStart = 0;
  (__this->fields)._regionBanLoaded = false;
  (__this->fields)._regionBanRequestPending = false;
  (__this->fields)._selectedRegionBan = (Anticheat_RegionBanEntry_o *)0x0;
  pMVar4 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedRegionBan);
  if (Il2CppMethodInitialized_07547e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547e9d = '\x01';
    cVar2 = (__this->fields)._regionBanRequestPending;
  }
  else {
    cVar2 = (__this->fields)._regionBanRequestPending;
  }
  if (cVar2 != '\0') {
    UI_ScoreboardModerationPanel__RefreshActiveTab(__this,pMVar4);
    return;
  }
  (__this->fields)._regionBanRequestPending = true;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pMVar4 = (MethodInfo *)&g_data_00000032;
  Anticheat_ModeratorManager__RequestRegionBanList_5d34ff0
            (0,0x32,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
  UI_ScoreboardModerationPanel__RefreshActiveTab(__this,pMVar4);
  return;
}


// UI.ScoreboardModerationPanel$$RequestRegionBanPage
// il2cpp: void UI_ScoreboardModerationPanel__RequestRegionBanPage (UI_ScoreboardModerationPanel_o* __this, int32_t startIndex, bool reset, const MethodInfo* method);
// 0x5d43e40

void UI_ScoreboardModerationPanel__RequestRegionBanPage
               (UI_ScoreboardModerationPanel_o *__this,int32_t startIndex,bool reset,MethodInfo *method)

{
  int32_t startIndex_00;
  
  if (Il2CppMethodInitialized_07547e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547e9d = '\x01';
  }
  if (((__this->fields)._regionBanRequestPending == false) &&
     (((reset || ((__this->fields)._regionBanLoaded == false)) || (-1 < (__this->fields)._regionBanNextStart))
     )) {
    (__this->fields)._regionBanRequestPending = true;
    startIndex_00 = 0;
    if (0 < startIndex) {
      startIndex_00 = startIndex;
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RequestRegionBanList_5d34ff0
              (startIndex_00,0x32,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ScoreboardModerationPanel$$ClearDetailPanel
// il2cpp: void UI_ScoreboardModerationPanel__ClearDetailPanel (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d415a0

void UI_ScoreboardModerationPanel__ClearDetailPanel(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  UI_ScoreboardModerationPanel_o *__this_00;
  
  if (Il2CppMethodInitialized_07547e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e9e = '\x01';
  }
  __this_00 = (UI_ScoreboardModerationPanel_o *)(__this->fields)._detailContainer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  UI_ScoreboardModerationPanel__ClearContainer(__this_00,(__this->fields)._detailContainer,method_00);
  return;
}


// UI.ScoreboardModerationPanel$$SelectPlayer
// il2cpp: void UI_ScoreboardModerationPanel__SelectPlayer (UI_ScoreboardModerationPanel_o* __this, Anticheat_PlayerEntry_o* player, bool isActive, const MethodInfo* method);
// 0x5d440e0

void UI_ScoreboardModerationPanel__SelectPlayer
               (UI_ScoreboardModerationPanel_o *__this,Anticheat_PlayerEntry_o *player,bool isActive,
               MethodInfo *method)

{
  int32_t *__this_00;
  int iVar1;
  bool bVar2;
  UI_ScoreboardModerationPanel_o *__this_01;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_02;
  System_String_o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UI_ScoreboardModerationPanel_o *pUVar8;
  System_String_o **ppSVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  char cVar11;
  
  if (Il2CppMethodInitialized_07547e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__7);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__10);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__11);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__12);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__13);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionIpBan");
    il2cpp_codegen_initialize_runtime_metadata(&"RoomIpBan");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"SessionId");
    il2cpp_codegen_initialize_runtime_metadata(&"IpAddress");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionBan");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\x94");
    il2cpp_codegen_initialize_runtime_metadata(&"ViewProps");
    il2cpp_codegen_initialize_runtime_metadata(&"RoomBan");
    Il2CppMethodInitialized_07547e9f = '\x01';
  }
  __this_01 = (UI_ScoreboardModerationPanel_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (UI_ScoreboardModerationPanel_o *)0x0) goto label_05d45059;
  (__this_01->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).m_CancellationTokenSource);
  (__this->fields)._selectedPlayer = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedPlayer);
  (__this->fields)._selectedPlayerIsActive = isActive;
  if (Il2CppMethodInitialized_07547e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e9e = '\x01';
  }
  pUVar8 = (UI_ScoreboardModerationPanel_o *)(__this->fields)._detailContainer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    UI_ScoreboardModerationPanel__ClearContainer(pUVar8,(__this->fields)._detailContainer,method_00);
  }
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  if (player == (Anticheat_PlayerEntry_o *)0x0) goto label_05d45059;
  __this_00 = &(player->fields).ActorNumber;
  pUVar8 = (UI_ScoreboardModerationPanel_o *)__this_00;
  pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
  pSVar4 = UI_ScoreboardModerationPanel__GetPlayerDisplayName(pUVar8,player,method_01);
  pSVar4 = System_String__Concat_5302810
                     ("#",pSVar3," ",pSVar4,(MethodInfo *)0x0);
  pSVar3 = "LeftPlayer";
  pMVar10 = extraout_RDX;
  if (!isActive) {
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar3,"",
                        "",(MethodInfo *)0x0);
    pSVar4 = System_String__Format(pSVar3,(Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_00;
  }
  pUVar5 = UI_ScoreboardModerationPanel__CreateDetailsBox(__this,(__this->fields)._detailContainer,pMVar10);
  UI_ElementFactory__CreateDefaultLabel(pUVar5,__this_02,pSVar4,1,3,(MethodInfo *)0x0);
  pSVar3 = "SessionId";
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar10 = (MethodInfo *)0x0;
  pUVar8 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
  pSVar4 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar3,"",
                      "",(MethodInfo *)0x0);
  pSVar3 = (player->fields).SessionId;
  if (pSVar3 == (System_String_o *)0x0) goto label_05d45059;
  if ((pSVar3->fields)._stringLength < 1) {
    ppSVar9 = &"\xe2\x80\x94";
  }
  else {
    ppSVar9 = &(player->fields).SessionId;
  }
  UI_ScoreboardModerationPanel__AddDetailRow
            (pUVar8,pUVar5,__this_02,pSVar4,((Anticheat_PlayerEntry_Fields *)ppSVar9)->SessionId,pMVar10);
  pSVar3 = "IpAddress";
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar10 = (MethodInfo *)0x0;
  pUVar8 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
  pSVar4 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar3,"",
                      "",(MethodInfo *)0x0);
  pSVar3 = (player->fields).IPAddress;
  if (pSVar3 == (System_String_o *)0x0) goto label_05d45059;
  if ((pSVar3->fields)._stringLength < 1) {
    ppSVar9 = &"\xe2\x80\x94";
  }
  else {
    ppSVar9 = &(player->fields).IPAddress;
  }
  UI_ScoreboardModerationPanel__AddDetailRow(pUVar8,pUVar5,__this_02,pSVar4,*ppSVar9,pMVar10);
  *(int32_t *)&(__this_01->fields).m_CachedPtr = *__this_00;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07547eed == '\0') goto label_05d44bdb;
label_05d4462d:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d4463e;
label_05d44bff:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    cVar11 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
    if (Il2CppMethodInitialized_07547eee == '\0') goto label_05d44c20;
label_05d44656:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d44663;
label_05d44c40:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    iVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_07547eed != '\0') goto label_05d4462d;
label_05d44bdb:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eed = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d44bff;
label_05d4463e:
    cVar11 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
    if (Il2CppMethodInitialized_07547eee != '\0') goto label_05d44656;
label_05d44c20:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eee = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d44c40;
label_05d44663:
    iVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
  }
  if (isActive) {
    pUVar6 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields)._detailContainer,8.0,3,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
      pSVar3 = "Kick";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar3,"",
                          "",(MethodInfo *)0x0);
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar7,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__0,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar5,__this_02,pSVar3,0.0,0.0,pUVar7,(MethodInfo *)0x0);
      pSVar3 = "RoomBan";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar3,"",
                          "",(MethodInfo *)0x0);
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar7,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__1,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar5,__this_02,pSVar3,0.0,0.0,pUVar7,(MethodInfo *)0x0);
      pSVar3 = "RoomIpBan";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar3,"",
                          "",(MethodInfo *)0x0);
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar7,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__2,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar5,__this_02,pSVar3,0.0,0.0,pUVar7,(MethodInfo *)0x0);
      pSVar3 = "ViewProps";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar3,"",
                          "",(MethodInfo *)0x0);
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar7,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__3,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar5,__this_02,pSVar3,0.0,0.0,pUVar7,(MethodInfo *)0x0);
      if ((cVar11 == '\0') || (iVar1 < 1)) {
        return;
      }
      pUVar6 = UI_ElementFactory__CreateHorizontalGroup
                         ((__this->fields)._detailContainer,8.0,3,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        pSVar3 = "RegionBan";
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar3,"",
                            "",(MethodInfo *)0x0);
        pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar7,(Il2CppObject *)__this_01,
                   (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__6,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultButton(pUVar5,__this_02,pSVar3,0.0,0.0,pUVar7,(MethodInfo *)0x0);
        pSVar3 = "RegionIpBan";
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar3,"",
                            "",(MethodInfo *)0x0);
        pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        pMVar10 = MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__7;
        pUVar8 = __this_01;
label_05d45019:
        UnityEngine_Events_UnityAction___ctor
                  (pUVar7,(Il2CppObject *)pUVar8,(intptr_t)pMVar10,(MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultButton(pUVar5,__this_02,pSVar3,0.0,0.0,pUVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pUVar8 = (UI_ScoreboardModerationPanel_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1);
    System_Object___ctor((Il2CppObject *)pUVar8,(MethodInfo *)0x0);
    if (pUVar8 != (UI_ScoreboardModerationPanel_o *)0x0) {
      (((UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *)pUVar8)->fields).__4__this = __this_01;
      Il2CppCodeGenWriteBarrier
                (&(((UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *)pUVar8)->fields).__4__this);
      *(Anticheat_PlayerEntry_o **)&((UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *)pUVar8)->fields =
           player;
      Il2CppCodeGenWriteBarrier
                ((void **)&((UI_ScoreboardModerationPanel___c__DisplayClass70_0_o *)pUVar8)->fields);
      pUVar6 = UI_ElementFactory__CreateHorizontalGroup
                         ((__this->fields)._detailContainer,8.0,3,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        pSVar3 = "RoomBan";
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar3,"",
                            "",(MethodInfo *)0x0);
        pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar7,(Il2CppObject *)pUVar8,
                   (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__10,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultButton(pUVar5,__this_02,pSVar3,0.0,0.0,pUVar7,(MethodInfo *)0x0);
        pSVar3 = "RoomIpBan";
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar3,"",
                            "",(MethodInfo *)0x0);
        pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar7,(Il2CppObject *)pUVar8,
                   (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__11,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultButton(pUVar5,__this_02,pSVar3,0.0,0.0,pUVar7,(MethodInfo *)0x0);
        pSVar3 = "RegionBan";
        if (cVar11 == '\0') {
          return;
        }
        if (iVar1 < 1) {
          return;
        }
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar3,"",
                            "",(MethodInfo *)0x0);
        pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar7,(Il2CppObject *)pUVar8,
                   (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__12,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultButton(pUVar5,__this_02,pSVar3,0.0,0.0,pUVar7,(MethodInfo *)0x0);
        pSVar3 = "RegionIpBan";
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar3,"",
                            "",(MethodInfo *)0x0);
        pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        pMVar10 = MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__13;
        goto label_05d45019;
      }
    }
  }
label_05d45059:
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$SelectRoomBan
// il2cpp: void UI_ScoreboardModerationPanel__SelectRoomBan (UI_ScoreboardModerationPanel_o* __this, Anticheat_RoomBanEntry_o* entry, const MethodInfo* method);
// 0x5d45420

void UI_ScoreboardModerationPanel__SelectRoomBan
               (UI_ScoreboardModerationPanel_o *__this,Anticheat_RoomBanEntry_o *entry,MethodInfo *method)

{
  bool bVar1;
  UI_ScoreboardModerationPanel___c__DisplayClass71_0_o *__this_00;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *key;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityAction_o *__this_02;
  System_String_o **ppSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_ScoreboardModerationPanel_o *pUVar6;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_07547ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass71_0_SelectRoomBan_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass71_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"SessionBan");
    il2cpp_codegen_initialize_runtime_metadata(&"Unban");
    il2cpp_codegen_initialize_runtime_metadata(&"IpBan");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\x94");
    il2cpp_codegen_initialize_runtime_metadata(&"Reason");
    Il2CppMethodInitialized_07547ea0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass71_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_ScoreboardModerationPanel___c__DisplayClass71_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this->fields)._selectedRoomBan = entry;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedRoomBan);
    if (Il2CppMethodInitialized_07547e9e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547e9e = '\x01';
    }
    pUVar6 = (UI_ScoreboardModerationPanel_o *)(__this->fields)._detailContainer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      UI_ScoreboardModerationPanel__ClearContainer(pUVar6,(__this->fields)._detailContainer,method_00);
    }
    pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,pSVar2,(MethodInfo *)0x0);
    pUVar3 = UI_ScoreboardModerationPanel__CreateDetailsBox
                       (__this,(__this->fields)._detailContainer,method_01);
    if (entry != (Anticheat_RoomBanEntry_o *)0x0) {
      UI_ElementFactory__CreateDefaultLabel(pUVar3,__this_01,(entry->fields).Username,1,3,(MethodInfo *)0x0);
      pSVar2 = "Type";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      key = UI_UIManager__GetLocale
                      ("ScoreboardPopup","Moderation",pSVar2,"",
                       "",(MethodInfo *)0x0);
      pSVar4 = "SessionBan";
      pSVar2 = "IpBan";
      if ((entry->fields).IsIPBan == false) {
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pMVar7 = (MethodInfo *)0x0;
        pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
        pSVar2 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar4,"",
                            "",(MethodInfo *)0x0);
      }
      else {
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pMVar7 = (MethodInfo *)0x0;
        pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
        pSVar2 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar2,"",
                            "",(MethodInfo *)0x0);
      }
      UI_ScoreboardModerationPanel__AddDetailRow(pUVar6,pUVar3,__this_01,key,pSVar2,pMVar7);
      pSVar2 = "Reason";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pMVar7 = (MethodInfo *)0x0;
      pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
      pSVar4 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar2,"",
                          "",(MethodInfo *)0x0);
      pSVar2 = (entry->fields).Reason;
      if (pSVar2 != (System_String_o *)0x0) {
        if ((pSVar2->fields)._stringLength < 1) {
          ppSVar5 = &"\xe2\x80\x94";
        }
        else {
          ppSVar5 = &(entry->fields).Reason;
        }
        UI_ScoreboardModerationPanel__AddDetailRow(pUVar6,pUVar3,__this_01,pSVar4,*ppSVar5,pMVar7);
        if ((entry->fields).CanUnban == false) {
          return;
        }
        (__this_00->fields).captured = entry;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).captured);
        pSVar2 = "Unban";
        pUVar3 = (__this->fields)._detailContainer;
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar2 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar2,"",
                            "",(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (__this_02,(Il2CppObject *)__this_00,
                   (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass71_0_SelectRoomBan_b__0,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultButton(pUVar3,__this_01,pSVar2,0.0,0.0,__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$SelectRegionBan
// il2cpp: void UI_ScoreboardModerationPanel__SelectRegionBan (UI_ScoreboardModerationPanel_o* __this, Anticheat_RegionBanEntry_o* entry, const MethodInfo* method);
// 0x5d459c0

void UI_ScoreboardModerationPanel__SelectRegionBan
               (UI_ScoreboardModerationPanel_o *__this,Anticheat_RegionBanEntry_o *entry,MethodInfo *method)

{
  bool bVar1;
  UI_ScoreboardModerationPanel___c__DisplayClass72_0_o *__this_00;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *key;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityAction_o *__this_02;
  System_String_o **ppSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_ScoreboardModerationPanel_o *pUVar6;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_07547ea1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass72_0_SelectRegionBan_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass72_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"SessionBan");
    il2cpp_codegen_initialize_runtime_metadata(&"Unban");
    il2cpp_codegen_initialize_runtime_metadata(&"BannedBy");
    il2cpp_codegen_initialize_runtime_metadata(&"IpBan");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x80\x94");
    il2cpp_codegen_initialize_runtime_metadata(&"Reason");
    Il2CppMethodInitialized_07547ea1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass72_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_ScoreboardModerationPanel___c__DisplayClass72_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this->fields)._selectedRegionBan = entry;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedRegionBan);
    if (Il2CppMethodInitialized_07547e9e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547e9e = '\x01';
    }
    pUVar6 = (UI_ScoreboardModerationPanel_o *)(__this->fields)._detailContainer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      UI_ScoreboardModerationPanel__ClearContainer(pUVar6,(__this->fields)._detailContainer,method_00);
    }
    pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,pSVar2,(MethodInfo *)0x0);
    pUVar3 = UI_ScoreboardModerationPanel__CreateDetailsBox
                       (__this,(__this->fields)._detailContainer,method_01);
    if (entry != (Anticheat_RegionBanEntry_o *)0x0) {
      UI_ElementFactory__CreateDefaultLabel(pUVar3,__this_01,(entry->fields).Username,1,3,(MethodInfo *)0x0);
      pSVar2 = "Type";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      key = UI_UIManager__GetLocale
                      ("ScoreboardPopup","Moderation",pSVar2,"",
                       "",(MethodInfo *)0x0);
      pSVar4 = "SessionBan";
      pSVar2 = "IpBan";
      if ((entry->fields).IsIPBan == false) {
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pMVar7 = (MethodInfo *)0x0;
        pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
        pSVar2 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar4,"",
                            "",(MethodInfo *)0x0);
      }
      else {
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pMVar7 = (MethodInfo *)0x0;
        pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
        pSVar2 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar2,"",
                            "",(MethodInfo *)0x0);
      }
      UI_ScoreboardModerationPanel__AddDetailRow(pUVar6,pUVar3,__this_01,key,pSVar2,pMVar7);
      pSVar2 = "BannedBy";
      if (Il2CppMethodInitialized_07547ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
        Il2CppMethodInitialized_07547ea4 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pMVar7 = (MethodInfo *)0x0;
      pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
      pSVar4 = UI_UIManager__GetLocale
                         ("ScoreboardPopup","Moderation",pSVar2,"",
                          "",(MethodInfo *)0x0);
      pSVar2 = (entry->fields).BannedBy;
      if (pSVar2 != (System_String_o *)0x0) {
        if ((pSVar2->fields)._stringLength < 1) {
          ppSVar5 = &"\xe2\x80\x94";
        }
        else {
          ppSVar5 = &(entry->fields).BannedBy;
        }
        UI_ScoreboardModerationPanel__AddDetailRow(pUVar6,pUVar3,__this_01,pSVar4,*ppSVar5,pMVar7);
        pSVar2 = "Reason";
        if (Il2CppMethodInitialized_07547ea4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
          Il2CppMethodInitialized_07547ea4 = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pMVar7 = (MethodInfo *)0x0;
        pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
        pSVar4 = UI_UIManager__GetLocale
                           ("ScoreboardPopup","Moderation",pSVar2,"",
                            "",(MethodInfo *)0x0);
        pSVar2 = (entry->fields).Reason;
        if (pSVar2 != (System_String_o *)0x0) {
          if ((pSVar2->fields)._stringLength < 1) {
            ppSVar5 = &"\xe2\x80\x94";
          }
          else {
            ppSVar5 = &(entry->fields).Reason;
          }
          UI_ScoreboardModerationPanel__AddDetailRow(pUVar6,pUVar3,__this_01,pSVar4,*ppSVar5,pMVar7);
          (__this_00->fields).captured = entry;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).captured);
          pSVar2 = "Unban";
          pUVar3 = (__this->fields)._detailContainer;
          if (Il2CppMethodInitialized_07547ea4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
            il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
            il2cpp_codegen_initialize_runtime_metadata(&"");
            il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
            Il2CppMethodInitialized_07547ea4 = '\x01';
          }
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar2 = UI_UIManager__GetLocale
                             ("ScoreboardPopup","Moderation",pSVar2,"",
                              "",(MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (__this_02,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass72_0_SelectRegionBan_b__0,
                     (MethodInfo *)0x0);
          UI_ElementFactory__CreateDefaultButton(pUVar3,__this_01,pSVar2,0.0,0.0,__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$PromptReason
// il2cpp: void UI_ScoreboardModerationPanel__PromptReason (UI_ScoreboardModerationPanel_o* __this, System_String_o* actionTitle, System_Action_string__o* onSubmit, const MethodInfo* method);
// 0x5d46020

void UI_ScoreboardModerationPanel__PromptReason
               (UI_ScoreboardModerationPanel_o *__this,System_String_o *actionTitle,
               System_Action_string__o *onSubmit,MethodInfo *method)

{
  UI_ModerationReasonPopup_o *__this_00;
  
  __this_00 = (__this->fields)._reasonPopup;
  if (__this_00 == (UI_ModerationReasonPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_ModerationReasonPopup__Show(__this_00,actionTitle,onSubmit,method);
  return;
}


// UI.ScoreboardModerationPanel$$ShowPlayerProps
// il2cpp: void UI_ScoreboardModerationPanel__ShowPlayerProps (UI_ScoreboardModerationPanel_o* __this, int32_t actorNumber, const MethodInfo* method);
// 0x5d46040
// eh: try 0x5d464e0..0x5d46f6f -> pad 0x5d46fe2 (+62 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d46f75..0x5d46f82 -> pad 0x5d47044 catch (...) [compiler noexcept guard]
// eh: try 0x5d4700a..0x5d4700f -> pad 0x5d4702c cleanup
// eh: try 0x5d4702f..0x5d4703c -> pad 0x5d47044 catch (...) [compiler noexcept guard]
// asm: 115 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d464de: nop 
// asm:   0x5d4668f: jmp 0x5d46947
// asm:   0x5d466fa: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x5d46870: xor eax, eax
// asm:   0x5d46872: test rax, rax
// asm:   0x5d46875: je 0x5d4681d
// asm:   0x5d46877: jmp 0x5d46820
// asm:   0x5d468eb: xor r12d, r12d
// asm:   0x5d468ee: lea rax, [rip + 0x15b2623]  ; "null"
// asm:   0x5d468f5: test r12, r12
// asm:   0x5d468f8: jne 0x5d46947
// asm:   0x5d46b90: jmp 0x5d46bb8
// asm:   0x5d46d2f: jmp 0x5d46d3b
// asm:   0x5d46d31: jmp 0x5d46d3b
// asm:   0x5d46d33: jmp 0x5d46d3b
// asm:   0x5d46d35: jmp 0x5d46d3b
// asm:   0x5d46d37: jmp 0x5d46d3b
// asm:   0x5d46d39: jmp 0x5d46d3b
// asm:   0x5d46d3b: mov rbx, rdx
// asm:   0x5d46d3e: mov rbp, rax
// asm:   0x5d46d41: cmp ebx, 1
// asm:   0x5d46d44: jne 0x5d46f75
// asm:   0x5d46d4a: mov rdi, rbp
// asm:   0x5d46d4d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d46d52: mov r14, qword ptr [rax]
// asm:   0x5d46d55: mov qword ptr [rsp + 0xc0], r14
// asm:   0x5d46d5d: xor ebx, ebx
// asm:   0x5d46d5f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d46d64: jmp 0x5d46888
// asm:   0x5d46f18: lea rdi, [rsp + 0x70]
// asm:   0x5d46f1d: xor esi, esi
// asm:   0x5d46f1f: call 0x574f950  ; ExitGames_Client_Photon_DictionaryEntryEnumerator__Dispose()
// asm:   0x5d46f24: jmp 0x5d46f06
// asm:   0x5d46f4e: mov rdi, r14
// asm:   0x5d46f51: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d46f6f: mov rbx, rdx
// asm:   0x5d46f72: mov rbp, rax
// asm:   0x5d46f75: lea rdi, [rsp + 0xc0]
// asm:   0x5d46f7d: call 0x2fdc8f0  ; il2cpp_runtime_helper_02fdc8f0()
// asm:   0x5d46f82: jmp 0x5d46ff2
// asm:   0x5d46f84: jmp 0x5d46fec
// asm:   0x5d46f86: jmp 0x5d46fec
// asm:   0x5d46f88: jmp 0x5d46fec
// asm:   0x5d46f8a: jmp 0x5d46fec
// asm:   0x5d46f8c: jmp 0x5d46fec
// asm:   0x5d46f8e: jmp 0x5d46fec
// asm:   0x5d46f90: jmp 0x5d46fec
// asm:   0x5d46f92: jmp 0x5d46fec
// asm:   0x5d46f94: jmp 0x5d46fec
// asm:   0x5d46f96: jmp 0x5d46fec
// asm:   0x5d46f98: jmp 0x5d46fec
// asm:   0x5d46f9a: jmp 0x5d46fec
// asm:   0x5d46f9c: jmp 0x5d46fec
// asm:   0x5d46f9e: jmp 0x5d46fec
// asm:   0x5d46fa0: jmp 0x5d46fec
// asm:   0x5d46fa2: jmp 0x5d46fec
// asm:   0x5d46fa4: jmp 0x5d46fec
// asm:   0x5d46fa6: jmp 0x5d46fec
// asm:   0x5d46fa8: jmp 0x5d46fec
// asm:   0x5d46faa: jmp 0x5d46fec
// asm:   0x5d46fac: jmp 0x5d46fec
// asm:   0x5d46fae: jmp 0x5d46fec
// asm:   0x5d46fb0: jmp 0x5d46fec
// asm:   0x5d46fb2: jmp 0x5d46fec
// asm:   0x5d46fb4: jmp 0x5d46fec
// asm:   0x5d46fb6: jmp 0x5d46fec
// asm:   0x5d46fb8: jmp 0x5d46fec
// asm:   0x5d46fba: jmp 0x5d46fec
// asm:   0x5d46fbc: jmp 0x5d46fec
// asm:   0x5d46fbe: jmp 0x5d46fec
// asm:   0x5d46fc0: jmp 0x5d46fec
// asm:   0x5d46fc2: jmp 0x5d46fec
// asm:   0x5d46fc4: jmp 0x5d46fec
// asm:   0x5d46fc6: jmp 0x5d46fec
// asm:   0x5d46fc8: jmp 0x5d46fec
// asm:   0x5d46fca: jmp 0x5d46fec
// asm:   0x5d46fcc: jmp 0x5d46fec
// asm:   0x5d46fce: jmp 0x5d46fec
// asm:   0x5d46fd0: jmp 0x5d46fec
// asm:   0x5d46fd2: jmp 0x5d46fec
// asm:   0x5d46fd4: jmp 0x5d46fec
// asm:   0x5d46fd6: jmp 0x5d46fec
// asm:   0x5d46fd8: jmp 0x5d46fec
// asm:   0x5d46fda: jmp 0x5d46fec
// asm:   0x5d46fdc: jmp 0x5d46fec
// asm:   0x5d46fde: jmp 0x5d46fec
// asm:   0x5d46fe0: jmp 0x5d46fec
// asm:   0x5d46fe2: jmp 0x5d46fec
// asm:   0x5d46fe4: jmp 0x5d46fec
// asm:   0x5d46fe6: jmp 0x5d46fec
// asm:   0x5d46fe8: jmp 0x5d46fec
// asm:   0x5d46fea: jmp 0x5d46fec
// asm:   0x5d46fec: mov rbx, rdx
// asm:   0x5d46fef: mov rbp, rax
// asm:   0x5d46ff2: cmp ebx, 1
// asm:   0x5d46ff5: jne 0x5d4702f
// asm:   0x5d46ff7: mov rdi, rbp
// asm:   0x5d46ffa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d46fff: mov rbx, qword ptr [rax]
// asm:   0x5d47002: mov qword ptr [rsp + 0xb0], rbx
// asm:   0x5d4700a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d4700f: lea rdi, [rsp + 0x70]
// asm:   0x5d47014: xor esi, esi
// asm:   0x5d47016: call 0x574f950  ; ExitGames_Client_Photon_DictionaryEntryEnumerator__Dispose()
// asm:   0x5d4701b: test rbx, rbx
// asm:   0x5d4701e: je 0x5d46e22
// asm:   0x5d47024: mov rdi, rbx
// asm:   0x5d47027: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d4702c: mov rbp, rax
// asm:   0x5d4702f: lea rdi, [rsp + 0xb0]
// asm:   0x5d47037: call 0x2fdc990  ; il2cpp_runtime_helper_02fdc990()
// asm:   0x5d4703c: mov rdi, rbp
// asm:   0x5d4703f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d47044: mov rdi, rax
// asm:   0x5d47047: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardModerationPanel__ShowPlayerProps
               (UI_ScoreboardModerationPanel_o *__this,int32_t actorNumber,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_Hashtable_o *pEVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_String_array *pSVar6;
  Il2CppClass *pIVar7;
  bool bVar8;
  int32_t iVar9;
  UI_ScoreboardModerationPanel___c__DisplayClass74_0_o *__this_00;
  System_String_o *pSVar10;
  Photon_Realtime_Room_o *pPVar11;
  Photon_Realtime_Player_o *pPVar12;
  UI_ScoreboardModerationPanel___c__DisplayClass74_1_o *pUVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_string__o *__this_01;
  VirtualInvokeData *pVVar15;
  Il2CppClass *pIVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_LayoutElement_o *pUVar18;
  Settings_StringSetting_o *__this_02;
  System_String_o *pSVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_UI_InputField_o *__this_03;
  UnityEngine_Events_UnityAction_o *pUVar21;
  ulong uVar22;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar23;
  Il2CppObject *obj;
  UI_ScoreboardModerationPanel_o *__this_04;
  long lVar24;
  System_Collections_DictionaryEntry_o SVar25;
  Il2CppObject *pIStack_e8;
  UI_ElementStyle_o *pUStack_e0;
  Il2CppObject *pIStack_d8;
  UnityEngine_Transform_o *pUStack_d0;
  UI_ScoreboardModerationPanel___c__DisplayClass74_0_o *pUStack_c8;
  UI_ScoreboardModerationPanel___c__DisplayClass74_1_o *pUStack_c0;
  System_String_o *pSStack_b8;
  undefined1 auStack_b0 [16];
  Il2CppObject **ppIStack_a0;
  Il2CppObject *pIStack_98;
  Il2CppObject *pIStack_90;
  undefined8 uStack_88;
  UI_ElementStyle_o *pUStack_78;
  UnityEngine_Transform_o *pUStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  Il2CppObject *pIStack_40;
  int32_t iStack_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07547ea2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0_ShowPlayerProps_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_1_ShowPlayerProps_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"AddProp");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"NoProperties");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerProps");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"...");
    Il2CppMethodInitialized_07547ea2 = '\x01';
  }
  pIStack_98 = (Il2CppObject *)0x0;
  pIStack_90 = (Il2CppObject *)0x0;
  auStack_b0._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  ppIStack_a0 = (Il2CppObject **)0x0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  pIStack_e8 = (Il2CppObject *)0x0;
  auStack_b0._0_8_ = (Il2CppClass *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UI_ScoreboardModerationPanel___c__DisplayClass74_0_o *)0x0) {
label_05d46f60:
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).actorNumber = actorNumber;
  pUStack_c8 = __this_00;
  if (Il2CppMethodInitialized_07547e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547e9e = '\x01';
  }
  __this_04 = (UI_ScoreboardModerationPanel_o *)(__this->fields)._detailContainer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
    UI_ScoreboardModerationPanel__ClearContainer(__this_04,(__this->fields)._detailContainer,method_00);
  }
  pSVar10 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUStack_e0 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUStack_e0,0x18,200.0,20.0,pSVar10,(MethodInfo *)0x0);
  pSVar10 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUStack_78 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUStack_78,0x18,200.0,20.0,pSVar10,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar12 = (Photon_Realtime_Player_o *)0x0;
  pPVar11 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  pMVar23 = extraout_RDX;
  if (pPVar11 != (Photon_Realtime_Room_o *)0x0) {
    pPVar12 = (*(pPVar11->klass->vtable)._10_GetPlayer.methodPtr)
                        (pPVar11,(pUStack_c8->fields).actorNumber,false,
                         (pPVar11->klass->vtable)._10_GetPlayer.method);
    pMVar23 = extraout_RDX_00;
  }
  pUStack_d0 = UI_ScoreboardModerationPanel__CreateDetailsBox
                         (__this,(__this->fields)._detailContainer,pMVar23);
  pSVar10 = "PlayerProps";
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar10 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","Moderation",pSVar10,"",
                       "",(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUStack_d0,pUStack_e0,pSVar10,1,3,(MethodInfo *)0x0);
  if (pPVar12 != (Photon_Realtime_Player_o *)0x0) {
    pEVar4 = (pPVar12->fields)._CustomProperties_k__BackingField;
    if (pEVar4 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05d46f60;
    iVar9 = System_Collections_Generic_Dictionary_object__object___get_Count
                      ((System_Collections_Generic_Dictionary_object__object__o *)pEVar4,
                       (MethodInfo_4AAD0E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_get_Count);
    if (iVar9 != 0) {
      pEVar4 = (pPVar12->fields)._CustomProperties_k__BackingField;
      if (pEVar4 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05d46f60;
      pUVar20 = (UnityEngine_Transform_o *)0x0;
      ExitGames_Client_Photon_Hashtable__GetEnumerator
                ((ExitGames_Client_Photon_DictionaryEntryEnumerator_o *)auStack_58,pEVar4,(MethodInfo *)0x0);
      uStack_88._0_4_ = iStack_38;
      uStack_88._4_4_ = uStack_34;
      pIStack_98 = pIStack_48;
      pIStack_90 = pIStack_40;
      auStack_b0._8_8_ = auStack_58._0_8_;
      ppIStack_a0 = (Il2CppObject **)auStack_58._8_8_;
      uStack_68 = 0;
      puStack_60 = auStack_b0 + 8;
      pIStack_d8 = (Il2CppObject *)0x0;
      while( true ) {
        bVar8 = ExitGames_Client_Photon_DictionaryEntryEnumerator__MoveNext
                          ((ExitGames_Client_Photon_DictionaryEntryEnumerator_o *)(auStack_b0 + 8),
                           (MethodInfo *)0x0);
        pUStack_70 = pUVar20;
        if (!bVar8) break;
        SVar25 = ExitGames_Client_Photon_DictionaryEntryEnumerator__get_Current
                           ((ExitGames_Client_Photon_DictionaryEntryEnumerator_o *)(auStack_b0 + 8),
                            (MethodInfo *)0x0);
        obj = SVar25.fields._value;
        pIVar14 = SVar25.fields._key;
        pUVar13 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_1);
        System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
        if (pUVar13 == (UI_ScoreboardModerationPanel___c__DisplayClass74_1_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pUVar13->fields).CS___8__locals1 = pUStack_c8;
        pUStack_c0 = pUVar13;
        Il2CppCodeGenWriteBarrier(&(pUVar13->fields).CS___8__locals1);
        if (pIVar14 == (Il2CppObject *)0x0) {
label_05d46582:
          pSVar10 = *(System_String_o **)g_data_07556758->static_fields;
        }
        else {
          pIStack_d8 = pIVar14;
          if (pIVar14 == (Il2CppObject *)0x0) goto label_05d46f26;
          pSVar10 = (System_String_o *)
                    (*pIVar14->klass->vtable[3].methodPtr)(pIVar14,pIVar14->klass->vtable[3].method);
          if (pSVar10 == (System_String_o *)0x0) goto label_05d46582;
        }
        pIVar14 = il2cpp_vm_Object_IsInst(obj,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable);
        pSStack_b8 = pSVar10;
        if (pIVar14 == (Il2CppObject *)0x0) {
          if (obj != (Il2CppObject *)0x0) {
            pIVar16 = obj->klass;
            goto label_05d4666c;
          }
label_05d468fa:
          pSVar10 = "null";
        }
        else if ((obj == (Il2CppObject *)0x0) || (pIVar16 = g_data_07556758, obj->klass != g_data_07556758)) {
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          pIVar16 = pIVar14->klass;
          uVar22 = (ulong)(pIVar16->_2).interface_offsets_count;
          if (uVar22 != 0) {
            pIVar5 = (pIVar16->_1).interfaceOffsets;
            lVar24 = 0;
            do {
              if (*(System_Collections_IEnumerable_c **)((long)&pIVar5->interfaceType + lVar24) ==
                  TypeInfo_System_Collections_IEnumerable) {
                pVVar15 = pIVar16->vtable + *(int *)((long)&pIVar5->offset + lVar24);
                goto label_05d466a7;
              }
              lVar24 = lVar24 + 0x10;
            } while (uVar22 * 0x10 != lVar24);
          }
          pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar14,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_05d466a7:
          pIStack_e8 = (Il2CppObject *)(*pVVar15->methodPtr)(pIVar14,pVVar15->method);
          auStack_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          auStack_58._8_8_ = &pIStack_e8;
          pIStack_48 = (Il2CppObject *)auStack_b0;
label_05d466ff:
          pIVar14 = pIStack_e8;
          if (pIStack_e8 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar16 = pIStack_e8->klass;
          uVar22 = (ulong)(pIVar16->_2).interface_offsets_count;
          if (uVar22 != 0) {
            pIVar5 = (pIVar16->_1).interfaceOffsets;
            lVar24 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar24) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar15 = pIVar16->vtable + *(int *)((long)&pIVar5->offset + lVar24);
                goto label_05d46763;
              }
              lVar24 = lVar24 + 0x10;
            } while (uVar22 * 0x10 != lVar24);
          }
          pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIStack_e8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d46763:
          bVar8 = (*pVVar15->methodPtr)(pIVar14,pVVar15->method);
          pIVar14 = pIStack_e8;
          if (bVar8) {
            if (pIStack_e8 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar16 = pIStack_e8->klass;
            uVar22 = (ulong)(pIVar16->_2).interface_offsets_count;
            if (uVar22 != 0) {
              pIVar5 = (pIVar16->_1).interfaceOffsets;
              lVar24 = 0;
              do {
                if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar24) ==
                    TypeInfo_System_Collections_IEnumerator) {
                  pVVar15 = pIVar16->vtable + (*(int *)((long)&pIVar5->offset + lVar24) + 1);
                  goto label_05d467f7;
                }
                lVar24 = lVar24 + 0x10;
              } while (uVar22 * 0x10 != lVar24);
            }
            pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                                (pIStack_e8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05d467f7:
            pIVar14 = (*pVVar15->methodPtr)(pIVar14,pVVar15->method);
            if (pIVar14 == (Il2CppObject *)0x0) {
label_05d4681d:
              pSVar10 = "null";
            }
            else {
              pSVar10 = (System_String_o *)
                        (*pIVar14->klass->vtable[3].methodPtr)(pIVar14,pIVar14->klass->vtable[3].method);
              if (pSVar10 == (System_String_o *)0x0) goto label_05d4681d;
            }
            pMVar23 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
label_05d46d11:
              ThrowNullReferenceException();
            }
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_01->fields)._items;
            if (pSVar6 == (System_String_array *)0x0) goto label_05d46d11;
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar6->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pSVar6->m_Items[(int)uVar2] = pSVar10;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar10,
                         (MethodInfo_395D230 *)pMVar23->klass->rgctx_data[0xe].method);
            }
            goto label_05d466ff;
          }
          pIVar16 = (Il2CppClass *)
                    il2cpp_vm_Object_IsInst(pIStack_e8,(Il2CppClass *)TypeInfo_System_IDisposable);
          auStack_b0._0_8_ = pIVar16;
          if (pIVar16 != (Il2CppClass *)0x0) {
            pIVar7 = (pIVar16->_1).image;
            uVar22 = (ulong)(pIVar7->_2).interface_offsets_count;
            if (uVar22 != 0) {
              pIVar5 = (pIVar7->_1).interfaceOffsets;
              lVar24 = 0;
              do {
                if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar24) ==
                    TypeInfo_System_IDisposable) {
                  pVVar15 = pIVar7->vtable + *(int *)((long)&pIVar5->offset + lVar24);
                  goto label_05d46911;
                }
                lVar24 = lVar24 + 0x10;
              } while (uVar22 * 0x10 != lVar24);
            }
            pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                                ((Il2CppObject *)pIVar16,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d46911:
            (*pVVar15->methodPtr)((Il2CppObject *)pIVar16,pVVar15->method);
          }
          pSVar10 = System_String__Join_5303350
                              (", ",
                               (System_Collections_Generic_IEnumerable_string__o *)__this_01,(MethodInfo *)0x0
                              );
        }
        else {
label_05d4666c:
          pSVar10 = (System_String_o *)(*pIVar16->vtable[3].methodPtr)(obj,pIVar16->vtable[3].method);
          if (pSVar10 == (System_String_o *)0x0) goto label_05d468fa;
        }
        pUVar17 = UI_ElementFactory__CreateHorizontalGroup(pUStack_d0,6.0,3,(MethodInfo *)0x0);
        if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        parent = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
        if (parent == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
        if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar18 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar17,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
        if (pUVar18 == (UnityEngine_UI_LayoutElement_o *)0x0) {
          pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0)
          ;
          if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar18 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar17,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
          if (pUVar18 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d46f26;
        }
        (*(pUVar18->klass->vtable)._40_set_flexibleWidth.methodPtr)
                  (pUVar18,1.0,(pUVar18->klass->vtable)._40_set_flexibleWidth.method);
        pSVar19 = pSVar10;
        if (pSVar10 == (System_String_o *)0x0) {
          pSVar19 = *(System_String_o **)g_data_07556758->static_fields;
        }
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
        Settings_StringSetting___ctor_5b7b730(__this_02,pSVar19,0x7fffffff,(MethodInfo *)0x0);
        pSVar19 = System_String__Concat_52f0320(pSStack_b8,":",(MethodInfo *)0x0);
        pUVar17 = UI_ElementFactory__CreateInputSetting
                            (parent,pUStack_78,(Settings_BaseSetting_o *)__this_02,pSVar19,
                             "",300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar18 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar17,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
        if ((pUVar18 == (UnityEngine_UI_LayoutElement_o *)0x0) &&
           (pUVar18 = UnityEngine_GameObject__AddComponent_object_
                                (pUVar17,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
           pUVar18 == (UnityEngine_UI_LayoutElement_o *)0x0)) {
          ThrowNullReferenceException();
        }
        (*(pUVar18->klass->vtable)._32_set_minWidth.methodPtr)
                  (pUVar18,0.0,(pUVar18->klass->vtable)._32_set_minWidth.method);
        (*(pUVar18->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (pUVar18,-1.0,(pUVar18->klass->vtable)._36_set_preferredWidth.method);
        (*(pUVar18->klass->vtable)._40_set_flexibleWidth.methodPtr)
                  (pUVar18,1.0,(pUVar18->klass->vtable)._40_set_flexibleWidth.method);
        pUVar20 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
        if (pUVar20 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar20 = UnityEngine_Transform__Find(pUVar20,"InputField",(MethodInfo *)0x0);
        if (pUVar20 == (UnityEngine_Transform_o *)0x0) {
          __this_03 = (UnityEngine_UI_InputField_o *)0x0;
          uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
          pUVar20 = pUStack_70;
        }
        else {
          if (pUVar20 == (UnityEngine_Transform_o *)0x0) {
label_05d46f26:
            ThrowNullReferenceException();
          }
          __this_03 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar20,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_InputField);
          uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar8) {
          if (__this_03 == (UnityEngine_UI_InputField_o *)0x0) {
            ThrowNullReferenceException();
          }
          (__this_03->fields).m_ReadOnly = true;
          pUVar18 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_03,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
          if (pUVar18 == (UnityEngine_UI_LayoutElement_o *)0x0) {
            pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar18 = UnityEngine_GameObject__AddComponent_object_
                                (pUVar17,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
            if (pUVar18 == (UnityEngine_UI_LayoutElement_o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          (*(pUVar18->klass->vtable)._32_set_minWidth.methodPtr)
                    (pUVar18,80.0,(pUVar18->klass->vtable)._32_set_minWidth.method);
          (*(pUVar18->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar18,300.0,(pUVar18->klass->vtable)._36_set_preferredWidth.method);
          (*(pUVar18->klass->vtable)._40_set_flexibleWidth.methodPtr)
                    (pUVar18,1.0,(pUVar18->klass->vtable)._40_set_flexibleWidth.method);
          UnityEngine_UI_InputField__ForceLabelUpdate(__this_03,(MethodInfo *)0x0);
        }
        pUVar13 = pUStack_c0;
        (pUStack_c0->fields).capturedKey = pSStack_b8;
        Il2CppCodeGenWriteBarrier(&(pUStack_c0->fields).capturedKey);
        (pUVar13->fields).capturedValue = pSVar10;
        Il2CppCodeGenWriteBarrier(&(pUVar13->fields).capturedValue);
        pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar21,(Il2CppObject *)pUStack_c0,
                   (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_1_ShowPlayerProps_b__1,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultButton
                  (parent,pUStack_e0,"...",36.0,0.0,pUVar21,(MethodInfo *)0x0);
      }
      ExitGames_Client_Photon_DictionaryEntryEnumerator__Dispose
                ((ExitGames_Client_Photon_DictionaryEntryEnumerator_o *)(auStack_b0 + 8),(MethodInfo *)0x0);
      goto label_05d46e22;
    }
  }
  pSVar10 = "NoProperties";
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar10 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","Moderation",pSVar10,"",
                       "",(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUStack_d0,pUStack_e0,pSVar10,0,3,(MethodInfo *)0x0);
label_05d46e22:
  pSVar10 = "AddProp";
  pUVar20 = (__this->fields)._detailContainer;
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar10 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","Moderation",pSVar10,"",
                       "",(MethodInfo *)0x0);
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar21,(Il2CppObject *)pUStack_c8,
             (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0_ShowPlayerProps_b__0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultButton(pUVar20,pUStack_e0,pSVar10,0.0,0.0,pUVar21,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel$$GetAuthStatusText
// il2cpp: System_String_o* UI_ScoreboardModerationPanel__GetAuthStatusText (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d405f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d40618: cmp byte ptr [rip + 0x18078ce], 0

System_String_o *
UI_ScoreboardModerationPanel__GetAuthStatusText(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547ea3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"NotAuthenticated");
    il2cpp_codegen_initialize_runtime_metadata(&"AuthenticatedAs");
    Il2CppMethodInitialized_07547ea3 = '\x01';
    uVar2 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07547eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eed = '\x01';
    uVar2 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    cVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
    pSVar3 = "AuthenticatedAs";
    pSVar4 = "NotAuthenticated";
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 8);
    pSVar3 = "AuthenticatedAs";
    pSVar4 = "NotAuthenticated";
  }
  "AuthenticatedAs" = pSVar3;
  "NotAuthenticated" = pSVar4;
  if (cVar1 == '\0') {
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar4,"",
                        "",(MethodInfo *)0x0);
    return pSVar3;
  }
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar3,"",
                      "",(MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar4 = Anticheat_ModeratorManager__get_AuthUsername((MethodInfo *)0x0);
  pSVar3 = System_String__Format(pSVar3,(Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.ScoreboardModerationPanel$$Locale
// il2cpp: System_String_o* UI_ScoreboardModerationPanel__Locale (System_String_o* item, const MethodInfo* method);
// 0x5d40cf0

System_String_o * UI_ScoreboardModerationPanel__Locale(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",item,"",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ScoreboardModerationPanel$$BanEntryLabel
// il2cpp: System_String_o* UI_ScoreboardModerationPanel__BanEntryLabel (System_String_o* username, bool ipBan, const MethodInfo* method);
// 0x5d43c10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d43c22: test bl, bl
// asm:   0x5d43c24: je 0x5d43c5e
// asm:   0x5d43c39: jmp 0x5d43ca8

System_String_o *
UI_ScoreboardModerationPanel__BanEntryLabel(System_String_o *username,bool ipBan,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547ea5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SessionBanEntry");
    il2cpp_codegen_initialize_runtime_metadata(&"IpBanEntry");
    Il2CppMethodInitialized_07547ea5 = '\x01';
  }
  if (ipBan) {
    pSVar1 = "IpBanEntry";
  }
  else {
    pSVar1 = "SessionBanEntry";
  }
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar1,"",
                      "",(MethodInfo *)0x0);
  pSVar1 = System_String__Format(pSVar1,(Il2CppObject *)username,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ScoreboardModerationPanel$$LoadedAllText
// il2cpp: System_String_o* UI_ScoreboardModerationPanel__LoadedAllText (int32_t loaded, int32_t total, const MethodInfo* method);
// 0x5d43d00
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d43d19: lea rax, [rip + 0x159d508]  ; "LoadedAll"
// asm:   0x5d43d20: mov rbx, qword ptr [rax]
// asm:   0x5d43d23: cmp byte ptr [rip + 0x180417a], 0
// asm:   0x5d43d2a: je 0x5d43de7

System_String_o * UI_ScoreboardModerationPanel__LoadedAllText(int32_t loaded,int32_t total,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  int32_t local_28;
  int32_t local_24;
  
  pSVar2 = "LoadedAll";
  if (Il2CppMethodInitialized_07547ea6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadedAll");
    Il2CppMethodInitialized_07547ea6 = '\x01';
    pSVar2 = "LoadedAll";
  }
  "LoadedAll" = pSVar2;
  if (Il2CppMethodInitialized_07547ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ea4 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","Moderation",pSVar2,"",
                      "",(MethodInfo *)0x0);
  local_24 = loaded;
  arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_24);
  _local_28 = CONCAT44(local_24,total);
  arg1 = il2cpp_vm_Object_Box(g_data_07556710,&local_28);
  pSVar2 = System_String__Format_5302c50(pSVar2,arg0,arg1,(MethodInfo *)0x0);
  return pSVar2;
}


// UI.ScoreboardModerationPanel$$SetStatus
// il2cpp: void UI_ScoreboardModerationPanel__SetStatus (UI_ScoreboardModerationPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x5d47070

void UI_ScoreboardModerationPanel__SetStatus
               (UI_ScoreboardModerationPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  UI_ScoreboardModerationPanel_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ea7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    __this_00 = (UI_ScoreboardModerationPanel_o *)(__this->fields)._authLabel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._authLabel;
      pSVar3 = UI_ScoreboardModerationPanel__GetAuthStatusText(__this_00,method_00);
      if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_05d47194;
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
    }
    pUVar1 = (__this->fields)._statusLabel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._statusLabel;
      if (text == (System_String_o *)0x0) {
        text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,text,(pUVar1->klass->vtable)._75_set_text.method);
        return;
      }
label_05d47194:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ScoreboardModerationPanel$$GetPlayerDisplayName
// il2cpp: System_String_o* UI_ScoreboardModerationPanel__GetPlayerDisplayName (UI_ScoreboardModerationPanel_o* __this, Anticheat_PlayerEntry_o* player, const MethodInfo* method);
// 0x5d43760
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d437ea: jmp 0x5d4389b

System_String_o *
UI_ScoreboardModerationPanel__GetPlayerDisplayName
          (UI_ScoreboardModerationPanel_o *__this,Anticheat_PlayerEntry_o *player,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Room_o *pPVar2;
  Photon_Realtime_Player_o *player_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547ea8 = '\x01';
  }
  if (player == (Anticheat_PlayerEntry_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__IsNullOrEmpty((player->fields).Username,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    }
    else {
      pPVar2 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    }
    if ((pPVar2 != (Photon_Realtime_Room_o *)0x0) &&
       (player_00 = (*(pPVar2->klass->vtable)._10_GetPlayer.methodPtr)
                              (pPVar2,(player->fields).ActorNumber,false,
                               (pPVar2->klass->vtable)._10_GetPlayer.method),
       player_00 != (Photon_Realtime_Player_o *)0x0)) {
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar3 = PhotonExtensions__GetStringProperty
                         (player_00,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                          "",(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (!bVar1) goto label_05d437f3;
    }
    pSVar3 = "Unknown";
    if (Il2CppMethodInitialized_07547ea4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547ea4 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","Moderation",pSVar3,"",
                        "",(MethodInfo *)0x0);
    return pSVar3;
  }
  pSVar3 = (player->fields).Username;
label_05d437f3:
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar3 = MiscExtensions__StripColor(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.ScoreboardModerationPanel$$StyleListBox
// il2cpp: void UI_ScoreboardModerationPanel__StyleListBox (UI_ScoreboardModerationPanel_o* __this, UnityEngine_GameObject_o* box, const MethodInfo* method);
// 0x5d40d80

void UI_ScoreboardModerationPanel__StyleListBox
               (UI_ScoreboardModerationPanel_o *__this,UnityEngine_GameObject_o *box,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_UI_Outline_o *__this_00;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07547ea9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_Outline_71aa970);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameListOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameListBg");
    Il2CppMethodInitialized_07547ea9 = '\x01';
  }
  if (box != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (box,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    pGVar1 = (__this->fields)._view;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      UVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__ThemeColor
                        (pGVar1,"inGameListBg",(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                  (pUVar2,UVar3,(pUVar2->klass->vtable)._23_set_color.method);
        __this_00 = UnityEngine_GameObject__AddComponent_object_
                              (box,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_Outline_71aa970);
        pGVar1 = (__this->fields)._view;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
          UVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__ThemeColor
                            (pGVar1,"inGameListOutline",(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_UI_Outline_o *)0x0) {
            UnityEngine_UI_Shadow__set_effectColor
                      ((UnityEngine_UI_Shadow_o *)__this_00,UVar3,(MethodInfo *)0x0);
            UnityEngine_UI_Shadow__set_effectDistance
                      ((UnityEngine_UI_Shadow_o *)__this_00,(UnityEngine_Vector2_o)0xbf8000003f800000,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$CreateDetailsBox
// il2cpp: UnityEngine_Transform_o* UI_ScoreboardModerationPanel__CreateDetailsBox (UI_ScoreboardModerationPanel_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5d45070

UnityEngine_Transform_o *
UI_ScoreboardModerationPanel__CreateDetailsBox
          (UI_ScoreboardModerationPanel_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *box;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_00;
  UnityEngine_RectOffset_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547eaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    Il2CppMethodInitialized_07547eaa = '\x01';
  }
  box = UI_ElementFactory__CreateVerticalGroup(parent,6.0,0,(MethodInfo *)0x0);
  UI_ScoreboardModerationPanel__StyleListBox(__this,box,method_00);
  UI_ScoreboardModerationPanel__RegisterFadeSyncGroup(__this,box,method_01);
  if (box == (UnityEngine_GameObject_o *)0x0) {
label_05d45223:
    ThrowNullReferenceException();
  }
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        (box,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
    UnityEngine_RectOffset___ctor_68cd0a0(__this_01,10,10,8,8,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_05d45223;
    UnityEngine_UI_LayoutGroup__set_padding
              ((UnityEngine_UI_LayoutGroup_o *)__this_00,__this_01,(MethodInfo *)0x0);
    UnityEngine_UI_LayoutGroup__set_childAlignment
              ((UnityEngine_UI_LayoutGroup_o *)__this_00,0,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
  }
  pUVar2 = UnityEngine_GameObject__GetComponent_object_
                     (box,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (box,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                       );
    if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d45223;
  }
  (*(pUVar2->klass->vtable)._40_set_flexibleWidth.methodPtr)
            (pUVar2,1.0,(pUVar2->klass->vtable)._40_set_flexibleWidth.method);
  pUVar3 = UnityEngine_GameObject__get_transform(box,(MethodInfo *)0x0);
  return pUVar3;
}


// UI.ScoreboardModerationPanel$$AddDetailTitle
// il2cpp: void UI_ScoreboardModerationPanel__AddDetailTitle (UI_ScoreboardModerationPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, const MethodInfo* method);
// 0x5d45230

void UI_ScoreboardModerationPanel__AddDetailTitle
               (UI_ScoreboardModerationPanel_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,System_String_o *title,MethodInfo *method)

{
  UI_ElementFactory__CreateDefaultLabel(parent,style,title,1,3,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel$$AddDetailRow
// il2cpp: void UI_ScoreboardModerationPanel__AddDetailRow (UI_ScoreboardModerationPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x5d45250

void UI_ScoreboardModerationPanel__AddDetailRow
               (UI_ScoreboardModerationPanel_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,System_String_o *key,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  Settings_StringSetting_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_InputField_o *__this_02;
  
  if (Il2CppMethodInitialized_07547eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547eab = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,value,0x7fffffff,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateInputSetting
                        (parent,style,(Settings_BaseSetting_o *)__this_00,key,"",240.0,40.0
                         ,false,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"InputField",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this_02 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar2,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_InputField);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if (__this_02 != (UnityEngine_UI_InputField_o *)0x0) {
        (__this_02->fields).m_ReadOnly = true;
        UnityEngine_UI_InputField__ForceLabelUpdate(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$CreateClickableEntry
// il2cpp: void UI_ScoreboardModerationPanel__CreateClickableEntry (UI_ScoreboardModerationPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* text, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x5d43940

void UI_ScoreboardModerationPanel__CreateClickableEntry
               (UI_ScoreboardModerationPanel_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,System_String_o *text,UnityEngine_Events_UnityAction_o *onClick,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  UnityEngine_UI_LayoutElement_o *x;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *__this_02;
  
  if (Il2CppMethodInitialized_07547eac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_07547eac = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateDefaultButton(parent,style,text,0.0,28.0,onClick,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_05d43b5a;
      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,0,(MethodInfo *)0x0);
      UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,0,(MethodInfo *)0x0);
    }
    x = UnityEngine_GameObject__GetComponent_object_
                  (__this_00,
                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d43b5a;
      (*(x->klass->vtable)._34_set_minHeight.methodPtr)(x,28.0,(x->klass->vtable)._34_set_minHeight.method);
      (*(x->klass->vtable)._38_set_preferredHeight.methodPtr)
                (x,28.0,(x->klass->vtable)._38_set_preferredHeight.method);
      (*(x->klass->vtable)._40_set_flexibleWidth.methodPtr)
                (x,1.0,(x->klass->vtable)._40_set_flexibleWidth.method);
      (*(x->klass->vtable)._42_set_flexibleHeight.methodPtr)
                (x,0.0,(x->klass->vtable)._42_set_flexibleHeight.method);
    }
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this_02 = (UnityEngine_UI_Text_o *)0x0;
      pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        __this_02 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar2,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_alignment(__this_02,3,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d43b5a:
  ThrowNullReferenceException();
}


// UI.ScoreboardModerationPanel$$ClearContainer
// il2cpp: void UI_ScoreboardModerationPanel__ClearContainer (UI_ScoreboardModerationPanel_o* __this, UnityEngine_Transform_o* container, const MethodInfo* method);
// 0x5d41140
// eh: try 0x5d411f0..0x5d41368 -> pad 0x5d41375 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d41393..0x5d41398 -> pad 0x5d41431 cleanup
// eh: try 0x5d41434..0x5d4143e -> pad 0x5d41446 catch (...) [compiler noexcept guard]
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4136d: jmp 0x5d41377
// asm:   0x5d4136f: jmp 0x5d41377
// asm:   0x5d41371: jmp 0x5d41377
// asm:   0x5d41373: jmp 0x5d41377
// asm:   0x5d41375: jmp 0x5d41377
// asm:   0x5d41377: mov rbx, rax
// asm:   0x5d4137a: cmp edx, 1
// asm:   0x5d4137d: jne 0x5d41434
// asm:   0x5d41383: mov rdi, rbx
// asm:   0x5d41386: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d4138b: mov r14, qword ptr [rax]
// asm:   0x5d4138e: mov qword ptr [rsp + 0x18], r14
// asm:   0x5d41393: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d41429: mov rdi, r14
// asm:   0x5d4142c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d41431: mov rbx, rax
// asm:   0x5d41434: lea rdi, [rsp + 0x18]
// asm:   0x5d41439: call 0x2fdc9b0  ; il2cpp_runtime_helper_02fdc9b0()
// asm:   0x5d4143e: mov rdi, rbx
// asm:   0x5d41441: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d41446: mov rdi, rax
// asm:   0x5d41449: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardModerationPanel__ClearContainer
               (UI_ScoreboardModerationPanel_o *__this,UnityEngine_Transform_o *container,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar6;
  ulong uVar7;
  long lVar8;
  Il2CppObject *local_50;
  Il2CppObject *local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  Il2CppObject **local_30;
  
  if (Il2CppMethodInitialized_07547ead == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07547ead = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  if (container == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_50 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(container,(MethodInfo *)0x0);
  local_40 = 0;
  local_38 = &local_50;
  local_30 = &local_48;
  do {
    pIVar6 = local_50;
    if (local_50 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_50->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
          goto label_05d41263;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_50,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d41263:
    bVar4 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    pIVar6 = local_50;
    if (!bVar4) {
      pIVar6 = il2cpp_vm_Object_IsInst(local_50,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar6 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar2 = pIVar6->klass;
      uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
      local_48 = pIVar6;
      if (uVar7 == 0) goto label_05d413ef;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      break;
    }
    if (local_50 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_50->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
          goto label_05d412f7;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_50,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05d412f7:
    __this_00 = (UnityEngine_Component_o *)(*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    if (__this_00 == (UnityEngine_Component_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  } while( true );
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
      goto label_05d4140d;
    }
  }
label_05d413ef:
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d4140d:
  (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
  return;
}


// UI.ScoreboardModerationPanel$$.ctor
// il2cpp: void UI_ScoreboardModerationPanel___ctor (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d471a0

void UI_ScoreboardModerationPanel___ctor(UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__Button__o *__this_01;
  System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab__string__o *__this_02;
  System_Collections_Generic_List_CanvasGroup__o *__this_03;
  System_Collections_Generic_List_RoomBanEntry__o *__this_04;
  System_Collections_Generic_List_RegionBanEntry__o *__this_05;
  
  if (Il2CppMethodInitialized_07547eae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RegionBanEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomBanEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_CanvasGroup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RegionBanEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RoomBanEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547eae = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,defaultValue,0x50,(MethodInfo *)0x0);
  (__this->fields)._searchSetting = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchSetting);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_4A543B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_Button_ctor);
  (__this->fields)._tabButtons = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tabButtons);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_4A543B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ScoreboardModerationPanel_Tab_string_ctor);
  (__this->fields)._searchTerms = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchTerms);
  (__this->fields)._popupMinFadeAlpha = 0.5;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CanvasGroup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CanvasGroup_ctor);
  (__this->fields)._fadeSyncGroups = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fadeSyncGroups);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RoomBanEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_RoomBanEntry_ctor);
  (__this->fields)._cachedRoomBans = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedRoomBans);
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RegionBanEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_RegionBanEntry_ctor);
  (__this->fields)._cachedRegionBans = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedRegionBans);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel$$<BuildPlayerListFooter>b__59_1
// il2cpp: void UI_ScoreboardModerationPanel___BuildPlayerListFooter_b__59_1 (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d473d0

void UI_ScoreboardModerationPanel___BuildPlayerListFooter_b__59_1
               (UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  UI_ModerationBatchBanPopup_o *pUVar1;
  
  pUVar1 = (__this->fields)._batchBanPopup;
  if (pUVar1 == (UI_ModerationBatchBanPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
  return;
}


// UI.ScoreboardModerationPanel$$<BuildRoomBanFooter>b__62_0
// il2cpp: void UI_ScoreboardModerationPanel___BuildRoomBanFooter_b__62_0 (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d47400

void UI_ScoreboardModerationPanel___BuildRoomBanFooter_b__62_0
               (UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t startIndex;
  
  iVar1 = (__this->fields)._roomBanNextStart;
  startIndex = 0;
  if (0 < iVar1) {
    startIndex = iVar1;
  }
  if (Il2CppMethodInitialized_07547e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547e9b = '\x01';
  }
  if (((__this->fields)._roomBanRequestPending != false) ||
     (((__this->fields)._roomBanLoaded != false && ((__this->fields)._roomBanNextStart < 0)))) {
    return;
  }
  (__this->fields)._roomBanRequestPending = true;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRoomBanList_5d33a70
            (startIndex,0x32,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardModerationPanel$$<BuildRegionBanFooter>b__64_0
// il2cpp: void UI_ScoreboardModerationPanel___BuildRegionBanFooter_b__64_0 (UI_ScoreboardModerationPanel_o* __this, const MethodInfo* method);
// 0x5d47490

void UI_ScoreboardModerationPanel___BuildRegionBanFooter_b__64_0
               (UI_ScoreboardModerationPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t startIndex;
  
  iVar1 = (__this->fields)._regionBanNextStart;
  startIndex = 0;
  if (0 < iVar1) {
    startIndex = iVar1;
  }
  if (Il2CppMethodInitialized_07547e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547e9d = '\x01';
  }
  if (((__this->fields)._regionBanRequestPending != false) ||
     (((__this->fields)._regionBanLoaded != false && ((__this->fields)._regionBanNextStart < 0)))) {
    return;
  }
  (__this->fields)._regionBanRequestPending = true;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRegionBanList_5d34ff0
            (startIndex,0x32,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
  return;
}



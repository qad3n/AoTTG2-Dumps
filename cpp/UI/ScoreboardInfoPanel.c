// Type: UI.ScoreboardInfoPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ScoreboardInfoPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardInfoPanel.cs
// --------------------------------

// UI.ScoreboardInfoPanel.<>c$$.cctor
// il2cpp: void UI_ScoreboardInfoPanel___c___cctor (const MethodInfo* method);
// 0x5d3e990

void UI_ScoreboardInfoPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardInfoPanel_c);
    Il2CppMethodInitialized_07547e7f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ScoreboardInfoPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_ScoreboardInfoPanel_c->static_fields->__9 = (UI_ScoreboardInfoPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ScoreboardInfoPanel_c->static_fields->__9);
  return;
}


// UI.ScoreboardInfoPanel.<>c$$.ctor
// il2cpp: void UI_ScoreboardInfoPanel___c___ctor (UI_ScoreboardInfoPanel___c_o* __this, const MethodInfo* method);
// 0x5d3ea00

void UI_ScoreboardInfoPanel___c___ctor(UI_ScoreboardInfoPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardInfoPanel.<>c$$<SettingValue>b__14_0
// il2cpp: System_String_o* UI_ScoreboardInfoPanel___c___SettingValue_b__14_0 (UI_ScoreboardInfoPanel___c_o* __this, Settings_BaseSetting_o* item, const MethodInfo* method);
// 0x5d3ea10

System_String_o *
UI_ScoreboardInfoPanel___c___SettingValue_b__14_0
          (UI_ScoreboardInfoPanel___c_o *__this,Settings_BaseSetting_o *item,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar1;
  
  if (item == (Settings_BaseSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (item->klass->vtable)._3_ToString.methodPtr;
  pSVar1 = (System_String_o *)
           (*vtableDispatch)
                     (item,(item->klass->vtable)._3_ToString.method,method,vtableDispatch);
  return pSVar1;
}


// UI.ScoreboardInfoPanel$$get_DoublePanel
// il2cpp: bool UI_ScoreboardInfoPanel__get_DoublePanel (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x5d3c810

bool UI_ScoreboardInfoPanel__get_DoublePanel(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.ScoreboardInfoPanel$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardInfoPanel__get_VerticalSpacing (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x5d3c820

float UI_ScoreboardInfoPanel__get_VerticalSpacing(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.ScoreboardInfoPanel$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardInfoPanel__get_VerticalPadding (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x5d3c830

int32_t UI_ScoreboardInfoPanel__get_VerticalPadding(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.ScoreboardInfoPanel$$Setup
// il2cpp: void UI_ScoreboardInfoPanel__Setup (UI_ScoreboardInfoPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d3c840
// eh: try 0x5d3d2c4..0x5d3d9a4 -> pad 0x5d3d9b2 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d3d9ca..0x5d3d9cf -> pad 0x5d3d9f3 cleanup
// eh: try 0x5d3d9f6..0x5d3da00 -> pad 0x5d3da68 catch (...) [compiler noexcept guard]
// eh: try 0x5d3da22..0x5d3da27 -> pad 0x5d3da53 cleanup
// eh: try 0x5d3da56..0x5d3da60 -> pad 0x5d3da68 catch (...) [compiler noexcept guard]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3d2b9: nop dword ptr [rax]
// asm:   0x5d3d31c: jmp 0x5d3d990
// asm:   0x5d3d5c3: jmp 0x5d3ce10
// asm:   0x5d3d6ac: nop dword ptr [rax]
// asm:   0x5d3d9a4: jmp 0x5d3da02
// asm:   0x5d3d9a6: jmp 0x5d3da02
// asm:   0x5d3d9a8: jmp 0x5d3da02
// asm:   0x5d3d9aa: jmp 0x5d3da02
// asm:   0x5d3d9ac: jmp 0x5d3d9b2
// asm:   0x5d3d9ae: jmp 0x5d3d9b2
// asm:   0x5d3d9b0: jmp 0x5d3da02
// asm:   0x5d3d9b2: mov r14, rax
// asm:   0x5d3d9b5: cmp edx, 1
// asm:   0x5d3d9b8: jne 0x5d3d9f6
// asm:   0x5d3d9ba: mov rdi, r14
// asm:   0x5d3d9bd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d3d9c2: mov rbx, qword ptr [rax]
// asm:   0x5d3d9c5: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d3d9ca: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d3d9cf: lea rax, [rip + 0x1551152]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x5d3d9d6: mov rsi, qword ptr [rax]
// asm:   0x5d3d9d9: lea rdi, [rsp + 0x50]
// asm:   0x5d3d9de: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d3d9e3: test rbx, rbx
// asm:   0x5d3d9e6: mov r12, qword ptr [rsp + 8]
// asm:   0x5d3d9eb: je 0x5d3d308
// asm:   0x5d3d9f1: jmp 0x5d3da4b
// asm:   0x5d3d9f3: mov r14, rax
// asm:   0x5d3d9f6: lea rdi, [rsp + 0x18]
// asm:   0x5d3d9fb: call 0x2fdc700  ; il2cpp_runtime_helper_02fdc700()
// asm:   0x5d3da00: jmp 0x5d3da60
// asm:   0x5d3da02: mov r14, rax
// asm:   0x5d3da05: cmp edx, 1
// asm:   0x5d3da08: mov r12, qword ptr [rsp + 8]
// asm:   0x5d3da0d: jne 0x5d3da56
// asm:   0x5d3da0f: mov r15, rbp
// asm:   0x5d3da12: mov rdi, r14
// asm:   0x5d3da15: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d3da1a: mov rbx, qword ptr [rax]
// asm:   0x5d3da1d: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d3da22: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d3da27: lea rbp, [rip + 0x154053a]  ; TypeInfo_UI_UIManager
// asm:   0x5d3da2e: lea rax, [rip + 0x15522ab]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
// asm:   0x5d3da35: mov rsi, qword ptr [rax]
// asm:   0x5d3da38: lea rdi, [rsp + 0x30]
// asm:   0x5d3da3d: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d3da42: test rbx, rbx
// asm:   0x5d3da45: je 0x5d3d75d
// asm:   0x5d3da4b: mov rdi, rbx
// asm:   0x5d3da4e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d3da53: mov r14, rax
// asm:   0x5d3da56: lea rdi, [rsp + 0x18]
// asm:   0x5d3da5b: call 0x2fdc730  ; il2cpp_runtime_helper_02fdc730()
// asm:   0x5d3da60: mov rdi, r14
// asm:   0x5d3da63: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d3da68: mov rdi, rax
// asm:   0x5d3da6b: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardInfoPanel__Setup(UI_ScoreboardInfoPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  Map_MapScript_o *pMVar5;
  Settings_InGameTitanSettings_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_InGameModeSettings_o *pSVar8;
  Settings_ListSetting_StringSetting__o *pSVar9;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_InGameAddonSettings_o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  Settings_InGameMiscSettings_o *pSVar12;
  bool bVar13;
  int32_t iVar14;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar15;
  System_String_o *pSVar16;
  UI_ElementStyle_o *pUVar17;
  System_String_o *pSVar18;
  Photon_Realtime_Room_o *pPVar19;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  Il2CppObject *settings;
  MethodInfo *extraout_RDX;
  UI_ElementStyle_o *style;
  UI_ElementStyle_o *style_00;
  UI_ElementStyle_o *style_01;
  UI_ElementStyle_o *style_02;
  UI_ElementStyle_o *style_03;
  UI_ElementStyle_o *style_04;
  UI_ElementStyle_o *style_05;
  UI_ElementStyle_o *style_06;
  UI_ElementStyle_o *style_07;
  UI_ElementStyle_o *style_08;
  UI_ElementStyle_o *style_09;
  UI_ElementStyle_o *style_10;
  UI_ElementStyle_o *style_11;
  MethodInfo *pMVar20;
  float fVar21;
  MethodInfo *in_stack_ffffffffffffff68;
  int32_t iStack_84;
  undefined1 auStack_80 [16];
  UI_ElementStyle_o *pUStack_70;
  undefined1 auStack_68 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_60;
  UI_ElementStyle_o *pUStack_58;
  undefined1 auStack_48 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_40;
  UI_ElementStyle_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07547e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Count
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_718fce8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_718fcf0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardInfoPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"RoomName");
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"MapHash");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Section.Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"addon.");
    il2cpp_codegen_initialize_runtime_metadata(&"misc");
    il2cpp_codegen_initialize_runtime_metadata(&"Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"Section.Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Section.Mode");
    il2cpp_codegen_initialize_runtime_metadata(&"mode");
    il2cpp_codegen_initialize_runtime_metadata(&"Section.General");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"LogicHash");
    Il2CppMethodInitialized_07547e77 = '\x01';
    method = extraout_RDX;
  }
  iStack_84 = 0;
  auStack_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  pUStack_38 = (UI_ElementStyle_o *)0x0;
  auStack_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  pUStack_58 = (UI_ElementStyle_o *)0x0;
  UI_ScoreboardCategoryPanel__SetupGisketch((UI_ScoreboardCategoryPanel_o *)__this,parent,method);
  pGVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(pGVar15,(MethodInfo *)0x0);
  (__this->fields)._view = pGVar15;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
  pSVar16 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar17,0x18,120.0,20.0,pSVar16,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  pUVar17 = (UI_ElementStyle_o *)(__this->fields).DoublePanelLeft;
  if ((TypeInfo_UI_ScoreboardInfoPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardInfoPanel);
    if (Il2CppMethodInitialized_07547e79 != '\0') goto label_05d3cb38;
label_05d3d33d:
    pSVar16 = "Section.General";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e79 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07547e79 == '\0') goto label_05d3d33d;
label_05d3cb38:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar16 = "Section.General";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar20 = (MethodInfo *)0x0;
  pSVar16 = UI_UIManager__GetLocale
                      ("GameCreate","Sandbox",pSVar16,"",
                       "",(MethodInfo *)0x0);
  UI_ScoreboardInfoPanel__CreateLabel
            (__this,(UnityEngine_Transform_o *)pUVar17,style,pSVar16,1,(int32_t)pMVar20,
             in_stack_ffffffffffffff68);
  if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0))
  goto label_05d3d990;
  UI_ScoreboardInfoPanel__CreateLabels
            (__this,pUVar17,(__this->fields).DoublePanelLeft,"general",
             (System_Collections_IDictionary_o *)(pSVar3->fields).Settings,pMVar20);
  pSVar16 = "MapHash";
  pUVar4 = (__this->fields).DoublePanelLeft;
  if (Il2CppMethodInitialized_07547e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"GameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547e78 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  iVar14 = 0;
  pSVar16 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","GameInfo",pSVar16,"",
                       "",(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  pMVar5 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if ((pMVar5 == (Map_MapScript_o *)0x0) ||
     (pSVar18 = (pMVar5->fields).MapHash, pSVar18 == (System_String_o *)0x0)) goto label_05d3d990;
  pSVar18 = System_String__ToLower(pSVar18,(MethodInfo *)0x0);
  pSVar16 = System_String__Concat_52f0320(pSVar16,pSVar18,(MethodInfo *)0x0);
  UI_ScoreboardInfoPanel__CreateLabel(__this,pUVar4,style_00,pSVar16,0,iVar14,in_stack_ffffffffffffff68);
  pSVar16 = "LogicHash";
  pUVar4 = (__this->fields).DoublePanelLeft;
  if (Il2CppMethodInitialized_07547e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"GameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547e78 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  iVar14 = 0;
  pSVar16 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","GameInfo",pSVar16,"",
                       "",(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar18 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicHash;
  if (pSVar18 == (System_String_o *)0x0) goto label_05d3d990;
  pSVar18 = System_String__ToLower(pSVar18,(MethodInfo *)0x0);
  pSVar16 = System_String__Concat_52f0320(pSVar16,pSVar18,(MethodInfo *)0x0);
  UI_ScoreboardInfoPanel__CreateLabel(__this,pUVar4,style_01,pSVar16,0,iVar14,in_stack_ffffffffffffff68);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    if (g_data_07544cc2 != '\0') goto label_05d3cdc8;
label_05d3d3a8:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    g_data_07544cc2 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05d3cdd9;
label_05d3d3cc:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode != false) goto label_05d3cdef;
label_05d3d3eb:
    pUVar4 = (__this->fields).DoublePanelLeft;
    if ((TypeInfo_UI_ScoreboardInfoPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardInfoPanel);
      if (Il2CppMethodInitialized_07547e78 != '\0') goto label_05d3d41e;
label_05d3d93e:
      pSVar16 = "RoomName";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"GameInfo");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547e78 = '\x01';
      uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07547e78 == '\0') goto label_05d3d93e;
label_05d3d41e:
      uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar16 = "RoomName";
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    iVar14 = 0;
    pSVar16 = UI_UIManager__GetLocale
                        ("ScoreboardPopup","GameInfo",pSVar16,"",
                         "",(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar19 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    pSVar18 = PhotonExtensions__GetStringProperty_5751c40
                        ((Photon_Realtime_RoomInfo_o *)pPVar19,
                         TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                         (MethodInfo *)0x0);
    pSVar16 = System_String__Concat_52f0320(pSVar16,pSVar18,(MethodInfo *)0x0);
    UI_ScoreboardInfoPanel__CreateLabel(__this,pUVar4,style_07,pSVar16,0,iVar14,in_stack_ffffffffffffff68);
    pSVar16 = "MaxPlayers";
    pUVar4 = (__this->fields).DoublePanelLeft;
    if (Il2CppMethodInitialized_07547e78 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"GameInfo");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547e78 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    iVar14 = 0;
    pSVar16 = UI_UIManager__GetLocale
                        ("ScoreboardPopup","GameInfo",pSVar16,"",
                         "",(MethodInfo *)0x0);
    pPVar19 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (pPVar19 == (Photon_Realtime_Room_o *)0x0) goto label_05d3d990;
    iStack_84 = (pPVar19->fields).maxPlayers;
    pSVar18 = System_Int32__ToString(&iStack_84,(MethodInfo *)0x0);
    pSVar16 = System_String__Concat_52f0320(pSVar16,pSVar18,(MethodInfo *)0x0);
    UI_ScoreboardInfoPanel__CreateLabel(__this,pUVar4,style_08,pSVar16,0,iVar14,in_stack_ffffffffffffff68);
    pUVar4 = (__this->fields).DoublePanelLeft;
  }
  else {
    if (g_data_07544cc2 == '\0') goto label_05d3d3a8;
label_05d3cdc8:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05d3d3cc;
label_05d3cdd9:
    if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) goto label_05d3d3eb;
label_05d3cdef:
    pUVar4 = (__this->fields).DoublePanelLeft;
  }
  if (Il2CppMethodInitialized_07547e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"inGameDivider");
    Il2CppMethodInitialized_07547e7a = '\x01';
  }
  pGVar15 = (__this->fields)._view;
  fVar21 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                     (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar14 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                     (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_05d3d990;
  Gisketch_Aottg2UI_Game_AottgInGameView__Panel
            (pGVar15,pUVar4,"inGameDivider",fVar21 * 0.5 - ((float)iVar14 + (float)iVar14),1.0,false,
             (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
  pUVar17 = (UI_ElementStyle_o *)(__this->fields).DoublePanelLeft;
  if ((TypeInfo_UI_ScoreboardInfoPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardInfoPanel);
  }
  pSVar16 = "Section.Titans";
  if (Il2CppMethodInitialized_07547e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e79 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar20 = (MethodInfo *)0x0;
  pSVar16 = UI_UIManager__GetLocale
                      ("GameCreate","Sandbox",pSVar16,"",
                       "",(MethodInfo *)0x0);
  UI_ScoreboardInfoPanel__CreateLabel
            (__this,(UnityEngine_Transform_o *)pUVar17,style_02,pSVar16,1,(int32_t)pMVar20,
             in_stack_ffffffffffffff68);
  pSVar6 = (pSVar2->fields).Titan;
  if (pSVar6 == (Settings_InGameTitanSettings_o *)0x0) goto label_05d3d990;
  UI_ScoreboardInfoPanel__CreateLabels
            (__this,pUVar17,(__this->fields).DoublePanelLeft,"titan",
             (System_Collections_IDictionary_o *)(pSVar6->fields).Settings,pMVar20);
  pSVar16 = "Section.Mode";
  pUVar4 = (__this->fields).DoublePanelRight;
  if (Il2CppMethodInitialized_07547e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e79 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  iVar14 = 0;
  pSVar16 = UI_UIManager__GetLocale
                      ("GameCreate","Sandbox",pSVar16,"",
                       "",(MethodInfo *)0x0);
  UI_ScoreboardInfoPanel__CreateLabel(__this,pUVar4,style_03,pSVar16,1,iVar14,in_stack_ffffffffffffff68);
  pSVar16 = "GameMode";
  pUVar17 = (UI_ElementStyle_o *)(__this->fields).DoublePanelRight;
  if (Il2CppMethodInitialized_07547e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"GameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547e78 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar20 = (MethodInfo *)0x0;
  pSVar16 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","GameInfo",pSVar16,"",
                       "",(MethodInfo *)0x0);
  pSVar3 = (pSVar2->fields).General;
  if ((pSVar3 == (Settings_InGameGeneralSettings_o *)0x0) ||
     (pSVar7 = (pSVar3->fields).GameMode, pSVar7 == (Settings_StringSetting_o *)0x0)) goto label_05d3d990;
  pSVar18 = UI_ContentLocale__ModeName((pSVar7->fields)._value,(MethodInfo *)0x0);
  pSVar16 = System_String__Concat_52f0320(pSVar16,pSVar18,(MethodInfo *)0x0);
  UI_ScoreboardInfoPanel__CreateLabel
            (__this,(UnityEngine_Transform_o *)pUVar17,style_04,pSVar16,0,(int32_t)pMVar20,
             in_stack_ffffffffffffff68);
  pSVar8 = (pSVar2->fields).Mode;
  if (pSVar8 == (Settings_InGameModeSettings_o *)0x0) goto label_05d3d990;
  UI_ScoreboardInfoPanel__CreateLabels
            (__this,pUVar17,(__this->fields).DoublePanelRight,"mode",
             (System_Collections_IDictionary_o *)(pSVar8->fields).Current,pMVar20);
  pUVar4 = (__this->fields).DoublePanelRight;
  if (Il2CppMethodInitialized_07547e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"inGameDivider");
    Il2CppMethodInitialized_07547e7a = '\x01';
  }
  pGVar15 = (__this->fields)._view;
  fVar21 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                     (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar14 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                     (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_05d3d990;
  Gisketch_Aottg2UI_Game_AottgInGameView__Panel
            (pGVar15,pUVar4,"inGameDivider",fVar21 * 0.5 - ((float)iVar14 + (float)iVar14),1.0,false,
             (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
  pSVar16 = "Addons";
  pUVar4 = (__this->fields).DoublePanelRight;
  if (Il2CppMethodInitialized_07547e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e79 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar20 = (MethodInfo *)0x0;
  pSVar16 = UI_UIManager__GetLocale
                      ("GameCreate","Sandbox",pSVar16,"",
                       "",(MethodInfo *)0x0);
  UI_ScoreboardInfoPanel__CreateLabel
            (__this,pUVar4,style_05,pSVar16,1,(int32_t)pMVar20,in_stack_ffffffffffffff68);
  pSVar3 = (pSVar2->fields).General;
  if (((pSVar3 == (Settings_InGameGeneralSettings_o *)0x0) ||
      (pSVar9 = (pSVar3->fields).Addons, pSVar9 == (Settings_ListSetting_StringSetting__o *)0x0)) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar9->fields)._value,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto label_05d3d990;
  if ((__this_00->fields)._size == 0) {
    pUVar4 = (__this->fields).DoublePanelRight;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar16 = UI_UIManager__GetLocaleCommon("None",(MethodInfo *)0x0);
    UI_ScoreboardInfoPanel__CreateLabel
              (__this,pUVar4,style_09,pSVar16,0,(int32_t)pMVar20,in_stack_ffffffffffffff68);
    pSVar10 = (pSVar2->fields).Addons;
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    pUStack_38 = pUStack_70;
    auStack_48 = (undefined1  [8])auStack_80._0_8_;
    pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 auStack_80._8_8_;
    auStack_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_80._8_8_ =
         (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_48;
    while (bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext),
          bVar13) {
      if (pUStack_38 == (UI_ElementStyle_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_ScoreboardInfoPanel__CreateLabel
                (__this,(__this->fields).DoublePanelRight,style_06,
                 *(System_String_o **)&(pUStack_38->fields).Spacing,0,(int32_t)pMVar20,
                 in_stack_ffffffffffffff68);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    pSVar10 = (pSVar2->fields).Addons;
  }
  if ((pSVar10 == (Settings_InGameAddonSettings_o *)0x0) ||
     (pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar10->fields).Current,
     pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05d3d990;
  iVar14 = System_Collections_Generic_Dictionary_object__object___get_Count
                     (pSVar11,(MethodInfo_4AAD0E0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Count
                     );
  if (0 < iVar14) {
    pSVar10 = (pSVar2->fields).Addons;
    if (((pSVar10 == (Settings_InGameAddonSettings_o *)0x0) ||
        (pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar10->fields).Current,
        pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
       (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (pSVar11,(MethodInfo_4AAD0F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
                              ),
       __this_01 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto label_05d3d990;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_80,
               __this_01,
               (MethodInfo_511A520 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
              );
    pUStack_58 = pUStack_70;
    auStack_68 = (undefined1  [8])auStack_80._0_8_;
    pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 auStack_80._8_8_;
    auStack_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_80._8_8_ =
         (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_68;
    while (bVar13 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                *)auStack_68,
                               (MethodInfo_4CE7080 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_718fce8
                              ), pUVar17 = pUStack_58, bVar13) {
      UI_ScoreboardInfoPanel__CreateLabel
                (__this,(__this->fields).DoublePanelRight,style_10,(System_String_o *)pUStack_58,1,
                 (int32_t)pMVar20,in_stack_ffffffffffffff68);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar16 = System_String__Concat_52f0320
                          ("addon.",(System_String_o *)pUVar17,(MethodInfo *)0x0);
      pSVar10 = (pSVar2->fields).Addons;
      if (pSVar10 == (Settings_InGameAddonSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar10->fields).Current;
      if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      settings = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar11,(Il2CppObject *)pUVar17,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                           );
      UI_ScoreboardInfoPanel__CreateLabels
                (__this,pUVar17,pUVar4,pSVar16,(System_Collections_IDictionary_o *)settings,pMVar20);
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_68,
               (MethodInfo_4CE7070 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
              );
  }
  pUVar4 = (__this->fields).DoublePanelRight;
  if (Il2CppMethodInitialized_07547e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"inGameDivider");
    Il2CppMethodInitialized_07547e7a = '\x01';
  }
  pGVar15 = (__this->fields)._view;
  fVar21 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                     (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar14 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                     (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_05d3d990;
  Gisketch_Aottg2UI_Game_AottgInGameView__Panel
            (pGVar15,pUVar4,"inGameDivider",fVar21 * 0.5 - ((float)iVar14 + (float)iVar14),1.0,false,
             (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
  pUVar17 = (UI_ElementStyle_o *)(__this->fields).DoublePanelRight;
  if ((TypeInfo_UI_ScoreboardInfoPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardInfoPanel);
    if (Il2CppMethodInitialized_07547e79 != '\0') goto label_05d3d82c;
label_05d3d8d0:
    pSVar16 = "Section.Misc";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e79 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07547e79 == '\0') goto label_05d3d8d0;
label_05d3d82c:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar16 = "Section.Misc";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar20 = (MethodInfo *)0x0;
  pSVar16 = UI_UIManager__GetLocale
                      ("GameCreate","Sandbox",pSVar16,"",
                       "",(MethodInfo *)0x0);
  UI_ScoreboardInfoPanel__CreateLabel
            (__this,(UnityEngine_Transform_o *)pUVar17,style_11,pSVar16,1,(int32_t)pMVar20,
             in_stack_ffffffffffffff68);
  pSVar12 = (pSVar2->fields).Misc;
  if (pSVar12 != (Settings_InGameMiscSettings_o *)0x0) {
    UI_ScoreboardInfoPanel__CreateLabels
              (__this,pUVar17,(__this->fields).DoublePanelRight,"misc",
               (System_Collections_IDictionary_o *)(pSVar12->fields).Settings,pMVar20);
    return;
  }
label_05d3d990:
  ThrowNullReferenceException();
}


// UI.ScoreboardInfoPanel$$Locale
// il2cpp: System_String_o* UI_ScoreboardInfoPanel__Locale (System_String_o* item, const MethodInfo* method);
// 0x5d3e170

System_String_o * UI_ScoreboardInfoPanel__Locale(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"GameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547e78 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","GameInfo",item,"",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ScoreboardInfoPanel$$SandboxLocale
// il2cpp: System_String_o* UI_ScoreboardInfoPanel__SandboxLocale (System_String_o* item, const MethodInfo* method);
// 0x5d3da70

System_String_o * UI_ScoreboardInfoPanel__SandboxLocale(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547e79 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("GameCreate","Sandbox",item,"",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ScoreboardInfoPanel$$CreateDivider
// il2cpp: void UI_ScoreboardInfoPanel__CreateDivider (UI_ScoreboardInfoPanel_o* __this, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x5d3e200

void UI_ScoreboardInfoPanel__CreateDivider
               (UI_ScoreboardInfoPanel_o *__this,UnityEngine_Transform_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  int32_t iVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07547e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"inGameDivider");
    Il2CppMethodInitialized_07547e7a = '\x01';
  }
  __this_00 = (__this->fields)._view;
  fVar2 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                    (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__Panel
            (__this_00,panel,"inGameDivider",fVar2 * 0.5 - ((float)iVar1 + (float)iVar1),1.0,false,
             (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardInfoPanel$$CreateLabel
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabel (UI_ScoreboardInfoPanel_o* __this, UnityEngine_Transform_o* panel, UI_ElementStyle_o* style, System_String_o* text, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x5d3db00

void UI_ScoreboardInfoPanel__CreateLabel
               (UI_ScoreboardInfoPanel_o *__this,UnityEngine_Transform_o *panel,UI_ElementStyle_o *style,
               System_String_o *text,int32_t fontStyle,int32_t alignment,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  int32_t iVar1;
  System_String_o **ppSVar2;
  TMPro_TMP_Text_o *__this_01;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameHeading");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_07547e7b = '\x01';
  }
  __this_00 = (__this->fields)._view;
  fVar3 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                    (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    if (fontStyle == 1) {
      ppSVar2 = &"inGameHeading";
    }
    else {
      ppSVar2 = &"inGameInfo";
    }
    __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                          (__this_00,panel,text,fVar3 * 0.5 - ((float)iVar1 + (float)iVar1),40.0,*ppSVar2,
                           (MethodInfo *)0x0);
    if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_alignment(__this_01,0x1001,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      }
      Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight(__this_01,40.0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardInfoPanel$$CreateLabels
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* prefix, System_Collections_IDictionary_o* settings, const MethodInfo* method);
// 0x5d3dc30
// eh: try 0x5d3ddef..0x5d3e0f6 -> pad 0x5d3e123 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d3e13f..0x5d3e144 -> pad 0x5d3e149 cleanup
// eh: try 0x5d3e14c..0x5d3e156 -> pad 0x5d3e15e catch (...) [compiler noexcept guard]
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3dd19: nop dword ptr [rax]
// asm:   0x5d3dd90: lea r14, [rip + 0x153b661]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5d3dd97: lea r13, [rip + 0x153ec32]  ; TypeInfo_UI_ScoreboardInfoPanel
// asm:   0x5d3dd9e: lea r15, [rip + 0x1553983]  ; MethodInfo_System_Collections_Generic_HashSet_string_Contains
// asm:   0x5d3dda5: jmp 0x5d3ddbe
// asm:   0x5d3ddb0: mov rbx, qword ptr [rsp + 8]
// asm:   0x5d3ddb5: test rbx, rbx
// asm:   0x5d3ddb8: je 0x5d3e0ca
// asm:   0x5d3dddd: nop dword ptr [rax]
// asm:   0x5d3e0fb: mov rdi, r14
// asm:   0x5d3e0fe: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d3e103: jmp 0x5d3e127
// asm:   0x5d3e105: jmp 0x5d3e127
// asm:   0x5d3e107: jmp 0x5d3e127
// asm:   0x5d3e109: jmp 0x5d3e127
// asm:   0x5d3e10b: jmp 0x5d3e127
// asm:   0x5d3e10d: jmp 0x5d3e127
// asm:   0x5d3e10f: jmp 0x5d3e127
// asm:   0x5d3e111: jmp 0x5d3e127
// asm:   0x5d3e113: jmp 0x5d3e127
// asm:   0x5d3e115: jmp 0x5d3e127
// asm:   0x5d3e117: jmp 0x5d3e127
// asm:   0x5d3e119: jmp 0x5d3e127
// asm:   0x5d3e11b: jmp 0x5d3e127
// asm:   0x5d3e11d: jmp 0x5d3e127
// asm:   0x5d3e11f: jmp 0x5d3e127
// asm:   0x5d3e121: jmp 0x5d3e127
// asm:   0x5d3e123: jmp 0x5d3e127
// asm:   0x5d3e125: jmp 0x5d3e127
// asm:   0x5d3e127: mov rbx, rax
// asm:   0x5d3e12a: cmp edx, 1
// asm:   0x5d3e12d: jne 0x5d3e14c
// asm:   0x5d3e12f: mov rdi, rbx
// asm:   0x5d3e132: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d3e137: mov r14, qword ptr [rax]
// asm:   0x5d3e13a: mov qword ptr [rsp + 0x30], r14
// asm:   0x5d3e13f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d3e144: jmp 0x5d3e02f
// asm:   0x5d3e149: mov rbx, rax
// asm:   0x5d3e14c: lea rdi, [rsp + 0x30]
// asm:   0x5d3e151: call 0x2fdc760  ; il2cpp_runtime_helper_02fdc760()
// asm:   0x5d3e156: mov rdi, rbx
// asm:   0x5d3e159: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d3e15e: mov rdi, rax
// asm:   0x5d3e161: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardInfoPanel__CreateLabels
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,UnityEngine_Transform_o *panel,
               System_String_o *prefix,System_Collections_IDictionary_o *settings,MethodInfo *method)

{
  byte bVar1;
  System_Collections_IDictionary_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppClass *pIVar4;
  Settings_BaseSetting_o *setting;
  System_Collections_Generic_HashSet_object__o *__this_00;
  char cVar5;
  bool bVar6;
  VirtualInvokeData *pVVar7;
  Il2CppObject *pIVar8;
  undefined8 *puVar9;
  System_String_o *pSVar10;
  System_String_o *str0;
  ulong uVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UI_ElementStyle_o *style_00;
  long lVar12;
  int32_t alignment;
  MethodInfo *in_stack_ffffffffffffff88;
  Il2CppObject *local_70;
  Il2CppObject *local_68;
  UI_ScoreboardInfoPanel_o *local_60;
  UnityEngine_Transform_o *local_58;
  System_String_o *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  alignment = (int32_t)method;
  local_60 = __this;
  local_58 = panel;
  local_50 = prefix;
  if (Il2CppMethodInitialized_07547e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IDictionary);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardInfoPanel);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07547e7c = '\x01';
  }
  local_70 = (Il2CppObject *)0x0;
  local_68 = (Il2CppObject *)0x0;
  if (settings == (System_Collections_IDictionary_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = settings->klass;
  uVar11 = (ulong)(pSVar2->_2).interface_offsets_count;
  if (uVar11 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(System_Collections_IDictionary_c **)((long)&pIVar3->interfaceType + lVar12) ==
          TypeInfo_System_Collections_IDictionary) {
        pVVar7 = pSVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar12) + 9);
        goto label_05d3dd59;
      }
      lVar12 = lVar12 + 0x10;
    } while (uVar11 * 0x10 != lVar12);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)settings,(Il2CppClass *)TypeInfo_System_Collections_IDictionary,9);
label_05d3dd59:
  pIVar8 = (Il2CppObject *)(*pVVar7->methodPtr)((Il2CppObject *)settings,pVVar7->method);
  local_48 = 0;
  local_40 = &local_70;
  local_38 = &local_68;
  do {
    local_70 = pIVar8;
    if (pIVar8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIVar8->klass;
    uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar12) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar12);
          goto label_05d3de13;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d3de13:
    cVar5 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    pIVar8 = local_70;
    if (cVar5 == '\0') {
      pIVar8 = il2cpp_vm_Object_IsInst(local_70,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar8 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar4 = pIVar8->klass;
      uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
      local_68 = pIVar8;
      if (uVar11 == 0) goto label_05d3e08f;
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar12 = 0;
      break;
    }
    if (local_70 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_70->klass;
    uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar3 = (pIVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar12) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar4->vtable + (*(int *)((long)&pIVar3->offset + lVar12) + 1);
          goto label_05d3dea7;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05d3dea7:
    pIVar8 = (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
    if (pIVar8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar8->klass->_1).element_class != (TypeInfo_System_Collections_DictionaryEntry->_1).element_class)
    {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar8);
    }
    puVar9 = il2cpp_vm_Object_Unbox(pIVar8);
    pSVar10 = (System_String_o *)*puVar9;
    setting = (Settings_BaseSetting_o *)puVar9[1];
    if ((pSVar10 != (System_String_o *)0x0) && (pSVar10->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
    }
    if ((TypeInfo_UI_ScoreboardInfoPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardInfoPanel);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                TypeInfo_UI_ScoreboardInfoPanel->static_fields->HiddenSettings;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)pSVar10,
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    pIVar8 = local_70;
    if (!bVar6) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsMetadataField(pSVar10,(MethodInfo *)0x0);
      pIVar8 = local_70;
      if (!bVar6) {
        pSVar10 = System_String__Concat_5301f10(local_50,".",pSVar10,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        str0 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel(pSVar10,(MethodInfo *)0x0);
        method_00 = extraout_RDX;
        if ((TypeInfo_UI_ScoreboardInfoPanel->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardInfoPanel);
          method_00 = extraout_RDX_00;
        }
        if (setting != (Settings_BaseSetting_o *)0x0) {
          bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
             ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(setting);
          }
        }
        pSVar10 = UI_ScoreboardInfoPanel__SettingValue(pSVar10,setting,method_00);
        pSVar10 = System_String__Concat_5301f10(str0,": ",pSVar10,(MethodInfo *)0x0);
        UI_ScoreboardInfoPanel__CreateLabel
                  (local_60,local_58,style_00,pSVar10,0,alignment,in_stack_ffffffffffffff88);
        pIVar8 = local_70;
      }
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, uVar11 * 0x10 != lVar12) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar12);
      goto label_05d3e0ad;
    }
  }
label_05d3e08f:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar8,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d3e0ad:
  (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
  return;
}


// UI.ScoreboardInfoPanel$$SettingValue
// il2cpp: System_String_o* UI_ScoreboardInfoPanel__SettingValue (System_String_o* id, Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x5d3e2b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3e533: jmp 0x5d3e838

System_String_o *
UI_ScoreboardInfoPanel__SettingValue(System_String_o *id,Settings_BaseSetting_o *setting,MethodInfo *method)

{
  uint uVar1;
  float num;
  byte bVar2;
  byte bVar3;
  Settings_BaseSetting_c *pSVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Il2CppObject *object;
  System_String_o *item;
  System_String_o *category;
  bool bVar7;
  System_String_array *pSVar8;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  UI_ScoreboardInfoPanel___c_StaticFields *pUVar11;
  System_Func_BaseSetting__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  System_String_o *pSVar12;
  ulong uVar13;
  System_String_o **ppSVar14;
  long lVar15;
  uint local_2c;
  
  if (Il2CppMethodInitialized_07547e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_BaseSetting_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_BaseSetting_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardInfoPanel_c_SettingValue_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardInfoPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"On");
    il2cpp_codegen_initialize_runtime_metadata(&"Hud");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_07547e7d = '\x01';
  }
  category = "InGame";
  pSVar12 = "Hud";
  if (setting == (Settings_BaseSetting_o *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)0x0,(Il2CppClass *)TypeInfo_Settings_IListSetting);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05d3e838;
  }
  else {
    pSVar4 = setting->klass;
    bVar2 = (pSVar4->_2).typeHierarchyDepth;
    bVar3 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar2 < bVar3) ||
       ((pSVar4->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      bVar3 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
      if ((bVar3 <= bVar2) &&
         ((pSVar4->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
        if (*(char *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 1) == '\0') {
          ppSVar14 = &"Off";
        }
        else {
          ppSVar14 = &"On";
        }
        item = *ppSVar14;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar12 = UI_UIManager__GetLocale
                            (category,pSVar12,item,"","",
                             (MethodInfo *)0x0);
        return pSVar12;
      }
      bVar3 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if ((bVar3 <= bVar2) &&
         ((pSVar4->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        num = *(float *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pSVar12 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
        return pSVar12;
      }
      bVar3 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if ((bVar3 <= bVar2) &&
         ((pSVar4->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingOptions(id,(MethodInfo *)0x0);
        local_2c = *(uint *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
        if (-1 < (int)local_2c) {
          if (pSVar8 == (System_String_array *)0x0) goto label_05d3e838;
          uVar1 = (uint)pSVar8->max_length;
          if ((int)local_2c < (int)uVar1) {
            if (uVar1 <= local_2c) {
              ThrowIndexOutOfRangeException();
            }
            return pSVar8->m_Items[local_2c];
          }
        }
        pSVar12 = System_Int32__ToString((int32_t *)&local_2c,(MethodInfo *)0x0);
        return pSVar12;
      }
    }
    else {
      bVar7 = System_String__op_Equality(id,"general.GameMode",(MethodInfo *)0x0);
      if (bVar7) {
        pSVar12 = UI_ContentLocale__ModeName((*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
        return pSVar12;
      }
      bVar7 = System_String__op_Equality(id,"general.MapCategory",(MethodInfo *)0x0);
      if (bVar7) {
        pSVar12 = UI_ContentLocale__MapCategory((*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
        return pSVar12;
      }
    }
    pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)setting,(Il2CppClass *)TypeInfo_Settings_IListSetting);
    if (pIVar9 == (Il2CppObject *)0x0) {
      pSVar12 = (System_String_o *)
                (*(setting->klass->vtable)._3_ToString.methodPtr)
                          (setting,(setting->klass->vtable)._3_ToString.method);
      return pSVar12;
    }
  }
  pIVar5 = pIVar9->klass;
  uVar13 = (ulong)(pIVar5->_2).interface_offsets_count;
  if (uVar13 != 0) {
    pIVar6 = (pIVar5->_1).interfaceOffsets;
    lVar15 = 0;
    do {
      if (*(Settings_IListSetting_c **)((long)&pIVar6->interfaceType + lVar15) ==
          TypeInfo_Settings_IListSetting) {
        pVVar10 = pIVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar15) + 2);
        goto label_05d3e689;
      }
      lVar15 = lVar15 + 0x10;
    } while (uVar13 * 0x10 != lVar15);
  }
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05d3e689:
  pIVar9 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
  if (pIVar9 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar9[1].monitor < 1) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar12 = UI_UIManager__GetLocaleCommon("None",(MethodInfo *)0x0);
      return pSVar12;
    }
    if ((TypeInfo_UI_ScoreboardInfoPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardInfoPanel_c);
    }
    pSVar12 = ", ";
    pUVar11 = TypeInfo_UI_ScoreboardInfoPanel_c->static_fields;
    __this = pUVar11->__9__14_0;
    if (__this == (System_Func_BaseSetting__string__o *)0x0) {
      if ((TypeInfo_UI_ScoreboardInfoPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ScoreboardInfoPanel_c);
        pUVar11 = TypeInfo_UI_ScoreboardInfoPanel_c->static_fields;
      }
      object = (Il2CppObject *)pUVar11->__9;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_BaseSetting_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this,object,
                 (intptr_t)MethodInfo_UI_ScoreboardInfoPanel_c_SettingValue_b__14_0,(MethodInfo_4F19B50 *)0x0)
      ;
      pUVar11 = TypeInfo_UI_ScoreboardInfoPanel_c->static_fields;
      pUVar11->__9__14_0 = __this;
      Il2CppCodeGenWriteBarrier(&pUVar11->__9__14_0);
    }
    values = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar9,
                        (System_Func_TSource__TResult__o *)__this,
                        (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_BaseSetting_string);
    pSVar12 = System_String__Join_5303350
                        (pSVar12,(System_Collections_Generic_IEnumerable_string__o *)values,(MethodInfo *)0x0)
    ;
    return pSVar12;
  }
label_05d3e838:
  ThrowNullReferenceException();
}


// UI.ScoreboardInfoPanel$$.ctor
// il2cpp: void UI_ScoreboardInfoPanel___ctor (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x5d3e850

void UI_ScoreboardInfoPanel___ctor(UI_ScoreboardInfoPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardInfoPanel$$.cctor
// il2cpp: void UI_ScoreboardInfoPanel___cctor (const MethodInfo* method);
// 0x5d3e860

void UI_ScoreboardInfoPanel___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07547e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ScoreboardInfoPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"RoomName");
    il2cpp_codegen_initialize_runtime_metadata(&"PrevGameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    Il2CppMethodInitialized_07547e7e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Password",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PrevGameMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RoomName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxPlayers",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_UI_ScoreboardInfoPanel->static_fields->HiddenSettings = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ScoreboardInfoPanel->static_fields->HiddenSettings);
  return;
}



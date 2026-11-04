// Type: UI.ScoreboardInfoPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ScoreboardInfoPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardInfoPanel.cs
// --------------------------------

// UI.ScoreboardInfoPanel$$get_DoublePanel
// il2cpp: bool UI_ScoreboardInfoPanel__get_DoublePanel (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_ScoreboardInfoPanel__get_DoublePanel(UI_ScoreboardInfoPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.ScoreboardInfoPanel$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardInfoPanel__get_VerticalSpacing (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x182182ab0

float
UI_ScoreboardInfoPanel__get_VerticalSpacing(UI_ScoreboardInfoPanel_o* __this, MethodInfo* method)

{
  return 15.0;
}


// UI.ScoreboardInfoPanel$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardInfoPanel__get_VerticalPadding (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x181b9be70

int32_t
UI_ScoreboardInfoPanel__get_VerticalPadding(UI_ScoreboardInfoPanel_o* __this, MethodInfo* method)

{
  return 0xf;
}


// UI.ScoreboardInfoPanel$$Setup
// il2cpp: void UI_ScoreboardInfoPanel__Setup (UI_ScoreboardInfoPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822624b0
// eh: try 0x182262b50..0x182262e19 -> pad 0x18333f900 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182262baa: mov rdx, qword ptr [rip + 0x1e352a7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x182262bb1: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182262bb6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182262bbb: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182262bc0: test rcx, rcx
// asm:   0x182262bc3: jne 0x182262e08
// asm:   0x182262bc9: xor esi, esi
// asm:   0x182262bcb: mov rdi, qword ptr [rsp + 0xe0]
// asm:   0x182262bd3: mov r14, qword ptr [rsp + 0xf8]
// asm:   0x182262bdb: mov r15, qword ptr [rsp + 0x58]
// asm:   0x182262be0: jmp 0x182262c09
// asm:   0x182262d4c: mov rdx, qword ptr [rip + 0x1e539ed]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
// asm:   0x182262d53: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182262d58: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182262d5d: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182262d62: test rcx, rcx
// asm:   0x182262d65: jne 0x182262e19
// asm:   0x182262d6b: xor esi, esi
// asm:   0x182262d6d: mov rdi, qword ptr [rsp + 0xe0]
// asm:   0x182262d75: mov r14, qword ptr [rsp + 0xf8]
// asm:   0x182262d7d: mov r15, qword ptr [rsp + 0x58]
// asm:   0x182262e08: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182262e19: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333f900: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f905: push rbp
// asm:   0x18333f906: sub rsp, 0x40
// asm:   0x18333f90a: mov rbp, rdx
// asm:   0x18333f90d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x18333f914: mov rcx, qword ptr [rax]
// asm:   0x18333f917: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333f91b: movabs rax, 0
// asm:   0x18333f925: add rsp, 0x40
// asm:   0x18333f929: pop rbp
// asm:   0x18333f92a: ret 
// asm:   0x18333f930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f935: push rbp
// asm:   0x18333f936: sub rsp, 0x40
// asm:   0x18333f93a: mov rbp, rdx
// asm:   0x18333f93d: mov rax, qword ptr [rbp + 0x98]
// asm:   0x18333f944: mov rcx, qword ptr [rax]
// asm:   0x18333f947: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333f94b: movabs rax, 0
// asm:   0x18333f955: add rsp, 0x40
// asm:   0x18333f959: pop rbp
// asm:   0x18333f95a: ret 

void UI_ScoreboardInfoPanel__Setup(UI_ScoreboardInfoPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  Map_MapScript_o *pMVar4;
  Settings_InGameTitanSettings_o *pSVar5;
  Settings_InGameModeSettings_o *pSVar6;
  Settings_ListSetting_StringSetting__o *pSVar7;
  System_Collections_Generic_List_T__o *pSVar8;
  Settings_InGameAddonSettings_o *pSVar9;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_InGameMiscSettings_o *pSVar11;
  bool bVar12;
  int32_t iVar13;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  System_String_o *pSVar14;
  UI_ElementStyle_o *__this_02;
  Photon_Realtime_Room_o *pPVar15;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  int32_t local_res10 [4];
  UI_ElementStyle_o *local_res20;
  undefined1 local_98 [16];
  System_String_o *local_88;
  Settings_InGameSet_o *local_80;
  undefined1 local_78 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_70;
  System_String_o *local_68;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  System_String_o *local_50;
  
  if (Il2CppMethodInitialized_184347306 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_40b6820
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_40b6900
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic Hash: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"Room name: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Map Hash: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"Max players: ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Addon");
    il2cpp_codegen_initialize_runtime_metadata(&"Mode");
    Il2CppMethodInitialized_184347306 = '\x01';
  }
  local_res10[0] = 0;
  local_78 = (undefined1  [8])0x0;
  pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_68 = (System_String_o *)0x0;
  local_60 = (undefined1  [8])0x0;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_50 = (System_String_o *)0x0;
  UI_ScoreboardCategoryPanel__SetupGisketch((UI_ScoreboardCategoryPanel_o *)__this,parent,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields)._view = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view,__this_01);
  pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0x18,120.0,20.0,pSVar14,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  local_80 = pSVar1;
  UI_ScoreboardInfoPanel__CreateLabel
            (__this,(__this->fields).DoublePanelLeft,__this_02,"General",1,3,(MethodInfo *)0x0);
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) {
    UI_ScoreboardInfoPanel__CreateLabels
              (__this,__this_02,(__this->fields).DoublePanelLeft,"General",
               (pSVar2->fields).Settings,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).DoublePanelLeft;
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if ((pMVar4 != (Map_MapScript_o *)0x0) &&
       (pSVar14 = (pMVar4->fields).MapHash, pSVar14 != (System_String_o *)0x0)) {
      pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
      pSVar14 = System_String__Concat_1969e50("Map Hash: ",pSVar14,(MethodInfo *)0x0);
      UI_ScoreboardInfoPanel__CreateLabel(__this,pUVar3,__this_02,pSVar14,0,3,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pSVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicHash;
      if (pSVar14 != (System_String_o *)0x0) {
        pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
        pSVar14 = System_String__Concat_1969e50("Logic Hash: ",pSVar14,(MethodInfo *)0x0);
        UI_ScoreboardInfoPanel__CreateLabel(__this,pUVar3,__this_02,pSVar14,0,3,(MethodInfo *)0x0);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        if (Il2CppMethodInitialized_184344524 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
          Il2CppMethodInitialized_184344524 = '\x01';
        }
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
          pUVar3 = (__this->fields).DoublePanelLeft;
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          pPVar15 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
          }
          pSVar14 = PhotonExtensions__GetStringProperty_1dacb40
                              ((Photon_Realtime_RoomInfo_o *)pPVar15,
                               TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                               (MethodInfo *)0x0);
          pSVar14 = System_String__Concat_1969e50("Room name: ",pSVar14,(MethodInfo *)0x0);
          UI_ScoreboardInfoPanel__CreateLabel(__this,pUVar3,__this_02,pSVar14,0,3,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).DoublePanelLeft;
          pPVar15 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
          if (pPVar15 == (Photon_Realtime_Room_o *)0x0) goto label_182262dfc;
          local_res10[0] = (pPVar15->fields).maxPlayers;
          pSVar14 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
          pSVar14 = System_String__Concat_1969e50("Max players: ",pSVar14,(MethodInfo *)0x0);
          UI_ScoreboardInfoPanel__CreateLabel(__this,pUVar3,__this_02,pSVar14,0,3,(MethodInfo *)0x0);
        }
        UI_ScoreboardInfoPanel__CreateDivider(__this,(__this->fields).DoublePanelLeft,(MethodInfo *)0x0);
        UI_ScoreboardInfoPanel__CreateLabel
                  (__this,(__this->fields).DoublePanelLeft,__this_02,"Titans",1,3,
                   (MethodInfo *)0x0);
        pSVar5 = (pSVar1->fields).Titan;
        if (pSVar5 != (Settings_InGameTitanSettings_o *)0x0) {
          UI_ScoreboardInfoPanel__CreateLabels
                    (__this,__this_02,(__this->fields).DoublePanelLeft,"Titans",
                     (pSVar5->fields).Settings,(MethodInfo *)0x0);
          UI_ScoreboardInfoPanel__CreateLabel
                    (__this,(__this->fields).DoublePanelRight,__this_02,"Mode",1,3,
                     (MethodInfo *)0x0);
          pSVar6 = (pSVar1->fields).Mode;
          if (pSVar6 != (Settings_InGameModeSettings_o *)0x0) {
            UI_ScoreboardInfoPanel__CreateLabels_22617f0
                      (__this,__this_02,(__this->fields).DoublePanelRight,"Mode",
                       (pSVar6->fields).Current,(MethodInfo *)0x0);
            UI_ScoreboardInfoPanel__CreateDivider(__this,(__this->fields).DoublePanelRight,(MethodInfo *)0x0);
            UI_ScoreboardInfoPanel__CreateLabel
                      (__this,(__this->fields).DoublePanelRight,__this_02,"Addons",1,3,
                       (MethodInfo *)0x0);
            pSVar2 = (pSVar1->fields).General;
            if (((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
                (pSVar7 = (pSVar2->fields).Addons, pSVar7 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
               (pSVar8 = (pSVar7->fields)._value, pSVar8 != (System_Collections_Generic_List_T__o *)0x0)) {
              local_res20 = __this_02;
              if ((pSVar8->fields)._size == 0) {
                UI_ScoreboardInfoPanel__CreateLabel
                          (__this,(__this->fields).DoublePanelRight,__this_02,"None",0,3,
                           (MethodInfo *)0x0);
              }
              else {
                System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                           (((((pSVar1->fields).General)->fields).Addons)->fields)._value,
                           (MethodInfo_91F180 *)
                           MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
                local_78 = (undefined1  [8])local_98._0_8_;
                pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
                local_68 = local_88;
                local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
                while( true ) {
                  bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                      (MethodInfo_153A2A0 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext
                                     );
                  if (!bVar12) break;
                  if (local_68 == (System_String_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UI_ScoreboardInfoPanel__CreateLabel
                            (__this,(__this->fields).DoublePanelRight,__this_02,(*(uint64_t *)((char *)local_68 + 0x20)),0,3,
                             (MethodInfo *)0x0);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                           MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
              }
              pSVar9 = (pSVar1->fields).Addons;
              if ((pSVar9 != (Settings_InGameAddonSettings_o *)0x0) &&
                 (pSVar10 = (pSVar9->fields).Current,
                 pSVar10 !=
                 (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)) {
                iVar13 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                                    (MethodInfo_13CDEB0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Count
                                   );
                if (0 < iVar13) {
                  pSVar9 = (pSVar1->fields).Addons;
                  if ((pSVar9 == (Settings_InGameAddonSettings_o *)0x0) ||
                     (pSVar10 = (pSVar9->fields).Current,
                     pSVar10 ==
                     (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0))
                  goto label_182262dfc;
                  __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                              System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                                         (MethodInfo_13C6500 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
                                        );
                  if (__this_03 ==
                      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
                  goto label_182262dfc;
                  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_98,__this_03,
                             (MethodInfo_F1E4D0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
                            );
                  local_60 = (undefined1  [8])local_98._0_8_;
                  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
                  local_50 = local_88;
                  local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                  local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
                  while( true ) {
                    bVar12 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                       ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                         *)local_60,
                                        (MethodInfo_156BDD0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_40b6820
                                       );
                    pSVar14 = local_50;
                    if (!bVar12) break;
                    UI_ScoreboardInfoPanel__CreateLabel
                              (__this,(__this->fields).DoublePanelRight,__this_02,local_50,1,3,
                               (MethodInfo *)0x0);
                    pSVar9 = (pSVar1->fields).Addons;
                    if (pSVar9 == (Settings_InGameAddonSettings_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                                (pSVar9->fields).Current;
                    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pUVar3 = (__this->fields).DoublePanelRight;
                    settings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                               System_Collections_Generic_Dictionary_object__object___get_Item
                                         (__this_00,(Il2CppObject *)pSVar14,
                                          (MethodInfo_147A5B0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                         );
                    UI_ScoreboardInfoPanel__CreateLabels_22617f0
                              (__this,__this_02,pUVar3,"Addon",settings,(MethodInfo *)0x0);
                  }
                  System_Configuration_ConfigurationCollectionAttribute___ctor
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
                            );
                }
                UI_ScoreboardInfoPanel__CreateDivider
                          (__this,(__this->fields).DoublePanelRight,(MethodInfo *)0x0);
                UI_ScoreboardInfoPanel__CreateLabel
                          (__this,(__this->fields).DoublePanelRight,__this_02,"Misc",1,3,
                           (MethodInfo *)0x0);
                pSVar11 = (pSVar1->fields).Misc;
                if (pSVar11 != (Settings_InGameMiscSettings_o *)0x0) {
                  UI_ScoreboardInfoPanel__CreateLabels
                            (__this,__this_02,(__this->fields).DoublePanelRight,"Misc",
                             (pSVar11->fields).Settings,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_182262dfc:
  ThrowNullReferenceException();
}


// UI.ScoreboardInfoPanel$$CreateDivider
// il2cpp: void UI_ScoreboardInfoPanel__CreateDivider (UI_ScoreboardInfoPanel_o* __this, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x1822615e0

void UI_ScoreboardInfoPanel__CreateDivider
               (UI_ScoreboardInfoPanel_o *__this,UnityEngine_Transform_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  int32_t iVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184347307 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"inGameDivider");
    Il2CppMethodInitialized_184347307 = '\x01';
  }
  __this_00 = (__this->fields)._view;
  fVar2 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                    (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)(__this);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgInGameView__Panel
              (__this_00,panel,"inGameDivider",fVar2 * 0.5 - ((float)iVar1 + (float)iVar1),1.0,false,
               (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardInfoPanel$$CreateLabel
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabel (UI_ScoreboardInfoPanel_o* __this, UnityEngine_Transform_o* panel, UI_ElementStyle_o* style, System_String_o* text, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x1822616b0

void UI_ScoreboardInfoPanel__CreateLabel
               (UI_ScoreboardInfoPanel_o *__this,UnityEngine_Transform_o *panel,UI_ElementStyle_o *style,
               System_String_o *text,int32_t fontStyle,int32_t alignment,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  int32_t iVar1;
  System_String_o *style_00;
  TMPro_TMP_Text_o *__this_01;
  float fVar2;
  
  if (Il2CppMethodInitialized_184347308 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameHeading");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_184347308 = '\x01';
  }
  __this_00 = (__this->fields)._view;
  fVar2 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                    (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)(__this);
  style_00 = "inGameHeading";
  if (fontStyle != 1) {
    style_00 = "inGameInfo";
  }
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                          (__this_00,panel,text,fVar2 * 0.5 - ((float)iVar1 + (float)iVar1),40.0,style_00,
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
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* category, System_Collections_Specialized_OrderedDictionary_o* settings, const MethodInfo* method);
// 0x182261a00
// eh: try 0x182261d80..0x18226246b -> pad 0x18333f8b0 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 56 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182261cfa: mov rax, r15
// asm:   0x182261d79: nop dword ptr [rax]
// asm:   0x182261dfb: mov rsi, r15
// asm:   0x182261dfe: jmp 0x182261e33
// asm:   0x182261f97: mov rdx, qword ptr [rip + 0x1e1453a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x182261f9e: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x182261fa3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182261fa8: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x182261fad: test rcx, rcx
// asm:   0x182261fb0: jne 0x182262418
// asm:   0x182261fb6: xor r15d, r15d
// asm:   0x182261fb9: mov r13, qword ptr [rsp + 0x168]
// asm:   0x182261fc1: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x182261fc9: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x182261fce: mov rdi, qword ptr [rsp + 0x50]
// asm:   0x18226210e: jmp 0x18226233e
// asm:   0x182262113: mov r14, qword ptr [rip + 0x1e3b8ae]  ; "None"
// asm:   0x18226211a: jmp 0x182261ffc
// asm:   0x1822621b8: mov rdi, qword ptr [rip + 0x1e2be59]  ; "Allow ahss"
// asm:   0x1822621bf: jmp 0x18226233e
// asm:   0x1822621c4: mov rdi, qword ptr [rip + 0x1e1dbad]  ; "APG PVP"
// asm:   0x1822621cb: jmp 0x18226233e
// asm:   0x1822621d0: mov rdi, qword ptr [rip + 0x1e0c451]  ; "Thunderspear PVP"
// asm:   0x1822621d7: jmp 0x18226233e
// asm:   0x1822621dc: mov rdi, qword ptr [rip + 0x1e0df0d]  ; "Clear KDR on restart"
// asm:   0x1822621e3: jmp 0x18226233e
// asm:   0x1822622d2: jmp 0x18226233e
// asm:   0x1822623dd: lea rcx, [rsp + 0x60]
// asm:   0x1822623e2: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1822623e7: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1822623ec: test rcx, rcx
// asm:   0x1822623ef: jne 0x18226246b
// asm:   0x182262418: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18226246b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833370f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833370f5: push rbp
// asm:   0x1833370f6: sub rsp, 0x40
// asm:   0x1833370fa: mov rbp, rdx
// asm:   0x1833370fd: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x183337104: mov rcx, qword ptr [rax]
// asm:   0x183337107: mov qword ptr [rbp + 0x70], rcx
// asm:   0x18333710b: movabs rax, 0
// asm:   0x183337115: add rsp, 0x40
// asm:   0x183337119: pop rbp
// asm:   0x18333711a: ret 
// asm:   0x18333f8b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f8b5: push rbp
// asm:   0x18333f8b6: sub rsp, 0x40
// asm:   0x18333f8ba: mov rbp, rdx
// asm:   0x18333f8bd: mov rax, qword ptr [rbp + 0xe0]
// asm:   0x18333f8c4: mov rcx, qword ptr [rax]
// asm:   0x18333f8c7: mov qword ptr [rbp + 0x58], rcx
// asm:   0x18333f8cb: movabs rax, 0
// asm:   0x18333f8d5: add rsp, 0x40
// asm:   0x18333f8d9: pop rbp
// asm:   0x18333f8da: ret 

void UI_ScoreboardInfoPanel__CreateLabels
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,UnityEngine_Transform_o *panel,
               System_String_o *category,System_Collections_Specialized_OrderedDictionary_o *settings,
               MethodInfo *method)

{
  float num;
  byte bVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Il2CppType *handle;
  bool bVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  void *pvVar8;
  Il2CppObject *pIVar9;
  longlong *plVar10;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_T__o *__this_01;
  undefined8 uVar11;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *a;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Il2CppObject *local_108;
  System_String_o *local_100;
  System_String_o *local_f8;
  undefined8 local_f0;
  Il2CppObject **local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  System_Collections_Generic_List_Enumerator_object__o *local_d0;
  System_Collections_Generic_List_Enumerator_object__o local_c8;
  undefined8 local_b0;
  System_Collections_Generic_List_string__o *local_a8;
  System_Enum_o local_a0;
  undefined4 local_90;
  System_Enum_o local_88;
  undefined4 local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if (Il2CppMethodInitialized_184347309 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_PVPMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Game mode: ");
    il2cpp_codegen_initialize_runtime_metadata(&"RoomName");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"PrevGameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"Allow ahss");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearKDROnRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"AllowAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"Allow apg");
    il2cpp_codegen_initialize_runtime_metadata(&"APG PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"APGPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear KDR on restart");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"AllowAPG");
    il2cpp_codegen_initialize_runtime_metadata(&"Mode");
    Il2CppMethodInitialized_184347309 = '\x01';
  }
  pSVar13 = (System_String_o *)0x0;
  local_108 = (Il2CppObject *)0x0;
  local_c8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.fields._index = 0;
  local_c8.fields._version = 0;
  local_c8.fields._current = (Il2CppObject *)0x0;
  local_b0 = 0;
  bVar5 = System_String__op_Equality(category,"Mode",(MethodInfo *)0x0);
  pSVar7 = "Game mode: ";
  if (bVar5) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0))
    goto label_182262471;
    pSVar4 = (pSVar3->fields).GameMode;
    pSVar6 = pSVar13;
    if (pSVar4 != (Settings_StringSetting_o *)0x0) {
      pSVar6 = (System_String_o *)
               (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
    }
    pSVar7 = System_String__Concat_1969e50(pSVar7,pSVar6,(MethodInfo *)0x0);
    if (__this == (UI_ScoreboardInfoPanel_o *)0x0) goto label_182262471;
    UI_ScoreboardInfoPanel__CreateLabel(__this,panel,style,pSVar7,0,3,(MethodInfo *)0x0);
  }
  if (settings != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    local_108 = (Il2CppObject *)
                (*(settings->klass->vtable)._22_GetEnumerator.methodPtr)
                          (settings,(settings->klass->vtable)._22_GetEnumerator.method);
    local_f0 = 0;
    local_e8 = &local_108;
    local_e0 = &local_b0;
label_182261d80:
    if (local_108 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_108);
    if ((char)pvVar8 == '\0') {
      pIVar9 = il2cpp_vm_Object_IsInst(*local_e8,(Il2CppClass *)TypeInfo_System_IDisposable);
      *local_e0 = pIVar9;
      if (pIVar9 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar9);
      }
      return;
    }
    if (local_108 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar9 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_108);
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar9->klass->_1).element_class != (TypeInfo_System_Collections_DictionaryEntry->_1).element_class)
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    plVar10 = il2cpp_object_unbox(pIVar9);
    pSVar7 = (System_String_o *)plVar10[1];
    pSVar6 = pSVar13;
    if (pSVar7 != (System_String_o *)0x0) {
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((pSVar7->klass->_2).typeHierarchyDepth < bVar1) ||
         (pSVar6 = pSVar7,
         (pSVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
      }
    }
    pSVar7 = (System_String_o *)*plVar10;
    a = pSVar13;
    local_100 = pSVar6;
    if (pSVar7 != (System_String_o *)0x0) {
      if (pSVar7->klass == g_data_184354e50) {
        a = pSVar7;
      }
      if (a == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
    }
    local_f8 = a;
    if (pSVar6 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = (System_String_o *)
             (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                       (pSVar6,(pSVar6->klass->vtable)._3_ToString.method);
    pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(Il2CppClass *)TypeInfo_Settings_IListSetting);
    if (pIVar9 != (Il2CppObject *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      __this_01 = InterfaceInvoker0_Invoke(2,(Il2CppClass *)TypeInfo_Settings_IListSetting,pIVar9);
      if (__this_01 == (System_Collections_Generic_List_T__o *)0x0) {
        ThrowNullReferenceException();
      }
      local_a8 = __this_00;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (&local_60,__this_01,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      local_c8.fields._list = local_60.fields._list;
      local_c8.fields._index = local_60.fields._index;
      local_c8.fields._version = local_60.fields._version;
      local_c8.fields._current = local_60.fields._current;
      local_d8 = 0;
      local_d0 = &local_c8;
      while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_c8,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext),
            bVar5) {
        if (local_c8.fields._current == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        uVar11 = (*(local_c8.fields._current)->klass->vtable[3].methodPtr)
                           (local_c8.fields._current,(local_c8.fields._current)->klass->vtable[3].method);
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_00,uVar11);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = "None";
      if (0 < (__this_00->fields)._size) {
        pSVar7 = System_String__Join_196ecd0
                           (", ",
                            (System_Collections_Generic_IEnumerable_string__o *)__this_00,(MethodInfo *)0x0);
      }
    }
    left = System_Object__GetType((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    handle = TypeRef_Settings_FloatSetting;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    bVar5 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)right,
                       (MethodInfo_841F20 *)0x0);
    if (bVar5) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
      num = *(float *)((longlong)&(*(uint64_t *)((char *)pSVar6 + 0x18)) + 4);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar7 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
    }
    bVar5 = System_String__op_Equality(category,"General",(MethodInfo *)0x0);
    pSVar12 = a;
    if (bVar5) {
      bVar5 = System_String__op_Equality(a,"Difficulty",(MethodInfo *)0x0);
      if (bVar5) {
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
        }
        local_88.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
        local_88.monitor = &g_data_ffffffffffffffff;
        local_78 = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pSVar6 + 0x18)) + 4);
        pSVar7 = System_Enum__ToString(&local_88,(MethodInfo *)0x0);
        goto label_18226233e;
      }
      bVar5 = System_String__op_Equality(a,"Password",(MethodInfo *)0x0);
      if ((((bVar5) || (bVar5 = System_String__op_Equality(a,"PrevGameMode",(MethodInfo *)0x0), bVar5))
          || (bVar5 = System_String__op_Equality(a,"RoomName",(MethodInfo *)0x0), bVar5)) ||
         (bVar5 = System_String__op_Equality(a,"MaxPlayers",(MethodInfo *)0x0), bVar5))
      goto label_182261d80;
    }
    else {
      bVar5 = System_String__op_Equality(category,"Misc",(MethodInfo *)0x0);
      if (bVar5) {
        bVar5 = System_String__op_Equality(a,"PVP",(MethodInfo *)0x0);
        if (bVar5) {
          bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
          }
          local_a0.klass = (System_Enum_c *)TypeInfo_Settings_PVPMode;
          local_a0.monitor = &g_data_ffffffffffffffff;
          local_90 = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pSVar6 + 0x18)) + 4);
          pSVar7 = System_Enum__ToString(&local_a0,(MethodInfo *)0x0);
        }
        else {
          bVar5 = System_String__op_Equality(a,"ClearKDROnRestart",(MethodInfo *)0x0);
          pSVar12 = "Clear KDR on restart";
          if (((!bVar5) &&
              (bVar5 = System_String__op_Equality(a,"ThunderspearPVP",(MethodInfo *)0x0),
              pSVar12 = "Thunderspear PVP", !bVar5)) &&
             ((bVar5 = System_String__op_Equality(a,"APGPVP",(MethodInfo *)0x0),
              pSVar12 = "APG PVP", !bVar5 &&
              ((bVar5 = System_String__op_Equality(a,"AllowAHSS",(MethodInfo *)0x0),
               pSVar12 = "Allow ahss", !bVar5 &&
               (bVar5 = System_String__op_Equality(a,"AllowAPG",(MethodInfo *)0x0), pSVar12 = a,
               bVar5)))))) {
            pSVar12 = "Allow apg";
          }
        }
      }
      else {
        bVar5 = System_String__op_Equality(category,"Mode",(MethodInfo *)0x0);
        if (!bVar5) goto label_18226233e;
        if (a == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = System_String__EndsWith(a,"Tooltip",(MethodInfo *)0x0);
        if (bVar5) goto label_182261d80;
      }
    }
label_18226233e:
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pSVar6 = Utility_Util__PascalToSentence(pSVar12,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_1969b70(pSVar6,": ",pSVar7,(MethodInfo *)0x0);
    UI_ScoreboardInfoPanel__CreateLabel(__this,panel,style,pSVar7,0,3,(MethodInfo *)0x0);
    goto label_182261d80;
  }
label_182262471:
  ThrowNullReferenceException();
}


// UI.ScoreboardInfoPanel$$CreateLabels
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* category, Settings_BaseSettingsContainer_o* container, const MethodInfo* method);
// 0x182262480

void UI_ScoreboardInfoPanel__CreateLabels_2262480
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,UnityEngine_Transform_o *panel,
               System_String_o *category,Settings_BaseSettingsContainer_o *container,MethodInfo *method)

{
  if (container != (Settings_BaseSettingsContainer_o *)0x0) {
    UI_ScoreboardInfoPanel__CreateLabels
              (__this,style,panel,category,(container->fields).Settings,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardInfoPanel$$CreateLabels
// il2cpp: void UI_ScoreboardInfoPanel__CreateLabels (UI_ScoreboardInfoPanel_o* __this, UI_ElementStyle_o* style, UnityEngine_Transform_o* panel, System_String_o* category, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x1822617f0
// eh: try 0x182261920..0x1822619f4 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182261979: mov rdx, qword ptr [rip + 0x1e57280]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x182261980: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182261985: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18226198a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18226198f: test rcx, rcx
// asm:   0x182261992: jne 0x1822619f4
// asm:   0x182261994: mov r15, qword ptr [rsp + 0xc8]
// asm:   0x18226199c: mov r12, qword ptr [rsp + 0xc0]
// asm:   0x1822619a4: mov r13, qword ptr [rsp + 0xb8]
// asm:   0x1822619ac: mov rdi, qword ptr [rsp + 0xd0]
// asm:   0x1822619f4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void UI_ScoreboardInfoPanel__CreateLabels_22617f0
               (UI_ScoreboardInfoPanel_o *__this,UI_ElementStyle_o *style,UnityEngine_Transform_o *panel,
               System_String_o *category,
               System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,MethodInfo *method)

{
  Il2CppObject *key;
  bool bVar1;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Settings_BaseSetting_o *value;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_18434730a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Specialized_OrderedDictionary);
    Il2CppMethodInitialized_18434730a = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentKey = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Specialized_OrderedDictionary);
  System_Collections_Specialized_OrderedDictionary___ctor(__this_00,(MethodInfo *)0x0);
  if (settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)settings,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_70,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                );
      local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_70._0_8_;
      local_58.fields._index = local_70._8_4_;
      local_58.fields._version = local_70._12_4_;
      local_58.fields._currentKey = local_60;
      local_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_70._8_8_ = &local_58;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          (&local_58,
                           (MethodInfo_156BDD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                          );
        key = local_58.fields._currentKey;
        if (!bVar1) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                    );
          UI_ScoreboardInfoPanel__CreateLabels(__this,style,panel,category,__this_00,(MethodInfo *)0x0);
          return;
        }
        value = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                           local_58.fields._currentKey,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
        if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) break;
        System_Collections_Specialized_OrderedDictionary__Add
                  (__this_00,key,(Il2CppObject *)value,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardInfoPanel$$.ctor
// il2cpp: void UI_ScoreboardInfoPanel___ctor (UI_ScoreboardInfoPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_ScoreboardInfoPanel___ctor(UI_ScoreboardInfoPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}



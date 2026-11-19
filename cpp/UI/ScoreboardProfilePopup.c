// Type: UI.ScoreboardProfilePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/ScoreboardProfilePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardProfilePopup.cs
// --------------------------------

// UI.ScoreboardProfilePopup$$get_DialogId
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__get_DialogId (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x5d4a400

System_String_o *
UI_ScoreboardProfilePopup__get_DialogId(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547ed8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-profile");
    Il2CppMethodInitialized_07547ed8 = '\x01';
  }
  return "ingame-scoreboard-profile";
}


// UI.ScoreboardProfilePopup$$Setup
// il2cpp: void UI_ScoreboardProfilePopup__Setup (UI_ScoreboardProfilePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d4a430

void UI_ScoreboardProfilePopup__Setup
               (UI_ScoreboardProfilePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547ed9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-profile-content");
    Il2CppMethodInitialized_07547ed9 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,parent,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._Dialog_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    __this_01 = Gisketch_Aottg2UI_Building_GisketchView__Find
                          (__this_00,"ingame-scoreboard-profile-content",(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      (__this->fields)._content = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._content);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardProfilePopup$$Show
// il2cpp: void UI_ScoreboardProfilePopup__Show (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d4a4c0
// eh: try 0x5d4a760..0x5d4b351 -> pad 0x5d4b35d (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d4b375..0x5d4b37a -> pad 0x5d4b39f cleanup
// eh: try 0x5d4b3a2..0x5d4b3ac -> pad 0x5d4b3b4 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4b359: jmp 0x5d4b35d
// asm:   0x5d4b35b: jmp 0x5d4b35d
// asm:   0x5d4b35d: mov rbx, rax
// asm:   0x5d4b360: cmp edx, 1
// asm:   0x5d4b363: jne 0x5d4b3a2
// asm:   0x5d4b365: mov rdi, rbx
// asm:   0x5d4b368: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d4b36d: mov rbx, qword ptr [rax]
// asm:   0x5d4b370: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5d4b375: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d4b37a: lea rax, [rip + 0x15429f7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5d4b381: mov rsi, qword ptr [rax]
// asm:   0x5d4b384: lea rdi, [rsp + 0x60]
// asm:   0x5d4b389: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d4b38e: test rbx, rbx
// asm:   0x5d4b391: je 0x5d4a7bb
// asm:   0x5d4b397: mov rdi, rbx
// asm:   0x5d4b39a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d4b39f: mov rbx, rax
// asm:   0x5d4b3a2: lea rdi, [rsp + 0x28]
// asm:   0x5d4b3a7: call 0x2fdca80  ; il2cpp_runtime_helper_02fdca80()
// asm:   0x5d4b3ac: mov rdi, rbx
// asm:   0x5d4b3af: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d4b3b4: mov rdi, rax
// asm:   0x5d4b3b7: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardProfilePopup__Show
               (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ProfileSettings_o **targetAddress;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  Settings_StringSetting_o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  Settings_ProfileSettings_o *pSVar6;
  Settings_NameSetting_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Settings_ColorSetting_o *pSVar9;
  Utility_Color255_o *pUVar10;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar11;
  UnityEngine_Object_o *obj;
  bool bVar12;
  UnityEngine_UI_RawImage_o *__this_02;
  System_String_o *pSVar13;
  UnityEngine_Texture_o *value;
  UnityEngine_GameObject_o *pUVar14;
  System_String_o *pSVar15;
  MethodInfo *pMVar16;
  System_String_o *pSVar17;
  UnityEngine_UI_ScrollRect_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **tierLabel;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 uVar18;
  undefined4 uVar19;
  UnityEngine_Color_o UVar20;
  UnityEngine_Color_o colorA;
  UnityEngine_Color_o colorA_00;
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorB_00;
  UnityEngine_Color_o colorC;
  UnityEngine_Color_o colorC_00;
  MethodInfo *in_stack_ffffffffffffff18;
  Il2CppObject *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c0 [16];
  UnityEngine_Object_o *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_80;
  UnityEngine_Object_o *local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_07547eda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SupporterThanks");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"UserId");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"PatreonSupporter");
    il2cpp_codegen_initialize_runtime_metadata(&"Social");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Profile/");
    il2cpp_codegen_initialize_runtime_metadata(&"PatreonTier");
    il2cpp_codegen_initialize_runtime_metadata(&"About");
    il2cpp_codegen_initialize_runtime_metadata(&"No");
    il2cpp_codegen_initialize_runtime_metadata(&"DisplayName");
    Il2CppMethodInitialized_07547eda = '\x01';
  }
  local_e0 = (Il2CppObject *)0x0;
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_78 = (UnityEngine_Object_o *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d4b347;
  bVar12 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                     (__this_00,(player->fields).actorNumber,&local_e0,
                      (MethodInfo_4A114B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
  if (!bVar12) {
    return;
  }
  if (local_e0 == (Il2CppObject *)0x0) goto label_05d4b347;
  if (local_e0[3].klass == (Il2CppClass *)0x0) {
    return;
  }
  pSVar3 = (__this->fields)._items;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d4b347;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
             (System_Collections_Generic_List_object__o *)pSVar3,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_78 = local_b0;
  local_88 = (undefined1  [8])local_c0._0_8_;
  pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)local_c0._8_8_;
  local_c0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_c0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_88;
  while (bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
        obj = local_78, bVar12) {
    if (local_78 == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)local_78,false,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  pSVar3 = (__this->fields)._items;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d4b347;
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if (local_e0 == (Il2CppObject *)0x0) goto label_05d4b347;
  targetAddress = &(__this->fields)._profile;
  (__this->fields)._profile = (Settings_ProfileSettings_o *)local_e0[3].klass;
  Il2CppCodeGenWriteBarrier(targetAddress);
  __this_01 = (__this->fields)._View_k__BackingField;
  if (__this_01 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_05d4b347;
  uVar18 = 0;
  uVar19 = 0;
  __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__RawImage
                        (__this_01,(__this->fields)._content,256.0,256.0,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  if ((*targetAddress == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar4 = ((*targetAddress)->fields).ProfileIcon, pSVar4 == (Settings_StringSetting_o *)0x0))
  goto label_05d4b347;
  pSVar15 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  pSVar13 = (pSVar4->fields)._value;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar13 = UI_UIManager__GetProfileIcon(pSVar13,(MethodInfo *)0x0);
  pSVar13 = System_String__Concat_52f0320("Icons/Profile/",pSVar13,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar13,true,false,(MethodInfo *)0x0);
  if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05d4b347;
  if ((value != (UnityEngine_Texture_o *)0x0) &&
     (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(value);
  }
  UnityEngine_UI_RawImage__set_texture(__this_02,value,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._items;
  pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  pMVar16 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d4b347;
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar5 = (pSVar3->fields)._items;
  if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_05d4b347;
  uVar2 = (pSVar3->fields)._size;
  if (uVar2 < (uint)pUVar5->max_length) {
    (pSVar3->fields)._size = uVar2 + 1;
    pUVar5->m_Items[(int)uVar2] = pUVar14;
    Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar14,
               (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
  }
  pSVar6 = *targetAddress;
  if ((((pSVar6 == (Settings_ProfileSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).Name, pSVar7 == (Settings_NameSetting_o *)0x0)) ||
      (pSVar8 = (pSVar6->fields).NameEffectEnabled, pSVar8 == (Settings_BoolSetting_o *)0x0)) ||
     (((pSVar4 = (pSVar6->fields).NameEffect, pSVar4 == (Settings_StringSetting_o *)0x0 ||
       (pSVar9 = (pSVar6->fields).NameEffectColorA, pSVar9 == (Settings_ColorSetting_o *)0x0)) ||
      (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)))) goto label_05d4b347;
  pSVar15 = (pSVar7->fields)._value;
  bVar12 = (pSVar8->fields)._value;
  pSVar13 = (pSVar4->fields)._value;
  UVar20 = Utility_Color255__ToColor(pUVar10,(MethodInfo *)0x0);
  if ((*targetAddress == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar9 = ((*targetAddress)->fields).NameEffectColorB, pSVar9 == (Settings_ColorSetting_o *)0x0))
  goto label_05d4b347;
  local_a8._8_4_ = uVar18;
  local_a8._0_8_ = UVar20.fields._8_8_;
  local_a8._12_4_ = uVar19;
  local_98._8_4_ = extraout_XMM0_Dc;
  local_98._0_8_ = UVar20.fields._0_8_;
  local_98._12_4_ = extraout_XMM0_Dd;
  pUVar10 = (pSVar9->fields)._value;
  if (pUVar10 == (Utility_Color255_o *)0x0) goto label_05d4b347;
  UVar20 = Utility_Color255__ToColor(pUVar10,(MethodInfo *)0x0);
  if ((*targetAddress == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar9 = ((*targetAddress)->fields).NameEffectColorC, pSVar9 == (Settings_ColorSetting_o *)0x0))
  goto label_05d4b347;
  local_48._8_4_ = uVar18;
  local_48._0_8_ = UVar20.fields._8_8_;
  local_48._12_4_ = uVar19;
  local_d8._8_4_ = extraout_XMM0_Dc_00;
  local_d8._0_8_ = UVar20.fields._0_8_;
  local_d8._12_4_ = extraout_XMM0_Dd_00;
  pUVar10 = (pSVar9->fields)._value;
  if (pUVar10 == (Utility_Color255_o *)0x0) goto label_05d4b347;
  UVar20 = Utility_Color255__ToColor(pUVar10,(MethodInfo *)0x0);
  if ((*targetAddress == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar9 = ((*targetAddress)->fields).NameEffectColorD, pSVar9 == (Settings_ColorSetting_o *)0x0))
  goto label_05d4b347;
  local_68._8_4_ = uVar18;
  local_68._0_8_ = UVar20.fields._8_8_;
  local_68._12_4_ = uVar19;
  local_58._8_4_ = extraout_XMM0_Dc_01;
  local_58._0_8_ = UVar20.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd_01;
  pUVar10 = (pSVar9->fields)._value;
  if (pUVar10 == (Utility_Color255_o *)0x0) goto label_05d4b347;
  UVar20 = Utility_Color255__ToColor(pUVar10,(MethodInfo *)0x0);
  uVar18 = local_a8._8_4_;
  uVar19 = local_a8._12_4_;
  colorA.fields.b = (float)local_a8._0_4_;
  colorA.fields.a = (float)local_a8._4_4_;
  colorA.fields.r = (float)local_98._0_4_;
  colorA.fields.g = (float)local_98._4_4_;
  colorB.fields.b = (float)local_48._0_4_;
  colorB.fields.a = (float)local_48._4_4_;
  colorB.fields.r = (float)local_d8._0_4_;
  colorB.fields.g = (float)local_d8._4_4_;
  colorC.fields.b = (float)local_68._0_4_;
  colorC.fields.a = (float)local_68._4_4_;
  colorC.fields.r = (float)local_58._0_4_;
  colorC.fields.g = (float)local_58._4_4_;
  UI_ScoreboardProfilePopup__AddEffectRow
            (__this,player,"Name",pSVar15,bVar12,pSVar13,colorA,colorB,colorC,UVar20,
             in_stack_ffffffffffffff18);
  pSVar6 = (__this->fields)._profile;
  if ((pSVar6 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar7 = (pSVar6->fields).Guild, pSVar7 == (Settings_NameSetting_o *)0x0)) goto label_05d4b347;
  pSVar15 = (pSVar7->fields)._value;
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar15 = Anticheat_ChatFilter__FilterBadWords(pSVar15,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar15 = MiscExtensions__HexColor(pSVar15,(MethodInfo *)0x0);
  if ((*targetAddress == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar4 = ((*targetAddress)->fields).GuildRoleSprite, pSVar4 == (Settings_StringSetting_o *)0x0))
  goto label_05d4b347;
  pSVar13 = (pSVar4->fields)._value;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  pMVar16 = (MethodInfo *)
            PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                      (player,pSVar15,pSVar13,(MethodInfo *)0x0);
  pSVar6 = *targetAddress;
  if ((((pSVar6 == (Settings_ProfileSettings_o *)0x0) ||
       (pSVar8 = (pSVar6->fields).GuildEffectEnabled, pSVar8 == (Settings_BoolSetting_o *)0x0)) ||
      (pSVar4 = (pSVar6->fields).GuildEffect, pSVar4 == (Settings_StringSetting_o *)0x0)) ||
     ((pSVar9 = (pSVar6->fields).GuildEffectColorA, pSVar9 == (Settings_ColorSetting_o *)0x0 ||
      (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)))) goto label_05d4b347;
  bVar12 = (pSVar8->fields)._value;
  pSVar15 = (pSVar4->fields)._value;
  UVar20 = Utility_Color255__ToColor(pUVar10,(MethodInfo *)0x0);
  if ((*targetAddress == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar9 = ((*targetAddress)->fields).GuildEffectColorB, pSVar9 == (Settings_ColorSetting_o *)0x0))
  goto label_05d4b347;
  local_a8._8_4_ = uVar18;
  local_a8._0_8_ = UVar20.fields._8_8_;
  local_a8._12_4_ = uVar19;
  local_98._8_4_ = extraout_XMM0_Dc_02;
  local_98._0_8_ = UVar20.fields._0_8_;
  local_98._12_4_ = extraout_XMM0_Dd_02;
  pUVar10 = (pSVar9->fields)._value;
  if (pUVar10 == (Utility_Color255_o *)0x0) goto label_05d4b347;
  UVar20 = Utility_Color255__ToColor(pUVar10,(MethodInfo *)0x0);
  if ((*targetAddress == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar9 = ((*targetAddress)->fields).GuildEffectColorC, pSVar9 == (Settings_ColorSetting_o *)0x0))
  goto label_05d4b347;
  local_48._8_4_ = uVar18;
  local_48._0_8_ = UVar20.fields._8_8_;
  local_48._12_4_ = uVar19;
  local_d8._8_4_ = extraout_XMM0_Dc_03;
  local_d8._0_8_ = UVar20.fields._0_8_;
  local_d8._12_4_ = extraout_XMM0_Dd_03;
  pUVar10 = (pSVar9->fields)._value;
  if (pUVar10 == (Utility_Color255_o *)0x0) goto label_05d4b347;
  UVar20 = Utility_Color255__ToColor(pUVar10,(MethodInfo *)0x0);
  if ((*targetAddress == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar9 = ((*targetAddress)->fields).GuildEffectColorD, pSVar9 == (Settings_ColorSetting_o *)0x0))
  goto label_05d4b347;
  local_68._8_4_ = uVar18;
  local_68._0_8_ = UVar20.fields._8_8_;
  local_68._12_4_ = uVar19;
  local_58._8_4_ = extraout_XMM0_Dc_04;
  local_58._0_8_ = UVar20.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd_04;
  pUVar10 = (pSVar9->fields)._value;
  if (pUVar10 == (Utility_Color255_o *)0x0) goto label_05d4b347;
  UVar20 = Utility_Color255__ToColor(pUVar10,(MethodInfo *)0x0);
  colorA_00.fields.b = (float)local_a8._0_4_;
  colorA_00.fields.a = (float)local_a8._4_4_;
  colorA_00.fields.r = (float)local_98._0_4_;
  colorA_00.fields.g = (float)local_98._4_4_;
  colorB_00.fields.b = (float)local_48._0_4_;
  colorB_00.fields.a = (float)local_48._4_4_;
  colorB_00.fields.r = (float)local_d8._0_4_;
  colorB_00.fields.g = (float)local_d8._4_4_;
  colorC_00.fields.b = (float)local_68._0_4_;
  colorC_00.fields.a = (float)local_68._4_4_;
  colorC_00.fields.r = (float)local_58._0_4_;
  colorC_00.fields.g = (float)local_58._4_4_;
  UI_ScoreboardProfilePopup__AddEffectRow
            (__this,player,"Guild",(System_String_o *)pMVar16,bVar12,pSVar15,colorA_00,colorB_00
             ,colorC_00,UVar20,in_stack_ffffffffffffff18);
  pSVar15 = UI_UIManager__GetLocaleCommon("Social",(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._profile;
  if (pSVar6 == (Settings_ProfileSettings_o *)0x0) goto label_05d4b347;
  pSVar4 = (pSVar6->fields).Social;
  tierLabel = (System_String_o **)local_c0;
  if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_05d4b347;
  pSVar13 = Anticheat_ChatFilter__FilterBadWords((pSVar4->fields)._value,(MethodInfo *)0x0);
  pSVar13 = MiscExtensions__HexColor(pSVar13,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar15,pSVar13,pMVar16);
  pSVar15 = UI_UIManager__GetLocaleCommon("About",(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._profile;
  if ((pSVar6 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar4 = (pSVar6->fields).About, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_05d4b347;
  pSVar13 = Anticheat_ChatFilter__FilterBadWords((pSVar4->fields)._value,(MethodInfo *)0x0);
  pSVar13 = MiscExtensions__HexColor(pSVar13,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar15,pSVar13,pMVar16);
  pSVar15 = UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName(__this,player,method_00);
  if (Il2CppMethodInitialized_07547edf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547edf = '\x01';
  }
  local_c0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  bVar12 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(player,tierLabel,(MethodInfo *)0x0);
  if (!bVar12) {
    if ((player->fields).IsLocal != false) {
      tierLabel = (System_String_o **)local_c0;
      bVar12 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(tierLabel,(MethodInfo *)0x0);
      if (bVar12) goto label_05d4ae1c;
    }
    tierLabel = &"None";
  }
label_05d4ae1c:
  local_98._0_8_ = *tierLabel;
  bVar12 = System_String__op_Inequality(*tierLabel,"None",(MethodInfo *)0x0);
  pSVar17 = "SupporterThanks";
  pSVar13 = "No";
  local_a8[0] = bVar12;
  if (bVar12) {
    if (Il2CppMethodInitialized_07547edb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"ProfilePopup");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547edb = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar13 = UI_UIManager__GetLocale
                        ("ScoreboardPopup","ProfilePopup",pSVar17,"",
                         "",(MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    pSVar17 = Anticheat_ChatFilter__FilterBadWords(pSVar15,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar17 = MiscExtensions__HexColor(pSVar17,(MethodInfo *)0x0);
    pSVar13 = System_String__Format(pSVar13,(Il2CppObject *)pSVar17,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_07547edb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"ProfilePopup");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547edb = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar13 = UI_UIManager__GetLocale
                        ("ScoreboardPopup","ProfilePopup",pSVar13,"",
                         "",(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar13 = MiscExtensions__HexColor(pSVar13,(MethodInfo *)0x0);
  }
  pSVar17 = "DisplayName";
  local_d8._0_8_ = pSVar13;
  if (Il2CppMethodInitialized_07547edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547edb = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar16 = (MethodInfo *)"";
  pSVar13 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","ProfilePopup",pSVar17,"",
                       "",(MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar15 = Anticheat_ChatFilter__FilterBadWords(pSVar15,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar15 = MiscExtensions__HexColor(pSVar15,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar13,pSVar15,pMVar16);
  pSVar15 = "UserId";
  if (Il2CppMethodInitialized_07547edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547edb = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar16 = (MethodInfo *)"";
  pSVar15 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","ProfilePopup",pSVar15,"",
                       "",(MethodInfo *)0x0);
  pSVar13 = UI_ScoreboardProfilePopup__GetDisplayUserId(__this,player,method_01);
  pSVar13 = MiscExtensions__HexColor(pSVar13,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar15,pSVar13,pMVar16);
  pSVar15 = "PatreonTier";
  if (Il2CppMethodInitialized_07547edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547edb = '\x01';
  }
  pSVar13 = (System_String_o *)local_98._0_8_;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar16 = (MethodInfo *)"";
  pSVar15 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","ProfilePopup",pSVar15,"",
                       "",(MethodInfo *)0x0);
  if (local_a8[0] == '\0') {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar13 = UI_UIManager__GetLocaleCommon("None",(MethodInfo *)0x0);
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar13 = MiscExtensions__HexColor(pSVar13,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar15,pSVar13,pMVar16);
  pSVar15 = "PatreonSupporter";
  if (Il2CppMethodInitialized_07547edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547edb = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar16 = (MethodInfo *)"";
  pSVar15 = UI_UIManager__GetLocale
                      ("ScoreboardPopup","ProfilePopup",pSVar15,"",
                       "",(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar15,(System_String_o *)local_d8._0_8_,pMVar16);
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
  pGVar11 = (__this->fields)._Dialog_k__BackingField;
  if (((pGVar11 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
      (pUVar14 = (pGVar11->fields)._Root_k__BackingField, pUVar14 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_03 = UnityEngine_GameObject__GetComponentInChildren_object_
                            (pUVar14,(MethodInfo_353B8D0 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponentInChildren_ScrollRect),
     __this_03 != (UnityEngine_UI_ScrollRect_o *)0x0)) {
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_03,1.0,(MethodInfo *)0x0);
    return;
  }
label_05d4b347:
  ThrowNullReferenceException();
}


// UI.ScoreboardProfilePopup$$Locale
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__Locale (System_String_o* item, const MethodInfo* method);
// 0x5d4ba70

System_String_o * UI_ScoreboardProfilePopup__Locale(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547edb = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","ProfilePopup",item,"",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ScoreboardProfilePopup$$AddRow
// il2cpp: void UI_ScoreboardProfilePopup__AddRow (UI_ScoreboardProfilePopup_o* __this, System_String_o* label, System_String_o* value, const MethodInfo* method);
// 0x5d4b6b0

void UI_ScoreboardProfilePopup__AddRow
               (UI_ScoreboardProfilePopup_o *__this,System_String_o *label,System_String_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  TMPro_TMP_Text_o *label_00;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_07547edc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"<b>");
    il2cpp_codegen_initialize_runtime_metadata(&": </b>");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_07547edc = '\x01';
  }
  __this_00 = (__this->fields)._View_k__BackingField;
  parent = (__this->fields)._content;
  pSVar5 = System_String__Concat_5302810
                     ("<b>",label,": </b>",value,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgInGameView__Readable(__this_00,pSVar5,(MethodInfo *)0x0);
    label_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                         (__this_00,parent,pSVar5,484.0,40.0,"inGameInfo",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    }
    Gisketch_Aottg2UI_Game_AottgInGameView__FitTextHeight(label_00,40.0,(MethodInfo *)0x0);
    if (label_00 != (TMPro_TMP_Text_o *)0x0) {
      __this_01 = (__this->fields)._items;
      item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label_00,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (__this_01->fields)._items;
        if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardProfilePopup$$GetAuthoritativeDisplayName
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d4b840

System_String_o *
UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_NameSetting_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *local_18;
  
  if (Il2CppMethodInitialized_07547edd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"NotAvailable");
    Il2CppMethodInitialized_07547edd = '\x01';
  }
  local_18 = (System_String_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = PatreonEffects_PatreonHelper__TryGetRemoteDisplayName(player,&local_18,(MethodInfo *)0x0);
    if (bVar3) {
      return local_18;
    }
    bVar3 = System_String__IsNullOrEmpty((player->fields).nickName,(MethodInfo *)0x0);
    if (!bVar3) {
      return (player->fields).nickName;
    }
  }
  pSVar1 = (__this->fields)._profile;
  if (pSVar1 != (Settings_ProfileSettings_o *)0x0) {
    pSVar2 = (pSVar1->fields).Name;
    if (pSVar2 != (Settings_NameSetting_o *)0x0) {
      bVar3 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
      if (bVar3) goto label_05d4b8e7;
      pSVar1 = (__this->fields)._profile;
      if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).Name, pSVar2 != (Settings_NameSetting_o *)0x0)) {
        return (pSVar2->fields)._value;
      }
    }
    ThrowNullReferenceException();
  }
label_05d4b8e7:
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  pSVar4 = "NotAvailable";
  if (bVar3) {
    if (Il2CppMethodInitialized_07547edb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"ProfilePopup");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
      Il2CppMethodInitialized_07547edb = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar4 = UI_UIManager__GetLocale
                       ("ScoreboardPopup","ProfilePopup",pSVar4,"",
                        "",(MethodInfo *)0x0);
    return pSVar4;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  return pSVar4;
}


// UI.ScoreboardProfilePopup$$GetDisplayUserId
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetDisplayUserId (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d4bb00

System_String_o *
UI_ScoreboardProfilePopup__GetDisplayUserId
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *local_18;
  
  if (Il2CppMethodInitialized_07547ede == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"NotAvailable");
    Il2CppMethodInitialized_07547ede = '\x01';
  }
  local_18 = (System_String_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((player->fields)._UserId_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      return (player->fields)._UserId_k__BackingField;
    }
    bVar3 = PatreonEffects_PatreonHelper__TryGetRemoteAccountId(player,&local_18,(MethodInfo *)0x0);
    if (bVar3) {
      return local_18;
    }
  }
  pSVar1 = (__this->fields)._profile;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ID, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    bVar3 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
    if (!bVar3) {
      pSVar1 = (__this->fields)._profile;
      if ((pSVar1 == (Settings_ProfileSettings_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).ID, pSVar2 == (Settings_StringSetting_o *)0x0)) {
        ThrowNullReferenceException();
      }
      return (pSVar2->fields)._value;
    }
  }
  pSVar4 = "NotAvailable";
  if (Il2CppMethodInitialized_07547edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547edb = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","ProfilePopup",pSVar4,"",
                      "",(MethodInfo *)0x0);
  return pSVar4;
}


// UI.ScoreboardProfilePopup$$GetPatreonTierLabel
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetPatreonTierLabel (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d4ba00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4ba4b: mov rbx, rsp

System_String_o *
UI_ScoreboardProfilePopup__GetPatreonTierLabel
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  System_String_o **tierLabel;
  System_String_o *pSStack_18;
  
  if (Il2CppMethodInitialized_07547edf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547edf = '\x01';
  }
  tierLabel = &pSStack_18;
  pSStack_18 = (System_String_o *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
label_05d4ba4e:
    tierLabel = &pSStack_18;
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(tierLabel,(MethodInfo *)0x0);
    if (bVar1) goto label_05d4ba63;
  }
  else {
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(player,&pSStack_18,(MethodInfo *)0x0);
    if (bVar1) goto label_05d4ba63;
    if ((player->fields).IsLocal != false) goto label_05d4ba4e;
  }
  tierLabel = &"None";
label_05d4ba63:
  return *tierLabel;
}


// UI.ScoreboardProfilePopup$$AddEffectRow
// il2cpp: void UI_ScoreboardProfilePopup__AddEffectRow (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, System_String_o* labelKey, System_String_o* value, bool enabled, System_String_o* effectName, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, const MethodInfo* method);
// 0x5d4b3c0

void UI_ScoreboardProfilePopup__AddEffectRow
               (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,System_String_o *labelKey
               ,System_String_o *value,bool enabled,System_String_o *effectName,UnityEngine_Color_o colorA,
               UnityEngine_Color_o colorB,UnityEngine_Color_o colorC,UnityEngine_Color_o colorD,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  int32_t effect;
  bool bVar5;
  System_String_o *pSVar6;
  PatreonEffects_EffectText_o *__this_01;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *item;
  MethodInfo *pMVar8;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  undefined4 in_XMM5_Dc;
  undefined4 in_XMM5_Dd;
  undefined4 in_XMM6_Dc;
  undefined4 in_XMM6_Dd;
  undefined4 in_XMM7_Dc;
  undefined4 in_XMM7_Dd;
  UnityEngine_Color_o colorA_00;
  UnityEngine_Color_o colorB_00;
  UnityEngine_Color_o colorD_00;
  UnityEngine_Color_o colorC_00;
  int32_t local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_48._8_4_ = in_XMM7_Dc;
  local_48._0_8_ = colorD.fields._8_8_;
  local_48._12_4_ = in_XMM7_Dd;
  local_58._8_4_ = in_XMM6_Dc;
  local_58._0_8_ = colorD.fields._0_8_;
  local_58._12_4_ = in_XMM6_Dd;
  local_68._8_4_ = in_XMM5_Dc;
  local_68._0_8_ = colorC.fields._8_8_;
  local_68._12_4_ = in_XMM5_Dd;
  local_78._8_4_ = in_XMM4_Dc;
  local_78._0_8_ = colorC.fields._0_8_;
  local_78._12_4_ = in_XMM4_Dd;
  local_88._8_4_ = in_XMM3_Dc;
  local_88._0_8_ = colorB.fields._8_8_;
  local_88._12_4_ = in_XMM3_Dd;
  local_98._8_4_ = in_XMM2_Dc;
  local_98._0_8_ = colorB.fields._0_8_;
  local_98._12_4_ = in_XMM2_Dd;
  local_a8._8_4_ = in_XMM1_Dc;
  local_a8._0_8_ = colorA.fields._8_8_;
  local_a8._12_4_ = in_XMM1_Dd;
  local_b8._8_4_ = in_XMM0_Dc;
  local_b8._0_8_ = colorA.fields._0_8_;
  local_b8._12_4_ = in_XMM0_Dd;
  pMVar8 = (MethodInfo *)value;
  if (Il2CppMethodInitialized_07547ee0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"<b>");
    il2cpp_codegen_initialize_runtime_metadata(&": </b>");
    Il2CppMethodInitialized_07547ee0 = '\x01';
  }
  local_bc = 0;
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar6 = Anticheat_ChatFilter__FilterBadWords(value,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar6 = MiscExtensions__HexColor(pSVar6,(MethodInfo *)0x0);
  if (((enabled) &&
      (bVar5 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0), bVar5)) &&
     (bVar5 = PatreonEffects_NameEffectPresets__TryResolve(effectName,&local_bc,(MethodInfo *)0x0), bVar5)) {
    pGVar3 = (__this->fields)._View_k__BackingField;
    if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__PlayerName
                            (pGVar3,(__this->fields)._content,484.0,(MethodInfo *)0x0);
      pGVar3 = (__this->fields)._View_k__BackingField;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar7 = UI_UIManager__GetLocaleCommon(labelKey,(MethodInfo *)0x0);
      effect = local_bc;
      if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
      }
      colorA_00.fields.b = (float)local_a8._0_4_;
      colorA_00.fields.a = (float)local_a8._4_4_;
      colorA_00.fields.r = (float)local_b8._0_4_;
      colorA_00.fields.g = (float)local_b8._4_4_;
      colorB_00.fields.b = (float)local_88._0_4_;
      colorB_00.fields.a = (float)local_88._4_4_;
      colorB_00.fields.r = (float)local_98._0_4_;
      colorB_00.fields.g = (float)local_98._4_4_;
      colorD_00.fields.b = (float)local_48._0_4_;
      colorD_00.fields.a = (float)local_48._4_4_;
      colorD_00.fields.r = (float)local_58._0_4_;
      colorD_00.fields.g = (float)local_58._4_4_;
      colorC_00.fields.b = (float)local_68._0_4_;
      colorC_00.fields.a = (float)local_68._4_4_;
      colorC_00.fields.r = (float)local_78._0_4_;
      colorC_00.fields.g = (float)local_78._4_4_;
      pSVar6 = PatreonEffects_EffectText__Compose
                         (pSVar6,effect,colorA_00,colorB_00,colorC_00,colorD_00,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_5302810
                         ("<b>",pSVar7,": </b>",pSVar6,(MethodInfo *)0x0);
      if ((pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) &&
         (pSVar6 = Gisketch_Aottg2UI_Game_AottgInGameView__Readable(pGVar3,pSVar6,(MethodInfo *)0x0),
         __this_01 != (PatreonEffects_EffectText_o *)0x0)) {
        PatreonEffects_EffectText__set_text(__this_01,pSVar6,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._items;
        item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        pMVar8 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
        if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_00->fields)._items;
          if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pUVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pUVar4->m_Items[(int)uVar2] = item;
              Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
              return;
            }
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
            return;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar7 = UI_UIManager__GetLocaleCommon(labelKey,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar7,pSVar6,pMVar8);
  return;
}


// UI.ScoreboardProfilePopup$$.ctor
// il2cpp: void UI_ScoreboardProfilePopup___ctor (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x5d4bc70

void UI_ScoreboardProfilePopup___ctor(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_07547ee1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547ee1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
  return;
}



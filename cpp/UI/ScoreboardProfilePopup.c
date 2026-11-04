// Type: UI.ScoreboardProfilePopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ScoreboardProfilePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardProfilePopup.cs
// --------------------------------

// UI.ScoreboardProfilePopup$$get_DialogId
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__get_DialogId (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x18226c930

System_String_o *
UI_ScoreboardProfilePopup__get_DialogId(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347360 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-profile");
    Il2CppMethodInitialized_184347360 = '\x01';
  }
  return "ingame-scoreboard-profile";
}


// UI.ScoreboardProfilePopup$$Setup
// il2cpp: void UI_ScoreboardProfilePopup__Setup (UI_ScoreboardProfilePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18226ba50

void UI_ScoreboardProfilePopup__Setup
               (UI_ScoreboardProfilePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *value;
  
  if (Il2CppMethodInitialized_184347361 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-profile-content");
    Il2CppMethodInitialized_184347361 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,parent,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._Dialog_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    __this_01 = Gisketch_Aottg2UI_Building_GisketchView__Find
                          (__this_00,"ingame-scoreboard-profile-content",(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      (__this->fields)._content = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._content,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardProfilePopup$$Show
// il2cpp: void UI_ScoreboardProfilePopup__Show (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18226bae0
// eh: try 0x18226bda0..0x18226c880 -> pad 0x18333fa40 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18226be08: mov rdx, qword ptr [rip + 0x1e146d9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x18226be0f: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x18226be14: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18226be19: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x18226be1e: test rcx, rcx
// asm:   0x18226be21: jne 0x18226c880
// asm:   0x18226be27: xor r14d, r14d
// asm:   0x18226be2a: mov r15, qword ptr [rsp + 0x148]
// asm:   0x18226be32: mov rdi, qword ptr [rsp + 0x140]
// asm:   0x18226c574: mov rbx, qword ptr [rip + 0x1e19d85]  ; "N/A"
// asm:   0x18226c57b: jmp 0x18226c5a9
// asm:   0x18226c5a4: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x18226c609: mov rsi, qword ptr [rsp + 0x148]
// asm:   0x18226c7a6: mov rcx, qword ptr [rip + 0x1e19b53]  ; "N/A"
// asm:   0x18226c7ad: jmp 0x18226c7ba
// asm:   0x18226c7af: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x18226c7b4: jmp 0x18226c7ba
// asm:   0x18226c880: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333fa40: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fa45: push rbp
// asm:   0x18333fa46: sub rsp, 0x60
// asm:   0x18333fa4a: mov rbp, rdx
// asm:   0x18333fa4d: mov rax, qword ptr [rbp + 0xd0]
// asm:   0x18333fa54: mov rcx, qword ptr [rax]
// asm:   0x18333fa57: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333fa5b: movabs rax, 0
// asm:   0x18333fa65: add rsp, 0x60
// asm:   0x18333fa69: pop rbp
// asm:   0x18333fa6a: ret 

void UI_ScoreboardProfilePopup__Show
               (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  Il2CppClass *value;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  Settings_ProfileSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  UnityEngine_GameObject_array *pUVar6;
  Settings_NameSetting_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Settings_ColorSetting_o *pSVar9;
  Utility_Color255_o *pUVar10;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar11;
  System_Collections_Generic_List_T__o *pSVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  System_String_o *pSVar18;
  System_Collections_Generic_List_Enumerator_object__o *pSVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  MethodInfo *pMVar24;
  Il2CppObject *obj;
  bool bVar25;
  UnityEngine_UI_RawImage_o *__this_02;
  System_String_o *pSVar26;
  UnityEngine_Texture_o *pUVar27;
  UnityEngine_GameObject_o *pUVar28;
  UnityEngine_Color_o *pUVar29;
  System_String_o *pSVar30;
  UnityEngine_UI_ScrollRect_o *__this_03;
  UnityEngine_Texture_o *value_00;
  Photon_Realtime_Player_o *a;
  Photon_Realtime_Player_o *local_res10;
  Il2CppObject *local_res20;
  undefined1 local_d8 [16];
  System_Collections_Generic_List_Enumerator_T__o local_c8;
  System_Collections_Generic_List_Enumerator_object__o local_a8;
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_Fields local_78 [5];
  
  local_res10 = player;
  if (Il2CppMethodInitialized_184347362 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"Patreon Supporter");
    il2cpp_codegen_initialize_runtime_metadata(&"Patreon Tier");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"User ID");
    il2cpp_codegen_initialize_runtime_metadata(&"Thank you, ");
    il2cpp_codegen_initialize_runtime_metadata(&"Social");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Profile/");
    il2cpp_codegen_initialize_runtime_metadata(&" for being a supporter.");
    il2cpp_codegen_initialize_runtime_metadata(&"About");
    il2cpp_codegen_initialize_runtime_metadata(&"No");
    il2cpp_codegen_initialize_runtime_metadata(&"Display Name");
    Il2CppMethodInitialized_184347362 = '\x01';
  }
  value_00 = (UnityEngine_Texture_o *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  local_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_18226c874;
  bVar25 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                     (__this_00,(player->fields).actorNumber,&local_res20,
                      (MethodInfo_141F4E0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
  if (!bVar25) {
    return;
  }
  if (local_res20 == (Il2CppObject *)0x0) goto label_18226c874;
  if (local_res20[3].klass == (Il2CppClass *)0x0) {
    return;
  }
  pSVar3 = (__this->fields)._items;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_18226c874;
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            (&local_c8,(System_Collections_Generic_List_T__o *)pSVar3,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_a8.fields._list = local_c8.fields._list;
  local_a8.fields._index = local_c8.fields._index;
  local_a8.fields._version = local_c8.fields._version;
  local_a8.fields._current = local_c8.fields._current;
  local_d8._0_8_ = (System_String_o *)0x0;
  local_d8._8_8_ = &local_a8;
  while (bVar25 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_a8,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
        obj = local_a8.fields._current, bVar25) {
    if ((UnityEngine_Object_o *)local_a8.fields._current == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)local_a8.fields._current,false,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_a8,
             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  pSVar3 = (__this->fields)._items;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_18226c874;
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if (local_res20 == (Il2CppObject *)0x0) goto label_18226c874;
  value = local_res20[3].klass;
  (__this->fields)._profile = (Settings_ProfileSettings_o *)value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._profile,value);
  __this_01 = (__this->fields)._View_k__BackingField;
  if (__this_01 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_18226c874;
  __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__RawImage
                        (__this_01,(__this->fields)._content,256.0,256.0,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar4 = (__this->fields)._profile;
  if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).ProfileIcon, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_18226c874;
  pSVar30 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  pSVar26 = (pSVar5->fields)._value;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar26 = UI_UIManager__GetProfileIcon(pSVar26,(MethodInfo *)0x0);
  pSVar26 = System_String__Concat_1969e50("Icons/Profile/",pSVar26,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar27 = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar30,pSVar26,true,(MethodInfo *)0x0);
  if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) goto label_18226c874;
  if (pUVar27 != (UnityEngine_Texture_o *)0x0) {
    if (pUVar27->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
      value_00 = pUVar27;
    }
    if (value_00 == (UnityEngine_Texture_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar27,TypeInfo_UnityEngine_Texture2D);
    }
  }
  UnityEngine_UI_RawImage__set_texture(__this_02,value_00,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._items;
  pUVar28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  pMVar24 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_18226c874;
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar6 = (pSVar3->fields)._items;
  if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto label_18226c874;
  uVar2 = (pSVar3->fields)._size;
  if (uVar2 < (uint)pUVar6->max_length) {
    (pSVar3->fields)._size = uVar2 + 1;
    if ((uint)pUVar6->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    pUVar6->m_Items[(int)uVar2] = pUVar28;
    Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2,pUVar28);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar28,
               (MethodInfo_93DD50 *)pMVar24->klass->rgctx_data[0xe].method);
  }
  pSVar4 = (__this->fields)._profile;
  if (((((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
        (pSVar7 = (pSVar4->fields).Name, pSVar7 == (Settings_NameSetting_o *)0x0)) ||
       (pSVar8 = (pSVar4->fields).NameEffectEnabled, pSVar8 == (Settings_BoolSetting_o *)0x0)) ||
      ((pSVar5 = (pSVar4->fields).NameEffect, pSVar5 == (Settings_StringSetting_o *)0x0 ||
       (pSVar9 = (pSVar4->fields).NameEffectColorA, pSVar9 == (Settings_ColorSetting_o *)0x0)))) ||
     (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)) goto label_18226c874;
  pSVar30 = (pSVar7->fields)._value;
  bVar25 = (pSVar8->fields)._value;
  pSVar26 = (pSVar5->fields)._value;
  pUVar29 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if (((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
      (pSVar9 = (pSVar4->fields).NameEffectColorB, pSVar9 == (Settings_ColorSetting_o *)0x0)) ||
     (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)) goto label_18226c874;
  pSVar12 = *(System_Collections_Generic_List_T__o **)&pUVar29->fields;
  uVar13._0_4_ = (int32_t)(pUVar29->fields).b;
  uVar13._4_4_ = (int32_t)(pUVar29->fields).a;
  pUVar29 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if (((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
      (pSVar9 = (pSVar4->fields).NameEffectColorC, pSVar9 == (Settings_ColorSetting_o *)0x0)) ||
     (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)) goto label_18226c874;
  uVar14._0_4_ = (pUVar29->fields).r;
  uVar14._4_4_ = (pUVar29->fields).g;
  uVar15._0_4_ = (pUVar29->fields).b;
  uVar15._4_4_ = (pUVar29->fields).a;
  pUVar29 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if (((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
      (pSVar9 = (pSVar4->fields).NameEffectColorD, pSVar9 == (Settings_ColorSetting_o *)0x0)) ||
     (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)) goto label_18226c874;
  uVar16._0_4_ = (pUVar29->fields).r;
  uVar16._4_4_ = (pUVar29->fields).g;
  uVar17._0_4_ = (pUVar29->fields).b;
  uVar17._4_4_ = (pUVar29->fields).a;
  pUVar29 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
  local_d8._0_8_ = *(undefined8 *)&pUVar29->fields;
  local_d8._8_8_ = *(undefined8 *)&(pUVar29->fields).b;
  local_c8.fields._list = pSVar12;
  local_c8.fields._8_8_ = uVar13;
  local_88._0_8_ = uVar16;
  local_88._8_8_ = uVar17;
  local_78[0]._0_8_ = uVar14;
  local_78[0]._8_8_ = uVar15;
  UI_ScoreboardProfilePopup__AddEffectRow
            (__this,player,"Name",pSVar30,bVar25,pSVar26,(UnityEngine_Color_o *)&local_c8,
             (UnityEngine_Color_o *)local_78,(UnityEngine_Color_o *)&local_88,(UnityEngine_Color_o *)local_d8,
             (MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar7 = (pSVar4->fields).Guild, pSVar7 == (Settings_NameSetting_o *)0x0)) goto label_18226c874;
  pSVar30 = (pSVar7->fields)._value;
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar30 = Anticheat_ChatFilter__FilterBadWords(pSVar30,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar30 = MiscExtensions__HexColor(pSVar30,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).GuildRoleSprite, pSVar5 == (Settings_StringSetting_o *)0x0))
  goto label_18226c874;
  pSVar26 = (pSVar5->fields)._value;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  pSVar30 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                      (player,pSVar30,pSVar26,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if ((((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
       (pSVar8 = (pSVar4->fields).GuildEffectEnabled, pSVar8 == (Settings_BoolSetting_o *)0x0)) ||
      (pSVar5 = (pSVar4->fields).GuildEffect, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
     ((pSVar9 = (pSVar4->fields).GuildEffectColorA, pSVar9 == (Settings_ColorSetting_o *)0x0 ||
      (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)))) goto label_18226c874;
  bVar25 = (pSVar8->fields)._value;
  pSVar26 = (pSVar5->fields)._value;
  pUVar29 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
     ((pSVar9 = (pSVar4->fields).GuildEffectColorB, pSVar9 == (Settings_ColorSetting_o *)0x0 ||
      (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)))) goto label_18226c874;
  pSVar18 = *(System_String_o **)&pUVar29->fields;
  pSVar19 = *(System_Collections_Generic_List_Enumerator_object__o **)&(pUVar29->fields).b;
  pUVar29 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
     ((pSVar9 = (pSVar4->fields).GuildEffectColorC, pSVar9 == (Settings_ColorSetting_o *)0x0 ||
      (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)))) goto label_18226c874;
  uVar20._0_4_ = (pUVar29->fields).r;
  uVar20._4_4_ = (pUVar29->fields).g;
  uVar21._0_4_ = (pUVar29->fields).b;
  uVar21._4_4_ = (pUVar29->fields).a;
  pUVar29 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
     ((pSVar9 = (pSVar4->fields).GuildEffectColorD, pSVar9 == (Settings_ColorSetting_o *)0x0 ||
      (pUVar10 = (pSVar9->fields)._value, pUVar10 == (Utility_Color255_o *)0x0)))) goto label_18226c874;
  uVar22._0_4_ = (pUVar29->fields).r;
  uVar22._4_4_ = (pUVar29->fields).g;
  uVar23._0_4_ = (pUVar29->fields).b;
  uVar23._4_4_ = (pUVar29->fields).a;
  pUVar29 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_c8,pUVar10,(MethodInfo *)0x0);
  local_c8.fields._list = *(System_Collections_Generic_List_T__o **)&pUVar29->fields;
  local_c8.fields._index = (int32_t)(pUVar29->fields).b;
  local_c8.fields._version = (int32_t)(pUVar29->fields).a;
  local_d8._0_8_ = pSVar18;
  local_d8._8_8_ = pSVar19;
  local_88._0_8_ = uVar20;
  local_88._8_8_ = uVar21;
  local_78[0]._0_8_ = uVar22;
  local_78[0]._8_8_ = uVar23;
  UI_ScoreboardProfilePopup__AddEffectRow
            (__this,player,"Guild",pSVar30,bVar25,pSVar26,(UnityEngine_Color_o *)local_d8,
             (UnityEngine_Color_o *)&local_88,(UnityEngine_Color_o *)local_78,(UnityEngine_Color_o *)&local_c8
             ,(MethodInfo *)0x0);
  pSVar30 = UI_UIManager__GetLocaleCommon("Social",(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).Social, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_18226c874;
  pSVar26 = Anticheat_ChatFilter__FilterBadWords((pSVar5->fields)._value,(MethodInfo *)0x0);
  pSVar26 = MiscExtensions__HexColor(pSVar26,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar30,pSVar26,(MethodInfo *)0x0);
  pSVar30 = UI_UIManager__GetLocaleCommon("About",(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._profile;
  if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).About, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_18226c874;
  pSVar26 = Anticheat_ChatFilter__FilterBadWords((pSVar5->fields)._value,(MethodInfo *)0x0);
  pSVar26 = MiscExtensions__HexColor(pSVar26,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar30,pSVar26,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347364 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"N/A");
    Il2CppMethodInitialized_184347364 = '\x01';
  }
  local_d8._0_8_ = (System_String_o *)0x0;
  bVar25 = PatreonEffects_PatreonHelper__TryGetRemoteDisplayName
                     (player,(System_String_o **)local_d8,(MethodInfo *)0x0);
  pSVar30 = (System_String_o *)local_d8._0_8_;
  if (!bVar25) {
    bVar25 = System_String__IsNullOrEmpty((player->fields).nickName,(MethodInfo *)0x0);
    if (bVar25) {
      if ((__this->fields)._profile != (Settings_ProfileSettings_o *)0x0) {
        pSVar7 = (((__this->fields)._profile)->fields).Name;
        if (pSVar7 == (Settings_NameSetting_o *)0x0) {
label_18226c88c:
          ThrowNullReferenceException();
        }
        bVar25 = System_String__IsNullOrEmpty((pSVar7->fields)._value,(MethodInfo *)0x0);
        if (!bVar25) {
          pSVar4 = (__this->fields)._profile;
          if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
             (pSVar7 = (pSVar4->fields).Name, pSVar7 == (Settings_NameSetting_o *)0x0)) goto label_18226c88c;
          pSVar30 = (pSVar7->fields)._value;
          goto label_18226c5a9;
        }
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar30 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      bVar25 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0);
      pSVar30 = "N/A";
      if (!bVar25) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar30 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      }
    }
    else {
      pSVar30 = (player->fields).nickName;
    }
  }
label_18226c5a9:
  if (Il2CppMethodInitialized_184347366 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184347366 = '\x01';
  }
  local_res10 = (Photon_Realtime_Player_o *)0x0;
  bVar25 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
                     (player,(System_String_o **)&local_res10,(MethodInfo *)0x0);
  a = local_res10;
  if ((!bVar25) &&
     (((player->fields).IsLocal == false ||
      (bVar25 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel
                          ((System_String_o **)&local_res10,(MethodInfo *)0x0), a = local_res10, !bVar25)))) {
    a = (Photon_Realtime_Player_o *)"None";
  }
  bVar25 = System_String__op_Inequality((System_String_o *)a,"None",(MethodInfo *)0x0);
  if (bVar25) {
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    pSVar26 = Anticheat_ChatFilter__FilterBadWords(pSVar30,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar26 = MiscExtensions__HexColor(pSVar26,(MethodInfo *)0x0);
    pSVar26 = System_String__Concat_1969b70
                        ("Thank you, ",pSVar26," for being a supporter.",(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar26 = MiscExtensions__HexColor("No",(MethodInfo *)0x0);
  }
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar30 = Anticheat_ChatFilter__FilterBadWords(pSVar30,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar30 = MiscExtensions__HexColor(pSVar30,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,"Display Name",pSVar30,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347365 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"N/A");
    Il2CppMethodInitialized_184347365 = '\x01';
  }
  local_d8._0_8_ = (System_String_o *)0x0;
  bVar25 = System_String__IsNullOrEmpty((player->fields)._UserId_k__BackingField,(MethodInfo *)0x0);
  if (bVar25) {
    bVar25 = PatreonEffects_PatreonHelper__TryGetRemoteAccountId
                       (player,(System_String_o **)local_d8,(MethodInfo *)0x0);
    pSVar30 = (System_String_o *)local_d8._0_8_;
    if ((((!bVar25) &&
         (pSVar30 = "N/A", (__this->fields)._profile != (Settings_ProfileSettings_o *)0x0)) &&
        (pSVar4 = (__this->fields)._profile, (pSVar4->fields).ID != (Settings_StringSetting_o *)0x0)) &&
       (bVar25 = System_String__IsNullOrEmpty((((pSVar4->fields).ID)->fields)._value,(MethodInfo *)0x0),
       pSVar30 = "N/A", !bVar25)) {
      pSVar4 = (__this->fields)._profile;
      if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).ID, pSVar5 == (Settings_StringSetting_o *)0x0)) {
        ThrowNullReferenceException();
      }
      pSVar30 = (pSVar5->fields)._value;
    }
  }
  else {
    pSVar30 = (player->fields)._UserId_k__BackingField;
  }
  pSVar30 = MiscExtensions__HexColor(pSVar30,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,"User ID",pSVar30,(MethodInfo *)0x0);
  pSVar30 = MiscExtensions__HexColor((System_String_o *)a,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,"Patreon Tier",pSVar30,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,"Patreon Supporter",pSVar26,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
  pGVar11 = (__this->fields)._Dialog_k__BackingField;
  if (((pGVar11 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
      (pUVar28 = (pGVar11->fields)._Root_k__BackingField, pUVar28 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_03 = UnityEngine_GameObject__GetComponentInChildren_object_
                            (pUVar28,(MethodInfo_6F5040 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponentInChildren_ScrollRect),
     __this_03 != (UnityEngine_UI_ScrollRect_o *)0x0)) {
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_03,1.0,(MethodInfo *)0x0);
    return;
  }
label_18226c874:
  ThrowNullReferenceException();
}


// UI.ScoreboardProfilePopup$$AddRow
// il2cpp: void UI_ScoreboardProfilePopup__AddRow (UI_ScoreboardProfilePopup_o* __this, System_String_o* label, System_String_o* value, const MethodInfo* method);
// 0x18226b5c0

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
  
  if (Il2CppMethodInitialized_184347363 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"<b>");
    il2cpp_codegen_initialize_runtime_metadata(&": </b>");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_184347363 = '\x01';
  }
  __this_00 = (__this->fields)._View_k__BackingField;
  parent = (__this->fields)._content;
  pSVar5 = System_String__Concat_1969590
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
            if ((uint)pUVar3->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardProfilePopup$$GetAuthoritativeDisplayName
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18226b780

System_String_o *
UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  Settings_ProfileSettings_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_184347364 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"N/A");
    Il2CppMethodInitialized_184347364 = '\x01';
  }
  local_res10[0] = (System_String_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = PatreonEffects_PatreonHelper__TryGetRemoteDisplayName(player,local_res10,(MethodInfo *)0x0);
    if (bVar3) {
      return local_res10[0];
    }
    bVar3 = System_String__IsNullOrEmpty((player->fields).nickName,(MethodInfo *)0x0);
    if (!bVar3) {
      return (player->fields).nickName;
    }
  }
  if ((__this->fields)._profile != (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (((__this->fields)._profile)->fields).Name;
    if (pSVar1 != (Settings_NameSetting_o *)0x0) {
      bVar3 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
      if (bVar3) goto label_18226b865;
      pSVar2 = (__this->fields)._profile;
      if ((pSVar2 != (Settings_ProfileSettings_o *)0x0) &&
         (pSVar1 = (pSVar2->fields).Name, pSVar1 != (Settings_NameSetting_o *)0x0)) {
        return (pSVar1->fields)._value;
      }
    }
    ThrowNullReferenceException();
  }
label_18226b865:
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  if (bVar3) {
    return "N/A";
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  return pSVar4;
}


// UI.ScoreboardProfilePopup$$GetDisplayUserId
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetDisplayUserId (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18226b8d0

System_String_o *
UI_ScoreboardProfilePopup__GetDisplayUserId
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  System_String_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_184347365 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"N/A");
    Il2CppMethodInitialized_184347365 = '\x01';
  }
  local_res10[0] = (System_String_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((player->fields)._UserId_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      return (player->fields)._UserId_k__BackingField;
    }
    bVar3 = PatreonEffects_PatreonHelper__TryGetRemoteAccountId(player,local_res10,(MethodInfo *)0x0);
    if (bVar3) {
      return local_res10[0];
    }
  }
  if (((__this->fields)._profile != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar1 = (__this->fields)._profile, (pSVar1->fields).ID != (Settings_StringSetting_o *)0x0)) {
    bVar3 = System_String__IsNullOrEmpty((((pSVar1->fields).ID)->fields)._value,(MethodInfo *)0x0);
    if (!bVar3) {
      pSVar1 = (__this->fields)._profile;
      if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).ID, pSVar2 != (Settings_StringSetting_o *)0x0)) {
        return (pSVar2->fields)._value;
      }
      ThrowNullReferenceException();
    }
  }
  return "N/A";
}


// UI.ScoreboardProfilePopup$$GetPatreonTierLabel
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetPatreonTierLabel (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18226b9d0

System_String_o *
UI_ScoreboardProfilePopup__GetPatreonTierLabel
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  System_String_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_184347366 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184347366 = '\x01';
  }
  local_res10[0] = (System_String_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(player,local_res10,(MethodInfo *)0x0);
    if (bVar1) {
      return local_res10[0];
    }
    if ((player->fields).IsLocal == false) {
      return "None";
    }
  }
  bVar1 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(local_res10,(MethodInfo *)0x0);
  if (bVar1) {
    return local_res10[0];
  }
  return "None";
}


// UI.ScoreboardProfilePopup$$AddEffectRow
// il2cpp: void UI_ScoreboardProfilePopup__AddEffectRow (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, System_String_o* labelKey, System_String_o* value, bool enabled, System_String_o* effectName, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, const MethodInfo* method);
// 0x18226b2f0

void UI_ScoreboardProfilePopup__AddEffectRow
               (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,System_String_o *labelKey
               ,System_String_o *value,bool enabled,System_String_o *effectName,UnityEngine_Color_o *colorA,
               UnityEngine_Color_o *colorB,UnityEngine_Color_o *colorC,UnityEngine_Color_o *colorD,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar1;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  int32_t effect;
  bool bVar3;
  System_String_o *pSVar4;
  PatreonEffects_EffectText_o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  int32_t local_res20 [2];
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_Fields local_38;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_184347367 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"<b>");
    il2cpp_codegen_initialize_runtime_metadata(&": </b>");
    Il2CppMethodInitialized_184347367 = '\x01';
  }
  local_res20[0] = 0;
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar4 = Anticheat_ChatFilter__FilterBadWords(value,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar4 = MiscExtensions__HexColor(pSVar4,(MethodInfo *)0x0);
  if (((enabled) &&
      (bVar3 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0), bVar3)) &&
     (bVar3 = PatreonEffects_NameEffectPresets__TryResolve(effectName,local_res20,(MethodInfo *)0x0), bVar3))
  {
    pGVar1 = (__this->fields)._View_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_00 = Gisketch_Aottg2UI_Game_AottgInGameView__PlayerName
                            (pGVar1,(__this->fields)._content,484.0,(MethodInfo *)0x0);
      pGVar1 = (__this->fields)._View_k__BackingField;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar5 = UI_UIManager__GetLocaleCommon(labelKey,(MethodInfo *)0x0);
      effect = local_res20[0];
      if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
      }
      local_58.r = (colorD->fields).r;
      local_58.g = (colorD->fields).g;
      local_58.b = (colorD->fields).b;
      local_58.a = (colorD->fields).a;
      local_38.r = (colorB->fields).r;
      local_38.g = (colorB->fields).g;
      local_38.b = (colorB->fields).b;
      local_38.a = (colorB->fields).a;
      local_48.r = (colorC->fields).r;
      local_48.g = (colorC->fields).g;
      local_48.b = (colorC->fields).b;
      local_48.a = (colorC->fields).a;
      local_28.r = (colorA->fields).r;
      local_28.g = (colorA->fields).g;
      local_28.b = (colorA->fields).b;
      local_28.a = (colorA->fields).a;
      pSVar4 = PatreonEffects_EffectText__Compose
                         (pSVar4,effect,(UnityEngine_Color_o *)&local_28,(UnityEngine_Color_o *)&local_38,
                          (UnityEngine_Color_o *)&local_48,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0)
      ;
      pSVar4 = System_String__Concat_1969590
                         ("<b>",pSVar5,": </b>",pSVar4,(MethodInfo *)0x0);
      if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) &&
         (pSVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__Readable(pGVar1,pSVar4,(MethodInfo *)0x0),
         __this_00 != (PatreonEffects_EffectText_o *)0x0)) {
        PatreonEffects_EffectText__set_text(__this_00,pSVar4,(MethodInfo *)0x0);
        pSVar2 = (__this->fields)._items;
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
        ;
        if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          il2cpp_runtime_helper_180012890(pSVar2,pUVar6,MethodInfo_System_Collections_Generic_List_GameObject_Add);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar5 = UI_UIManager__GetLocaleCommon(labelKey,(MethodInfo *)0x0);
  UI_ScoreboardProfilePopup__AddRow(__this,pSVar5,pSVar4,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardProfilePopup$$.ctor
// il2cpp: void UI_ScoreboardProfilePopup___ctor (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x18226c8b0

void UI_ScoreboardProfilePopup___ctor(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_184347368 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_184347368 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,__this_00);
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor((UI_MapEditorVersionConversionPopup_o *)__this,(MethodInfo *)0x0);
  return;
}



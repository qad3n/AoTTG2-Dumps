// Type: PatreonEffects.NameFontCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/PatreonEffects/NameFontCatalog.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameFontCatalog$$Label
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Label (System_String_o* id, const MethodInfo* method);
// 0x59c7c60

System_String_o * PatreonEffects_NameFontCatalog__Label(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_07545c17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"Jacquard");
    il2cpp_codegen_initialize_runtime_metadata(&"8-Bit");
    il2cpp_codegen_initialize_runtime_metadata(&"Oxanium");
    il2cpp_codegen_initialize_runtime_metadata(&"Pixelify");
    il2cpp_codegen_initialize_runtime_metadata(&"EightBit");
    il2cpp_codegen_initialize_runtime_metadata(&"Old Pixel");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG 2");
    il2cpp_codegen_initialize_runtime_metadata(&"Tech");
    il2cpp_codegen_initialize_runtime_metadata(&"LED");
    Il2CppMethodInitialized_07545c17 = '\x01';
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  a = PatreonEffects_NameFontCatalog__Normalize(id,method);
  bVar1 = System_String__op_Equality(a,"Aottg2",(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar2 = &"AoTTG 2";
  }
  else {
    bVar1 = System_String__op_Equality(a,"EightBit",(MethodInfo *)0x0);
    if (bVar1) {
      ppSVar2 = &"LED";
    }
    else {
      bVar1 = System_String__op_Equality(a,"Jacquard",(MethodInfo *)0x0);
      if (bVar1) {
        ppSVar2 = &"Old Pixel";
      }
      else {
        bVar1 = System_String__op_Equality(a,"Pixelify",(MethodInfo *)0x0);
        if (bVar1) {
          ppSVar2 = &"8-Bit";
        }
        else {
          bVar1 = System_String__op_Equality(a,"Oxanium",(MethodInfo *)0x0);
          if (!bVar1) {
            return a;
          }
          ppSVar2 = &"Tech";
        }
      }
    }
  }
  return *ppSVar2;
}


// PatreonEffects.NameFontCatalog$$Normalize
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Normalize (System_String_o* id, const MethodInfo* method);
// 0x59c7dd0

System_String_o * PatreonEffects_NameFontCatalog__Normalize(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545c18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"Serif");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Jacquard");
    il2cpp_codegen_initialize_runtime_metadata(&"Oxanium");
    il2cpp_codegen_initialize_runtime_metadata(&"Pixelify");
    il2cpp_codegen_initialize_runtime_metadata(&"Comics");
    il2cpp_codegen_initialize_runtime_metadata(&"EightBit");
    Il2CppMethodInitialized_07545c18 = '\x01';
  }
  bVar1 = System_String__op_Equality(id,"Aottg2",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(id,"Serif",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality(id,"EightBit",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality(id,"Comics",(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__op_Equality(id,"Jacquard",(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__op_Equality(id,"Pixelify",(MethodInfo *)0x0);
            if (!bVar1) {
              bVar1 = System_String__op_Equality(id,"Oxanium",(MethodInfo *)0x0);
              if (!bVar1) {
                id = "Normal";
              }
            }
          }
        }
      }
    }
  }
  return id;
}


// PatreonEffects.NameFontCatalog$$Load
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_NameFontCatalog__Load (System_String_o* id, const MethodInfo* method);
// 0x59c13e0

TMPro_TMP_FontAsset_o * PatreonEffects_NameFontCatalog__Load(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  MethodInfo *a;
  TMPro_TMP_FontAsset_o *pTVar3;
  System_String_o *path;
  MethodInfo *method_00;
  TMPro_TMP_FontAsset_o *local_20;
  
  if (Il2CppMethodInitialized_07545c19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07545c19 = '\x01';
  }
  local_20 = (TMPro_TMP_FontAsset_o *)0x0;
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  a = (MethodInfo *)PatreonEffects_NameFontCatalog__Normalize(id,method);
  bVar2 = System_String__op_Equality((System_String_o *)a,"Normal",(MethodInfo *)0x0);
  if (bVar2) {
    pTVar3 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                       ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
    return pTVar3;
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Cache;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_059c15b9:
    ThrowNullReferenceException();
  }
  method_00 = a;
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar1,(Il2CppObject *)a,(Il2CppObject **)&local_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_TryGetValue);
  if (bVar2) {
    pTVar3 = local_20;
  }
  else {
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    path = PatreonEffects_NameFontCatalog__Path((System_String_o *)a,method_00);
    pTVar3 = UnityEngine_Resources__Load_object_
                       (path,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar3 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                         ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Cache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059c15b9;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)a,(Il2CppObject *)pTVar3,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_set_Item);
    }
  }
  return pTVar3;
}


// PatreonEffects.NameFontCatalog$$Apply
// il2cpp: void PatreonEffects_NameFontCatalog__Apply (TMPro_TMP_Text_o* text, System_String_o* id, const MethodInfo* method);
// 0x59c80e0

void PatreonEffects_NameFontCatalog__Apply(TMPro_TMP_Text_o *text,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  System_String_o *text_00;
  TMPro_TMP_FontAsset_o *pTVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545c1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545c1a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (text == (TMPro_TMP_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (text->klass->vtable)._65_get_text.method;
    text_00 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,method_00);
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pTVar2 = PatreonEffects_NameFontCatalog__Load(id,method_00);
    pTVar2 = Gisketch_Aottg2UI_Styling_GisketchTypography__ForText(text_00,pTVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      TMPro_TMP_Text__set_font(text,pTVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// PatreonEffects.NameFontCatalog$$Apply
// il2cpp: void PatreonEffects_NameFontCatalog__Apply (TMPro_TMP_InputField_o* input, System_String_o* id, const MethodInfo* method);
// 0x59c81e0

void PatreonEffects_NameFontCatalog__Apply_58c81e0
               (TMPro_TMP_InputField_o *input,System_String_o *id,MethodInfo *method)

{
  byte bVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar4;
  TMPro_TMP_Text_o *text;
  
  if (Il2CppMethodInitialized_07545c1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Text);
    Il2CppMethodInitialized_07545c1b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (input == (TMPro_TMP_InputField_o *)0x0) {
    ThrowNullReferenceException();
  }
  pTVar2 = (input->fields).m_TextComponent;
  pMVar4 = extraout_RDX;
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    pMVar4 = extraout_RDX_00;
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar2,id,pMVar4);
  pTVar2 = (TMPro_TMP_Text_o *)(input->fields).m_Placeholder;
  pMVar4 = extraout_RDX_01;
  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
    bVar1 = (TypeInfo_TMPro_TMP_Text->_2).typeHierarchyDepth;
    pMVar4 = (MethodInfo *)(ulong)bVar1;
    if (bVar1 <= (pTVar2->klass->_2).typeHierarchyDepth) {
      text = (TMPro_TMP_Text_o *)0x0;
      if ((pTVar2->klass->_2).typeHierarchy[(long)&pMVar4[-1].field_0x57] ==
          (Il2CppClass *)TypeInfo_TMPro_TMP_Text) {
        text = pTVar2;
      }
      goto label_059c82ba;
    }
  }
  text = (TMPro_TMP_Text_o *)0x0;
label_059c82ba:
  PatreonEffects_NameFontCatalog__Apply(text,id,pMVar4);
  TMPro_TMP_InputField__ForceLabelUpdate(input,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameFontCatalog$$FontForPlayer
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_NameFontCatalog__FontForPlayer (Photon_Realtime_Player_o* player, bool guild, const MethodInfo* method);
// 0x59c12e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c13a8: jmp 0x59c13c9

TMPro_TMP_FontAsset_o *
PatreonEffects_NameFontCatalog__FontForPlayer(Photon_Realtime_Player_o *player,bool guild,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Settings_ProfileSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  TMPro_TMP_FontAsset_o *pTVar5;
  System_String_o *id;
  undefined3 in_register_00000031;
  undefined4 uVar6;
  undefined4 in_register_00000034;
  
  uVar6 = CONCAT31(in_register_00000031,guild);
  if (Il2CppMethodInitialized_07545c1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_07545c1c = '\x01';
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (bVar2 = PatreonEffects_PatreonHelper__HasNameEffectAccess
                        (player,(MethodInfo *)CONCAT44(in_register_00000034,uVar6)), !bVar2)) {
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    id = "Normal";
    goto label_059c13ce;
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    pSVar3 = PatreonEffects_NameFontCatalog__Profile
                       (player,(MethodInfo *)CONCAT44(in_register_00000034,uVar6));
    if (pSVar3 == (Settings_ProfileSettings_o *)0x0) goto label_059c1392;
label_059c134e:
    if (guild) {
      pSVar4 = (pSVar3->fields).GuildFont;
    }
    else {
      pSVar4 = (pSVar3->fields).NameFont;
    }
    if (pSVar4 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
    id = (pSVar4->fields)._value;
  }
  else {
    pSVar3 = PatreonEffects_NameFontCatalog__Profile
                       (player,(MethodInfo *)CONCAT44(in_register_00000034,uVar6));
    if (pSVar3 != (Settings_ProfileSettings_o *)0x0) goto label_059c134e;
label_059c1392:
    uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
    id = "Normal";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
label_059c13ce:
  pTVar5 = PatreonEffects_NameFontCatalog__Load(id,(MethodInfo *)CONCAT44(in_register_00000034,uVar6));
  return pTVar5;
}


// PatreonEffects.NameFontCatalog$$Profile
// il2cpp: Settings_ProfileSettings_o* PatreonEffects_NameFontCatalog__Profile (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59c82e0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c8336: test rbx, rbx
// asm:   0x59c8339: jne 0x59c834a
// asm:   0x59c833b: jmp 0x59c83a6

Settings_ProfileSettings_o *
PatreonEffects_NameFontCatalog__Profile(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_07545c1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545c1d = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this = *(System_Collections_Generic_Dictionary_int__object__o **)
                ((long)((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->static_fields + 0x28),
     __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      __this = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    bVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (__this,(player->fields).actorNumber,&local_18,
                       (MethodInfo_4A114B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    if ((bVar1) && (local_18 != (Il2CppObject *)0x0)) {
      local_18 = local_18 + 3;
      goto label_059c83c6;
    }
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) || ((player->fields).IsLocal == false)) {
    return (Settings_ProfileSettings_o *)0x0;
  }
  local_18 = (Il2CppObject *)&TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
label_059c83c6:
  return (Settings_ProfileSettings_o *)local_18->klass;
}


// PatreonEffects.NameFontCatalog$$Path
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Path (System_String_o* id, const MethodInfo* method);
// 0x59c7f10

System_String_o * PatreonEffects_NameFontCatalog__Path(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_07545c1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"Serif");
    il2cpp_codegen_initialize_runtime_metadata(&"Jacquard");
    il2cpp_codegen_initialize_runtime_metadata(&"Oxanium");
    il2cpp_codegen_initialize_runtime_metadata(&"Pixelify");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/BitcountSingle-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Comics");
    il2cpp_codegen_initialize_runtime_metadata(&"EightBit");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/ComicRelief-Bold SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/PixelifySans-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Oxanium-SemiBold SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/IBMPlexSerif-SemiBold SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Jacquard12-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/header SDF");
    Il2CppMethodInitialized_07545c1e = '\x01';
  }
  bVar1 = System_String__op_Equality(id,"Serif",(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar2 = &"UI/Fonts/IBMPlexSerif-SemiBold SDF";
  }
  else {
    bVar1 = System_String__op_Equality(id,"Aottg2",(MethodInfo *)0x0);
    if (bVar1) {
      ppSVar2 = &"UI/Fonts/header SDF";
    }
    else {
      bVar1 = System_String__op_Equality(id,"EightBit",(MethodInfo *)0x0);
      if (bVar1) {
        ppSVar2 = &"UI/Fonts/BitcountSingle-Regular SDF";
      }
      else {
        bVar1 = System_String__op_Equality(id,"Comics",(MethodInfo *)0x0);
        if (bVar1) {
          ppSVar2 = &"UI/Fonts/ComicRelief-Bold SDF";
        }
        else {
          bVar1 = System_String__op_Equality(id,"Jacquard",(MethodInfo *)0x0);
          if (bVar1) {
            ppSVar2 = &"UI/Fonts/Jacquard12-Regular SDF";
          }
          else {
            bVar1 = System_String__op_Equality(id,"Pixelify",(MethodInfo *)0x0);
            if (bVar1) {
              ppSVar2 = &"UI/Fonts/PixelifySans-Regular SDF";
            }
            else {
              bVar1 = System_String__op_Equality(id,"Oxanium",(MethodInfo *)0x0);
              if (!bVar1) {
                return (System_String_o *)0x0;
              }
              ppSVar2 = &"UI/Fonts/Oxanium-SemiBold SDF";
            }
          }
        }
      }
    }
  }
  return *ppSVar2;
}


// PatreonEffects.NameFontCatalog$$.cctor
// il2cpp: void PatreonEffects_NameFontCatalog___cctor (const MethodInfo* method);
// 0x59c83e0

void PatreonEffects_NameFontCatalog___cctor(MethodInfo *method)

{
  PatreonEffects_NameFontCatalog_StaticFields *pPVar1;
  System_Collections_Generic_Dictionary_string__TMP_FontAsset__o *__this;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07545c1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"Serif");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Jacquard");
    il2cpp_codegen_initialize_runtime_metadata(&"Oxanium");
    il2cpp_codegen_initialize_runtime_metadata(&"Pixelify");
    il2cpp_codegen_initialize_runtime_metadata(&"Comics");
    il2cpp_codegen_initialize_runtime_metadata(&"EightBit");
    Il2CppMethodInitialized_07545c1f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_ctor)
  ;
  TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Cache = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Cache);
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "Normal";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "Aottg2";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "Serif";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        if ((pSVar2->max_length & 0xfffffffc) != 0) {
          pSVar2->m_Items[3] = "EightBit";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
          if (4 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[4] = "Comics";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4);
            if (5 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[5] = "Jacquard";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5);
              if (6 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[6] = "Pixelify";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6);
                if ((pSVar2->max_length & 0xfffffff8) != 0) {
                  pSVar2->m_Items[7] = "Oxanium";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7);
                  pPVar1 = TypeInfo_PatreonEffects_NameFontCatalog->static_fields;
                  pPVar1->Ids = pSVar2;
                  Il2CppCodeGenWriteBarrier(&pPVar1->Ids);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}



// Type: PatreonEffects.NameFontCatalog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameFontCatalog.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameFontCatalog$$Label
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Label (System_String_o* id, const MethodInfo* method);
// 0x1820cc180

System_String_o * PatreonEffects_NameFontCatalog__Label(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434697f == '\0') {
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
    Il2CppMethodInitialized_18434697f = '\x01';
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  a = PatreonEffects_NameFontCatalog__Normalize(id,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,"Aottg2",(MethodInfo *)0x0);
  if (bVar1) {
    return "AoTTG 2";
  }
  bVar1 = System_String__op_Equality(a,"EightBit",(MethodInfo *)0x0);
  if (bVar1) {
    return "LED";
  }
  bVar1 = System_String__op_Equality(a,"Jacquard",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(a,"Pixelify",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality(a,"Oxanium",(MethodInfo *)0x0);
      pSVar2 = "Tech";
      if (!bVar1) {
        pSVar2 = a;
      }
      return pSVar2;
    }
    return "8-Bit";
  }
  return "Old Pixel";
}


// PatreonEffects.NameFontCatalog$$Normalize
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Normalize (System_String_o* id, const MethodInfo* method);
// 0x1820cc6b0

System_String_o * PatreonEffects_NameFontCatalog__Normalize(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346980 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"Serif");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Jacquard");
    il2cpp_codegen_initialize_runtime_metadata(&"Oxanium");
    il2cpp_codegen_initialize_runtime_metadata(&"Pixelify");
    il2cpp_codegen_initialize_runtime_metadata(&"Comics");
    il2cpp_codegen_initialize_runtime_metadata(&"EightBit");
    Il2CppMethodInitialized_184346980 = '\x01';
  }
  bVar1 = System_String__op_Equality(id,"Aottg2",(MethodInfo *)0x0);
  if ((((!bVar1) && (bVar1 = System_String__op_Equality(id,"Serif",(MethodInfo *)0x0), !bVar1))
      && (bVar1 = System_String__op_Equality(id,"EightBit",(MethodInfo *)0x0), !bVar1)) &&
     (((bVar1 = System_String__op_Equality(id,"Comics",(MethodInfo *)0x0), !bVar1 &&
       (bVar1 = System_String__op_Equality(id,"Jacquard",(MethodInfo *)0x0), !bVar1)) &&
      ((bVar1 = System_String__op_Equality(id,"Pixelify",(MethodInfo *)0x0), !bVar1 &&
       (bVar1 = System_String__op_Equality(id,"Oxanium",(MethodInfo *)0x0), !bVar1)))))) {
    return "Normal";
  }
  return id;
}


// PatreonEffects.NameFontCatalog$$Load
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_NameFontCatalog__Load (System_String_o* id, const MethodInfo* method);
// 0x1820cc300
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cc56f: jmp 0x1820cc5a5
// asm:   0x1820cc571: mov rcx, qword ptr [rip + 0x1fbc820]  ; "UI/Fonts/PixelifySans-Regular SDF"
// asm:   0x1820cc578: jmp 0x1820cc5a5
// asm:   0x1820cc57a: mov rcx, qword ptr [rip + 0x1fbc657]  ; "UI/Fonts/Jacquard12-Regular SDF"
// asm:   0x1820cc581: jmp 0x1820cc5a5
// asm:   0x1820cc583: mov rcx, qword ptr [rip + 0x1fbc3ae]  ; "UI/Fonts/ComicRelief-Bold SDF"
// asm:   0x1820cc58a: jmp 0x1820cc5a5
// asm:   0x1820cc58c: mov rcx, qword ptr [rip + 0x1fbc2c5]  ; "UI/Fonts/BitcountSingle-Regular SDF"
// asm:   0x1820cc593: jmp 0x1820cc5a5
// asm:   0x1820cc595: mov rcx, qword ptr [rip + 0x1fbc9bc]  ; "UI/Fonts/header SDF"
// asm:   0x1820cc59c: jmp 0x1820cc5a5
// asm:   0x1820cc59e: mov rcx, qword ptr [rip + 0x1fbc473]  ; "UI/Fonts/IBMPlexSerif-SemiBold SDF"

TMPro_TMP_FontAsset_o * PatreonEffects_NameFontCatalog__Load(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *a;
  TMPro_TMP_FontAsset_o *x;
  System_String_o *path;
  TMPro_TMP_FontAsset_o *local_res8;
  
  if (Il2CppMethodInitialized_184346981 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    Il2CppMethodInitialized_184346981 = '\x01';
  }
  local_res8 = (TMPro_TMP_FontAsset_o *)0x0;
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  a = PatreonEffects_NameFontCatalog__Normalize(id,(MethodInfo *)0x0);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Cache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)a,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_TryGetValue);
    if (bVar2) {
      return local_res8;
    }
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    if (Il2CppMethodInitialized_184346986 == '\0') {
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
      il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Vegur-Regular-SDF");
      il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/IBMPlexSerif-SemiBold SDF");
      il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Jacquard12-Regular SDF");
      il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/header SDF");
      Il2CppMethodInitialized_184346986 = '\x01';
    }
    bVar2 = System_String__op_Equality(a,"Serif",(MethodInfo *)0x0);
    path = "UI/Fonts/IBMPlexSerif-SemiBold SDF";
    if (((((!bVar2) &&
          (bVar2 = System_String__op_Equality(a,"Aottg2",(MethodInfo *)0x0),
          path = "UI/Fonts/header SDF", !bVar2)) &&
         (bVar2 = System_String__op_Equality(a,"EightBit",(MethodInfo *)0x0),
         path = "UI/Fonts/BitcountSingle-Regular SDF", !bVar2)) &&
        ((bVar2 = System_String__op_Equality(a,"Comics",(MethodInfo *)0x0),
         path = "UI/Fonts/ComicRelief-Bold SDF", !bVar2 &&
         (bVar2 = System_String__op_Equality(a,"Jacquard",(MethodInfo *)0x0),
         path = "UI/Fonts/Jacquard12-Regular SDF", !bVar2)))) &&
       ((bVar2 = System_String__op_Equality(a,"Pixelify",(MethodInfo *)0x0),
        path = "UI/Fonts/PixelifySans-Regular SDF", !bVar2 &&
        (bVar2 = System_String__op_Equality(a,"Oxanium",(MethodInfo *)0x0),
        path = "UI/Fonts/Oxanium-SemiBold SDF", !bVar2)))) {
      path = "UI/Fonts/Vegur-Regular-SDF";
    }
    x = UnityEngine_Resources__Load_object_
                  (path,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar2) && (bVar2 = System_String__op_Inequality(a,"Normal",(MethodInfo *)0x0), bVar2)) {
      x = UnityEngine_Resources__Load_object_
                    ("UI/Fonts/Vegur-Regular-SDF",
                     (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
      }
      x = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
    }
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Cache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)a,(Il2CppObject *)x,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_set_Item);
      return x;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameFontCatalog$$Apply
// il2cpp: void PatreonEffects_NameFontCatalog__Apply (TMPro_TMP_Text_o* text, System_String_o* id, const MethodInfo* method);
// 0x1820cbdb0

void PatreonEffects_NameFontCatalog__Apply(TMPro_TMP_Text_o *text,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_FontAsset_o *value;
  
  if (Il2CppMethodInitialized_184346982 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346982 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    value = PatreonEffects_NameFontCatalog__Load(id,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (text == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      TMPro_TMP_Text__set_font(text,value,(MethodInfo *)0x0);
    }
  }
  return;
}


// PatreonEffects.NameFontCatalog$$Apply
// il2cpp: void PatreonEffects_NameFontCatalog__Apply (TMPro_TMP_InputField_o* input, System_String_o* id, const MethodInfo* method);
// 0x1820cbe80

void PatreonEffects_NameFontCatalog__Apply_20cbe80
               (TMPro_TMP_InputField_o *input,System_String_o *id,MethodInfo *method)

{
  byte bVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool bVar3;
  TMPro_TMP_Text_o *text;
  
  if (Il2CppMethodInitialized_184346983 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Text);
    Il2CppMethodInitialized_184346983 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if (input == (TMPro_TMP_InputField_o *)0x0) {
      ThrowNullReferenceException();
    }
    pTVar2 = (input->fields).m_TextComponent;
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    PatreonEffects_NameFontCatalog__Apply(pTVar2,id,(MethodInfo *)0x0);
    pTVar2 = (TMPro_TMP_Text_o *)(input->fields).m_Placeholder;
    text = (TMPro_TMP_Text_o *)0x0;
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      bVar1 = (TypeInfo_TMPro_TMP_Text->_2).typeHierarchyDepth;
      if (((pTVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         (bVar3 = true,
         (pTVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_TMPro_TMP_Text)) {
        bVar3 = false;
      }
      if (bVar3) {
        text = pTVar2;
      }
    }
    PatreonEffects_NameFontCatalog__Apply(text,id,(MethodInfo *)0x0);
    TMPro_TMP_InputField__ForceLabelUpdate(input,(MethodInfo *)0x0);
  }
  return;
}


// PatreonEffects.NameFontCatalog$$FontForPlayer
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_NameFontCatalog__FontForPlayer (Photon_Realtime_Player_o* player, bool guild, const MethodInfo* method);
// 0x1820cbfa0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cc112: mov rbx, qword ptr [rip + 0x1fd1b4f]  ; "Normal"

TMPro_TMP_FontAsset_o *
PatreonEffects_NameFontCatalog__FontForPlayer(Photon_Realtime_Player_o *player,bool guild,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  TMPro_TMP_FontAsset_o *pTVar4;
  System_String_o *id;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184346984 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184346984 = '\x01';
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (bVar2 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0), !bVar2)) {
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pTVar4 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
    return pTVar4;
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  if (Il2CppMethodInitialized_184346985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346985 = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if (TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo ==
      (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) {
label_1820cc0cc:
    id = "Normal";
    if ((player->fields).IsLocal == false) goto label_1820cc119;
    pIVar3 = (Il2CppClass *)TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  }
  else {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (__this,(player->fields).actorNumber,&local_res8,
                       (MethodInfo_141F4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    if ((!bVar2) || (local_res8 == (Il2CppObject *)0x0)) goto label_1820cc0cc;
    pIVar3 = local_res8[3].klass;
  }
  id = "Normal";
  if (pIVar3 != (Il2CppClass *)0x0) {
    if (guild) {
      pSVar1 = (pIVar3->_1).properties;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) {
label_1820cc175:
        ThrowNullReferenceException();
      }
      id = (pSVar1->fields)._value;
    }
    else {
      pSVar1 = (pIVar3->_1).events;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_1820cc175;
      id = (pSVar1->fields)._value;
    }
  }
label_1820cc119:
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pTVar4 = PatreonEffects_NameFontCatalog__Load(id,(MethodInfo *)0x0);
  return pTVar4;
}


// PatreonEffects.NameFontCatalog$$Profile
// il2cpp: Settings_ProfileSettings_o* PatreonEffects_NameFontCatalog__Profile (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820cc9c0

Settings_ProfileSettings_o *
PatreonEffects_NameFontCatalog__Profile(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this;
  bool bVar1;
  Il2CppObject *local_res18 [2];
  
  if (Il2CppMethodInitialized_184346985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346985 = '\x01';
  }
  local_res18[0] = (Il2CppObject *)0x0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo !=
        (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      __this = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        (__this,(player->fields).actorNumber,local_res18,
                         (MethodInfo_141F4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
      if ((bVar1) && (local_res18[0] != (Il2CppObject *)0x0)) {
        return (Settings_ProfileSettings_o *)local_res18[0][3].klass;
      }
    }
    if ((player->fields).IsLocal != false) {
      return TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
    }
  }
  return (Settings_ProfileSettings_o *)0x0;
}


// PatreonEffects.NameFontCatalog$$Path
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Path (System_String_o* id, const MethodInfo* method);
// 0x1820cc7e0

System_String_o * PatreonEffects_NameFontCatalog__Path(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346986 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/IBMPlexSerif-SemiBold SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Jacquard12-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/header SDF");
    Il2CppMethodInitialized_184346986 = '\x01';
  }
  bVar1 = System_String__op_Equality(id,"Serif",(MethodInfo *)0x0);
  if (bVar1) {
    return "UI/Fonts/IBMPlexSerif-SemiBold SDF";
  }
  bVar1 = System_String__op_Equality(id,"Aottg2",(MethodInfo *)0x0);
  if (bVar1) {
    return "UI/Fonts/header SDF";
  }
  bVar1 = System_String__op_Equality(id,"EightBit",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(id,"Comics",(MethodInfo *)0x0);
    if (bVar1) {
      return "UI/Fonts/ComicRelief-Bold SDF";
    }
    bVar1 = System_String__op_Equality(id,"Jacquard",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality(id,"Pixelify",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality(id,"Oxanium",(MethodInfo *)0x0);
        pSVar2 = "UI/Fonts/Oxanium-SemiBold SDF";
        if (!bVar1) {
          pSVar2 = "UI/Fonts/Vegur-Regular-SDF";
        }
        return pSVar2;
      }
      return "UI/Fonts/PixelifySans-Regular SDF";
    }
    return "UI/Fonts/Jacquard12-Regular SDF";
  }
  return "UI/Fonts/BitcountSingle-Regular SDF";
}


// PatreonEffects.NameFontCatalog$$.cctor
// il2cpp: void PatreonEffects_NameFontCatalog___cctor (const MethodInfo* method);
// 0x1820ccac0

void PatreonEffects_NameFontCatalog___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_Dictionary_string__TMP_FontAsset__o *__this;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184346987 == '\0') {
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
    Il2CppMethodInitialized_184346987 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_TMP_FontAsset_ctor)
  ;
  TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Cache = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Cache,__this);
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
  pSVar1 = "Normal";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "Normal";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "Aottg2";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "Aottg2";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "Serif";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "Serif";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "EightBit";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "EightBit";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            pSVar1 = "Comics";
            if (4 < (uint)value->max_length) {
              value->m_Items[4] = "Comics";
              Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar1);
              pSVar1 = "Jacquard";
              if (5 < (uint)value->max_length) {
                value->m_Items[5] = "Jacquard";
                Il2CppCodeGenWriteBarrier(value->m_Items + 5,pSVar1);
                pSVar1 = "Pixelify";
                if (6 < (uint)value->max_length) {
                  value->m_Items[6] = "Pixelify";
                  Il2CppCodeGenWriteBarrier(value->m_Items + 6,pSVar1);
                  pSVar1 = "Oxanium";
                  if (7 < (uint)value->max_length) {
                    value->m_Items[7] = "Oxanium";
                    Il2CppCodeGenWriteBarrier(value->m_Items + 7,pSVar1);
                    TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Ids = value;
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_PatreonEffects_NameFontCatalog->static_fields->Ids,value);
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
  ThrowNullReferenceException();
}



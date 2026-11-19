// Type: Gisketch.Aottg2UI.Game.AottgActiveProfile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgActiveProfile.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgActiveProfile$$get_UsesRemote
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgActiveProfile__get_UsesRemote (const MethodInfo* method);
// 0x58d5340

bool Gisketch_Aottg2UI_Game_AottgActiveProfile__get_UsesRemote(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754549c = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    return bVar2;
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$PlayerName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__PlayerName (const MethodInfo* method);
// 0x58d53a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d53c8: jmp 0x58d5465

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__PlayerName(MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_NameSetting_o *pSVar2;
  bool bVar3;
  System_String_o **ppSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_0754549d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Guest");
    Il2CppMethodInitialized_0754549d = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_058d53bd;
label_058d542f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar3) {
label_058d543f:
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar5 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if (!bVar3) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar5 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
        goto label_058d54fd;
      }
    }
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_058d542f;
label_058d53bd:
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar3) goto label_058d543f;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = (pSVar1->fields).Name;
    if (pSVar2 == (Settings_NameSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    ppSVar4 = &(pSVar2->fields)._value;
  }
  pSVar5 = *ppSVar4;
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Profile.Guest",(MethodInfo *)0x0);
    return pSVar5;
  }
label_058d54fd:
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    pSVar5 = MiscExtensions__StripHex(pSVar5,(MethodInfo *)0x0);
    return pSVar5;
  }
  pSVar5 = MiscExtensions__StripHex(pSVar5,(MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$CharacterName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName (const MethodInfo* method);
// 0x58d5530

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName(MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_0754549e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Guest");
    ppSVar4 = &"name";
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    Il2CppMethodInitialized_0754549e = '\x01';
    method = (MethodInfo *)ppSVar4;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_058d56c2:
      ThrowNullReferenceException();
    }
    a = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                  (pSVar2,"name",(pSVar2->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"name",(pSVar2->klass->vtable)._7_get_Item.method);
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058d56c2;
      pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      goto label_058d5653;
    }
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
label_058d5653:
  bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Profile.Guest",(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar3 = MiscExtensions__StripHex(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AccountName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName (const MethodInfo* method);
// 0x58d57b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d57d8: jmp 0x58d585d

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754549f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.LocalProfile");
    Il2CppMethodInitialized_0754549f = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  else {
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar3 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar3 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        pSVar3 = MiscExtensions__StripHex(pSVar3,(MethodInfo *)0x0);
        return pSVar3;
      }
      pSVar3 = MiscExtensions__StripHex(pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Profile.LocalProfile",(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AuthHandle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AuthHandle (const MethodInfo* method);
// 0x58d58d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d58f8: jmp 0x58d597d

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AuthHandle(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075454a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.LocalProfile");
    Il2CppMethodInitialized_075454a0 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  else {
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar3 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar3 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        pSVar3 = MiscExtensions__StripHex(pSVar3,(MethodInfo *)0x0);
        return pSVar3;
      }
      pSVar3 = MiscExtensions__StripHex(pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Profile.LocalProfile",(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey (const MethodInfo* method);
// 0x58d59f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d5a7b: cmp byte ptr [rip + 0x1c6fa68], 0
// asm:   0x58d5a82: je 0x58d5b84

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ProfileSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_075454a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075454a1 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_058d5ae7;
label_058d5a15:
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_058d5a15;
label_058d5ae7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  if (!bVar4) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
    if (pSVar2 != (Settings_ProfileSettings_o *)0x0) {
      pSVar3 = (pSVar2->fields).ProfileIcon;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      return (pSVar3->fields)._value;
    }
    goto label_058d5b28;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075454ea == '\0') goto label_058d5b42;
label_058d5a41:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075454ea != '\0') goto label_058d5a41;
label_058d5b42:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075454ea = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar4 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                     _ProfileAvatarKey_k__BackingField,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_075454ea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_075454ea = '\x01';
      uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileAvatarKey_k__BackingField;
    }
    return *(System_String_o **)
            ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x10);
  }
label_058d5b28:
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey((MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey (const MethodInfo* method);
// 0x58d5bd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d5c5b: cmp byte ptr [rip + 0x1c6f889], 0
// asm:   0x58d5c62: je 0x58d5d64

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ProfileSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_075454a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075454a2 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_058d5cc7;
label_058d5bf5:
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_058d5bf5;
label_058d5cc7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  if (!bVar4) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
    if (pSVar2 != (Settings_ProfileSettings_o *)0x0) {
      pSVar3 = (pSVar2->fields).ProfileBanner;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      return (pSVar3->fields)._value;
    }
    goto label_058d5d08;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075454eb == '\0') goto label_058d5d22;
label_058d5c21:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075454eb != '\0') goto label_058d5c21;
label_058d5d22:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075454eb = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar4 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                     _ProfileBannerKey_k__BackingField,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_075454eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_075454eb = '\x01';
      uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileBannerKey_k__BackingField;
    }
    return *(System_String_o **)
            ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x18);
  }
label_058d5d08:
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey((MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite (const MethodInfo* method);
// 0x58d5db0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey(method);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite (const MethodInfo* method);
// 0x58d5dd0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey(method);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$Bio
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio (const MethodInfo* method);
// 0x58d5df0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ProfileSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  System_String_o **ppSVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_075454a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.NoBio");
    Il2CppMethodInitialized_075454a3 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_058d5e11;
label_058d5e9f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar4) goto label_058d5e20;
label_058d5eb3:
    if (Il2CppMethodInitialized_075454a4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      Il2CppMethodInitialized_075454a4 = '\x01';
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
    if (pSVar2 == (Settings_ProfileSettings_o *)0x0) {
      pSVar6 = (System_String_o *)0x0;
      goto label_058d5f0d;
    }
    pSVar3 = (pSVar2->fields).About;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    ppSVar5 = &(pSVar3->fields)._value;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_058d5e9f;
label_058d5e11:
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (!bVar4) goto label_058d5eb3;
label_058d5e20:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      if (g_data_075454ec != '\0') goto label_058d5e3d;
label_058d5f5c:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      g_data_075454ec = '\x01';
      uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_075454ec == '\0') goto label_058d5f5c;
label_058d5e3d:
      uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ppSVar5 = &TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField
    ;
  }
  pSVar6 = *ppSVar5;
label_058d5f0d:
  bVar4 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
  if (!bVar4) {
    return pSVar6;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Profile.NoBio",(MethodInfo *)0x0);
  return pSVar6;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$LocalBio
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalBio (const MethodInfo* method);
// 0x58d5fa0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalBio(MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_075454a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075454a4 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
    return (System_String_o *)0x0;
  }
  pSVar2 = (pSVar1->fields).About;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$CanImportLocalBio
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgActiveProfile__CanImportLocalBio (const MethodInfo* method);
// 0x58d6000
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d6100: jmp 0x58d6166
// asm:   0x58d611c: jmp 0x58d608b

bool Gisketch_Aottg2UI_Game_AottgActiveProfile__CanImportLocalBio(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ProfileSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_075454a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075454a5 = '\x01';
  }
  if (Il2CppMethodInitialized_075454a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075454a4 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar2 == (Settings_ProfileSettings_o *)0x0) {
    pSVar5 = (System_String_o *)0x0;
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar3 = (pSVar2->fields).About;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_058d61a9;
    pSVar5 = (pSVar3->fields)._value;
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (!bVar4) {
    return false;
  }
  bVar4 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
  if (bVar4) {
    return false;
  }
  if (pSVar5 == (System_String_o *)0x0) goto label_058d61a9;
  pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_075454ec != '\0') goto label_058d60e0;
label_058d612f:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_075454ec = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_058d60ec;
label_058d614e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pSVar6 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField;
  }
  else {
    if (g_data_075454ec == '\0') goto label_058d612f;
label_058d60e0:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_058d614e;
label_058d60ec:
    pSVar6 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField;
  }
  if ((pSVar6 != (System_String_o *)0x0) ||
     (pSVar6 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar6 != (System_String_o *)0x0)) {
    pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
    bVar4 = System_String__Equals_52ffe30(pSVar5,pSVar6,4,(MethodInfo *)0x0);
    return !bVar4;
  }
label_058d61a9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$SocialLinks
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks (const MethodInfo* method);
// 0x58d61b0
// eh: try 0x58d63bf..0x58d6462 -> pad 0x58d6469 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58d6484..0x58d6489 -> pad 0x58d64aa cleanup
// eh: try 0x58d64ad..0x58d64b5 -> pad 0x58d64bd catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d62d4: jmp 0x58d6462
// asm:   0x58d6467: jmp 0x58d646d
// asm:   0x58d6469: jmp 0x58d646d
// asm:   0x58d646b: jmp 0x58d646d
// asm:   0x58d646d: mov r14, rax
// asm:   0x58d6470: cmp edx, 1
// asm:   0x58d6473: jne 0x58d64ad
// asm:   0x58d6475: mov rdi, r14
// asm:   0x58d6478: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58d647d: mov r14, qword ptr [rax]
// asm:   0x58d6480: mov qword ptr [rsp], r14
// asm:   0x58d6484: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d6489: lea rax, [rip + 0x19b9ce8]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x58d6490: mov rsi, qword ptr [rax]
// asm:   0x58d6493: lea rdi, [rsp + 0x10]
// asm:   0x58d6498: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x58d649d: test r14, r14
// asm:   0x58d64a0: je 0x58d643a
// asm:   0x58d64a2: mov rdi, r14
// asm:   0x58d64a5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58d64aa: mov r14, rax
// asm:   0x58d64ad: mov rdi, rsp
// asm:   0x58d64b0: call 0x2fd04a0  ; il2cpp_runtime_helper_02fd04a0()
// asm:   0x58d64b5: mov rdi, r14
// asm:   0x58d64b8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58d64bd: mov rdi, rax
// asm:   0x58d64c0: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array * Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *pSVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_075454a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075454a6 = '\x01';
  }
  local_48.fields._current.fields.key = (Il2CppObject *)0x0;
  local_48.fields._current.fields.value = (Il2CppObject *)0x0;
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._version = 0;
  local_48.fields._index = 0;
  local_48.fields._getEnumeratorRetType = 0;
  local_48.fields._36_4_ = 0;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pMVar6 = (MethodInfo *)0x0;
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  else {
    pMVar6 = (MethodInfo *)0x0;
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  }
  if (!bVar3) {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(pMVar6);
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar5 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)pSVar4,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar5;
    }
    goto label_058d6462;
  }
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_075454ed != '\0') goto label_058d62b0;
label_058d6322:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_075454ed = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_058d62c0;
label_058d6345:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
  }
  else {
    if (g_data_075454ed == '\0') goto label_058d6322;
label_058d62b0:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_058d6345;
label_058d62c0:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              (&local_48,__this,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_48,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
      if (bVar3) {
label_058d645d:
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                &local_48,
                                (MethodInfo_4CE66D0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext
                               ), pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add, bVar3) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar4->fields)._items;
        if (pSVar5 == (System_String_array *)0x0) goto label_058d645d;
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = (System_String_o *)local_48.fields._current.fields.value;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,local_48.fields._current.fields.value
                     ,(MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_48,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar5 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)pSVar4,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar5;
    }
  }
label_058d6462:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$LocalSocialLinks
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks (const MethodInfo* method);
// 0x58d64d0
// eh: try 0x58d65fa..0x58d6a9f -> pad 0x58d6a60 (+21 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x58d6aaa..0x58d6ab4 -> pad 0x58d6b21 catch (...) [compiler noexcept guard]
// eh: try 0x58d6ad6..0x58d6b11 -> pad 0x58d6b11 (+1 call sites) cleanup
// eh: try 0x58d6b14..0x58d6b19 -> pad 0x58d6b21 catch (...) [compiler noexcept guard]
// asm: 81 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d669d: nop dword ptr [rax]
// asm:   0x58d66fb: lea r15, [rip + 0x19a2cf6]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58d6702: xor r13d, r13d
// asm:   0x58d6705: lea rbp, [rip + 0x199a8c4]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x58d670c: lea r14, [rip + 0x19c0245]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x58d6713: jmp 0x58d6747
// asm:   0x58d673a: mov rbx, qword ptr [rsp]
// asm:   0x58d673e: test rbx, rbx
// asm:   0x58d6741: je 0x58d6a22
// asm:   0x58d6936: test r13, r13
// asm:   0x58d6939: jne 0x58d6a4a
// asm:   0x58d693f: test r15d, r15d
// asm:   0x58d6942: je 0x58d694e
// asm:   0x58d6944: cmp r15d, 5
// asm:   0x58d6948: jne 0x58d6a10
// asm:   0x58d6978: jmp 0x58d6a36
// asm:   0x58d6a4a: mov rdi, r13
// asm:   0x58d6a4d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58d6a52: jmp 0x58d6a60
// asm:   0x58d6a54: jmp 0x58d6a60
// asm:   0x58d6a56: jmp 0x58d6a60
// asm:   0x58d6a58: jmp 0x58d6a60
// asm:   0x58d6a5a: jmp 0x58d6a60
// asm:   0x58d6a5c: jmp 0x58d6a60
// asm:   0x58d6a5e: jmp 0x58d6a60
// asm:   0x58d6a60: mov r15, rdx
// asm:   0x58d6a63: mov r14, rax
// asm:   0x58d6a66: jmp 0x58d6ab4
// asm:   0x58d6a68: jmp 0x58d6a78
// asm:   0x58d6a6a: jmp 0x58d6a78
// asm:   0x58d6a6c: jmp 0x58d6a78
// asm:   0x58d6a6e: jmp 0x58d6a78
// asm:   0x58d6a70: jmp 0x58d6a78
// asm:   0x58d6a72: jmp 0x58d6a78
// asm:   0x58d6a74: jmp 0x58d6a78
// asm:   0x58d6a76: jmp 0x58d6a78
// asm:   0x58d6a78: mov r15, rdx
// asm:   0x58d6a7b: mov r14, rax
// asm:   0x58d6a7e: cmp r15d, 1
// asm:   0x58d6a82: jne 0x58d6aaa
// asm:   0x58d6a84: mov rdi, r14
// asm:   0x58d6a87: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58d6a8c: mov rax, qword ptr [rax]
// asm:   0x58d6a8f: mov r13, rax
// asm:   0x58d6a92: mov qword ptr [rsp + 8], rax
// asm:   0x58d6a97: xor r15d, r15d
// asm:   0x58d6a9a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d6a9f: jmp 0x58d68c5
// asm:   0x58d6aa4: mov r15, rdx
// asm:   0x58d6aa7: mov r14, rax
// asm:   0x58d6aaa: lea rdi, [rsp + 8]
// asm:   0x58d6aaf: call 0x2fd04d0  ; il2cpp_runtime_helper_02fd04d0()
// asm:   0x58d6ab4: cmp r15d, 1
// asm:   0x58d6ab8: jne 0x58d6b19
// asm:   0x58d6aba: mov rdi, r14
// asm:   0x58d6abd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58d6ac2: mov rbx, rax
// asm:   0x58d6ac5: lea rax, [rip + 0x1c7fbfc]
// asm:   0x58d6acc: mov rdi, qword ptr [rax + 0x10]
// asm:   0x58d6ad0: mov rax, qword ptr [rbx]
// asm:   0x58d6ad3: mov rsi, qword ptr [rax]
// asm:   0x58d6ad6: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x58d6adb: test al, al
// asm:   0x58d6add: je 0x58d6af0
// asm:   0x58d6adf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d6ae4: lea rbp, [rip + 0x19a6165]  ; TypeInfo_Settings_SettingsManager
// asm:   0x58d6aeb: jmp 0x58d694e
// asm:   0x58d6af0: mov edi, 8
// asm:   0x58d6af5: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x58d6afa: mov rcx, qword ptr [rbx]
// asm:   0x58d6afd: mov qword ptr [rax], rcx
// asm:   0x58d6b00: lea rsi, [rip + 0x15569f9]
// asm:   0x58d6b07: mov rdi, rax
// asm:   0x58d6b0a: xor edx, edx
// asm:   0x58d6b0c: call 0x6e255c0  ; __cxa_throw()
// asm:   0x58d6b11: mov r14, rax
// asm:   0x58d6b14: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d6b19: mov rdi, r14
// asm:   0x58d6b1c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58d6b21: mov rdi, rax
// asm:   0x58d6b24: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_ProfileSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_String_array *pSVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  char cVar10;
  System_Collections_Generic_List_string__o *__this;
  System_String_o **ppSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  SimpleJSONFixed_JSONArray_o *a;
  Il2CppObject *pIVar13;
  VirtualInvokeData *pVVar14;
  System_String_o *pSVar15;
  ulong uVar16;
  long lVar17;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075454a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075454a7 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar3 == (Settings_ProfileSettings_o *)0x0) {
    ppSVar11 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar4 = (pSVar3->fields).SocialLinksJson;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_058d6a36;
    ppSVar11 = &(pSVar4->fields)._value;
  }
  pSVar15 = *ppSVar11;
  bVar9 = System_String__IsNullOrWhiteSpace(pSVar15,(MethodInfo *)0x0);
  if (!bVar9) {
    pSVar12 = SimpleJSONFixed_JSON__Parse(pSVar15,(MethodInfo *)0x0);
    if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = (*(pSVar12->klass->vtable)._45_get_AsArray.methodPtr)
                  (pSVar12,(pSVar12->klass->vtable)._45_get_AsArray.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar9 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      if (a == (SimpleJSONFixed_JSONArray_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar13 = (Il2CppObject *)
                (*(a->klass->vtable)._27_get_Children.methodPtr)(a,(a->klass->vtable)._27_get_Children.method)
      ;
      if (pIVar13 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar5 = pIVar13->klass;
      uVar16 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar6 = (pIVar5->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar6->interfaceType + lVar17)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar14 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar17);
            goto label_058d66d1;
          }
          lVar17 = lVar17 + 0x10;
        } while (uVar16 * 0x10 != lVar17);
      }
      pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar13,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058d66d1:
      local_48 = (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
      local_38 = (undefined1 *)&local_48;
      local_40 = 0;
joined_r0x058d66f5:
      do {
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar5 = local_48->klass;
        uVar16 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar16 != 0) {
          pIVar6 = (pIVar5->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar6->interfaceType + lVar17) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar14 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar17);
              goto label_058d67a3;
            }
            lVar17 = lVar17 + 0x10;
          } while (uVar16 * 0x10 != lVar17);
        }
        pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058d67a3:
        cVar10 = (*pVVar14->methodPtr)();
        pIVar13 = local_48;
        if (cVar10 == '\0') {
          if (local_48 == (Il2CppObject *)0x0) goto label_058d694e;
          pIVar5 = local_48->klass;
          uVar16 = (ulong)(pIVar5->_2).interface_offsets_count;
          if (uVar16 == 0) goto label_058d690f;
          pIVar6 = (pIVar5->_1).interfaceOffsets;
          lVar17 = 0;
          goto label_058d6900;
        }
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar5 = local_48->klass;
        uVar16 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar16 != 0) {
          pIVar6 = (pIVar5->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)
                 ((long)&pIVar6->interfaceType + lVar17) ==
                TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar14 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar17);
              goto label_058d6823;
            }
            lVar17 = lVar17 + 0x10;
          } while (uVar16 * 0x10 != lVar17);
        }
        pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,
                             0);
label_058d6823:
        pIVar13 = (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
        if (pIVar13 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar15 = (System_String_o *)(*pIVar13->klass->vtable[9].methodPtr)(pIVar13);
        bVar9 = System_String__IsNullOrWhiteSpace(pSVar15,(MethodInfo *)0x0);
      } while (bVar9);
      pSVar15 = (System_String_o *)
                (*pIVar13->klass->vtable[9].methodPtr)(pIVar13,pIVar13->klass->vtable[9].method);
      pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this->fields)._items;
        if (pSVar7 != (System_String_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar7->m_Items[(int)uVar2] = pSVar15;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar15,
                       (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          goto joined_r0x058d66f5;
        }
      }
      ThrowNullReferenceException();
    }
  }
  goto label_058d694e;
  while (lVar17 = lVar17 + 0x10, uVar16 * 0x10 != lVar17) {
label_058d6900:
    if (*(System_IDisposable_c **)((long)&pIVar6->interfaceType + lVar17) == TypeInfo_System_IDisposable) {
      pVVar14 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar17);
      goto label_058d692d;
    }
  }
label_058d690f:
  pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058d692d:
  (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
label_058d694e:
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar3 == (Settings_ProfileSettings_o *)0x0) {
    ppSVar11 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar4 = (pSVar3->fields).Social;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_058d6a36;
    ppSVar11 = &(pSVar4->fields)._value;
  }
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
label_058d6a36:
    ThrowNullReferenceException();
  }
  if ((__this->fields)._size == 0) {
    pSVar15 = *ppSVar11;
    bVar9 = System_String__IsNullOrWhiteSpace(pSVar15,(MethodInfo *)0x0);
    pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (!bVar9) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar7 = (__this->fields)._items;
      if (pSVar7 == (System_String_array *)0x0) goto label_058d6a36;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar7->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar7->m_Items[(int)uVar2] = pSVar15;
        Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar15,
                   (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
      }
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$SerializeSocialLinks
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__SerializeSocialLinks (System_Collections_Generic_IEnumerable_string__o* links, const MethodInfo* method);
// 0x58d6b30
// eh: try 0x58d6caf..0x58d6dd3 -> pad 0x58d6de3 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58d6dff..0x58d6e04 -> pad 0x58d6eaf cleanup
// eh: try 0x58d6eb2..0x58d6ebc -> pad 0x58d6ec4 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58d6bec: nop dword ptr [rax]
// asm:   0x58d6c4b: lea r12, [rip + 0x19a27a6]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58d6c52: xor r14d, r14d
// asm:   0x58d6c55: lea r13, [rip + 0x199a434]  ; TypeInfo_System_Collections_Generic_IEnumerator_string
// asm:   0x58d6c5c: lea rbp, [rip + 0x19a341d]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x58d6c63: jmp 0x58d6c7d
// asm:   0x58d6c70: mov rbx, qword ptr [rsp]
// asm:   0x58d6c74: test rbx, rbx
// asm:   0x58d6c77: je 0x58d6dbf
// asm:   0x58d6c9d: nop dword ptr [rax]
// asm:   0x58d6dd3: jmp 0x58d6de3
// asm:   0x58d6dd5: jmp 0x58d6de3
// asm:   0x58d6dd7: jmp 0x58d6de3
// asm:   0x58d6dd9: jmp 0x58d6de3
// asm:   0x58d6ddb: jmp 0x58d6de3
// asm:   0x58d6ddd: jmp 0x58d6de3
// asm:   0x58d6ddf: jmp 0x58d6de3
// asm:   0x58d6de1: jmp 0x58d6de3
// asm:   0x58d6de3: mov r14, rax
// asm:   0x58d6de6: cmp edx, 1
// asm:   0x58d6de9: jne 0x58d6eb2
// asm:   0x58d6def: mov rdi, r14
// asm:   0x58d6df2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58d6df7: mov r14, qword ptr [rax]
// asm:   0x58d6dfa: mov qword ptr [rsp + 8], r14
// asm:   0x58d6dff: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58d6e76: test r14, r14
// asm:   0x58d6e79: jne 0x58d6ea7
// asm:   0x58d6ea7: mov rdi, r14
// asm:   0x58d6eaa: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58d6eaf: mov r14, rax
// asm:   0x58d6eb2: lea rdi, [rsp + 8]
// asm:   0x58d6eb7: call 0x2fd0560  ; il2cpp_runtime_helper_02fd0560()
// asm:   0x58d6ebc: mov rdi, r14
// asm:   0x58d6ebf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58d6ec4: mov rdi, rax
// asm:   0x58d6ec7: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Gisketch_Aottg2UI_Game_AottgActiveProfile__SerializeSocialLinks
          (System_Collections_Generic_IEnumerable_string__o *links,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_string__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppClass *pIVar3;
  char cVar4;
  bool bVar5;
  SimpleJSONFixed_JSONArray_o *__this;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  ulong uVar10;
  long lVar11;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075454a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075454a8 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (links != (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    pSVar1 = links->klass;
    uVar10 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
            TypeInfo_System_Collections_Generic_IEnumerable_string) {
          pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar11);
          goto label_058d6c21;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)links,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_058d6c21:
    pIVar7 = (*pVVar6->methodPtr)((Il2CppObject *)links,pVVar6->method);
    local_38 = (undefined1 *)&local_48;
    local_40 = 0;
    do {
      local_48 = pIVar7;
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIVar7->klass;
      uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pIVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar11) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar11);
            goto label_058d6cd3;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058d6cd3:
      cVar4 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
      pIVar7 = local_48;
      if (cVar4 == '\0') {
        if (local_48 == (Il2CppObject *)0x0) break;
        pIVar3 = local_48->klass;
        uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar10 == 0) goto label_058d6e4f;
        pIVar2 = (pIVar3->_1).interfaceOffsets;
        lVar11 = 0;
        goto label_058d6e40;
      }
      if (local_48 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = local_48->klass;
      uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar2 = (pIVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_string__c **)((long)&pIVar2->interfaceType + lVar11) ==
              TypeInfo_System_Collections_Generic_IEnumerator_string) {
            pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar11);
            goto label_058d6d53;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_058d6d53:
      pSVar8 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
      bVar5 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
      pIVar7 = local_48;
      if (!bVar5) {
        if (pSVar8 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar8 = System_String__Trim(pSVar8,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar9,(__this->klass->vtable)._21_Add.method);
        pIVar7 = local_48;
      }
    } while( true );
  }
  goto label_058d6e7b;
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
label_058d6e40:
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar11);
      goto label_058d6e6d;
    }
  }
label_058d6e4f:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058d6e6d:
  (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
label_058d6e7b:
  if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar8 = (*(__this->klass->vtable)._3_ToString.methodPtr)(__this,(__this->klass->vtable)._3_ToString.method)
  ;
  return pSVar8;
}



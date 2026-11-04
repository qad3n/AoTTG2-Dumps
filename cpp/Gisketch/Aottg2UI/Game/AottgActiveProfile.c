// Type: Gisketch.Aottg2UI.Game.AottgActiveProfile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgActiveProfile.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgActiveProfile$$get_UsesRemote
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgActiveProfile__get_UsesRemote (const MethodInfo* method);
// 0x181dd7d90

bool Gisketch_Aottg2UI_Game_AottgActiveProfile__get_UsesRemote(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344b2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184344b2d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$PlayerName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__PlayerName (const MethodInfo* method);
// 0x181dd76d0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__PlayerName(MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_184344b2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Guest");
    il2cpp_codegen_initialize_runtime_metadata(&"GUEST");
    Il2CppMethodInitialized_184344b2e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar3 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar3 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      goto label_181dd77a6;
    }
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings == (Settings_ProfileSettings_o *)0x0)
  {
    ppSVar4 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).Name;
    if (pSVar1 == (Settings_NameSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    ppSVar4 = &(pSVar1->fields)._value;
  }
  pSVar3 = *ppSVar4;
  bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Profile.Guest","GUEST",(MethodInfo *)0x0);
    return pSVar3;
  }
label_181dd77a6:
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar3 = MiscExtensions__StripHex(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$CharacterName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName (const MethodInfo* method);
// 0x181dd70e0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName(MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344b2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Guest");
    il2cpp_codegen_initialize_runtime_metadata(&"GUEST");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    Il2CppMethodInitialized_184344b2f = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181dd7277:
      ThrowNullReferenceException();
    }
    pSVar3 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"name");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar3 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"name");
      if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181dd7277;
      pSVar1 = pSVar3->klass;
      pSVar4 = (System_String_o *)
               (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar3,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar1);
      goto label_181dd7215;
    }
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
label_181dd7215:
  bVar2 = System_String__IsNullOrWhiteSpace(pSVar4,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Profile.Guest","GUEST",(MethodInfo *)0x0);
    return pSVar4;
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar4 = MiscExtensions__StripHex(pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AccountName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName (const MethodInfo* method);
// 0x181dd6640

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344b30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"Local profile");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.LocalProfile");
    Il2CppMethodInitialized_184344b30 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pSVar2 = MiscExtensions__StripHex(pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("MainMenu.Profile.LocalProfile","Local profile",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AuthHandle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AuthHandle (const MethodInfo* method);
// 0x181dd6760

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AuthHandle(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344b31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"Local profile");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.LocalProfile");
    Il2CppMethodInitialized_184344b31 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pSVar2 = MiscExtensions__StripHex(pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("MainMenu.Profile.LocalProfile","Local profile",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey (const MethodInfo* method);
// 0x181dd6880

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344b32 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_184344b3c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_184344b3c = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar2 = System_String__IsNullOrEmpty
                      (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                       _ProfileAvatarKey_k__BackingField,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_184344b3c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_184344b3c = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileAvatarKey_k__BackingField;
    }
  }
  else if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings !=
           (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).ProfileIcon;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
    ThrowNullReferenceException();
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey((MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey (const MethodInfo* method);
// 0x181dd6b60

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344b33 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_184344b3d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_184344b3d = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar2 = System_String__IsNullOrEmpty
                      (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                       _ProfileBannerKey_k__BackingField,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_184344b3d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_184344b3d = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileBannerKey_k__BackingField;
    }
  }
  else if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings !=
           (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).ProfileBanner;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
    ThrowNullReferenceException();
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey((MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite (const MethodInfo* method);
// 0x181dd69e0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344b32 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_184344b3c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_184344b3c = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar2 = System_String__IsNullOrEmpty
                      (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                       _ProfileAvatarKey_k__BackingField,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_184344b3c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_184344b3c = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite
                         (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                          _ProfileAvatarKey_k__BackingField,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  else if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings !=
           (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).ProfileIcon;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite
                         ((pSVar1->fields)._value,(MethodInfo *)0x0);
      return pSVar3;
    }
    ThrowNullReferenceException();
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey((MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite (const MethodInfo* method);
// 0x181dd6cc0

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344b33 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_184344b3d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_184344b3d = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar2 = System_String__IsNullOrEmpty
                      (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                       _ProfileBannerKey_k__BackingField,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_184344b3d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_184344b3d = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite
                         (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                          _ProfileBannerKey_k__BackingField,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  else if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings !=
           (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).ProfileBanner;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite
                         ((pSVar1->fields)._value,(MethodInfo *)0x0);
      return pSVar3;
    }
    ThrowNullReferenceException();
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey((MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$Bio
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio (const MethodInfo* method);
// 0x181dd6e40

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344b34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.NoBio");
    il2cpp_codegen_initialize_runtime_metadata(&"No bio yet.");
    Il2CppMethodInitialized_184344b34 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_184344b3e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_184344b3e = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField;
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalBio((MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrWhiteSpace(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Profile.NoBio","No bio yet.",(MethodInfo *)0x0);
    return pSVar2;
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$LocalBio
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalBio (const MethodInfo* method);
// 0x181dd7280

System_String_o * Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalBio(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344b35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344b35 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).About;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$CanImportLocalBio
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgActiveProfile__CanImportLocalBio (const MethodInfo* method);
// 0x181dd6f60

bool Gisketch_Aottg2UI_Game_AottgActiveProfile__CanImportLocalBio(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *b;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_184344b36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184344b36 = '\x01';
  }
  if (Il2CppMethodInitialized_184344b35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344b35 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings == (Settings_ProfileSettings_o *)0x0)
  {
    pSVar3 = (System_String_o *)0x0;
  }
  else {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).About;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_181dd70ce;
    pSVar3 = (pSVar1->fields)._value;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        if (Il2CppMethodInitialized_184344b3e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          Il2CppMethodInitialized_184344b3e = '\x01';
        }
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        ppSVar4 = &TypeInfo_ApplicationManagers_AccountManager->static_fields->
                   _ProfileDescription_k__BackingField;
        if (*ppSVar4 == (System_String_o *)0x0) {
          ppSVar4 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
        }
        if (*ppSVar4 != (System_String_o *)0x0) {
          b = System_String__Trim(*ppSVar4,(MethodInfo *)0x0);
          bVar2 = System_String__Equals_196c550(pSVar3,b,4,(MethodInfo *)0x0);
          return !bVar2;
        }
      }
label_181dd70ce:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$SocialLinks
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks (const MethodInfo* method);
// 0x181dd7ad0
// eh: try 0x181dd7ca0..0x181dd7d7c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd7ba8: mov rdx, qword ptr [rip + 0x2305349]  ; MethodInfo_System_Collections_Generic_List_string_ToArray
// asm:   0x181dd7baf: mov rcx, rax
// asm:   0x181dd7d2f: mov rdx, qword ptr [rip + 0x22e656a]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x181dd7d36: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dd7d3b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dd7d40: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dd7d45: test rcx, rcx
// asm:   0x181dd7d48: jne 0x181dd7d7c
// asm:   0x181dd7d4a: mov rdi, qword ptr [rsp + 0xa8]
// asm:   0x181dd7d57: mov rdx, qword ptr [rip + 0x230519a]  ; MethodInfo_System_Collections_Generic_List_string_ToArray
// asm:   0x181dd7d5e: mov rcx, rdi
// asm:   0x181dd7d61: jmp 0x181dd7bb2
// asm:   0x181dd7d7c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_array * Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_184344b37 == '\0') {
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
    Il2CppMethodInitialized_184344b37 = '\x01';
  }
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar5) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_184344b3f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_184344b3f = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
    if (__this == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_181dd7d66;
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_38,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    local_60.fields._dictionary = local_38.fields._dictionary;
    local_60.fields._version = local_38.fields._version;
    local_60.fields._index = local_38.fields._index;
    local_60.fields._current.fields.key = local_38.fields._current.fields.key;
    local_60.fields._current.fields.value = local_38.fields._current.fields.value;
    local_60.fields._getEnumeratorRetType = local_38.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_38.fields._36_4_;
    while (bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             (&local_60,
                              (MethodInfo_1585360 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext
                             ), pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add, bVar5) {
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = (System_String_o *)local_60.fields._current.fields.value;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,local_60.fields._current.fields.value);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   local_60.fields._current.fields.value,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
  }
  else {
    __this_00 = Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks((MethodInfo *)0x0);
  }
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    pUVar6 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_T__o *)__this_00,
                        (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return (System_String_array *)pUVar6;
  }
label_181dd7d66:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$LocalSocialLinks
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks (const MethodInfo* method);
// 0x181dd72f0
// eh: try 0x181dd7412..0x181dd74c0 -> pad 0x1833352b0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181dd74c0..0x181dd75d1 -> pad 0x183324cb0 catch Il2CppExceptionWrapper
// eh: try 0x181dd75d1..0x181dd766a -> pad 0x1833352b0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181dd769e..0x181dd76af -> pad 0x183324cb0 catch Il2CppExceptionWrapper
// eh: try 0x181dd76af..0x181dd76b5 -> pad 0x1833352b0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181dd76b5..0x181dd76bb -> pad 0x183324cb0 catch Il2CppExceptionWrapper
// eh: try 0x181dd76bb..0x181dd76cb -> pad 0x1833352b0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd75e8: nop 
// asm:   0x181dd75e9: jmp 0x181dd7621
// asm:   0x181dd75eb: mov r8, qword ptr [rsp + 0x40]
// asm:   0x181dd75f0: cmp qword ptr [r8], 0
// asm:   0x181dd75f4: je 0x181dd7607
// asm:   0x181dd75f6: xor ecx, ecx
// asm:   0x181dd75f8: mov r8, qword ptr [r8]
// asm:   0x181dd75fb: mov rdx, qword ptr [rip + 0x22c1cfe]  ; TypeInfo_System_IDisposable
// asm:   0x181dd7602: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181dd7607: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181dd760c: test rcx, rcx
// asm:   0x181dd760f: jne 0x181dd76bb
// asm:   0x181dd7615: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x181dd761a: jmp 0x181dd75e9
// asm:   0x181dd761c: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x181dd76bb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324cb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324cb5: push rbp
// asm:   0x183324cb6: sub rsp, 0x20
// asm:   0x183324cba: mov rbp, rdx
// asm:   0x183324cbd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183324cc1: mov rcx, qword ptr [rax]
// asm:   0x183324cc4: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183324cc8: movabs rax, 0
// asm:   0x183324cd2: add rsp, 0x20
// asm:   0x183324cd6: pop rbp
// asm:   0x183324cd7: ret 
// asm:   0x1833352b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833352b5: push rbx
// asm:   0x1833352b6: push rbp
// asm:   0x1833352b7: sub rsp, 0x28
// asm:   0x1833352bb: mov rbp, rdx
// asm:   0x1833352be: mov rbx, qword ptr [rbp + 0x30]
// asm:   0x1833352c2: mov rdx, qword ptr [rbx]
// asm:   0x1833352c5: mov rdx, qword ptr [rdx]
// asm:   0x1833352c8: mov rcx, qword ptr [rip + 0x101fb01]
// asm:   0x1833352cf: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833352d4: test al, al
// asm:   0x1833352d6: je 0x1833352e4
// asm:   0x1833352d8: movabs rax, 0
// asm:   0x1833352e2: jmp 0x1833352fc
// asm:   0x1833352e4: mov rax, qword ptr [rbx]
// asm:   0x1833352e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833352eb: lea rdx, [rip + 0xca6c96]
// asm:   0x1833352f2: lea rcx, [rbp + 0x20]
// asm:   0x1833352f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833352fc: add rsp, 0x28
// asm:   0x183335300: pop rbp
// asm:   0x183335301: pop rbx
// asm:   0x183335302: ret 

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks(MethodInfo *method)

{
  ushort uVar1;
  Settings_StringSetting_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *a;
  Il2CppObject *pIVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  System_String_o *pSVar11;
  undefined8 uVar12;
  System_String_o **ppSVar13;
  ushort uVar14;
  
  if (Il2CppMethodInitialized_184344b38 == '\0') {
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
    Il2CppMethodInitialized_184344b38 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings == (Settings_ProfileSettings_o *)0x0)
  {
    ppSVar13 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).SocialLinksJson;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_181dd7698;
    ppSVar13 = &(pSVar2->fields)._value;
  }
  pSVar11 = *ppSVar13;
  bVar5 = System_String__IsNullOrWhiteSpace(pSVar11,(MethodInfo *)0x0);
  if (!bVar5) {
    pSVar6 = SimpleJSONFixed_JSON__Parse(pSVar11,(MethodInfo *)0x0);
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = (*(pSVar6->klass->vtable)._45_get_AsArray.methodPtr)
                  (pSVar6,(pSVar6->klass->vtable)._45_get_AsArray.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (a == (SimpleJSONFixed_JSONArray_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = (Il2CppObject *)
               (*(a->klass->vtable)._27_get_Children.methodPtr)(a,(a->klass->vtable)._27_get_Children.method);
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar7);
      while( true ) {
        if (pIVar7 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar7);
        if ((char)pvVar8 == '\0') break;
        if (pIVar7 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = pIVar7->klass;
        uVar1 = (pIVar3->_2).interface_offsets_count;
        if (uVar1 != 0) {
          uVar14 = 0;
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          do {
            if (pIVar4[uVar14].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar9 = pIVar3->vtable + pIVar4[uVar14].offset;
              goto label_181dd7546;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar1);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_181dd7546:
        pIVar10 = (*pVVar9->methodPtr)(pIVar7,pVVar9->method);
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = (System_String_o *)(*pIVar10->klass->vtable[9].methodPtr)(pIVar10);
        bVar5 = System_String__IsNullOrWhiteSpace(pSVar11,(MethodInfo *)0x0);
        if (!bVar5) {
          uVar12 = (*pIVar10->klass->vtable[9].methodPtr)(pIVar10,pIVar10->klass->vtable[9].method);
          if (__this == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(__this,uVar12,MethodInfo_System_Collections_Generic_List_string_Add);
        }
      }
      if (pIVar7 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar7);
      }
    }
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings == (Settings_ProfileSettings_o *)0x0)
  {
    ppSVar13 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings->fields).Social;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_181dd7698;
    ppSVar13 = &(pSVar2->fields)._value;
  }
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this->fields)._size == 0) {
      pSVar11 = *ppSVar13;
      bVar5 = System_String__IsNullOrWhiteSpace(pSVar11,(MethodInfo *)0x0);
      if (!bVar5) {
        il2cpp_runtime_helper_180012890(__this,pSVar11,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
    return __this;
  }
label_181dd7698:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgActiveProfile$$SerializeSocialLinks
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgActiveProfile__SerializeSocialLinks (System_Collections_Generic_IEnumerable_string__o* links, const MethodInfo* method);
// 0x181dd7850
// eh: try 0x181dd7920..0x181dd7ac4 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd7a52: jmp 0x181dd7a82
// asm:   0x181dd7a54: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181dd7a59: cmp qword ptr [r8], 0
// asm:   0x181dd7a5d: je 0x181dd7a70
// asm:   0x181dd7a5f: xor ecx, ecx
// asm:   0x181dd7a61: mov r8, qword ptr [r8]
// asm:   0x181dd7a64: mov rdx, qword ptr [rip + 0x22c1895]  ; TypeInfo_System_IDisposable
// asm:   0x181dd7a6b: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181dd7a70: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dd7a75: test rcx, rcx
// asm:   0x181dd7a78: jne 0x181dd7ac4
// asm:   0x181dd7a7a: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x181dd7a7f: mov r14, rsi
// asm:   0x181dd7ac4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_o *
Gisketch_Aottg2UI_Game_AottgActiveProfile__SerializeSocialLinks
          (System_Collections_Generic_IEnumerable_string__o *links,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  Il2CppObject *obj;
  void *pvVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  ushort uVar9;
  
  if (Il2CppMethodInitialized_184344b39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b39 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (links != (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    obj = InterfaceInvoker0_Invoke
                    (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,
                     (Il2CppObject *)links);
    while( true ) {
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,obj);
      if ((char)pvVar5 == '\0') break;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = obj->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        uVar9 = 0;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar9].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string) {
            pVVar6 = pIVar2->vtable + pIVar3[uVar9].offset;
            goto label_181dd79a6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar1);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_181dd79a6:
      pSVar7 = (*pVVar6->methodPtr)(obj,pVVar6->method);
      bVar4 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if (!bVar4) {
        if (pSVar7 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar8,(__this->klass->vtable)._21_Add.method);
      }
    }
    if (obj != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
    }
  }
  if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (*(__this->klass->vtable)._3_ToString.methodPtr)(__this,(__this->klass->vtable)._3_ToString.method)
  ;
  return pSVar7;
}



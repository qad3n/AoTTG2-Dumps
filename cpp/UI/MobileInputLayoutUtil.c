// Type: UI.MobileInputLayoutUtil
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputLayoutUtil.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputLayoutUtil$$ShowButtonIcons
// il2cpp: bool UI_MobileInputLayoutUtil__ShowButtonIcons (const MethodInfo* method);
// 0x5c6d4c0

bool UI_MobileInputLayoutUtil__ShowButtonIcons(MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547958 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547958 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if (pSVar1 == (Settings_GeneralSettings_o *)0x0) {
    return true;
  }
  pSVar2 = (pSVar1->fields).MobileButtonIcons;
  if (pSVar2 == (Settings_BoolSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value != false;
}


// UI.MobileInputLayoutUtil$$GetRoleLabel
// il2cpp: System_String_o* UI_MobileInputLayoutUtil__GetRoleLabel (int32_t role, const MethodInfo* method);
// 0x5c787a0

System_String_o * UI_MobileInputLayoutUtil__GetRoleLabel(int32_t role,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  System_String_o *category;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_07547959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"GeneralButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"ToolsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547959 = '\x01';
  }
  switch(role) {
  case 0:
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    ppSVar2 = &"GeneralButton";
    pSVar1 = "Top";
    category = "SettingsPopup";
    break;
  default:
    local_20.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
    local_20.monitor = (void *)0xffffffffffffffff;
    local_10 = role;
    pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  case 3:
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    ppSVar2 = &"Annie";
    pSVar1 = "Skins.Shifter";
    category = "SettingsPopup";
    break;
  case 4:
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    ppSVar2 = &"Eren";
    pSVar1 = "Skins.Shifter";
    category = "SettingsPopup";
    break;
  case 5:
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    ppSVar2 = &"MapEditorButton";
    pSVar1 = "ToolsPopup";
    category = "MainMenu";
  }
  pSVar1 = UI_UIManager__GetLocale
                     (category,pSVar1,*ppSVar2,"","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileInputLayoutUtil$$GetCharacterLayoutRole
// il2cpp: int32_t UI_MobileInputLayoutUtil__GetCharacterLayoutRole (Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5c65580

int32_t UI_MobileInputLayoutUtil__GetCharacterLayoutRole
                  (Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_c *pCVar3;
  int iVar4;
  
  if (Il2CppMethodInitialized_0754795a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ErenShifter);
    Il2CppMethodInitialized_0754795a = '\x01';
  }
  iVar4 = 1;
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar3 = character->klass;
    bVar1 = (pCVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      return 2;
    }
    bVar2 = (TypeInfo_Characters_ErenShifter->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_ErenShifter)) {
      return 4;
    }
    bVar2 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if (bVar2 <= bVar1) {
      iVar4 = (uint)((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                    (Il2CppClass *)TypeInfo_Characters_BaseShifter) * 2 + 1;
    }
  }
  return iVar4;
}



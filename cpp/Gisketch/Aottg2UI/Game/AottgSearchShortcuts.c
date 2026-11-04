// Type: Gisketch.Aottg2UI.Game.AottgSearchShortcuts
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSearchShortcuts.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$CurrentScreenActionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenActionId (System_String_o* activeScreenId, const MethodInfo* method);
// 0x1823b5cb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenActionId
          (System_String_o *activeScreenId,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347c66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.aottg-settings-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"pause");
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.aottg-pause-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"settings");
    Il2CppMethodInitialized_184347c66 = '\x01';
  }
  bVar1 = System_String__Equals_196c550(activeScreenId,"settings",5,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__Equals_196c550(activeScreenId,"pause",5,(MethodInfo *)0x0);
    pSVar2 = "dialog.aottg-pause-search-palette";
    if (!bVar1) {
      pSVar2 = (System_String_o *)0x0;
    }
    return pSVar2;
  }
  return "dialog.aottg-settings-search-palette";
}


// Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$CurrentScreenTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip (const MethodInfo* method);
// 0x1823b5d60

System_String_o * Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip(MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *arg0;
  Settings_KeybindSetting_o *setting;
  
  if (Il2CppMethodInitialized_184347c67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347c67 = '\x01';
  }
  if ((TypeInfo_Settings_SettingsManager->static_fields->InputSettings == (Settings_InputSettings_o *)0x0) ||
     (pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings,
     (pSVar1->fields).General == (Settings_GeneralInputSettings_o *)0x0)) {
    setting = (Settings_KeybindSetting_o *)0x0;
  }
  else {
    setting = (((pSVar1->fields).General)->fields).OpenCurrentScreenSearch;
  }
  if (Il2CppMethodInitialized_184347c68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Search this screen \xe2\x80\x94 {0}");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.SearchCurrentScreenShortcut");
    Il2CppMethodInitialized_184347c68 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("Common.SearchCurrentScreenShortcut","Search this screen \xe2\x80\x94 {0}",(MethodInfo *)0x0);
  arg0 = Gisketch_Aottg2UI_Game_AottgSearchShortcuts__PrimaryBindingLabel(setting,(MethodInfo *)0x0);
  pSVar2 = System_String__Format(pSVar2,(Il2CppObject *)arg0,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$CurrentScreenTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip (Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x1823b5e40

System_String_o *
Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip_23b5e40
          (Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *arg0;
  
  if (Il2CppMethodInitialized_184347c68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Search this screen \xe2\x80\x94 {0}");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.SearchCurrentScreenShortcut");
    Il2CppMethodInitialized_184347c68 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("Common.SearchCurrentScreenShortcut","Search this screen \xe2\x80\x94 {0}",(MethodInfo *)0x0);
  arg0 = Gisketch_Aottg2UI_Game_AottgSearchShortcuts__PrimaryBindingLabel(setting,(MethodInfo *)0x0);
  pSVar1 = System_String__Format(pSVar1,(Il2CppObject *)arg0,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$PrimaryBindingLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSearchShortcuts__PrimaryBindingLabel (Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x1823b5ee0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSearchShortcuts__PrimaryBindingLabel
          (Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *pSVar1;
  bool bVar2;
  Settings_InputKey_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184347c69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"LeftAlt");
    il2cpp_codegen_initialize_runtime_metadata(&"RightControl");
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"Ctrl");
    il2cpp_codegen_initialize_runtime_metadata(&"RightAlt");
    il2cpp_codegen_initialize_runtime_metadata(&" + ");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Unbound");
    il2cpp_codegen_initialize_runtime_metadata(&"Unbound");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftShift");
    il2cpp_codegen_initialize_runtime_metadata(&"Cmd");
    il2cpp_codegen_initialize_runtime_metadata(&"Alt");
    il2cpp_codegen_initialize_runtime_metadata(&"RightCommand");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftCommand");
    il2cpp_codegen_initialize_runtime_metadata(&"RightShift");
    il2cpp_codegen_initialize_runtime_metadata(&"Shift");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl");
    Il2CppMethodInitialized_184347c69 = '\x01';
  }
  if (((setting != (Settings_KeybindSetting_o *)0x0) &&
      ((setting->fields).InputKeys != (System_Collections_Generic_List_InputKey__o *)0x0)) &&
     (pSVar1 = (setting->fields).InputKeys, (pSVar1->fields)._size != 0)) {
    pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    if (pSVar3 != (Settings_InputKey_o *)0x0) {
      bVar2 = Settings_InputKey__IsNone(pSVar3,(MethodInfo *)0x0);
      if (bVar2) goto label_1823b6196;
      pSVar1 = (setting->fields).InputKeys;
      if (pSVar1 != (System_Collections_Generic_List_InputKey__o *)0x0) {
        pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,0,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item)
        ;
        if (pSVar3 != (Settings_InputKey_o *)0x0) {
          pSVar4 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
          if (pSVar4 != (System_String_o *)0x0) {
            pSVar4 = System_String__Replace_1970e80
                               (pSVar4,"LeftControl","Ctrl",(MethodInfo *)0x0);
            if (pSVar4 != (System_String_o *)0x0) {
              pSVar4 = System_String__Replace_1970e80
                                 (pSVar4,"RightControl","Ctrl",(MethodInfo *)0x0);
              if (pSVar4 != (System_String_o *)0x0) {
                pSVar4 = System_String__Replace_1970e80
                                   (pSVar4,"LeftCommand","Cmd",(MethodInfo *)0x0);
                if (pSVar4 != (System_String_o *)0x0) {
                  pSVar4 = System_String__Replace_1970e80
                                     (pSVar4,"RightCommand","Cmd",(MethodInfo *)0x0);
                  if (pSVar4 != (System_String_o *)0x0) {
                    pSVar4 = System_String__Replace_1970e80
                                       (pSVar4,"LeftShift","Shift",(MethodInfo *)0x0);
                    if (pSVar4 != (System_String_o *)0x0) {
                      pSVar4 = System_String__Replace_1970e80
                                         (pSVar4,"RightShift","Shift",(MethodInfo *)0x0
                                         );
                      if (pSVar4 != (System_String_o *)0x0) {
                        pSVar4 = System_String__Replace_1970e80
                                           (pSVar4,"LeftAlt","Alt",
                                            (MethodInfo *)0x0);
                        if (pSVar4 != (System_String_o *)0x0) {
                          pSVar4 = System_String__Replace_1970e80
                                             (pSVar4,"RightAlt","Alt",
                                              (MethodInfo *)0x0);
                          if (pSVar4 != (System_String_o *)0x0) {
                            pSVar4 = System_String__Replace_1970e80
                                               (pSVar4,"+"," + ",
                                                (MethodInfo *)0x0);
                            return pSVar4;
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
      }
    }
    ThrowNullReferenceException();
  }
label_1823b6196:
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("Common.Unbound","Unbound",(MethodInfo *)0x0);
  return pSVar4;
}



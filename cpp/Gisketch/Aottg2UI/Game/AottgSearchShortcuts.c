// Type: Gisketch.Aottg2UI.Game.AottgSearchShortcuts
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgSearchShortcuts.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$CurrentScreenActionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenActionId (System_String_o* activeScreenId, const MethodInfo* method);
// 0x5e6d150

System_String_o *
Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenActionId
          (System_String_o *activeScreenId,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_07548783 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.aottg-settings-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"pause");
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.aottg-pause-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"settings");
    Il2CppMethodInitialized_07548783 = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30(activeScreenId,"settings",5,(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar2 = &"dialog.aottg-settings-search-palette";
  }
  else {
    bVar1 = System_String__Equals_52ffe30(activeScreenId,"pause",5,(MethodInfo *)0x0);
    if (!bVar1) {
      return (System_String_o *)0x0;
    }
    ppSVar2 = &"dialog.aottg-pause-search-palette";
  }
  return *ppSVar2;
}


// Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$CurrentScreenTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip (const MethodInfo* method);
// 0x5e72e30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e72e83: jmp 0x5e72eb0

System_String_o * Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip(MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *arg0;
  MethodInfo *method_00;
  Settings_KeybindSetting_o *setting;
  
  if (Il2CppMethodInitialized_07548784 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07548784 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if ((pSVar1 == (Settings_InputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_GeneralInputSettings_o *)0x0)) {
    setting = (Settings_KeybindSetting_o *)0x0;
  }
  else {
    setting = (pSVar2->fields).OpenCurrentScreenSearch;
  }
  if (Il2CppMethodInitialized_07548785 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.SearchCurrentScreenShortcut");
    Il2CppMethodInitialized_07548785 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  method_00 = (MethodInfo *)0x0;
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.SearchCurrentScreenShortcut",(MethodInfo *)0x0);
  arg0 = Gisketch_Aottg2UI_Game_AottgSearchShortcuts__PrimaryBindingLabel(setting,method_00);
  pSVar3 = System_String__Format(pSVar3,(Il2CppObject *)arg0,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$CurrentScreenTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip (Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x5e72f00

System_String_o *
Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip_5d72f00
          (Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *arg0;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548785 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.SearchCurrentScreenShortcut");
    Il2CppMethodInitialized_07548785 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  method_00 = (MethodInfo *)0x0;
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.SearchCurrentScreenShortcut",(MethodInfo *)0x0);
  arg0 = Gisketch_Aottg2UI_Game_AottgSearchShortcuts__PrimaryBindingLabel(setting,method_00);
  pSVar1 = System_String__Format(pSVar1,(Il2CppObject *)arg0,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgSearchShortcuts$$PrimaryBindingLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSearchShortcuts__PrimaryBindingLabel (Settings_KeybindSetting_o* setting, const MethodInfo* method);
// 0x5e72f80

System_String_o *
Gisketch_Aottg2UI_Game_AottgSearchShortcuts__PrimaryBindingLabel
          (Settings_KeybindSetting_o *setting,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *pSVar1;
  bool bVar2;
  Settings_InputKey_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548786 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"LeftShift");
    il2cpp_codegen_initialize_runtime_metadata(&"Cmd");
    il2cpp_codegen_initialize_runtime_metadata(&"Alt");
    il2cpp_codegen_initialize_runtime_metadata(&"RightCommand");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftCommand");
    il2cpp_codegen_initialize_runtime_metadata(&"RightShift");
    il2cpp_codegen_initialize_runtime_metadata(&"Shift");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl");
    Il2CppMethodInitialized_07548786 = '\x01';
  }
  if (((setting == (Settings_KeybindSetting_o *)0x0) ||
      (pSVar1 = (setting->fields).InputKeys, pSVar1 == (System_Collections_Generic_List_InputKey__o *)0x0)) ||
     ((pSVar1->fields)._size == 0)) {
label_05e730af:
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("Common.Unbound",(MethodInfo *)0x0);
    return pSVar4;
  }
  pSVar3 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar1,0,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
  if (pSVar3 != (Settings_InputKey_o *)0x0) {
    bVar2 = Settings_InputKey__IsNone(pSVar3,(MethodInfo *)0x0);
    if (bVar2) goto label_05e730af;
    pSVar1 = (setting->fields).InputKeys;
    if (pSVar1 != (System_Collections_Generic_List_InputKey__o *)0x0) {
      pSVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      if (pSVar3 != (Settings_InputKey_o *)0x0) {
        pSVar4 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar4 = System_String__Replace_5304550
                             (pSVar4,"LeftControl","Ctrl",(MethodInfo *)0x0);
          if (pSVar4 != (System_String_o *)0x0) {
            pSVar4 = System_String__Replace_5304550
                               (pSVar4,"RightControl","Ctrl",(MethodInfo *)0x0);
            if (pSVar4 != (System_String_o *)0x0) {
              pSVar4 = System_String__Replace_5304550
                                 (pSVar4,"LeftCommand","Cmd",(MethodInfo *)0x0);
              if (pSVar4 != (System_String_o *)0x0) {
                pSVar4 = System_String__Replace_5304550
                                   (pSVar4,"RightCommand","Cmd",(MethodInfo *)0x0);
                if (pSVar4 != (System_String_o *)0x0) {
                  pSVar4 = System_String__Replace_5304550
                                     (pSVar4,"LeftShift","Shift",(MethodInfo *)0x0);
                  if (pSVar4 != (System_String_o *)0x0) {
                    pSVar4 = System_String__Replace_5304550
                                       (pSVar4,"RightShift","Shift",(MethodInfo *)0x0);
                    if (pSVar4 != (System_String_o *)0x0) {
                      pSVar4 = System_String__Replace_5304550
                                         (pSVar4,"LeftAlt","Alt",(MethodInfo *)0x0
                                         );
                      if (pSVar4 != (System_String_o *)0x0) {
                        pSVar4 = System_String__Replace_5304550
                                           (pSVar4,"RightAlt","Alt",
                                            (MethodInfo *)0x0);
                        if (pSVar4 != (System_String_o *)0x0) {
                          pSVar4 = System_String__Replace_5304550
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



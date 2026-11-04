// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindCaptureDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x182305b20

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  System_String_o *key;
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843476c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"Set Keybind");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.KeybindPopup.Title");
    Il2CppMethodInitialized_1843476c4 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->
                     _label,(MethodInfo *)0x0);
  key = "SettingsPopup.KeybindPopup.Title";
  pSVar2 = "Set Keybind";
  if (bVar1) {
    if (Il2CppMethodInitialized_1843476cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_1843476cd = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_label;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyScrollable(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x182305a20

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_1843476c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_1843476c5 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(420.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyLayout (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x182305930

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_1843476c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_1843476c6 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_KeybindSetting_o* setting, int32_t slot, System_String_o* label, System_String_o* rowId, const MethodInfo* method);
// 0x1823053a0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,Settings_KeybindSetting_o *setting,
               int32_t slot,System_String_o *label,System_String_o *rowId,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  bool bVar1;
  int32_t iVar2;
  Settings_InputKey_o *pSVar3;
  System_String_o *keyStr;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  
  if (Il2CppMethodInitialized_1843476c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-keybind-capture");
    Il2CppMethodInitialized_1843476c7 = '\x01';
  }
  if (setting != (Settings_KeybindSetting_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots(setting,(MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_setting = setting;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_setting
                 ,setting);
      if (slot < 2) {
        if (slot < 0) {
          slot = 0;
        }
      }
      else {
        slot = 1;
      }
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_slot = slot;
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_label = label;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_label,
                 label);
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_rowId = rowId;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_rowId,
                 rowId);
      __this = (setting->fields).InputKeys;
      if ((__this != (System_Collections_Generic_List_InputKey__o *)0x0) &&
         (pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)__this,
                              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->
                              static_fields->_slot,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_InputKey_get_Item),
         pSVar3 != (Settings_InputKey_o *)0x0)) {
        keyStr = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputKey);
        Settings_InputKey___ctor_1f1d700(pSVar3,keyStr,(MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_draft = pSVar3;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_draft
                   ,pSVar3);
        if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
        }
        Gisketch_Aottg2UI_Actions_GisketchInputCapture__ForceEnd((MethodInfo *)0x0);
        iVar2 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__Begin((MethodInfo *)0x0);
        __this_00 = (context->fields).GameObject;
        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken =
             iVar2;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          pGVar4 = UnityEngine_GameObject__GetComponentInParent_object_
                             (__this_00,
                              (MethodInfo_6F53B0 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
          if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            return;
          }
          __this_01 = (pGVar4->fields)._Overlays_k__BackingField;
          if (__this_01 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            return;
          }
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this_01,"setting-keybind-capture",false,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1823047c0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_StaticFields *pGVar1;
  System_Collections_Generic_List_InputKey__o *pSVar2;
  System_String_o *fallback;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_01;
  System_String_o *pSVar3;
  Settings_InputKey_o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_Globalization_CultureInfo_o *provider;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_1843476c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindCaptureRuntime");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-keybind-capture-reader");
    il2cpp_codegen_initialize_runtime_metadata(&"Current: {0}");
    il2cpp_codegen_initialize_runtime_metadata(&"Press a key, mouse button, or scroll wheel.");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.KeybindPopup.CurrentValue");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-keybind-capture-prompt");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.KeybindPopup.Prompt");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-keybind-capture-current");
    Il2CppMethodInitialized_1843476c8 = '\x01';
  }
  if (Il2CppMethodInitialized_1843476d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindCaptureRuntime");
    Il2CppMethodInitialized_1843476d3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_Build,
             (MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) goto label_182304cb8;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this_00,"AottgKeybindCaptureRuntime",__this_01,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_182304cb8;
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"SettingsPopup.KeybindPopup.Prompt","Press a key, mouse button, or scroll wheel.","text","setting-keybind-capture-prompt",
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
            );
  pSVar5 = "SettingsPopup.KeybindPopup.CurrentValue";
  pSVar3 = "Current: {0}";
  if (Il2CppMethodInitialized_1843476cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_1843476cd = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar5,pSVar3,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843476cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_1843476cc = '\x01';
  }
  fallback = "None";
  pSVar5 = "Common.None";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields;
  if ((pGVar1->_setting == (Settings_KeybindSetting_o *)0x0) || (pGVar1->_slot < 0)) {
label_182304a8c:
    if (Il2CppMethodInitialized_1843476cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_1843476cd = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar5,fallback,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (pGVar1->_setting->fields).InputKeys;
    if (pSVar2 == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_182304cb8;
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields;
    if ((pSVar2->fields)._size <= pGVar1->_slot) goto label_182304a8c;
    pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)(pGVar1->_setting->fields).InputKeys,
                        pGVar1->_slot,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    if (pSVar4 == (Settings_InputKey_o *)0x0) goto label_182304cb8;
    pSVar5 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
  }
  pSVar3 = System_String__Format(pSVar3,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (body,pSVar3,"text","setting-keybind-capture-current",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_02->fields).type = "AottgKeybindCaptureRuntime";
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).type,"AottgKeybindCaptureRuntime");
    (__this_02->fields).id = "setting-keybind-capture-reader";
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).id,"setting-keybind-capture-reader");
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar3 = System_Int32__ToString_1b29900
                       (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->
                         _captureToken,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    (__this_02->fields).value = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).value,pSVar3);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(1.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (__this_02->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout,value);
    Gisketch_Aottg2UI_Code_AottgUi__Add(body,__this_02,(MethodInfo *)0x0);
    return;
  }
label_182304cb8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x182304cc0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  DG_Tweening_Core_DOSetter_Color2__o *pDVar1;
  
  if (Il2CppMethodInitialized_1843476c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Cancel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Unbind);
    il2cpp_codegen_initialize_runtime_metadata(&"Unbind");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.KeybindPopup.Unbind");
    Il2CppMethodInitialized_1843476c9 = '\x01';
  }
  pDVar1 = (DG_Tweening_Core_DOSetter_Color2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pDVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Cancel,
             (MethodInfo_1387DC0 *)0x0);
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey_18c37a0
              (footer,"Common.Cancel","Cancel",
               (System_Action_GisketchActionContext__o *)pDVar1,(MethodInfo *)0x0);
    pDVar1 = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pDVar1,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Unbind,
               (MethodInfo_1387DC0 *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_18c3540
              (footer,"SettingsPopup.KeybindPopup.Unbind","Unbind",
               (System_Action_GisketchActionContext__o *)pDVar1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$CaptureNext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CaptureNext (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x182304df0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CaptureNext
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Settings_InputKey_o *pSVar1;
  bool bVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843476ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    Il2CppMethodInitialized_1843476ca = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ShouldIgnorePointerRelease
                    ((MethodInfo *)0x0);
  if ((!bVar2) &&
     (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_draft !=
      (Settings_InputKey_o *)0x0)) {
    bVar2 = Settings_InputKey__ReadNextInput
                      (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->
                       _draft,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_draft;
      if (pSVar1 != (Settings_InputKey_o *)0x0) {
        value = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
        Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit(value,source,(MethodInfo *)0x0);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$EndCapture
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__EndCapture (int32_t token, const MethodInfo* method);
// 0x182305330

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__EndCapture(int32_t token,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843476cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_1843476cb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (token == TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->
               _captureToken) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken = 0;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$CurrentText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CurrentText (const MethodInfo* method);
// 0x182305200

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CurrentText(MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_StaticFields *pGVar1;
  System_Collections_Generic_List_InputKey__o *pSVar2;
  System_String_o *fallback;
  Settings_InputKey_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_1843476cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_1843476cc = '\x01';
  }
  fallback = "None";
  pSVar4 = "Common.None";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields;
  if ((pGVar1->_setting != (Settings_KeybindSetting_o *)0x0) && (-1 < pGVar1->_slot)) {
    pSVar2 = (pGVar1->_setting->fields).InputKeys;
    if (pSVar2 != (System_Collections_Generic_List_InputKey__o *)0x0) {
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields;
      if ((pSVar2->fields)._size <= pGVar1->_slot) goto label_1823052bc;
      pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)(pGVar1->_setting->fields).InputKeys,
                          pGVar1->_slot,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      if (pSVar3 != (Settings_InputKey_o *)0x0) {
        pSVar4 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
        return pSVar4;
      }
    }
    ThrowNullReferenceException();
  }
label_1823052bc:
  if (Il2CppMethodInitialized_1843476cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_1843476cd = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar4,fallback,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x182305890

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843476cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_1843476cd = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Cancel
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Cancel (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182304de0

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Cancel(Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, MethodInfo* method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close_2304f50
            ((context->fields).GameObject,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$ShouldIgnorePointerRelease
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ShouldIgnorePointerRelease (const MethodInfo* method);
// 0x182305610
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823057ae: nop 

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ShouldIgnorePointerRelease
               (MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  UnityEngine_EventSystems_PointerEventData_o *__this;
  UnityEngine_Vector3_o *pUVar4;
  System_Collections_Generic_List_RaycastResult__o *raycastResults;
  UnityEngine_UI_Button_o *x;
  int index;
  UnityEngine_Vector3_o local_88;
  UnityEngine_Object_o *local_78 [14];
  
  if (Il2CppMethodInitialized_1843476ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponentInParent_Button)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RaycastResult_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RaycastResult_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RaycastResult_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RaycastResult);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_PointerEventData);
    Il2CppMethodInitialized_1843476ce = '\x01';
  }
  bVar2 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_PointerEventData);
      UnityEngine_EventSystems_PointerEventData___ctor(__this,pUVar3,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_Input__get_mousePosition(&local_88,(MethodInfo *)0x0);
      if (__this != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        fVar1 = (pUVar4->fields).x;
        (__this->fields)._position_k__BackingField.fields.y = (pUVar4->fields).y;
        (__this->fields)._position_k__BackingField.fields.x = fVar1;
        raycastResults =
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RaycastResult);
        System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)raycastResults,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_RaycastResult_ctor);
        pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__RaycastAll(pUVar3,__this,raycastResults,(MethodInfo *)0x0);
          index = 0;
          if (raycastResults != (System_Collections_Generic_List_RaycastResult__o *)0x0) {
            do {
              if ((raycastResults->fields)._size <= index) {
                return false;
              }
              System_Collections_Generic_List_MapFracture_Triangle___get_Item
                        ((Map_MapFracture_Triangle_o *)local_78,
                         (System_Collections_Generic_List_MapFracture_Triangle__o *)raycastResults,index,
                         (MethodInfo_9721B0 *)
                         MethodInfo_System_Collections_Generic_List_RaycastResult_get_Item);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                (local_78[0],(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar2) {
                System_Collections_Generic_List_MapFracture_Triangle___get_Item
                          ((Map_MapFracture_Triangle_o *)local_78,
                           (System_Collections_Generic_List_MapFracture_Triangle__o *)raycastResults,index,
                           (MethodInfo_9721B0 *)
                           MethodInfo_System_Collections_Generic_List_RaycastResult_get_Item);
                if (local_78[0] == (UnityEngine_Object_o *)0x0) break;
                x = UnityEngine_GameObject__GetComponentInParent_object_
                              ((UnityEngine_GameObject_o *)local_78[0],
                               (MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_Button);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar2 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar2) {
                  return true;
                }
              }
              index = index + 1;
            } while( true );
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Unbind
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Unbind (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823058f0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Unbind
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843476cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_1843476cf = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit
            ("None",(context->fields).GameObject,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Commit
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit (System_String_o* value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x182305140

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit
               (System_String_o *value,UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_StaticFields *pGVar1;
  System_Collections_Generic_List_InputKey__o *pSVar2;
  Settings_InputKey_o *__this;
  
  if (Il2CppMethodInitialized_1843476d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    Il2CppMethodInitialized_1843476d0 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields;
  if ((pGVar1->_setting != (Settings_KeybindSetting_o *)0x0) && (-1 < pGVar1->_slot)) {
    pSVar2 = (pGVar1->_setting->fields).InputKeys;
    if (pSVar2 == (System_Collections_Generic_List_InputKey__o *)0x0) {
label_1823051f9:
      ThrowNullReferenceException();
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields;
    if (pGVar1->_slot < (pSVar2->fields)._size) {
      __this = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)(pGVar1->_setting->fields).InputKeys,
                          pGVar1->_slot,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      if (__this == (Settings_InputKey_o *)0x0) goto label_1823051f9;
      Settings_InputKey__LoadFromString(__this,value,(MethodInfo *)0x0);
    }
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close_2304f50(source,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Close
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182304de0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close_2304f50
            ((context->fields).GameObject,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Close
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close (UnityEngine_GameObject_o* source, bool sync, const MethodInfo* method);
// 0x182304f50

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close_2304f50
               (UnityEngine_GameObject_o *source,bool sync,MethodInfo *method)

{
  int token;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  
  if (Il2CppMethodInitialized_1843476d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476d1 = '\x01';
  }
  token = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken;
  if (Il2CppMethodInitialized_1843476cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_1843476cb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (token == TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->
               _captureToken) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken = 0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_18230513a;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (source,(MethodInfo_6F53B0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (root->fields)._Overlays_k__BackingField,
       __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this,false,(MethodInfo *)0x0);
    }
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if (Il2CppMethodInitialized_1843476d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476d2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
label_18230513a:
      ThrowNullReferenceException();
    }
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
              (pUVar2,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
  }
  if (sync) {
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Sync
              (root,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_rowId
               ,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_setting,
               (MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$ClearSelectedFocus
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ClearSelectedFocus (const MethodInfo* method);
// 0x182304e90

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ClearSelectedFocus(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  
  if (Il2CppMethodInitialized_1843476d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476d2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                (pUVar2,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}



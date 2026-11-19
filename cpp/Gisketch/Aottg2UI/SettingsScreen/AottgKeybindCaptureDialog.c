// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindCaptureDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x5dbe120

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548169 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.KeybindPopup.Title");
    Il2CppMethodInitialized_07548169 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->
                     _label,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("SettingsPopup.KeybindPopup.Title",(MethodInfo *)0x0);
    return pSVar2;
  }
  return TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_label;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x5dbe1b0

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x5dbe1c0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754816a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754816a = '\x01';
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
// 0x5dbe280

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754816b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754816b = '\x01';
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
// 0x5dbe330

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,Settings_KeybindSetting_o *setting,
               int32_t slot,System_String_o *label,System_String_o *rowId,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_StaticFields *pGVar1;
  System_Collections_Generic_List_InputKey__o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  Settings_InputKey_o *pSVar4;
  System_String_o *keyStr;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754816c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-keybind-capture");
    Il2CppMethodInitialized_0754816c = '\x01';
  }
  if (setting != (Settings_KeybindSetting_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots(setting,method_00);
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_setting = setting;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_setting
                );
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields;
      pGVar1->_slot = (uint)(0 < slot);
      pGVar1->_label = label;
      Il2CppCodeGenWriteBarrier(&pGVar1->_label);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields;
      pGVar1->_rowId = rowId;
      Il2CppCodeGenWriteBarrier(&pGVar1->_rowId);
      __this = (setting->fields).InputKeys;
      if ((__this != (System_Collections_Generic_List_InputKey__o *)0x0) &&
         (pSVar4 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this,
                              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->
                              static_fields->_slot,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_InputKey_get_Item),
         pSVar4 != (Settings_InputKey_o *)0x0)) {
        keyStr = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
        pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputKey);
        Settings_InputKey___ctor_5a55c90(pSVar4,keyStr,(MethodInfo *)0x0);
        pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields;
        pGVar1->_draft = pSVar4;
        Il2CppCodeGenWriteBarrier(&pGVar1->_draft);
        if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
        }
        Gisketch_Aottg2UI_Actions_GisketchInputCapture__ForceEnd((MethodInfo *)0x0);
        iVar3 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__Begin((MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken =
             iVar3;
        if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
          pGVar5 = UnityEngine_GameObject__GetComponentInParent_object_
                             (context.fields.GameObject,
                              (MethodInfo_353BB40 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
          if (pGVar5 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            return;
          }
          __this_00 = (pGVar5->fields)._Overlays_k__BackingField;
          if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            return;
          }
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this_00,"setting-keybind-capture",false,(MethodInfo *)0x0);
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
// 0x5dbe6a0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *arg0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_Globalization_CultureInfo_o *provider;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_String_o **ppSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754816d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindCaptureRuntime");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-keybind-capture-reader");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.KeybindPopup.CurrentValue");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-keybind-capture-prompt");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.KeybindPopup.Prompt");
    ppSVar3 = &"setting-keybind-capture-current";
    il2cpp_codegen_initialize_runtime_metadata(&"setting-keybind-capture-current");
    Il2CppMethodInitialized_0754816d = '\x01';
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *)ppSVar3;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__RegisterFactory((MethodInfo *)__this);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (body,"SettingsPopup.KeybindPopup.Prompt","text","setting-keybind-capture-prompt",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    method_00 = (MethodInfo *)"SettingsPopup.KeybindPopup.CurrentValue";
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("SettingsPopup.KeybindPopup.CurrentValue",(MethodInfo *)0x0);
    arg0 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CurrentText(method_00);
    pSVar1 = System_String__Format(pSVar1,(Il2CppObject *)arg0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,pSVar1,"text","setting-keybind-capture-current",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "AottgKeybindCaptureRuntime";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
      (__this_00->fields).id = "setting-keybind-capture-reader";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar1 = System_Int32__ToString_54b7520
                         (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields
                           ->_captureToken,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      (__this_00->fields).value = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(1.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (__this_00->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
      Gisketch_Aottg2UI_Code_AottgUi__Add(body,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5dbeb10

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *pSVar1;
  
  if (Il2CppMethodInitialized_0754816e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Cancel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Unbind);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.KeybindPopup.Unbind");
    Il2CppMethodInitialized_0754816e = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pSVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Cancel,
             (MethodInfo_4A803E0 *)0x0);
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey_5265c30
            (footer,"Common.Cancel",pSVar1,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pSVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_Unbind,
             (MethodInfo_4A803E0 *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_52658f0
            (footer,"SettingsPopup.KeybindPopup.Unbind",pSVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$CaptureNext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CaptureNext (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x5dbebf0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CaptureNext
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Settings_InputKey_o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_c **method_00;
  undefined1 auVar3 [16];
  
  method_00 = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_c **)source;
  if (g_data_0754816f == '\0') {
    method_00 = &TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    g_data_0754816f = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ShouldIgnorePointerRelease
                    ((MethodInfo *)method_00);
  if ((!bVar2) &&
     (pSVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_draft,
     pSVar1 != (Settings_InputKey_o *)0x0)) {
    bVar2 = Settings_InputKey__ReadNextInput(pSVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_draft;
      if (pSVar1 == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      auVar3 = (undefined1  [16])
               (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit(auVar3._0_8_,source,auVar3._8_8_);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$EndCapture
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__EndCapture (int32_t token, const MethodInfo* method);
// 0x5dbefa0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__EndCapture(int32_t token,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07548170 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken ==
      token) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken = 0;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$CurrentText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CurrentText (const MethodInfo* method);
// 0x5dbea30

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CurrentText(MethodInfo *method)

{
  int index;
  Settings_KeybindSetting_o *pSVar1;
  System_Collections_Generic_List_InputKey__o *__this;
  Settings_InputKey_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548171 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_07548171 = '\x01';
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_setting;
  if ((pSVar1 == (Settings_KeybindSetting_o *)0x0) ||
     (index = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_slot,
     index < 0)) {
label_05dbead6:
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("Common.None",(MethodInfo *)0x0);
    return pSVar3;
  }
  __this = (pSVar1->fields).InputKeys;
  if (__this != (System_Collections_Generic_List_InputKey__o *)0x0) {
    if ((__this->fields)._size <= index) goto label_05dbead6;
    pSVar2 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this,index,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    if (pSVar2 != (Settings_InputKey_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Cancel
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Cancel (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dbf010

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Cancel
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close_5cbf070
            (context.fields.GameObject,false,in_RDX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$ShouldIgnorePointerRelease
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ShouldIgnorePointerRelease (const MethodInfo* method);
// 0x5dbec90

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ShouldIgnorePointerRelease
               (MethodInfo *method)

{
  UnityEngine_GameObject_o *x;
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_EventSystems_PointerEventData_o *__this;
  System_Collections_Generic_List_RaycastResult__o *__this_00;
  UnityEngine_UI_Button_o *x_00;
  int index;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_EventSystems_RaycastResult_o local_a0;
  
  if (Il2CppMethodInitialized_07548172 == '\0') {
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
    Il2CppMethodInitialized_07548172 = '\x01';
  }
  index = 0;
  bVar1 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    index = 0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_PointerEventData);
      UnityEngine_EventSystems_PointerEventData___ctor(__this,pUVar2,(MethodInfo *)0x0);
      UVar3 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      if (__this != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        (__this->fields)._position_k__BackingField.fields = UVar3.fields._0_8_;
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RaycastResult);
        System_Collections_Generic_List_RaycastResult____ctor
                  (__this_00,
                   (MethodInfo_3980550 *)MethodInfo_System_Collections_Generic_List_RaycastResult_ctor);
        pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__RaycastAll(pUVar2,__this,__this_00,(MethodInfo *)0x0);
          if (__this_00 != (System_Collections_Generic_List_RaycastResult__o *)0x0) {
            index = 0;
            if (0 < (__this_00->fields)._size) {
              do {
                System_Collections_Generic_List_RaycastResult___get_Item
                          (&local_a0,__this_00,index,
                           (MethodInfo_3980B60 *)
                           MethodInfo_System_Collections_Generic_List_RaycastResult_get_Item);
                x = local_a0.fields.m_GameObject;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar1 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar1) {
                  System_Collections_Generic_List_RaycastResult___get_Item
                            (&local_a0,__this_00,index,
                             (MethodInfo_3980B60 *)
                             MethodInfo_System_Collections_Generic_List_RaycastResult_get_Item);
                  if ((UnityEngine_Object_o *)local_a0.fields.m_GameObject == (UnityEngine_Object_o *)0x0)
                  goto label_05dbeee7;
                  x_00 = UnityEngine_GameObject__GetComponentInParent_object_
                                   (local_a0.fields.m_GameObject,
                                    (MethodInfo_353BB40 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponentInParent_Button);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar1) {
                    index = 1;
                    goto label_05dbeed6;
                  }
                }
                index = index + 1;
              } while (index < (__this_00->fields)._size);
              index = 0;
            }
            goto label_05dbeed6;
          }
        }
      }
label_05dbeee7:
      ThrowNullReferenceException();
    }
  }
label_05dbeed6:
  return SUB41(index,0);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Unbind
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Unbind (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dbf030

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Unbind
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07548173 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07548173 = '\x01';
    in_RDX = extraout_RDX;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit
            ("None",context.fields.GameObject,in_RDX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Commit
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit (System_String_o* value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x5dbeef0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit
               (System_String_o *value,UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int32_t index;
  Settings_KeybindSetting_o *pSVar1;
  System_Collections_Generic_List_InputKey__o *__this;
  Settings_InputKey_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07548174 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    Il2CppMethodInitialized_07548174 = '\x01';
    method = extraout_RDX;
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_setting;
  if ((pSVar1 != (Settings_KeybindSetting_o *)0x0) &&
     (index = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_slot,
     -1 < index)) {
    __this = (pSVar1->fields).InputKeys;
    if (__this == (System_Collections_Generic_List_InputKey__o *)0x0) {
label_05dbef91:
      ThrowNullReferenceException();
    }
    if (index < (__this->fields)._size) {
      __this_00 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      if (__this_00 == (Settings_InputKey_o *)0x0) goto label_05dbef91;
      Settings_InputKey__LoadFromString(__this_00,value,(MethodInfo *)0x0);
      method = extraout_RDX_00;
    }
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close_5cbf070(source,true,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Close
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dbf020

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close_5cbf070
            (context.fields.GameObject,false,in_RDX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Close
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close (UnityEngine_GameObject_o* source, bool sync, const MethodInfo* method);
// 0x5dbf070

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close_5cbf070
               (UnityEngine_GameObject_o *source,bool sync,MethodInfo *method)

{
  int32_t token;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548175 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548175 = '\x01';
  }
  token = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken;
  if (Il2CppMethodInitialized_07548170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07548170 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken ==
      token) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken = 0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  method_00 = (MethodInfo *)source;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (source,(MethodInfo_353BB40 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ClearSelectedFocus((MethodInfo *)source);
      goto joined_r0x05dbf1b9;
    }
    method_00 = (MethodInfo *)(root->fields)._Overlays_k__BackingField;
    if (method_00 != (MethodInfo *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)method_00,false,(MethodInfo *)0x0);
    }
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ClearSelectedFocus(method_00);
joined_r0x05dbf1b9:
  if (sync) {
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__Sync
              (root,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_rowId
               ,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_setting,
               in_RCX);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$ClearSelectedFocus
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ClearSelectedFocus (const MethodInfo* method);
// 0x5dbf1d0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ClearSelectedFocus(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  
  if (Il2CppMethodInitialized_07548176 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548176 = '\x01';
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
      ThrowNullReferenceException();
    }
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
              (pUVar2,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x5dbf660

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}



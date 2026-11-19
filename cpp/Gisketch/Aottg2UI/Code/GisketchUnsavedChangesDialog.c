// Type: Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUnsavedChangesDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_Title (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x537b210

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_Title
          (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542aa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.Title");
    Il2CppMethodInitialized_07542aa7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("SettingsPopup.UnsavedChanges.Title",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_Variant (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x537b270

int32_t Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_Variant
                  (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_RootLayout (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x537b280

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_RootLayout
          (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_fffffffffffffff0;
  
  if (Il2CppMethodInitialized_07542aa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07542aa8 = '\x01';
  }
  if (Il2CppMethodInitialized_07542a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542a23 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).value = 520.0;
  (__this_00->fields).unit = "point";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_00,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,in_stack_fffffffffffffff0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__BuildBody (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x537b3a0

void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__BuildBody
               (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07542aa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.UnsavedChangesMessage");
    Il2CppMethodInitialized_07542aa9 = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__CalloutKey(body,2,"Common.UnsavedChangesMessage",(System_String_o *)0x0,in_R8);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__BuildFooter (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x537b3f0

void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__BuildFooter
               (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *__this_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542aaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_Discard);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.DiscardChanges");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.KeepEditing");
    Il2CppMethodInitialized_07542aaa = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.KeepEditing","overlay.close",in_RCX);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  method_00 = (MethodInfo *)0x0;
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_Discard,
             (MethodInfo_4A803E0 *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey_5265e50
            (footer,"SettingsPopup.UnsavedChanges.DiscardChanges",__this_00,method_00);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$Discard
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__Discard (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x537b4b0

void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__Discard
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_07542aab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_07542aab = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (pGVar1->fields)._Overlays_k__BackingField,
       __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DiscardPendingUnsavedChanges
                (__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog___ctor (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x537b510

void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog___ctor
               (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}



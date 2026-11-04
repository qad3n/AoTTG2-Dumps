// Type: Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUnsavedChangesDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_Title (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x1818f33c0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_Title
          (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342128 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Unsaved Changes");
    Il2CppMethodInitialized_184342128 = '\x01';
  }
  return "Unsaved Changes";
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_Variant (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_Variant(Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, MethodInfo* method)

{
  return 1;
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_RootLayout (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x1818f32c0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__get_RootLayout
          (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342129 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184342129 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__BuildBody (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1818f3140

void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__BuildBody
               (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434212a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"You have unsaved changes. Discard them or keep editing.");
    Il2CppMethodInitialized_18434212a = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Callout
              (body,2,"You have unsaved changes. Discard them or keep editing.",(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__BuildFooter (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x1818f31a0

void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__BuildFooter
               (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  
  if (Il2CppMethodInitialized_18434212b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_Discard);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Discard Changes");
    il2cpp_codegen_initialize_runtime_metadata(&"Keep Editing");
    Il2CppMethodInitialized_18434212b = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              (footer,"Keep Editing","overlay.close",(MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_Discard,
               (MethodInfo_1387DC0 *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger_18c3470
              (footer,"Discard Changes",(System_Action_GisketchActionContext__o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$Discard
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__Discard (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1818f3260

void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog__Discard
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_18434212c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_18434212c = '\x01';
  }
  __this = (context->fields).GameObject;
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this,(MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DiscardPendingUnsavedChanges
                (__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog___ctor (Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog___ctor(Gisketch_Aottg2UI_Code_GisketchUnsavedChangesDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}



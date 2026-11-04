// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsUnsavedChangesDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___cctor (const MethodInfo* method);
// 0x1823a3500

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184347b44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c);
    Il2CppMethodInitialized_184347b44 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields->
              __9,__this);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog.<>c$$<BuildBody>b__9_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___BuildBody_b__9_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* list, const MethodInfo* method);
// 0x1823a1f60
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a2029: movss xmm7, dword ptr [rip + 0xfb6e47]
// asm:   0x1823a2031: xorps xmm6, xmm6
// asm:   0x1823a2034: movss xmm8, dword ptr [rip + 0xfb6bcb]
// asm:   0x1823a203d: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___BuildBody_b__9_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *list,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *text;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184347b45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-unsaved-changes-dirty-");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184347b45 = '\x01';
  }
  local_res20[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyPaths((MethodInfo *)0x0);
  local_res20[0] = 0;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    while( true ) {
      if ((__this_00->fields)._size <= local_res20[0]) {
        return;
      }
      text = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,local_res20[0],
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      pSVar1 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_1969e50("settings-unsaved-changes-dirty-",pSVar1,(MethodInfo *)0x0);
      if (list == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (list,text,"text",pSVar1,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      (pGVar2->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,value);
      local_res20[0] = local_res20[0] + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x18239de40

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  System_String_o *fallback;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Unsaved Changes");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.Title");
    Il2CppMethodInitialized_184347b3d = '\x01';
  }
  fallback = "Unsaved Changes";
  pSVar1 = "SettingsPopup.UnsavedChanges.Title";
  if (Il2CppMethodInitialized_184347b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347b43 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_Variant (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_Variant(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, MethodInfo* method)

{
  return 1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x18239dd40

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347b3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347b3e = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(560.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Open (Gisketch_Aottg2UI_GisketchUIRoot_o* root, int32_t actionKind, const MethodInfo* method);
// 0x18239dc60

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Open
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,int32_t actionKind,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  
  if (Il2CppMethodInitialized_184347b3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-unsaved-changes");
    Il2CppMethodInitialized_184347b3f = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog->static_fields->_actionKind =
       actionKind;
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this = (root->fields)._Overlays_k__BackingField,
     __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
              (__this,"settings-unsaved-changes",true,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x18239d600

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *fallback;
  System_String_o *fallback_00;
  int32_t iVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t *data;
  int32_t local_res10 [2];
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184347b40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c_BuildBody_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-unsaved-changes-dirty-list");
    Il2CppMethodInitialized_184347b40 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  iVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyCount((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"You have {0} unsaved changes. Save before leaving, discard them, or cancel.");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.LoadMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"You have {0} unsaved changes. Loading saved settings will discard them.");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.BackMessage");
    Il2CppMethodInitialized_184347b42 = '\x01';
  }
  fallback_00 = "You have {0} unsaved changes. Save before leaving, discard them, or cancel.";
  fallback = "You have {0} unsaved changes. Loading saved settings will discard them.";
  key = "SettingsPopup.UnsavedChanges.LoadMessage";
  pSVar2 = "SettingsPopup.UnsavedChanges.BackMessage";
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog->static_fields->_actionKind
      == 1) {
    if (Il2CppMethodInitialized_184347b43 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347b43 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
    data = local_res20;
    local_res20[0] = iVar1;
  }
  else {
    if (Il2CppMethodInitialized_184347b43 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347b43 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,fallback_00,(MethodInfo *)0x0);
    data = local_res10;
    local_res10[0] = iVar1;
  }
  pIVar3 = il2cpp_value_box(g_data_184354e08,data);
  pSVar2 = System_String__Format(pSVar2,pIVar3,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Callout(body,2,pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c)
      ;
    }
    pSVar2 = "clear";
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields->
                __9__9_0;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)
                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c);
      }
      pIVar3 = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields->
               __9;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,pIVar3,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c_BuildBody_b__9_0
                 ,(MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields->__9__9_0 =
           (System_Action_AottgUi__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields
                  ->__9__9_0,__this_00);
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,pSVar2,(System_Action_AottgUi__o *)__this_00,"settings-unsaved-changes-dirty-list",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x18239d9c0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347b41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.LoadSaved");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.confirm.saveBack");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.DiscardChanges");
    il2cpp_codegen_initialize_runtime_metadata(&"Discard Changes");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.confirm.load");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.SaveChanges");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.confirm.discardBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save Changes");
    il2cpp_codegen_initialize_runtime_metadata(&"Load Saved");
    Il2CppMethodInitialized_184347b41 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog->static_fields->
        _actionKind != 1) {
      Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
                (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey
                (footer,"SettingsPopup.UnsavedChanges.DiscardChanges","Discard Changes","settings.confirm.discardBack",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
                (footer,"SettingsPopup.UnsavedChanges.SaveChanges","Save Changes","settings.confirm.saveBack",(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
              (footer,"SettingsPopup.UnsavedChanges.LoadSaved","Load Saved","settings.confirm.load",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$Message
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Message (int32_t count, const MethodInfo* method);
// 0x18239db50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239dbd1: mov rbx, qword ptr [rip + 0x1d2ba50]  ; "You have {0} unsaved changes. Loading saved settings will discard them."
// asm:   0x18239dbd8: mov rsi, qword ptr [rip + 0x1cf67e1]  ; "SettingsPopup.UnsavedChanges.LoadMessage"

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Message(int32_t count,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  System_String_o *key;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184347b42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"You have {0} unsaved changes. Save before leaving, discard them, or cancel.");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.LoadMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"You have {0} unsaved changes. Loading saved settings will discard them.");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.BackMessage");
    Il2CppMethodInitialized_184347b42 = '\x01';
  }
  pSVar1 = "You have {0} unsaved changes. Loading saved settings will discard them.";
  key = "SettingsPopup.UnsavedChanges.LoadMessage";
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog->static_fields->_actionKind
      != 1) {
    pSVar1 = "You have {0} unsaved changes. Save before leaving, discard them, or cancel.";
    key = "SettingsPopup.UnsavedChanges.BackMessage";
  }
  if (Il2CppMethodInitialized_184347b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347b43 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar1,(MethodInfo *)0x0);
  local_res18[0] = count;
  arg0 = il2cpp_value_box(g_data_184354e08,local_res18);
  pSVar1 = System_String__Format(pSVar1,arg0,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x18239dce0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347b43 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}



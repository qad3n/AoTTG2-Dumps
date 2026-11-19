// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsUnsavedChangesDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___cctor (const MethodInfo* method);
// 0x5e55520

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548667 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c);
    Il2CppMethodInitialized_07548667 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields->
              __9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o* __this, const MethodInfo* method);
// 0x5e55590

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog.<>c$$<BuildBody>b__9_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___BuildBody_b__9_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* list, const MethodInfo* method);
// 0x5e555a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e555e3: jmp 0x5e557c1
// asm:   0x5e557ac: jmp 0x5e557b2

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c___BuildBody_b__9_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *list,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Il2CppClass *klass;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_07548668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-unsaved-changes-dirty-");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07548668 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry;
  }
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyPaths((MethodInfo *)klass);
  }
  else {
    __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyPaths((MethodInfo *)klass);
  }
  iStack_34 = 0;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
label_05e557c1:
    ThrowNullReferenceException();
  }
  iStack_34 = 0;
  iVar2 = (__this_00->fields)._size;
  if (list == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (0 < iVar2) {
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)__this_00,0,
                 (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      pSVar3 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
      System_String__Concat_52f0320("settings-unsaved-changes-dirty-",pSVar3,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
  }
  else if (0 < iVar2) {
    do {
      pSVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iStack_34,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      pSVar4 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_52f0320("settings-unsaved-changes-dirty-",pSVar4,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (list,pSVar3,"text",pSVar4,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05e557c1;
      (pGVar5->fields).layout = pGVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
      iStack_34 = iStack_34 + 1;
    } while (iStack_34 < (__this_00->fields)._size);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x5e54f00

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548661 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.Title");
    Il2CppMethodInitialized_07548661 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("SettingsPopup.UnsavedChanges.Title",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_Variant (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x5e54f60

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_Variant
                  (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,
                  MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x5e54f70

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548662 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07548662 = '\x01';
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
// 0x5e55030

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Open
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,int32_t actionKind,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  
  if (Il2CppMethodInitialized_07548663 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-unsaved-changes");
    Il2CppMethodInitialized_07548663 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog->static_fields->_actionKind =
       actionKind;
  if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this = (root->fields)._Overlays_k__BackingField,
     __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
            (__this,"settings-unsaved-changes",true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e550b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  int32_t count;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry_c *method_01;
  
  method_00 = (MethodInfo *)body;
  if (Il2CppMethodInitialized_07548664 == '\0') {
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
    Il2CppMethodInitialized_07548664 = '\x01';
  }
  method_01 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  count = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__DirtyCount((MethodInfo *)method_01);
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Message(count,method_00);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Callout(body,2,pSVar1,(System_String_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c);
  }
  pSVar1 = "clear";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields;
  __this_00 = pGVar2->__9__9_0;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c)
      ;
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c_BuildBody_b__9_0
               ,(MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_c->static_fields;
    pGVar2->__9__9_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__9_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,pSVar1,__this_00,"settings-unsaved-changes-dirty-list",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5e553d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_07548665 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.LoadSaved");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.confirm.saveBack");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.DiscardChanges");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.confirm.load");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.SaveChanges");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.confirm.discardBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_07548665 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog->static_fields->_actionKind
      == 1) {
    if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
label_05e554fd:
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","overlay.close",(MethodInfo *)0x0);
    ppSVar1 = &"settings.confirm.load";
    ppSVar2 = &"SettingsPopup.UnsavedChanges.LoadSaved";
  }
  else {
    if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) goto label_05e554fd;
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","overlay.close",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey
              (footer,"SettingsPopup.UnsavedChanges.DiscardChanges","settings.confirm.discardBack",(MethodInfo *)0x0);
    ppSVar1 = &"settings.confirm.saveBack";
    ppSVar2 = &"SettingsPopup.UnsavedChanges.SaveChanges";
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey(footer,*ppSVar2,*ppSVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$Message
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Message (int32_t count, const MethodInfo* method);
// 0x5e552e0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog__Message(int32_t count,MethodInfo *method)

{
  uint32_t uVar1;
  undefined8 in_RAX;
  System_String_o *pSVar2;
  Il2CppObject *arg0;
  undefined8 *data;
  undefined8 local_18;
  
  local_18 = in_RAX;
  if (Il2CppMethodInitialized_07548666 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.LoadMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.UnsavedChanges.BackMessage");
    Il2CppMethodInitialized_07548666 = '\x01';
  }
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog->static_fields->_actionKind
      == 1) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("SettingsPopup.UnsavedChanges.LoadMessage",(MethodInfo *)0x0);
    local_18 = CONCAT44(count,(undefined4)local_18);
    data = (undefined8 *)((long)&local_18 + 4);
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("SettingsPopup.UnsavedChanges.BackMessage",(MethodInfo *)0x0);
    data = &local_18;
    local_18 = CONCAT44(local_18._4_4_,count);
  }
  arg0 = il2cpp_vm_Object_Box(g_data_07556710,data);
  pSVar2 = System_String__Format(pSVar2,arg0,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o* __this, const MethodInfo* method);
// 0x5e55510

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUnsavedChangesDialog_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}



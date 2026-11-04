// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSkinSetNameDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x18239f4a0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239f534: mov rdi, qword ptr [rip + 0x1d590cd]  ; "Rename Skin Set"
// asm:   0x18239f53b: mov rbx, qword ptr [rip + 0x1cf415e]  ; "SettingsPopup.Skins.Common.RenameSkinSet"
// asm:   0x18239f542: jmp 0x18239f567
// asm:   0x18239f559: mov rdi, qword ptr [rip + 0x1cedc20]  ; "Create Skin Set"
// asm:   0x18239f560: mov rbx, qword ptr [rip + 0x1cf3ea9]  ; "SettingsPopup.Skins.Common.CreateSkinSet"

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *fallback;
  
  if (Il2CppMethodInitialized_184347b58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Copy Skin Set");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.CopySkinSet");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.CreateSkinSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename Skin Set");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.RenameSkinSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Create Skin Set");
    Il2CppMethodInitialized_184347b58 = '\x01';
  }
  if (Il2CppMethodInitialized_184347c3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_184347c3b = '\x01';
  }
  iVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_operation;
  pSVar2 = "SettingsPopup.Skins.Common.RenameSkinSet";
  fallback = "Rename Skin Set";
  if ((iVar1 != 1) && (pSVar2 = "SettingsPopup.Skins.Common.CreateSkinSet", fallback = "Create Skin Set", iVar1 == 2)) {
    pSVar2 = "SettingsPopup.Skins.Common.CopySkinSet";
    fallback = "Copy Skin Set";
  }
  if (Il2CppMethodInitialized_184347b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347b59 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,fallback,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyScrollable(Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x18239f3a0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347b54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347b54 = '\x01';
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


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x18239f2b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347b55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347b55 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x18239ebd0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347b56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.SetName");
    il2cpp_codegen_initialize_runtime_metadata(&"Set name");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-skin-set-name-input");
    Il2CppMethodInitialized_184347b56 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__InputFieldKey
                       (body,"setting-skin-set-name-input","Common.SetName","Set name",0,
                        "inputField",layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x28,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184347c3b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions);
      Il2CppMethodInitialized_184347c3b = '\x01';
    }
    if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_operation == 0) {
      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      value = Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName((MethodInfo *)0x0);
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).value = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).value,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x18239edc0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  
  if (Il2CppMethodInitialized_184347b57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_Save);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184347b57 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_Save,
               (MethodInfo_1387DC0 *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_18c3540
              (footer,"Common.Save","Save",
               (System_Action_GisketchActionContext__o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$TitleText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__TitleText (const MethodInfo* method);
// 0x18239f190
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239f228: mov rbx, qword ptr [rip + 0x1d593d9]  ; "Rename Skin Set"
// asm:   0x18239f22f: mov rdi, qword ptr [rip + 0x1cf446a]  ; "SettingsPopup.Skins.Common.RenameSkinSet"
// asm:   0x18239f236: jmp 0x18239f25b
// asm:   0x18239f24d: mov rbx, qword ptr [rip + 0x1cedf2c]  ; "Create Skin Set"
// asm:   0x18239f254: mov rdi, qword ptr [rip + 0x1cf41b5]  ; "SettingsPopup.Skins.Common.CreateSkinSet"

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__TitleText(MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *key;
  
  if (Il2CppMethodInitialized_184347b58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Copy Skin Set");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.CopySkinSet");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.CreateSkinSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename Skin Set");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.RenameSkinSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Create Skin Set");
    Il2CppMethodInitialized_184347b58 = '\x01';
  }
  if (Il2CppMethodInitialized_184347c3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_184347c3b = '\x01';
  }
  iVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_operation;
  pSVar2 = "Rename Skin Set";
  key = "SettingsPopup.Skins.Common.RenameSkinSet";
  if ((iVar1 != 1) && (pSVar2 = "Create Skin Set", key = "SettingsPopup.Skins.Common.CreateSkinSet", iVar1 == 2)) {
    pSVar2 = "Copy Skin Set";
    key = "SettingsPopup.Skins.Common.CopySkinSet";
  }
  if (Il2CppMethodInitialized_184347b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347b59 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x18239f130

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347b59 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x18239f080

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  System_String_o *name;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347b5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b5a = '\x01';
  }
  name = Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText
                   ((context->fields).GameObject,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName(name,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this,(MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar2->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$InputText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x18239eec0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239efae: nop 

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184347b5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-skin-set-name-input");
    Il2CppMethodInitialized_184347b5b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_18239f073;
    pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_18239f073;
    pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar2,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
      if (pSVar3 != (System_Object_array *)0x0) {
        for (uVar5 = 0; (int)uVar5 < (int)pSVar3->max_length; uVar5 = uVar5 + 1) {
          if ((uint)pSVar3->max_length <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          x = (UnityEngine_Object_o *)pSVar3->m_Items[(int)uVar5];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (x == (UnityEngine_Object_o *)0x0) goto label_18239f073;
            __this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (__this == (UnityEngine_Object_o *)0x0) goto label_18239f073;
            pSVar4 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(pSVar4,"setting-skin-set-name-input",(MethodInfo *)0x0);
            if (bVar1) {
              if (x[0x16].klass != (UnityEngine_Object_c *)0x0) {
                pSVar4 = System_String__Trim((System_String_o *)x[0x16].klass,(MethodInfo *)0x0);
                return pSVar4;
              }
              goto label_18239f073;
            }
          }
        }
        goto label_18239f04c;
      }
    }
label_18239f073:
    ThrowNullReferenceException();
  }
label_18239f04c:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}



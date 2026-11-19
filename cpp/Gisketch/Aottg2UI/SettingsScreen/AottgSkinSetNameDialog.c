// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSkinSetNameDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x5e56750

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__TitleText((MethodInfo *)__this);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x5e56850

bool Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x5e56860

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548677 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07548677 = '\x01';
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
// 0x5e56920

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548678 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07548678 = '\x01';
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
// 0x5e569d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions_c **ppGVar3;
  
  if (Il2CppMethodInitialized_07548679 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.SetName");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-skin-set-name-input");
    Il2CppMethodInitialized_07548679 = '\x01';
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
                       (body,"setting-skin-set-name-input","Common.SetName",0,"inputField",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x28,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07548686 == '\0') {
      ppGVar3 = &TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions);
      Il2CppMethodInitialized_07548686 = '\x01';
      body = (Gisketch_Aottg2UI_Code_AottgUi_o *)ppGVar3;
    }
    if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_operation == 0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName((MethodInfo *)body);
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).value = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5e56b70

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_0754867a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_Save);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_0754867a = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Cancel","overlay.close",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_Save,
             (MethodInfo_4A803E0 *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_52658f0
            (footer,"Common.Save",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$TitleText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__TitleText (const MethodInfo* method);
// 0x5e56760
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e567f5: jmp 0x5e56838
// asm:   0x5e56811: jmp 0x5e56838

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__TitleText(MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_0754867b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.CopySkinSet");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.CreateSkinSet");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.RenameSkinSet");
    Il2CppMethodInitialized_0754867b = '\x01';
  }
  if (Il2CppMethodInitialized_07548686 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_07548686 = '\x01';
  }
  iVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_operation;
  if (iVar1 == 2) {
    ppSVar4 = &"SettingsPopup.Skins.Common.CopySkinSet";
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  else if (iVar1 == 1) {
    ppSVar4 = &"SettingsPopup.Skins.Common.RenameSkinSet";
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    ppSVar4 = &"SettingsPopup.Skins.Common.CreateSkinSet";
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(*ppSVar4,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(*ppSVar4,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e56c40

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  System_String_o *name;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_0754867c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754867c = '\x01';
  }
  name = Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText(context.fields.GameObject,in_RSI);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName(name,in_RSI);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (pGVar2->fields)._Overlays_k__BackingField,
       __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this,true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$InputText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x5e56cf0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog__InputText
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar6;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_0754867d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-skin-set-name-input");
    Il2CppMethodInitialized_0754867d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_05e56e9f;
    pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05e56e9f;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_05e56e7d:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)pUVar3,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    if (pSVar4 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar4->max_length) {
        uVar5 = pSVar4->max_length & 0xffffffff;
        uVar7 = 0;
        do {
          if (uVar5 <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar7];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (x == (UnityEngine_Object_o *)0x0) goto label_05e56e9f;
            __this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (__this == (UnityEngine_Object_o *)0x0) goto label_05e56e9f;
            pSVar6 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(pSVar6,"setting-skin-set-name-input",(MethodInfo *)0x0);
            if (bVar2) {
              if (x[0x16].klass != (UnityEngine_Object_c *)0x0) {
                pSVar6 = System_String__Trim((System_String_o *)x[0x16].klass,(MethodInfo *)0x0);
                return pSVar6;
              }
              goto label_05e56e9f;
            }
          }
          uVar7 = uVar7 + 1;
          uVar1 = (uint)pSVar4->max_length;
          uVar5 = (ulong)uVar1;
        } while ((long)uVar7 < (long)(int)uVar1);
      }
      goto label_05e56e7d;
    }
  }
label_05e56e9f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetNameDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o* __this, const MethodInfo* method);
// 0x5e56eb0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetNameDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}



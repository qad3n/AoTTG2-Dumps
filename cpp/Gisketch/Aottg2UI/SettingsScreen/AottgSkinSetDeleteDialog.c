// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSkinSetDeleteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, const MethodInfo* method);
// 0x18239eb60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Delete Skin Set");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.DeleteSkinSet");
    Il2CppMethodInitialized_184347b4f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("SettingsPopup.Skins.Common.DeleteSkinSet","Delete Skin Set",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_BodyScrollable(Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, const MethodInfo* method);
// 0x18239ea60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347b50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347b50 = '\x01';
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


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x18239e730

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *arg0;
  
  if (Il2CppMethodInitialized_184347b51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Delete {0}?");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.DeleteSetConfirm");
    Il2CppMethodInitialized_184347b51 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("SettingsPopup.Skins.Common.DeleteSetConfirm","Delete {0}?",(MethodInfo *)0x0);
  arg0 = Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName((MethodInfo *)0x0);
  pSVar1 = System_String__Format(pSVar1,(Il2CppObject *)arg0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Callout(body,3,pSVar1,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x18239e7f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  
  if (Il2CppMethodInitialized_184347b52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_Delete);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184347b52 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_Delete,
               (MethodInfo_1387DC0 *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_18c3540
              (footer,"Common.Delete","Delete",
               (System_Action_GisketchActionContext__o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$Delete
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__Delete (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x18239e8f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog__Delete
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  void *pvVar3;
  Settings_TypedSetting_int__o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  
  if (Il2CppMethodInitialized_184347b53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b53 = '\x01';
  }
  if (Il2CppMethodInitialized_184347b4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347b4c = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings !=
      (Settings_ISetSettingsContainer_o *)0x0) {
    pvVar3 = InterfaceInvoker0_Invoke
                       (7,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,
                        (Il2CppObject *)
                        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->
                        _settings);
    if ((char)pvVar3 != '\0') {
      pIVar1 = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
      if (pIVar1 == (Il2CppObject *)0x0) goto label_18239ea5a;
      InterfaceInvoker0_Invoke(6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,pIVar1);
      pIVar1 = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
      if (pIVar1 == (Il2CppObject *)0x0) goto label_18239ea5a;
      __this_01 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,pIVar1);
      if (__this_01 == (Settings_TypedSetting_int__o *)0x0) goto label_18239ea5a;
      Settings_TypedSetting_int___set_Value
                (__this_01,0,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__InvokeAfterChange((MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    __this = (context->fields).GameObject;
    if (__this == (UnityEngine_GameObject_o *)0x0) {
label_18239ea5a:
      ThrowNullReferenceException();
    }
    pGVar4 = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this,(MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar4 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar4->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetDeleteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetDeleteDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


